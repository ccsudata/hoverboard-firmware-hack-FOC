/* ========================================================================
 * STM32F103C6T6 Bare Metal Example
 * LED Blink + UART Output with SysTick Timer
 * ======================================================================== */

#include <stdio.h>
#include <sys/types.h>

/* ========================================================================
 * Hardware Register Definitions
 * ======================================================================== */

/* RCC (Reset and Clock Control) */
#define RCC_CR       (*(volatile unsigned int*)0x40021000)
#define RCC_CFGR     (*(volatile unsigned int*)0x40021004)
#define RCC_APB2ENR  (*(volatile unsigned int*)0x40021018)

/* FLASH */
#define FLASH_ACR    (*(volatile unsigned int*)0x40022000)

/* GPIO Port A */
#define GPIOA_CRH    (*(volatile unsigned int*)0x40010804)

/* GPIO Port C */
#define GPIOC_CRH    (*(volatile unsigned int*)0x40011004)
#define GPIOC_ODR    (*(volatile unsigned int*)0x4001100C)

/* USART1 (UART1) */
#define UART1_BASE   0x40013800
#define USART_SR     (*(volatile unsigned int*)(UART1_BASE + 0x00))
#define USART_DR     (*(volatile unsigned int*)(UART1_BASE + 0x04))
#define USART_BRR    (*(volatile unsigned int*)(UART1_BASE + 0x08))
#define USART_CR1    (*(volatile unsigned int*)(UART1_BASE + 0x0C))

/* SysTick Timer (ARM Cortex-M3) */
#define SYSTICK_CTRL  (*(volatile unsigned int*)0xE000E010)
#define SYSTICK_LOAD  (*(volatile unsigned int*)0xE000E014)
#define SYSTICK_VAL   (*(volatile unsigned int*)0xE000E018)

/* ========================================================================
 * Global Variables & Forward Declarations
 * ======================================================================== */

static volatile unsigned int systick_ms = 0;  /* Milliseconds since power-on (auto-managed by SysTick) */

void clock_init(void);
void gpio_init(void);
void uart_init(void);
void uart_send_string(const char *str);
void systick_init(void);
void delay_ms(unsigned int ms);

/* ========================================================================
 * MAIN APPLICATION - Easy to modify
 * ======================================================================== */

int main(void) {
    /* Initialize clock tree before using any timing-sensitive peripherals */
    clock_init();

    /* Initialize peripherals */
    gpio_init();
    uart_init();
    systick_init();
    
    /* Send startup message */
    uart_send_string("\r\n=== STM32F103C6T6 Bare Metal ===\r\n");
    uart_send_string("LED Blink with SysTick Timer\r\n\r\n");
    
    unsigned int interval_ms = 100;
    unsigned int last_toggle = 0;
    while(1) {
        /* Increase the blink interval by 100ms after each toggle */
        if(systick_ms - last_toggle >= interval_ms) {
            GPIOC_ODR ^= (1 << 13);  /* Toggle PC13 LED */
            last_toggle = systick_ms;
            interval_ms += 100;
            
            /* Print uptime - systick_ms is milliseconds since power-on */
            char buf[40];
            sprintf(buf, "Uptime: %u ms\r\n", systick_ms);
            uart_send_string(buf);
        }
        
        /* UART Echo - read and echo received characters */
        if(USART_SR & 0x20) {  /* Check RXNE flag */
            char c = USART_DR;
            /* Echo character back */
            while(!(USART_SR & 0x80));  /* Wait for TXE */
            USART_DR = c;
        }
    }
    
    return 0;
}

/* ========================================================================
 * Clock: Internal HSI + PLL configuration
 * ======================================================================== */

