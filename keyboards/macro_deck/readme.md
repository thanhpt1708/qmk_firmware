# macro_deck

![macro_deck](imgur.com image replace me!)

A 3x3 macro deck keyboard using Arduino Pro Micro with direct pin connections.

* Keyboard Maintainer: [ThanhPT](https://github.com/thanhpt1708)
* Hardware Supported: Arduino Pro Micro (ATmega32U4)
* Hardware Availability: Custom build

## Pinout

Direct pins: D2, D3, D4, D5, D6, D7, D8, D9, D10

Make example for this keyboard (after setting up your build environment):

    make macro_deck:default

Flashing example for this keyboard:

    make macro_deck:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
