#include <stdint.h>

#define RCC_APB2ENR   (*(volatile uint32_t *)0x40021018U)
#define GPIOA_CRL     (*(volatile uint32_t *)0x40010800U)
#define GPIOA_CRH     (*(volatile uint32_t *)0x40010804U)
#define GPIOA_ODR     (*(volatile uint32_t *)0x4001080CU)

#define RCC_APB2ENR_IOPAEN (1U << 2)

static void delay(volatile uint32_t count) {
    while (count--) {
        __asm__ volatile ("nop");
    }
}

void Reset_Handler(void);

__attribute__((section(".isr_vector")))
const void *vector_table[] = {
    (void *)0x20005000,
    Reset_Handler,
};

void Reset_Handler(void) {
    // 使能 GPIOA
    RCC_APB2ENR |= RCC_APB2ENR_IOPAEN;
    
    // PA3 2MHz 推挽输出: CRL[15:12] = 0b0010
    GPIOA_CRL &= ~(0xFU << 12);
    GPIOA_CRL |=  (0x2U << 12);

    // PA4 2MHz 推挽输出: CRH[3:0] = 0b0010
    GPIOA_CRH &= ~(0xFU << 0);
    GPIOA_CRH |=  (0x2U << 0);
    int n=0;
    while (1) {
        GPIOA_ODR ^= (1U << 3);
        GPIOA_ODR ^= (1U << 4);
        delay(100000*n);
        n = (n + 1) ;        
    }
}