void clock_init(void) {
    /* Enable the internal HSI oscillator */
    RCC_CR |= (1U << 0);
    while ((RCC_CR & (1U << 1)) == 0U) {
    }

    /* Set Flash latency before increasing the system clock */
    FLASH_ACR = (FLASH_ACR & ~0x7U) | 0x2U;

    /* Configure PLL: HSI/2 -> x16 = 64MHz, keep SYSCLK on HSI until PLL is ready */
    RCC_CFGR = (RCC_CFGR & ~((0xFU << 18) | (1U << 16)))
             | (0xEU << 18);

    /* Enable PLL */
    RCC_CR |= (1U << 24);
    while ((RCC_CR & (1U << 25)) == 0U) {
    }

    /* Switch SYSCLK to PLL */
    RCC_CFGR = (RCC_CFGR & ~0x3U) | 0x2U;
    while ((RCC_CFGR & (0x3U << 2)) != (0x2U << 2)) {
    }
}

/* ========================================================================
 * SysTick Timer: Initialization & Handler
 * ======================================================================== */

void systick_init(void) {
    /* Configure SysTick for 1ms interrupt at 64MHz
     * Load value = (64MHz / 1000Hz) - 1 = 63999
     */
    SYSTICK_LOAD = 63999;
    SYSTICK_VAL = 0;
    SYSTICK_CTRL = 0x07;  /* Enable SysTick, enable tick interrupt, use processor clock */
}

void delay_ms(unsigned int ms) {
    /* Blocking delay based on systick_ms counter */
    unsigned int start = systick_ms;
    while((systick_ms - start) < ms);
}

/* SysTick exception handler - called every 1ms by hardware */
void SysTick_Handler(void) {
    systick_ms++;
}

/* ========================================================================
 * GPIO: Initialization & Control
 * ======================================================================== */

void gpio_init(void) {
    /* Enable GPIOC clock */
    RCC_APB2ENR |= (1 << 4);
    
    /* Configure PC13 as output (1MHz push-pull)
     * GPIOC_CRH: bits [15:12] control PC13
     * Value 0011 = Mode(01: output 1MHz) + CNF(00: push-pull)
     */
    GPIOC_CRH &= ~(0xF << 20);     /* Clear bits 23:20 */
    GPIOC_CRH |= (0x3 << 20);      /* Set to 0011 */
}

/* ========================================================================
 * UART: Initialization & Functions
 * ======================================================================== */

void uart_init(void) {
    /* Enable clocks: GPIOA (bit 2), USART1 (bit 14) */
    RCC_APB2ENR |= (1 << 2) | (1 << 14);

    /* Explicitly configure PA9 (TX) and PA10 (RX) for USART1 */
    GPIOA_CRH &= ~((0xF << 4) | (0xF << 8));
    GPIOA_CRH |= (0xB << 4) | (0x4 << 8);

    /* USART Configuration */
    USART_BRR = 0x22C;    /* 64MHz / 115200 baud */
    USART_CR1 = 0x200C;   /* TE=1, RE=1, UE=1 */
}

void uart_send_char(char c) {
    while(!(USART_SR & 0x80));  /* Wait for TXE flag */
    USART_DR = c;
}

void uart_send_string(const char *str) {
    while(*str) {
        uart_send_char(*str++);
    }
}

/* ========================================================================
 * Newlib-nano System Call Stubs (Required by libc)
 * ======================================================================== */

void _exit(int status) {
    (void)status;
    while(1);  /* Halt */
}

int _write(int file, char *ptr, int len) {
    (void)file;
    (void)ptr;
    return len;
}

int _close(int file) {
    (void)file;
    return -1;
}

int _fstat(int file, void *st) {
    (void)file;
    (void)st;
    return 0;
}

int _isatty(int file) {
    (void)file;
    return 1;
}

int _lseek(int file, int ptr, int dir) {
    (void)file;
    (void)ptr;
    (void)dir;
    return 0;
}

int _read(int file, char *ptr, int len) {
    (void)file;
    (void)ptr;
    return len;
}

/* Heap management - no dynamic allocation in bare metal */
caddr_t _sbrk(int incr) {
    (void)incr;
    return (caddr_t)-1;  /* Indicate failure */
}