# Tako

![PCB Preview](./img/assembled.jpg)

<span>
  <img src="https://img.shields.io/github/last-commit/ssbb/tako?style=flat-square">
  <a href="https://github.com/ssbb/tako/releases">
    <img src="https://img.shields.io/github/v/release/ssbb/tako?include_prereleases&color=success&style=flat-square">
    <img src="https://img.shields.io/github/downloads/ssbb/tako/total?color=success&style=flat-square">
  </a>
  <img src="https://img.shields.io/static/v1?label=license&message=MIT&color=success&style=flat-square">
</span>

---

Tako is a vertical stagger split keyboard with electrostatic capacitive (EC) non-contact switches.

## Status

It's the first prototype I made, and it works as expected. However, it's a 4-layer PCBA-only board, so it can be quite expensive if you only want a single keyboard. Currently, I am working on a DIY version using [STeMCell](https://github.com/megamind4089/STeMCell) and hopefully [nice!nano](https://nicekeyboards.com/nice-nano) with hand-solderable components (SOIC and 0805). Support for nice!view is also planned.

There is nothing wrong with the assembled version, though. It's a good choice if you don't want to solder that much and ideally have someone who wants a second set (on JLCPCB, you can get assembly for 2/5 PCBs).

> **Warning**
>
> ~~OLED not tested yet.~~
> OLED tested and [works on both halves](./img/assembled_oled.jpg).

## Features

### Assembled version

- Onboard USB-C with ESD protection
- STM32F4x1 MCU
- Actuation Point Changer
- USART Full-duplex

## Caveats

- No tenting puck support since there is no space between housings for screw holes. But could be done on bottom plate with different case design.

## BOM

### EC Parts

| Part            | Amount |
| --------------- | ------ |
| Housings        | 34     |
| Domes           | 34     |
| Conical springs | 34     |
| Sliders         | 34     |

You can obtain all of this on [deskeys](https://deskeys.io/). Please read all the notes and warnings below.

> **Note**
> If you going to use DES V3/Carrot domes then it's recommended to get DES Volcano springs to avoid sping crunch.

---

> **Note**
> Silencing rings are recommended. If you want the same key travel as HHKB Type-S with DES housings and DES sliders then you should get #7 rings.

---

> **Warning**
> You can't use original Topre sliders with this keyboard because of the housing orientation. It's done for a few reasons: for easier mounting and to avoid cutting domes piece by piece. Topre sliders only allow a single orientation of keycap mounting, so you'll end up with keycaps at 90 degrees.
>
> Actually, I am not using mounting holes between housings, but still prefer this orientation. It's only a limitation of the top plate, though, so if you need to use original sliders, feel free to rotate footprints and re-generate Gerbers (or ask me to upload them).

---

> **Warning**
> I tested only with DES housings and used 14.7x14.1mm cutouts recommended by DES while original Topre often use 14.6x14mm.

### Assembled version

| Part           | Amount | Details          |
| -------------- | ------ | ---------------- |
| Assembled PCB  | 1      | 1.6mm            |
| Top plate      | 2      | 1.2mm thickness! |
| Bottom plate   | 2      | 1.6mm            |
| M2x6 standoffs | 16     |                  |
| M2x4 screws    | 32     |                  |
| PJ-320A        | 2      | Audio jack       |
| TRRS Cable     | 1      |                  |

> **Warning**
> Top plate should be 1.2mm thick!

> **Note**
> There are also mounting holes between housings on 1, 3, and 5 columns. They are not required, and it should be fine not to use them. However, in case you experience some "squishing" sounds, especially on the homerow, it is likely that the housings are not sitting properly on the PCB.
> In this case, you'll need to add mounting somewhere at the center of the keyboard. There is no space for M2 standoffs between the housings, so you should use M1.6 or just a long M2 screw (around 10-11mm) with a nut on the bottom plate.

#### Optional

| Part         | Amount |
| ------------ | ------ |
| 128x32 OLED  | 2      |
| OLED Sockets | 2      |

## Build guide

Coming soon.

## Firmware

At the moment, only QMK is supported. While ZMK in wired mode is possible, it has not been implemented yet, and there is no guarantee that it will be.

## Thanks

Special thanks to [Cipulot](https://github.com/Cipulot/) for all the work on EC keyboards and assistance.

- [jimmerricks](https://github.com/jimmerricks/swoop) for Swoop
- [duckyb](https://github.com/duckyb/urchin) for Urchin I was inspired by
- Awesome [Pete Johanson](https://github.com/petejohanson) for assistance
