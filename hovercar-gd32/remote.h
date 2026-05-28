/*
 * hovercar-gd32 - 遥控器输入处理头文件
 */

#ifndef __REMOTE_H
#define __REMOTE_H

#include "defines.h"

// 遥控器配置结构
typedef struct {
    uint8_t mode;           // 输入模式
    uint8_t num_channels;   // 通道数量
    int16_t min_value;      // 最小值
    int16_t max_value;      // 最大值
    int16_t center_value;   // 中心值
    int16_t deadband;       // 死区
} RemoteConfig;

// 函数声明
void Remote_Init(uint8_t mode);
void Remote_Update(void);
int16_t Remote_GetChannel(uint8_t channel);
int16_t Remote_GetThrottle(void);
int16_t Remote_GetSteering(void);
FlagStatus Remote_GetEnable(void);
FlagStatus Remote_IsConnected(void);
void Remote_SetConfig(RemoteConfig* config);
RemoteConfig* Remote_GetConfig(void);

#endif /* __REMOTE_H */