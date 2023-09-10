# Build Guide

## Preparation

The PCB is fabricated as a panel, so the first step is to gently break it in the middle.

## Solder components

Place all the components using interactive BOM. You can solder in any order, the only requirement is to solder reset button before TRRS jack.

Orientation matter only for the `OPA350` and `74HC4051` chips (`U2`, `U3`, `U102` and `U103`). You should align the dot on the chip with long line on PCB. For the rest (resistors and capacitors) orientation does not matter.

![IC Orientation](./img/buildguide/ic_orientation.jpg)

Keep in mind that the left and right sides are not 100% mirrored, so refer to the PCB and interactive BOM (ibom) when soldering.

`JP1` and `JP101` used to adjust OpAmp gain and can be ignored during build.

`R12` and `R112` are used for handness in QMK and you can ignore them for wireless build.

If you have no experience in soldering SMD components then you could check [SMD Soldering Tutorial](https://www.youtube.com/watch?v=fYInlAmPnGo) video.

Solder the MCU and display sockets, battery, and power switch (for wireless) at this step as well. At the end, your assembly should resemble the following (note that you don't need to solder the TRRS jack for wireless):

![Assembled PCB](./img/buildguide/assembled_pcb.jpg)

## Test

Now, you can test the PCB before proceeding to ensure everything is done correctly. Flash the firmware (release contains default firmware for both QMK and ZMK) and open the console (it's enabled by default):

- QMK: https://github.com/qmk/qmk_firmware/blob/master/docs/faq_debug.md
- ZMK: https://zmk.dev/docs/development/usb-logging#viewing-logs

You should see matrix scan with readings and values should change when you place your finger at EC pads.
