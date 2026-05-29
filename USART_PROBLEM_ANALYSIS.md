# USART 输入无效问题分析

## 问题现象
- ✅ **输出正常** - 使用轮询方式（等待 TBE 标志）能正常发送
- ❌ **输入无效** - 接收不到数据，即使数据确实到达了

## 根本原因（3 个关键错误）

### 1️⃣ **地址配置错误 - 配置的是 USART3 而不是 USART2**

**USART_Init() 使用硬编码寄存器地址：**
```c
// 设置 CR1 = 0x4000480C (这是 USART3 的地址！)
*(volatile uint32_t*)0x4000480C = 0x200C;
```

**实际地址映射：**
| USART | CR1 地址 | APB1 时钟 |
|-------|---------|---------|
| USART2 | 0x40004408 | RCU_USART2 |
| **USART3** | **0x4000480C** | **RCU_USART3** |

**But defines.h 定义：**
```c
#define DEBUG_USART          USART2
#define DEBUG_USART_CLK      RCU_USART2
#define DEBUG_USART_IRQn     USART2_IRQn
```

👉 **矛盾**：定义用 USART2，初始化实际配置 USART3！

---

### 2️⃣ **缺少接收中断使能位**

**当前设置（错误）：**
```c
*(volatile uint32_t*)0x4000480C = 0x200C;
```

**CR1 位字段分析：**
```
Bit 13: UE   (UART Enable)       = 0x2000 ✅ 设置了
Bit 5:  RXNEIE (RX Not Empty IE)  = 0x0020 ❌ 未设置！
Bit 3:  TE   (Transmit Enable)    = 0x0008 ✅ 设置了
Bit 2:  RE   (Receive Enable)     = 0x0004 ✅ 设置了

当前值: 0x200C = 1001 1100 -> 未启用接收中断
应该值: 0x202C = 1010 1100 -> 启用接收中断
```

**问题**：即使 RE(接收使能) 已设置，但没有 RXNEIE，硬件无法触发中断通知 CPU 有数据到达！

---

### 3️⃣ **缺少 NVIC 中断配置**

**USART_Init() 中完全没有调用：**
```c
nvic_irq_enable(DEBUG_USART_IRQn);  // 未调用！
```

**或寄存器层面的：**
```c
NVIC->ISER[USART2_IRQn / 32] |= (1 << (USART2_IRQn % 32));
```

**没有 NVIC 配置，即使 UART 产生中断信号，CPU 也会忽略它！**

---

## 为什么输出正常（轮询方式）

```c
void USART_SendString(const char* str) {
    for (uint32_t i = 0; i < len; i++) {
        usart_data_transmit(DEBUG_USART, (uint8_t)str[i]);
        while (usart_flag_get(DEBUG_USART, USART_FLAG_TBE) == RESET);  // 轮询等待
    }
}
```

✅ 不依赖中断，直接轮询 TBE(发送缓冲空) 标志，所以能工作

---

## 为什么 GDB 脚本能工作

```bash
# GDB 脚本直接轮询读取 USART3 的 DR 寄存器
while read line; do
    data=$(gdb -batch -ex "target remote :3333" -ex "mon reg 0x4000483C" 2>/dev/null)
done
```

✅ 不使用中断系统，直接轮询数据寄存器，完全绕过了中断配置问题

---

## 修复方案

### 方案 A：使用 defines.h 的库函数（推荐）

```c
void USART_Init(uint32_t baudrate) {
    // 1. 使能时钟
    rcu_periph_clock_enable(RCU_GPIOB);
    rcu_periph_clock_enable(DEBUG_USART_CLK);
    rcu_periph_clock_enable(RCU_AF);
    
    // 2. GPIO 重映射和配置
    gpio_pin_remap_config(GPIO_USART2_FULL_REMAP, ENABLE);
    gpio_init(DEBUG_USART_TX_PORT, GPIO_MODE_AF_PP, GPIO_OSPEED_50MHZ, DEBUG_USART_TX_PIN);
    gpio_init(DEBUG_USART_RX_PORT, GPIO_MODE_IN_FLOATING, GPIO_OSPEED_50MHZ, DEBUG_USART_RX_PIN);
    
    // 3. USART 配置
    usart_deinit(DEBUG_USART);
    usart_baudrate_set(DEBUG_USART, baudrate);
    usart_word_length_set(DEBUG_USART, USART_WL_8BIT);
    usart_stop_bit_set(DEBUG_USART, USART_STB_1BIT);
    usart_parity_config(DEBUG_USART, USART_PM_NONE);
    
    // 4. 启用收发
    usart_transmit_config(DEBUG_USART, USART_TRANSMIT_ENABLE);
    usart_receive_config(DEBUG_USART, USART_RECEIVE_ENABLE);
    
    // 5. 启用接收中断 ⭐ 关键！
    usart_interrupt_enable(DEBUG_USART, USART_INT_RBNE);
    
    // 6. 启用 NVIC 中断 ⭐ 关键！
    nvic_irq_enable(DEBUG_USART_IRQn);
    nvic_irq_priority_set(DEBUG_USART_IRQn, 0);
    
    // 7. 启用 USART
    usart_enable(DEBUG_USART);
}
```

### 方案 B：寄存器直接操作（最小化修改）

```c
void USART_Init(uint32_t baudrate) {
    baudrate=baudrate;
    
    // 1. 使能时钟
    *(volatile uint32_t*)0x40021018 |= 0x00000008;  // GPIOB
    *(volatile uint32_t*)0x4002101C |= 0x00040000;  // USART3

    // 2. GPIO 配置
    *(volatile uint32_t*)0x40010C04 = (*(volatile uint32_t*)0x40010C04 & ~0xFFFF00) | 0x4B00;

    // 3. USART CR1 配置 ⭐ 修改为包含 RXNEIE (Bit5)
    *(volatile uint32_t*)0x4000480C = 0x202C;  // 0x200C + 0x20 (RXNEIE)

    // 4. 波特率
    *(volatile uint32_t*)0x40004808 = 312;

    // 5. NVIC 配置 ⭐ 关键！
    // USART3 对应 NVIC IRQ 39 (0x4700E000 是 NVIC 基地址)
    *(volatile uint32_t*)(0xE000E100 + 1*4) |= (1 << 7);  // ISER[1] |= (1<<7) for IRQ 39
}
```

## 时间戳 echo 改进

```c
#include <time.h>

static void process_received_char(uint8_t ch) {
    static uint32_t timestamp = 0;
    
    if (ch == '\r' || ch == '\n') {
        if (rx_index > 0) {
            rx_buffer[rx_index] = '\0';
            rx_ready = SET;
            
            // 获取时间戳（基于 SysTick）
            extern uint32_t systick_counter;
            timestamp = systick_counter;
            
            // 立即发送时间戳 echo
            USART_Printf("\r\n[%10u ms] RX: ", timestamp);
            USART_SendString((char*)rx_buffer);
            USART_SendString("\r\n> ");
            
            process_command((char*)rx_buffer);
        }
        rx_index = 0;
    }
    // ... 其他处理
}
```

## 验证清单

- [ ] 确认 USART_Init() 使用 DEBUG_USART 宏而不是硬编码地址
- [ ] 确认 CR1 = 0x202C（包含 RXNEIE）
- [ ] 确认调用了 nvic_irq_enable(DEBUG_USART_IRQn)
- [ ] 确认中断处理函数名称与 NVIC 配置匹配
- [ ] 串行监视器发送数据并验证接收正常

