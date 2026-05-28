#!/usr/bin/env bash
# 严谨的 Bash 设置：执行出错即退出，未定义变量即退出，管道命令出错即退出
set -euo pipefail

# 1. 确定项目根目录
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="$ROOT_DIR/build"

# 2. 确保 build 目录存在并清理干净
rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR"

# 3. 定义工具链与输出名称
CC="arm-none-eabi-gcc"
OBJCOPY="arm-none-eabi-objcopy"
OUT_NAME="firmware"

# 4. 编译参数 + 调试信息（g3 最完整，O0 禁止优化，单步不飞）
CFLAGS=(
  -mcpu=cortex-m3
  -mthumb
  -g3                      # 调试信息（必须！）
  -O0                      # 关闭优化（单步神器）
  -ffunction-sections
  -fdata-sections
  -Wall
  -Wextra
)

# 5. 链接参数（不变，保持你的库优化）
LDFLAGS=(
  -mcpu=cortex-m3
  -mthumb
  -T "$ROOT_DIR/stm32f103.ld"
  -specs=nano.specs
  -Wl,--gc-sections
  -Wl,-Map="$BUILD_DIR/$OUT_NAME.map"
)

# 6. 编译
echo "正在编译（带调试信息）..."
$CC "${CFLAGS[@]}" -c "$ROOT_DIR/startup_stm32.s" -o "$BUILD_DIR/startup.o"
$CC "${CFLAGS[@]}" -c "$ROOT_DIR/main.c" -o "$BUILD_DIR/main.o"

# 7. 链接
echo "正在链接..."
$CC "${LDFLAGS[@]}" "$BUILD_DIR/startup.o" "$BUILD_DIR/main.o" -o "$BUILD_DIR/$OUT_NAME.elf"

# 8. 生成 hex
$OBJCOPY -O ihex "$BUILD_DIR/$OUT_NAME.elf" "$BUILD_DIR/$OUT_NAME.hex"

printf "\n构建完成！\n固件：%s\n" "$BUILD_DIR/$OUT_NAME.elf"