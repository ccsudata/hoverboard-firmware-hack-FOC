#define LED_PIN              GPIO_PIN_2   // PB2 - 状态LED 主板接口附近红灯 已经验证
call (gpio_init(GPIOB, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PIN_2), gpio_bit_reset(GPIOB, GPIO_PIN_2))


#define ENABLE_PIN           GPIO_PIN_13  // PC13 - 使能引脚  没有效果
call (gpio_init(GPIOC, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PIN_13), gpio_bit_set(GPIOC, GPIO_PIN_13))


读取 #define BATTERY_ADC_PIN      GPIO_PIN_2   // PC2 - ADC1_CH12 - 电池电压  # 始终是 1986
call (gpio_init(GPIOC, GPIO_MODE_AIN, GPIO_OSPEED_50MHZ, GPIO_PIN_2))
call adc_software_trigger_enable(ADC1, ADC_REGULAR_CHANNEL)
call (*(unsigned int*)(0x40012400) & (1 << 1)) != 0
print *(unsigned int*)(0x4001244C)


