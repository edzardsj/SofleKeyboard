# Sofle Keyboard

## Internal Notes

 - [ ] Enable microcontroller with USB-C (possibly use a specific uC and redo the breakout on the PCB)
 - [ ] Use a scroll wheel (EVQ-WGD001) instead of a rotary encoder ([reference](https://easyeda.com/component/41c1ea5b134f4479b70a19177b7f3082]) --- [dimensions](https://www.evelinecoaching.si/wp-upload-183948_content/2-1pcs-evqwgd001-kodirnik-za-panasonic-s-kolesom-z-stikalo.jpg))  
and add PCB mounting support
 - [ ] Add drilled holes to the PCB for more sophisticated case designs
 - [ ] Check button positioning + scroll wheel positioning / orientation on printed layout
 
 ## Vanilla docs

![SofleKeyboard](docs/images/sofle_keyboard.jpg)

Sofle is 6×4+5 keys column-staggered split keyboard with encoder support. Based on [Lily58](https://github.com/kata0510/Lily58), [Corne](https://github.com/foostan/crkbd) and [Helix](https://github.com/MakotoKurauchi/helix) keyboards.

**[For more information and documentation visit https://josefadamcik.github.io/SofleKeyboard/](https://josefadamcik.github.io/SofleKeyboard/)**

SofleKeyboard was created by [Josef Adamcik](https://josef-adamcik.cz/). The motivation and process is covered in following blog-post: [Let me introduce you SofleKeyboard - a split keyboard based on Lily58 and Crkbd](https://josef-adamcik.cz/electronics/let-me-introduce-you-sofle-keyboard-split-keyboard-based-on-lily58.html)

Sofle RGB was contributed by [Dane Evans](https://github.com/DaneEvans).

Sofle soldered was contributed by [kb-elmo](https://github.com/kb-elmo)

## Firmware 

Sofle uses [QMK firmware](https://qmk.fm/)

## Default layout 

![Default layout for SofleKeyboard](Images/soflekeyboard.png)

## Images of keyboard

![SofleKeyboard](Images/IMG_20191110_131443.jpg)

![SofleKeyboard Choc](Images/chocclear.jpg)

![SofleKeyboard PCB](Images/IMG_20191104_202757.jpg)
