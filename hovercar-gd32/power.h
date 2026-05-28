/*
 * power.h - 电源自锁（Power Latch）模块
 */
#ifndef __POWER_H
#define __POWER_H

#include "defines.h"

void PowerLatch_Init(void);
void PowerLatch_Latch(void);
void PowerLatch_Release(void);
FlagStatus PowerLatch_IsLatched(void);

#endif /* __POWER_H */
