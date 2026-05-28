/*
 * hovercar-gd32 - 串口调试模块头文件
 */

#ifndef __USART_H
#define __USART_H

#include "defines.h"
#include <stdarg.h>

// 调试信息结构
typedef struct {
    uint8_t system_state;
    float battery_voltage;
    float total_current;
    float left_speed;
    uint8_t left_hall_state;
    float right_speed;
    uint8_t right_hall_state;
    int16_t throttle;
    int16_t steering;
} DebugInfo;

// 函数声明
void USART_Init(uint32_t baudrate);
void USART_SendString(const char* str);
void USART_SendData(const uint8_t* data, uint16_t length);
FlagStatus USART_DataAvailable(void);
uint16_t USART_ReadData(uint8_t* buffer, uint16_t max_length);
void USART_Printf(const char* format, ...);
void USART_SendDebugInfo(DebugInfo* info);

#endif /* __USART_H */