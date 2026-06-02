#!/usr/bin/env bash
set -euo pipefail

# ============================================================================
# hoverboard-firmware-hack-FOC 构建脚本
# 支持多种编译变体，默认: VARIANT_HOVERCAR
# ============================================================================

# 编译变体选择（可通过环境变量或命令行参数设置）
VARIANT="${1:-VARIANT_HOVERCAR}"

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="$ROOT_DIR/build"

# ============================================================================
# 验证工具链
# ============================================================================

for tool in arm-none-eabi-gcc arm-none-eabi-objcopy arm-none-eabi-size make; do
    if ! command -v "$tool" &> /dev/null; then
        echo "错误：找不到工具: $tool"
        echo "请先安装 ARM 交叉编译工具链："
        echo "  sudo apt-get install build-essential gcc-arm-none-eabi binutils-arm-none-eabi"
        exit 1
    fi
done

echo "编译变体: $VARIANT (STM32F103RCT6)"
echo "编译目录: $BUILD_DIR"
echo ""

# ============================================================================
# 使用 Make 进行编译
# ============================================================================

cd "$ROOT_DIR"

# 清理旧的编译输出
echo "清理旧编译..."
make clean 2>/dev/null || true

# 编译指定变体
echo ""
echo "编译中 (VARIANT=$VARIANT)..."
if VARIANT="$VARIANT" make BUILD_DIR="$BUILD_DIR" all 2>&1; then
    echo ""
    echo "=== 编译完成 ==="
    echo "输出文件:"
    echo "  - $BUILD_DIR/hover.elf"
    echo "  - $BUILD_DIR/hover.hex"
    echo "  - $BUILD_DIR/hover.bin"
    echo ""
    # 列出实际定义的预处理器宏（包含 Inc/config.h）并打印摘要
    echo "生成预处理宏清单..."
        CC_TOOL="arm-none-eabi-gcc"
        MACRO_FILE="$BUILD_DIR/defined_macros.txt"
        # Use same include paths and core defines as Makefile to get accurate macros
        $CC_TOOL -dM -E \
            -IInc \
            -IDrivers/STM32F1xx_HAL_Driver/Inc \
            -IDrivers/STM32F1xx_HAL_Driver/Inc/Legacy \
            -IDrivers/CMSIS/Device/ST/STM32F1xx/Include \
            -IDrivers/CMSIS/Include \
            -DUSE_HAL_DRIVER -DSTM32F103xE -D$VARIANT -xc /dev/null > "$MACRO_FILE" 2>/dev/null || true
    echo "已生成宏清单: $MACRO_FILE"
    echo "---- 相关宏摘要 ----"
    grep -E "VARIANT_|DEBUG_|FEEDBACK|CONTROL_|SIDEBOARD|PRI_INPUT|DEBUG_SERIAL|FEEDBACK_SERIAL|VARIANT_HOVERCAR|VARIANT_USART|USE_HAL_DRIVER|STM32F103xE" "$MACRO_FILE" || true
    echo "--------------------"
else
    echo ""
    echo "编译失败！"
    exit 1
fi


