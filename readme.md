
# Mauedu keymap for Sofle V2 Keyboard

My custom keymap for the [Sofle V2 Keyboard by josefadamcik](https://josefadamcik.github.io/SofleKeyboard/)

Based on default keymap.

## Usage

1. Clone latest [qmk_firmware repository](https://github.com/qmk/qmk_firmware/).

2. `cd` into Sofle directory: `qmk_firmware/keyboards/sofle/keymaps`

3. Clone this repository.

4. [Suggested] Use Docker to build and flash the firmware.
```bash
sudo util/docker_build.sh sofle:mau_sofle:flash
```
    
See [Qmk Docker Quick Start](https://github.com/qmk/qmk_firmware/blob/master/docs/getting_started_docker.md) for details.

## TODO

- Remove unused custom keycodes from kaymap.c
- Devide if Mac/Win functionality on "Adjust" layer is worth keeping
- Generate a visual guide map from keymap.h (Using QMK configurator?)