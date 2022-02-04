# f0lie's custom keyboard

* Keyboard Maintainer: [f0lie](https://github.com/f0lie)
* Hardware Supported: atmega32u4, Arduino Micro
* Hardware Availability: Handwired thingy

This is a handwired keyboard that uses Matias Clicky switches. It is indeed very clicky and nice.

Clicky keyboard is largely the same thing as my other keyboard, quiet. I'll note the differences here.

## Flashing

Copy and paste this code to flash the Micro. It's a pain in the ass to flash. It's the same problem with Leonardo or maybe it's because I am using a cheap clone?

stty -F /dev/ttyACM0 ispeed 1200 ospeed 1200 && avrdude -C/etc/avrdude.conf -patmega32u4 -cavr109 -v -v -v -v -P/dev/ttyACM0 -b57600 -D -Uflash:w:f0lie_clicky_default.hex:i

## Switch

The switches here are Matias Clicky switches. These are very clicky and nice switches which is why I named the keyboard, Clicky.

## Bootloader

Unlike the Leonardo, the Arduino Micro goes straight into code instead of the bootloader. The only way to flash the bootloader is to click the reset button.

## Wiring

The wiring layout is actually the same as my quiet keyboard. The only difference is changing out what PINs QMK uses to read from. This is because instead of a Leonardo, I am using a Micro which rearranges the pins.