# TAKO BUILD GUIDE (REV0)

## PREPARATION

![Panel](./img/buildguide_assembled/panel.jpg)

You'll receive a PCB as a panel, so the first thing you need to do is gently break it in the middle and clean the PCB edges with sandpaper.

## TRRS JACK AND OLED SOCKET

> **Warning**
> Please check the bottom plate. If you printed the first version of this, which had an issue with the TRRS cutout, then you either need to drill the missing holes or cut the TRRS legs in half before soldering, so the PCB lies flat. [See details](./fixes/fix_bottom_plate_cutouts.md).

There are only a few components you need to solder - TRRS jack and optional OLED sockets. You can use masking tape to make this process easier.

At the end, you should have something like this:

![TRRS Jack Soldering](./img/buildguide_assembled/trrs.jpg)

## STANDOFFS

Screw M2x6mm standoffs at the positions shown in the image below.

![Standoffs Installation](./img/buildguide_assembled/standoffs.jpg)

Unused mounting holes at the center won't work with M2 standoffs and should be used for optional mounting with something like M1.6 (maximum standoff OD is 2.5mm). Personally, I am not using them due to the low availability of M1.6, but they could be used to improve contact between the PCB and housings. More mounting points are always better for EC keyboards.

## HOUSINGS

Press the housings into the plate. They are not square, so you can only do it in one direction - confirm with the image below. They should "click" into place when properly fitted.

> **Warning**
> If you are installing housings for the second half, please double-check that the plate orientation is correct. You don't want to end up with two plates that can only be used for the left half.

![Standoffs Installation](./img/buildguide_assembled/housings.jpg)

After you have installed all the housings, take a look at the back side. There is a good chance that some of the walls (marked in red) may be bent, as shown in the image above (where almost all of them are bent due to housing gasket usage). Just press on those walls with your thumb, and they should click and become straight (it may not be that simple with housing gaskets). It's important to do this so that the housings are not deformed and the sliders can move freely.

![Standoffs Installation](./img/buildguide_assembled/housings2.jpg)

### LUBE (OPTIONAL)

You could lube the housing rails (where the blue arrow points in the image above) with something like 205g0. Some people prefer to lube them, while others do not - decide for yourself.

## SLIDERS

First, add a silencing ring to each slider:

<img src="./img/buildguide_assembled/silencing_ring.jpg" width="400" />

Then, put them into the housings. Note the orientation of the slider rails and housing rails:

![Sliders](./img/buildguide_assembled/sliders.jpg)

## DOMES

If you have domes in strips, you should cut them into sets of three. In total, you'll need 10 strips with 3 domes each and 4 single domes.

<img src="./img/buildguide_assembled/dome_strip.jpg" width="400" />

Then, place them over the housings so that you get something like this:

![Domes installed](./img/buildguide_assembled/domes_installed.jpg)

Make sure to align them properly so that there are no instances of one dome overlapping another, etc. Also, from this point on, you should keep the keyboard in your hand or use something as support to prevent the keys from being pressed.

## CONICAL SPRINGS

Now, add a spring into each dome and align it. It should be centered and stay within the dome. See the image below as a reference.

![Springs](./img/buildguide_assembled/springs.jpg)

## PCB AND BOTTOM PLATE

Now, place the PCB over the domes and then the bottom plate over it (you can just stack the PCB and bottom plate and place them together).

Finally, screw the bottom plate to the standoffs. The standoffs are slightly shorter than the distance between the top and bottom plates (around 6.3mm vs 6mm). You don't need to screw them all the way to the end and bend the top plate, just make sure everything is fixed in place.

![PCB](./img/buildguide_assembled/pcb.jpg)

> **Note**
> There are no cutouts on the bottom plate in my photo because I forgot about them in the first prototype and just cut the socket legs instead.

Now, you can add some bumpons to the bottom plate:

![Bumpons](./img/buildguide_assembled/bumpons.jpg)

## RESULT

Now, you should have something like this. You did it, great job!

Repeat the same process for the second half.

![Done keyboard](./img/buildguide_assembled/done.jpg)
