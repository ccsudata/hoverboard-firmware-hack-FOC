#!/usr/bin/env python3
"""
hoverboard_serial.py

Python serial tool for hoverboard-firmware-hack-FOC.

This script implements the firmware's direct UART control protocol:
- Control command frame: 8 bytes
  start=0xABCD, steer=int16, speed=int16, checksum=uint16(start ^ steer ^ speed)
- Special feedback toggle command:
  steer=-32768, speed=0 -> disable periodic feedback
  steer=-32768, speed=1 -> enable periodic feedback
- Feedback frame: 18 bytes
  start=0xABCD, cmd1=int16, cmd2=int16, speedR_meas=int16, speedL_meas=int16,
  batVoltage=int16, boardTemp=int16, cmdLed=uint16, checksum=uint16(...)

The frames are little-endian on the wire, matching the firmware's MCU packet layout.

Usage examples:
  python hoverboard_serial.py --port /dev/ttyUSB0 monitor
  python hoverboard_serial.py --port /dev/ttyUSB0 send --steer 0 --speed 200
  python hoverboard_serial.py --port /dev/ttyUSB0 send --steer 100 --speed -100 --repeat 10 --interval 0.1
"""

import argparse
import struct
import sys
import time

try:
    import serial
except ImportError:  # pragma: no cover
    raise SystemExit("pyserial is required. Install with: pip install pyserial")

START_FRAME = 0xABCD
START_BYTES = struct.pack('<H', START_FRAME)
COMMAND_FRAME_LEN = 8
FEEDBACK_FRAME_LEN = 18
FEEDBACK_TOGGLE_STEER = -32768
FEEDBACK_TOGGLE_DISABLE = 0
FEEDBACK_TOGGLE_ENABLE = 1


def to_u16(value):
    return value & 0xFFFF


def make_command_frame(steer, speed):
    steer_i16 = int(steer) & 0xFFFF
    speed_i16 = int(speed) & 0xFFFF
    checksum = to_u16(START_FRAME ^ steer_i16 ^ speed_i16)
    return struct.pack('<HhhH', START_FRAME, int(steer), int(speed), checksum)


def parse_command_frame(frame):
    if len(frame) != COMMAND_FRAME_LEN:
        return None
    try:
        start, steer, speed, checksum = struct.unpack('<HhhH', frame)
    except struct.error:
        return None
    if start != START_FRAME:
        return None
    expected = to_u16(start ^ steer ^ speed)
    if checksum != expected:
        return None
    return {
        'start': start,
        'steer': steer,
        'speed': speed,
        'checksum': checksum,
        'valid': True,
    }


def parse_feedback_frame(frame):
    if len(frame) != FEEDBACK_FRAME_LEN:
        return None
    try:
        start, cmd1, cmd2, speedR_meas, speedL_meas, batVoltage, boardTemp, cmdLed, checksum = struct.unpack(
            '<HhhhhhhHH', frame)
    except struct.error:
        return None
    if start != START_FRAME:
        return None
    expected = to_u16(start ^ cmd1 ^ cmd2 ^ speedR_meas ^ speedL_meas ^ batVoltage ^ boardTemp ^ cmdLed)
    if checksum != expected:
        return None
    return {
        'start': start,
        'cmd1': cmd1,
        'cmd2': cmd2,
        'speedR_meas': speedR_meas,
        'speedL_meas': speedL_meas,
        'batVoltage': batVoltage,
        'boardTemp': boardTemp,
        'cmdLed': cmdLed,
        'checksum': checksum,
        'valid': True,
    }


def format_bytes(data):
    return ' '.join(f'{b:02X}' for b in data)


def sync_and_parse(buffer):
    frames = []
    while True:
        start_pos = buffer.find(START_BYTES)
        if start_pos == -1:
            if len(buffer) > 1:
                buffer = buffer[-1:]
            break
        if start_pos > 0:
            del buffer[:start_pos]
        if len(buffer) < min(COMMAND_FRAME_LEN, FEEDBACK_FRAME_LEN):
            break
        if len(buffer) >= FEEDBACK_FRAME_LEN:
            candidate = bytes(buffer[:FEEDBACK_FRAME_LEN])
            feedback = parse_feedback_frame(candidate)
            if feedback:
                frames.append(('feedback', feedback, candidate))
                del buffer[:FEEDBACK_FRAME_LEN]
                continue
        if len(buffer) >= COMMAND_FRAME_LEN:
            candidate = bytes(buffer[:COMMAND_FRAME_LEN])
            command = parse_command_frame(candidate)
            if command:
                frames.append(('command', command, candidate))
                del buffer[:COMMAND_FRAME_LEN]
                continue
        del buffer[0]
    return frames, buffer


def open_serial(port, baudrate, timeout=0.1):
    return serial.Serial(
        port,
        baudrate=baudrate,
        bytesize=serial.EIGHTBITS,
        parity=serial.PARITY_NONE,
        stopbits=serial.STOPBITS_ONE,
        timeout=timeout,
    )


