# hovercar-gd32 Makefile
# 针对 GD32F103RCT6 MCU 的双电机BLDC控制器

# 工具链配置
PREFIX = arm-none-eabi-
CC = $(PREFIX)gcc
AS = $(PREFIX)gcc
LD = $(PREFIX)gcc
OBJCOPY = $(PREFIX)objcopy
SIZE = $(PREFIX)size

# 输出目录
BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj

# 目标配置
TARGET = hovercar-gd32
MCU = -mcpu=cortex-m3 -mthumb
FLOAT_ABI = -mfloat-abi=soft
GD32_DIR = ../GD32

# 编译选项
CFLAGS = $(MCU) $(FLOAT_ABI)
CFLAGS += -g3 -O0
CFLAGS += -std=gnu11
CFLAGS += -Wall -Wextra -Werror
CFLAGS += -Wno-unused-function
CFLAGS += -Wno-unused-variable
CFLAGS += -ffunction-sections -fdata-sections
CFLAGS += -DGD32F10X_MD  # GD32F103RCT6 medium density
CFLAGS += -DUSE_STDPERIPH_DRIVER
# Force IRC8M->PLL 72MHz for this hardware configuration
CFLAGS += -D__SYSTEM_CLOCK_72M_PLL_IRC8M

# 包含目录
INCLUDES = -I.
INCLUDES += -I$(GD32_DIR)
INCLUDES += -I$(GD32_DIR)/Firmware/CMSIS
INCLUDES += -I$(GD32_DIR)/Firmware/CMSIS/GD/GD32F10x/Include
INCLUDES += -I$(GD32_DIR)/Firmware/GD32F10x_standard_peripheral/Include

# 链接选项
LDFLAGS = $(MCU) $(FLOAT_ABI) -T"$(CURDIR)/GD32F103RCT6.ld"
LDFLAGS += -Wl,--gc-sections
LDFLAGS += -Wl,-Map=$(BUILD_DIR)/$(TARGET).map
LDFLAGS += --specs=nano.specs
LDFLAGS += -u _printf_float

# 库文件
LIBS = -lc -lm -lnosys

# 源文件
SRC_DIR = .
SRC_FILES = \
	$(SRC_DIR)/main.c \
	$(SRC_DIR)/buzzer.c \
	$(SRC_DIR)/bldc.c \
	$(SRC_DIR)/setup.c \
	$(SRC_DIR)/remote.c \
	$(SRC_DIR)/usart.c \
	$(SRC_DIR)/power.c

# GD32库文件
GD32_SRC_DIR = $(GD32_DIR)/Firmware/GD32F10x_standard_peripheral/Source
GD32_SRC_FILES = \
	gd32f10x_gpio.c \
	gd32f10x_rcu.c \
	gd32f10x_timer.c \
	gd32f10x_adc.c \
	gd32f10x_dma.c \
	gd32f10x_usart.c \
	gd32f10x_fwdgt.c \
	gd32f10x_fmc.c \
	gd32f10x_misc.c

CMSIS_SRC_DIR = .
CMSIS_SRC_FILES = \
	system_gd32f10x.c

STARTUP = $(CURDIR)/startup_gd32f10x_md.S

OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES)) \
	$(patsubst %.c,$(OBJ_DIR)/%.o,$(GD32_SRC_FILES)) \
	$(patsubst %.c,$(OBJ_DIR)/%.o,$(CMSIS_SRC_FILES)) \
	$(OBJ_DIR)/startup_gd32f10x_md.o

# 默认目标
all: $(BUILD_DIR) $(BUILD_DIR)/$(TARGET).elf $(BUILD_DIR)/$(TARGET).hex $(BUILD_DIR)/$(TARGET).bin size

# 创建输出目录
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(OBJ_DIR)

# 链接
$(BUILD_DIR)/$(TARGET).elf: $(OBJ_FILES)
	@echo "链接目标文件: $@"
	@$(LD) $(LDFLAGS) -o $@ $^ $(LIBS)

# 生成hex文件
$(BUILD_DIR)/$(TARGET).hex: $(BUILD_DIR)/$(TARGET).elf
	@echo "生成HEX文件: $@"
	@$(OBJCOPY) -O ihex $< $@

# 生成bin文件
$(BUILD_DIR)/$(TARGET).bin: $(BUILD_DIR)/$(TARGET).elf
	@echo "生成BIN文件: $@"
	@$(OBJCOPY) -O binary $< $@

# 编译C源文件
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	@mkdir -p $(dir $@)
	@echo "编译: $<"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# 编译GD32库文件
$(OBJ_DIR)/%.o: $(GD32_SRC_DIR)/%.c | $(BUILD_DIR)
	@mkdir -p $(dir $@)
	@echo "编译GD32库: $<"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# 编译CMSIS源文件
$(OBJ_DIR)/%.o: $(CMSIS_SRC_DIR)/%.c | $(BUILD_DIR)
	@mkdir -p $(dir $@)
	@echo "编译CMSIS: $<"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# 编译启动文件
$(OBJ_DIR)/startup_gd32f10x_md.o: $(STARTUP) | $(BUILD_DIR)
	@mkdir -p $(dir $@)
	@echo "编译启动文件: $<"
	@$(AS) $(CFLAGS) $(INCLUDES) -c $< -o $@

# 显示大小信息
size: $(BUILD_DIR)/$(TARGET).elf
	@echo "代码大小:"
	@$(SIZE) --format=berkeley $<

# 清理
clean:
	@echo "清理构建文件..."
	@rm -rf $(BUILD_DIR)

# 烧录 (需要OpenOCD)
flash: $(BUILD_DIR)/$(TARGET).bin
	@echo "烧录到MCU..."
	@openocd -f interface/stlink-v2.cfg -f target/stm32f1x.cfg \
		-c "program $< verify reset exit 0x08000000"

# 调试 (需要OpenOCD和GDB)
debug: $(BUILD_DIR)/$(TARGET).elf
	@echo "启动调试会话..."
	@openocd -f interface/stlink-v2.cfg -f target/stm32f1x.cfg &
	@arm-none-eabi-gdb $< -ex "target remote localhost:3333"

# 依赖关系
-include $(OBJ_FILES:.o=.d)

# 伪目标
.PHONY: all clean flash debug size
