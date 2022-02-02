# f0lie's custom keyboard

* Keyboard Maintainer: [f0lie](https://github.com/f0lie)
* Hardware Supported: atmega32u4, Arduino Leonardo
* Hardware Availability: Handwired thingy

Copy and paste this code to flash the Leonardo. It's a pain in the ass to flash.

stty -F /dev/ttyACM0 ispeed 1200 ospeed 1200 && avrdude -C/etc/avrdude.conf -patmega32u4 -cavr109 -v -v -v -v -P/dev/ttyACM0 -b57600 -D -Uflash:w:f0lie_quiets_default.hex:i

## Bootloader

For Leonardo, the software goes into bootload every time it boots. Thus entering the bootloader just means unplugging and plugging the keyboard. There is also the reset button on the board itself.

There are ways to completely remove the bootloader by using ICSP programming. But those pins were removed on my board to fit the case. Also, needing to pull out another thing to flash my board is a pain in the butt.

## Keymap
`default.json` contains the keymap that can be uploaded to QMK Configurator. The json says that it is `sentreq/s60_x/rgb` keyboard but that is a trick to get it to load correctly. With that trick, I can use the website to configure my keymap.

`s60_x` has the same layout as mine but with some tweaks. My keyboard has 60 keys instead of 61 keys since the loadout is from an old mac keyboard. The json file only has 60 keys and the website interprets this as missing the last key. I also can download the updated json with 60 keys so there is no tweaking needed on my end.

To upload the keymap is `qmk json2c` and copy and paste the C snippet into `keymap.c`

## Wiring notes
For handwired keyboards, the layout of the wires is stored in `custom.h`'s 2d array. That macro translates the row and col coordinates that QMK finds into keycodes that are sent to the computer. To configure the array, set the values so that keys correspond to a 2D array and set KC_NO for coordinates where no key exists.

Some people do creative things with wiring like extending a wiring column to connect two physical columns like in `handwired/xealousbrown`.

## udev
It turns out those rules are quite important. By default, Linux doesn't allow flashing of devices or reading from the debugging console of QMK. `qmk doctor` suggests copying the udev from the repo into the system. It was needed to stop my board from not running at all. (At least I think so?)

I also added my board in the udev so I can read from the debugging console. 

## keymap
The default keymap is similar to a Happy Hacker Keyboard 2. That's the keyboard I use the most often and I like the layout. The layout fits the ANSI 60% perfectly without the need for odd layouts or custom keycaps. My keyboard is regular full sized keyboard but everything but the 60% ANSI was cut out. So I can't rely on custom loadouts to get arrow keys.