#!/bin/bash
mkdir -p build
CC="arm-none-eabi-gcc"
OBJCOPY="arm-none-eabi-objcopy"

# 编译参数：针对 Cortex-M3，不使用标准库
CFLAGS="-mcpu=cortex-m3 -mthumb -nostartfiles -T stm32f103.ld -Wl,-Map=build/output.map"

echo "Compiling..."
$CC $CFLAGS main.c -o build/main.elf

echo "Generating Hex..."
$OBJCOPY -O ihex build/main.elf build/main.hex

echo "Done! File: build/main.hex"
