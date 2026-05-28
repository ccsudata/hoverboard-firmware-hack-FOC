# STM32F103C6T6 两个项目对比分析

## 🎯 核心问题

**stm32f103_blink_success** ✅ 烧录后正常运行
**stm32f103c6t6_hello** ❌ 烧录后没有反应

---

## 📊 关键差异对比表

| 项目 | stm32f103_blink_success | stm32f103c6t6_hello |
|------|----------------------|-------------------|
| **向量表定义** | 在 main.c 中（C代码） | 在 startup_stm32.s 中（汇编） |
| **编译参数** | `-nostartfiles` | `-specs=nano.specs` |
| **启动文件** | 无 | startup_stm32.s |
| **编译产物大小** | 100 字节（高效） | 1.2 KB（包含库函数） |
| **RAM初始化** | 无（直接执行） | 有（复制.data，清零.bss） |
| **库支持** | 无 | Newlib-nano 标准库 |
| **FLASH地址使用** | 0x08000000-0x08000064 | 0x08000000-0x08000248 |

---

## 🔍 反汇编对比分析

### 1. **内存布局差异**

**stm32f103_blink_success:**
```
地址范围         | 内容
0x08000000      | 向量表 (8字节)
0x08000000      | SP = 0x20002800
0x08000004      | Reset = 0x0800000e (指向Reset_Handler)
0x08000008      | .text section 开始
0x0800000e      | Reset_Handler (94字节)
```

**stm32f103c6t6_hello:**
```
地址范围         | 内容
0x08000000      | .isr_vector (432字节)
0x08000000      | SP = 0x20005000
0x08000004      | Reset = 0x080001b0
0x08000008-0x1af | 全部填零（106个保留向量槽）
0x080001b0      | Reset_Handler (从启动文件 startup_stm32.s）
              |   - 设置栈指针
              |   - 复制 .data 段
              |   - 清零 .bss 段
              |   - 调用 main()
```

---

## ⚠️ 问题原因分析

### **关键问题 #1：编译参数不匹配**

**stm32f103_blink_success 的编译参数：**
```bash
CFLAGS="-mcpu=cortex-m3 -mthumb -nostartfiles -T stm32f103.ld"
```
- `-nostartfiles`: 禁用 GCC 的标准启动代码
- 依赖 main.c 中手写的向量表和 Reset_Handler

**stm32f103c6t6_hello 的编译参数：**
```bash
CFLAGS: -mcpu=cortex-m3 -mthumb -Os -Wall -Wextra
LDFLAGS: -specs=nano.specs -Wl,--gc-sections
```
- 未使用 `-nostartfiles`
- 编译了 startup_stm32.s 和 main.c 两个文件
- 启用了 Newlib-nano 标准库

---

### **关键问题 #2：main.c 版本不一致**

当前 stm32f103c6t6_hello/main.c 有两个版本在混用：

**版本 A（原始最小版）：** 使用 `.vectors` section
```c
__attribute__((section(".vectors")))
unsigned int *tab[] = {
    (unsigned int *)&_stack_ptr,
    (unsigned int *)Reset_Handler
};

void Reset_Handler(void) { ... }
```

**版本 B（完整版，当前）：** 仅有 main() 函数，无 Reset_Handler
```c
int main(void) { ... }
void gpio_init(void) { ... }
void uart_init(void) { ... }
```

---

### **关键问题 #3：链接脚本不匹配**

**stm32f103_blink_success/stm32f103.ld：**
```ld
SECTIONS {
    .vectors : { KEEP(*(.vectors)) } > FLASH    /* 查找 .vectors */
    .text : { *(.text) } > FLASH
}
```

**stm32f103c6t6_hello/stm32f103.ld：**
```ld
SECTIONS {
    .isr_vector : { KEEP(*(.isr_vector)) } > FLASH  /* 查找 .isr_vector */
    .text : { *(.text*) *(.rodata*) } > FLASH
    .data : { ... } > RAM AT> FLASH
    .bss : { ... } > RAM
}
```

