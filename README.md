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

## BOM

### EC Parts

| Part            | Amount |
| --------------- | ------ |
| Housings        | 34     |
| Domes           | 34     |
| Conical springs | 34     |
| Sliders         | 34     |

You can obtain all of this on [deskeys](https://deskeys.io/) or other stores (PR's with list of stores are welcome).

> **Note**
> If you going to use DES domes then it's recommended to use Volcano springs.

> **Note**
> Silencing rings are recommended. If you want the same travel as HHKB Type-S with DES housings and DES sliders then you should get #7 rings.

> **Warning**
> You can't use original Topre sliders with this keyboard because of the housing orientation. It's done for a few reasons: for easier mounting and to avoid cutting domes piece by piece. Topre sliders only allow a single orientation of keycap mounting, so you'll end up with keycaps at 90 degrees.
>
> Actually, I am not using mounting holes between housings, but still prefer this orientation. It's only a limitation of the top plate, though, so if you need to use original sliders, feel free to rotate footprints and re-generate Gerbers (or ask me to upload them).

### Assembled version

| Part          | Amount | Details          |
| ------------- | ------ | ---------------- |
| Assembled PCB | 1      | 1.6mm            |
| Top plate     | 2      | 1.2mm thickness! |
| Bottom plate  | 2      | 1.6mm            |
| M2x6 standoff | 16     |                  |
| M2x4 screw    | 32     |                  |
| PJ-320A       | 2      | Audio jack       |
| TRRS Cable    | 1      |                  |
| 128x32 OLED   | 2      | Optional         |
| OLED Sockets  | 2      | Optional         |

> **Warning**
> Top plate should be 1.2mm thick!

## Build guide

Coming soon.

## Firmware

At the moment, only QMK is supported. While ZMK in wired mode is possible, it has not been implemented yet, and there is no guarantee that it will be.

## Thanks

Special thanks to [Cipulot](https://github.com/Cipulot/) for all the work on EC keyboards and assistance.

- [jimmerricks (Swoop)](https://github.com/jimmerricks/swoop) for Swoop
- [duckyb](https://github.com/duckyb/urchin) for Urchin I was inspired by
- Awesome [Pete Johanson](https://github.com/petejohanson) for assistance
