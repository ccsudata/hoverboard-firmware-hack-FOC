/* 最小寄存器定义 */
#define RCC_APB2ENR  (*(volatile unsigned int*)0x40021018)
#define GPIOC_CRH    (*(volatile unsigned int*)0x40011004)
#define GPIOC_ODR    (*(volatile unsigned int*)0x4001100C)

/* 向量表 (最小化) */
extern unsigned int _stack_ptr;
void Reset_Handler(void);
void Default_Handler(void) { while(1); }

__attribute__((section(".vectors")))
unsigned int *tab[] = {
    (unsigned int *)&_stack_ptr,
    (unsigned int *)Reset_Handler
};

void Reset_Handler(void) {
    // 1. 开启 GPIOC 时钟 (Bit 4)
    RCC_APB2ENR |= (1 << 4);
    
    // 2. 配置 PC13 为推挽输出 (CRH 配置)
    // 0x00300000 对应 CNF=00, MODE=11 (PC13)
    GPIOC_CRH &= ~(0xF << 20);
    GPIOC_CRH |=  (0x3 << 20);
    
    while(1) {
        // 3. 翻转 PC13
        GPIOC_ODR ^= (1 << 13);
        // 简单延时
        for(volatile int i=0; i<500000; i++);
    }
}
