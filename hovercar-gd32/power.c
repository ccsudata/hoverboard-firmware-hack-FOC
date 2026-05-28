/*
 * power.c - 电源自锁（Power Latch）实现
 */

#include "power.h"
#include "gd32f10x.h"
#include <stdio.h>

static FlagStatus latched = RESET;

void PowerLatch_Init(void) {
    // 配置为推挽输出，默认为低（不自锁）
    gpio_init(PWR_LATCH_PORT, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, PWR_LATCH_PIN);
    gpio_bit_reset(PWR_LATCH_PORT, PWR_LATCH_PIN);
    latched = RESET;
}

void PowerLatch_Latch(void) {
    gpio_bit_set(PWR_LATCH_PORT, PWR_LATCH_PIN);
    latched = SET;
    printf("PowerLatch: LATCH set (PA11 high)\n");
}

void PowerLatch_Release(void) {
    gpio_bit_reset(PWR_LATCH_PORT, PWR_LATCH_PIN);
    latched = RESET;
    printf("PowerLatch: RELEASE (PA11 low)\n");
}

FlagStatus PowerLatch_IsLatched(void) {
    return latched;
}
