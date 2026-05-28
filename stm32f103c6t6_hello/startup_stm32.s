.syntax unified
.cpu cortex-m3
.thumb

/* 声明向量表所在段 */
.section .isr_vector, "a"
.align 2
.global __isr_vector

__isr_vector:
    .word _estack                 /* 0: 初始栈指针 */
    .word Reset_Handler           /* 1: 复位 */
    .word Default_Handler         /* 2: NMI */
    .word Default_Handler         /* 3: HardFault */
    .word Default_Handler         /* 4: MemManage */
    .word Default_Handler         /* 5: BusFault */
    .word Default_Handler         /* 6: UsageFault */
    .word 0                       /* 7: 保留 */
    .word 0                       /* 8: 保留 */
    .word 0                       /* 9: 保留 */
    .word 0                       /* 10: 保留 */
    .word Default_Handler         /* 11: SVCall */
    .word Default_Handler         /* 12: DebugMonitor */
    .word 0                       /* 13: 保留 */
    .word Default_Handler         /* 14: PendSV */
    .word SysTick_Handler         /* 15: SysTick */
    .rept 92
    .word Default_Handler
    .endr

/* 代码段 */
.section .text
.global Reset_Handler
.global Default_Handler
.global SysTick_Handler
.type Reset_Handler, %function
.type Default_Handler, %function
.type SysTick_Handler, %function

Reset_Handler:
    /* 1. 设置栈指针 */
    ldr sp, =_estack

    /* 2. 搬运 .data 段 (从 FLASH 搬到 RAM) */
    ldr r0, =_sidata
    ldr r1, =_sdata
    ldr r2, =_edata

copy_data_loop:
    cmp r1, r2
    bge end_copy_data
    ldr r3, [r0], #4
    str r3, [r1], #4
    b copy_data_loop
end_copy_data:

    /* 3. 清零 .bss 段 (RAM 清零) */
    ldr r0, =_sbss
    ldr r1, =_ebss
    movs r2, #0

zero_bss_loop:
    cmp r0, r1
    bge end_zero_bss
    str r2, [r0], #4
    b zero_bss_loop
end_zero_bss:

    /* 4. 跳转至 C 语言入口 main */
    bl main

    /* 5. 死循环，防止 main 函数返回 */
    b .

Default_Handler:
    b .

.size Reset_Handler, . - Reset_Handler
.size Default_Handler, . - Default_Handler
