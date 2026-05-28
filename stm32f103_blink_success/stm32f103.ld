MEMORY {
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 32K
    RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 10K
}
SECTIONS {
    .vectors : { KEEP(*(.vectors)) } > FLASH
    .text : { *(.text) } > FLASH
}
_stack_ptr = ORIGIN(RAM) + LENGTH(RAM);