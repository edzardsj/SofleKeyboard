# VIA keymap for Sofle

Modded for Sofle v3

## How to use

1. clone qmk-via (https://github.com/the-via/qmk_firmware)
2. go to the sofle subfolder and add this folder as a keymap
3. flash the boards with  
    `qmk flash -kb sofle/rev1 -km via -bl avrdude-split-left` and  
    `qmk flash -kb sofle/rev1 -km via -bl avrdude-split-right`  
    for the respecting halves.

## Features

- Symmetric modifiers (CMD/Super, Alt/Opt, Ctrl, Shift)
- Modes for Qwerty and Colemak support
- The OLED on master half shows selected mode and caps lock state and is rotated.
- Encoder maps can be found in `encoder.c`
- Via support
- RGB underglow support
