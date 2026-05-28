#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$ROOT_DIR"

CC="arm-none-eabi-gcc"
OBJCOPY="arm-none-eabi-objcopy"
OUT="hello"

CFLAGS=(
  -mcpu=cortex-m3
  -mthumb
  -Os
  -nostdlib
  -ffunction-sections
  -fdata-sections
  -Wall
  -Wextra
)
LDFLAGS=(
  -Ttext=0x08000000
  -nostdlib
  -Wl,--gc-sections
  -Wl,-entry=Reset_Handler
)

"$CC" "${CFLAGS[@]}" main.c "${LDFLAGS[@]}" -o "$OUT.elf"
"$OBJCOPY" -O ihex "$OUT.elf" "$OUT.hex"

printf "生成: %s/hello.hex\n" "$ROOT_DIR"
