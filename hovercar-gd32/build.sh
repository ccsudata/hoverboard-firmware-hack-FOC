#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="$ROOT_DIR/build"
GD32_DIR="$(cd "$ROOT_DIR/../GD32" && pwd)"
OUT_NAME="hovercar-gd32"
OBJ_DIR="$BUILD_DIR/obj"

rm -rf "$BUILD_DIR"
mkdir -p "$OBJ_DIR"

CC="arm-none-eabi-gcc"
OBJCOPY="arm-none-eabi-objcopy"
SIZE="arm-none-eabi-size"

CFLAGS=(
  -mcpu=cortex-m3
  -mthumb
  -mfloat-abi=soft
  -g3
  -O0
  -std=gnu11
  -Wall
  -Wextra
  -Werror
  -Wno-unused-function
  -Wno-unused-variable
  -ffunction-sections
  -fdata-sections
  -DGD32F10X_MD
  -DUSE_STDPERIPH_DRIVER
  -D__SYSTEM_CLOCK_72M_PLL_IRC8M
)

CPPFLAGS=(
  -I"$ROOT_DIR"
  -I"$GD32_DIR"
  -I"$GD32_DIR/Firmware/CMSIS"
  -I"$GD32_DIR/Firmware/CMSIS/GD/GD32F10x/Include"
  -I"$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Include"
)

LDFLAGS=(
  -mcpu=cortex-m3
  -mthumb
  -mfloat-abi=soft
  -T"$ROOT_DIR/GD32F103RCT6.ld"
  -Wl,--gc-sections
  -Wl,-Map="$BUILD_DIR/$OUT_NAME.map"
  --specs=nano.specs
  -u _printf_float
)

LIBS=(-lc -lm -lnosys)

SRC_FILES=(
  "$ROOT_DIR/main.c"
  "$ROOT_DIR/buzzer.c"
  "$ROOT_DIR/bldc.c"
  "$ROOT_DIR/setup.c"
  #"$ROOT_DIR/setup_compat.c"
  "$ROOT_DIR/remote.c"
  "$ROOT_DIR/usart.c"
  "$ROOT_DIR/power.c"
)

GD32_FILES=(
  "$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Source/gd32f10x_gpio.c"
  "$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Source/gd32f10x_rcu.c"
  "$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Source/gd32f10x_timer.c"
  "$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Source/gd32f10x_adc.c"
  "$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Source/gd32f10x_dma.c"
  "$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Source/gd32f10x_usart.c"
  "$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Source/gd32f10x_fwdgt.c"
  "$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Source/gd32f10x_fmc.c"
  "$GD32_DIR/Firmware/GD32F10x_standard_peripheral/Source/gd32f10x_misc.c"
)

CMSIS_FILES=(
  "$ROOT_DIR/system_gd32f10x.c"
)

STARTUP_FILE="$ROOT_DIR/startup_gd32f10x_md.S"

# 编译工程源文件
for src in "${SRC_FILES[@]}"; do
  obj="$OBJ_DIR/$(basename "${src%.c}").o"
  echo "编译: $src"
  "$CC" "${CFLAGS[@]}" "${CPPFLAGS[@]}" -c "$src" -o "$obj"
done

# 编译 GD32 外设库
for src in "${GD32_FILES[@]}"; do
  obj="$OBJ_DIR/$(basename "${src%.c}").o"
  echo "编译 GD32 库: $src"
  "$CC" "${CFLAGS[@]}" "${CPPFLAGS[@]}" -c "$src" -o "$obj"
done

# 编译 CMSIS 系统文件
for src in "${CMSIS_FILES[@]}"; do
  obj="$OBJ_DIR/$(basename "${src%.c}").o"
  echo "编译 CMSIS: $src"
  "$CC" "${CFLAGS[@]}" "${CPPFLAGS[@]}" -c "$src" -o "$obj"
done

# 编译启动文件
startup_obj="$OBJ_DIR/startup_gd32f10x_md.o"
 echo "编译启动文件: $STARTUP_FILE"
"$CC" "${CFLAGS[@]}" "${CPPFLAGS[@]}" -c "$STARTUP_FILE" -o "$startup_obj"

# 统一链接成单个固件
OBJ_LIST=(
  "$OBJ_DIR/main.o"
  "$OBJ_DIR/buzzer.o"
  "$OBJ_DIR/bldc.o"
  "$OBJ_DIR/setup.o"
  #"$OBJ_DIR/setup_compat.o"
  "$OBJ_DIR/remote.o"
  "$OBJ_DIR/usart.o"
  "$OBJ_DIR/power.o"
  "$OBJ_DIR/gd32f10x_gpio.o"
  "$OBJ_DIR/gd32f10x_rcu.o"
  "$OBJ_DIR/gd32f10x_timer.o"
  "$OBJ_DIR/gd32f10x_adc.o"
  "$OBJ_DIR/gd32f10x_dma.o"
  "$OBJ_DIR/gd32f10x_usart.o"
  "$OBJ_DIR/gd32f10x_fwdgt.o"
  "$OBJ_DIR/gd32f10x_fmc.o"
  "$OBJ_DIR/gd32f10x_misc.o"
  "$OBJ_DIR/system_gd32f10x.o"
  "$startup_obj"
)

echo "链接目标: $BUILD_DIR/$OUT_NAME.elf"
"$CC" "${LDFLAGS[@]}" -o "$BUILD_DIR/$OUT_NAME.elf" "${OBJ_LIST[@]}" "${LIBS[@]}"
"$OBJCOPY" -O ihex "$BUILD_DIR/$OUT_NAME.elf" "$BUILD_DIR/$OUT_NAME.hex"
"$OBJCOPY" -O binary "$BUILD_DIR/$OUT_NAME.elf" "$BUILD_DIR/$OUT_NAME.bin"
"$SIZE" --format=berkeley "$BUILD_DIR/$OUT_NAME.elf"

echo "已生成: $BUILD_DIR/$OUT_NAME.elf"
echo "已生成: $BUILD_DIR/$OUT_NAME.hex"
echo "已生成: $BUILD_DIR/$OUT_NAME.bin"
