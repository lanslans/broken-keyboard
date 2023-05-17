#FC980m Blue Pill Mod

* Keyboard Maintainer: [lanslans](https://github.com/lanslans)

* Hardware Supported: Blue Pill STM32F103C8T6, FC980m keyboard

See this geekhack thread for details:
https://geekhack.org/index.php?topic=106758.0

Bootmagic lite enabled, hold spacebar when plugging in to get to bootloader

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Modifications from stock FC980 behaviour:

Left ctrl and left alt are swapped.

FN + up arrow is volume up
FN + down arrow is volume down
FN + spacebar is media play/pause
FN + comma is previous track
FN + period is next track
FN + escape is RESET (bootloader)

FN + 1 is default layer (ordinary keyboard)
FN + numlock turns on/off space cadet shift
FN + 2 toggles copy/paste macros on F3/F4

Auto shift enabled (150ms)

Auto shift special keys:
FN + q is auto shift timeout up
FN + a is auto shift timeout down
FN + w is auto report auto shift timeout
FN + s toggles auto shift

