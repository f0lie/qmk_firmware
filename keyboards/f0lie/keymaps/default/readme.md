## Keymap
`default.json` contains the keymap that can be uploaded to QMK Configurator. The json says that it is `sentreq/s60_x/rgb` keyboard but that is a trick to get it to load correctly. With that trick, I can use the website to configure my keymap.

`s60_x` has the same layout as mine but with some tweaks. My keyboard has 60 keys instead of 61 keys since the loadout is from an old mac keyboard. The json file only has 60 keys and the website interprets this as missing the last key. I also can download the updated json with 60 keys so there is no tweaking needed on my end.

To upload the keymap is `qmk json2c` and copy and paste the C snippet into `keymap.c`

## Layout
The default keymap is similar to a Happy Hacker Keyboard 2. That's the keyboard I use the most often and I like the layout. The layout fits the ANSI 60% perfectly without the need for odd layouts or custom keycaps. My keyboard is regular full sized keyboard but everything but the 60% ANSI was cut out. So I can't rely on custom loadouts to get arrow keys.