当 main.c 定义 `.vectors` section，但链接脚本查找 `.isr_vector` 时，会导致：
- `.vectors` 不被链接到正确位置
- 向量表可能消失或位置错误
- CPU 找不到正确的 Reset_Handler 地址

---

### **关键问题 #4：向量表内容大小**

**stm32f103_blink_success 向量表（8字节）：**
```
Offset 0x00: 0x20002800  (SP)
Offset 0x04: 0x0800000f  (Reset_Handler + 1, Thumb模式)
```

**stm32f103c6t6_hello 向量表（432字节）：**
```
Offset 0x00: 0x20005000  (SP)
Offset 0x04: 0x080001b1  (Reset_Handler in startup_stm32.s + 1)
Offset 0x08-0x1af: 全部为 0
```

问题：如果编译时向量表定义（`.vectors` section from main.c）和启动文件向量表（`.isr_vector` from startup_stm32.s）同时存在，链接器的行为可能不确定。

---

## 🐛 为什么没有反应？

1. **向量表地址错误**
   - CPU 在 0x08000000 处加载栈指针（SP）
   - CPU 在 0x08000004 处读取 Reset_Handler 地址
   - 如果这两个值不正确，会导致栈溢出或跳转到错误位置

2. **重复定义向量表**
   - startup_stm32.s 定义了 `.isr_vector` (432字节)
   - main.c（如果有的话）可能定义了 `.vectors` (8字节)
   - 链接时，较大的 `.isr_vector` section 可能覆盖较小的 `.vectors`，导致地址混乱

3. **初始化代码缺失**
   - 启动文件 startup_stm32.s 有数据复制和 BSS 清零逻辑
   - 如果向量表指向错误的 Reset_Handler，或 Reset_Handler 初始化失败，代码无法执行

---

## ✅ 解决方案

### **推荐方案：统一使用启动文件方案**

保持 stm32f103c6t6_hello 的结构，但修复 main.c：

**要点：**
1. ✅ 删除 main.c 中的向量表定义（已经删除）
2. ✅ 保留 startup_stm32.s 中的 `.isr_vector` 定义
3. ✅ 链接脚本保持期望的 `.isr_vector` section
4. ✅ 确保编译时包括 startup_stm32.s：
```bash
$CC ... -c startup_stm32.s -o startup.o
$CC ... startup.o main.o -o firmware.elf
```

### **验证编译命令**

```bash
# 编译启动文件（ASM）
arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os \
    -c startup_stm32.s -o build/startup.o

# 编译主程序（C）
arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os \
    -c main.c -o build/main.o

# 链接
arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb \
    -T stm32f103.ld -specs=nano.specs \
    build/startup.o build/main.o \
    -o build/firmware.elf
```

---

## 📝 总结

| 问题 | 成功项目 | 失败项目 | 原因 |
|------|--------|--------|------|
| 向量表定义位置 | 在 C 代码中 | 在启动文件中 | 架构选择不同 |
| 编译参数 | `-nostartfiles` | `-specs=nano.specs` | 库支持需求不同 |
| 代码大小 | 100字节 | 1.2KB | 完整 vs 最小化 |
| 功能 | 仅LED闪烁 | LED+UART+SysTick | 功能完整度不同 |
| **状态** | ✅ **正常运行** | ❌ **无反应** | **向量表/启动代码配置不匹配** |

---

## 🔧 建议修复步骤

1. 确认 main.c 中**没有**向量表定义（`.vectors` section）✅
2. 确认 startup_stm32.s 中**有**正确的 `.isr_vector` 定义 ✅
3. 确认链接脚本查找 `.isr_vector` section ✅
4. 确认编译命令包含 startup_stm32.s：`$CC -c startup_stm32.s` ✅
5. 确认链接时包含 startup.o：`$CC ... startup.o main.o ...` ✅
6. 验证最终的 firmware.hex 向量表是否正确

---