def monitor_port(port, baudrate, duration=None):
    ser = open_serial(port, baudrate)
    print(f'Opened {port} @ {baudrate} baud. Waiting for frames...')
    buffer = bytearray()
    start_time = time.time()
    try:
        while True:
            if duration is not None and (time.time() - start_time) >= duration:
                break
            chunk = ser.read(256)
            if chunk:
                buffer.extend(chunk)
                frames, buffer = sync_and_parse(buffer)
                for frame_type, parsed, raw in frames:
                    if frame_type == 'feedback':
                        print('FEEDBACK:', format_bytes(raw))
                        print('  cmd1:', parsed['cmd1'], 'cmd2:', parsed['cmd2'],
                              'speedR:', parsed['speedR_meas'], 'speedL:', parsed['speedL_meas'],
                              'batV:', parsed['batVoltage'], 'temp:', parsed['boardTemp'],
                              'led:', parsed['cmdLed'], 'cs:', f'0x{parsed["checksum"]:04X}')
                    else:
                        print('COMMAND:', format_bytes(raw))
                        print('  steer:', parsed['steer'], 'speed:', parsed['speed'],
                              'cs:', f'0x{parsed["checksum"]:04X}')
            else:
                time.sleep(0.01)
    except KeyboardInterrupt:
        print('\nStopped.')
    finally:
        ser.close()


def send_command(port, baudrate, steer, speed, repeat=1, interval=0.0, wait_feedback=False):
    ser = open_serial(port, baudrate)
    try:
        frame = make_command_frame(steer, speed)
        print('Sending command frame:', format_bytes(frame))
        print('  steer:', steer, 'speed:', speed, 'checksum: 0x%04X' % struct.unpack('<HhhH', frame)[3])
        for i in range(repeat):
            ser.write(frame)
            ser.flush()
            if repeat > 1:
                print(f'  sent {i+1}/{repeat}')
            if wait_feedback:
                time.sleep(interval or 0.05)
                data = ser.read(256)
                if data:
                    buffer = bytearray(data)
                    frames, _ = sync_and_parse(buffer)
                    for frame_type, parsed, raw in frames:
                        print('  received', frame_type, 'frame:', format_bytes(raw))
            if interval and i + 1 < repeat:
                time.sleep(interval)
    finally:
        ser.close()


def main():
    parser = argparse.ArgumentParser(description='Hoverboard firmware serial command + feedback parser')
    parser.add_argument('--port', '-p', required=True, help='Serial port device (e.g. /dev/ttyUSB0)')
    parser.add_argument('--baud', '-b', type=int, default=115200, help='Baud rate (default: 115200)')
    subparsers = parser.add_subparsers(dest='action', required=True)

    parser_monitor = subparsers.add_parser('monitor', help='Monitor and parse incoming feedback frames')
    parser_monitor.add_argument('--duration', '-d', type=float, default=None, help='Seconds to monitor before exit')

    parser_send = subparsers.add_parser('send', help='Send a steer/speed command')
    parser_send.add_argument('--steer', type=int, required=True, help='Steering command as signed int16')
    parser_send.add_argument('--speed', type=int, required=True, help='Speed command as signed int16')
    parser_send.add_argument('--repeat', '-r', type=int, default=1, help='Repeat count')
    parser_send.add_argument('--interval', '-i', type=float, default=0.0, help='Interval between repeated sends in seconds')
    parser_send.add_argument('--wait-feedback', action='store_true', help='Read feedback after sending each command')

    parser_feedback_off = subparsers.add_parser('feedback-off', help='Disable periodic feedback frame transmission')
    parser_feedback_off.add_argument('--repeat', '-r', type=int, default=1, help='Repeat count')
    parser_feedback_off.add_argument('--interval', '-i', type=float, default=0.0, help='Interval between repeated sends in seconds')

    parser_feedback_on = subparsers.add_parser('feedback-on', help='Enable periodic feedback frame transmission')
    parser_feedback_on.add_argument('--repeat', '-r', type=int, default=1, help='Repeat count')
    parser_feedback_on.add_argument('--interval', '-i', type=float, default=0.0, help='Interval between repeated sends in seconds')

    args = parser.parse_args()

    if args.action == 'monitor':
        monitor_port(args.port, args.baud, duration=args.duration)
    elif args.action == 'send':
        send_command(args.port, args.baud, args.steer, args.speed, repeat=args.repeat,
                     interval=args.interval, wait_feedback=args.wait_feedback)
    elif args.action == 'feedback-off':
        send_command(args.port, args.baud, FEEDBACK_TOGGLE_STEER, FEEDBACK_TOGGLE_DISABLE,
                     repeat=args.repeat, interval=args.interval)
    elif args.action == 'feedback-on':
        send_command(args.port, args.baud, FEEDBACK_TOGGLE_STEER, FEEDBACK_TOGGLE_ENABLE,
                     repeat=args.repeat, interval=args.interval)
    else:
        parser.print_help()
        sys.exit(1)


if __name__ == '__main__':
    main()
