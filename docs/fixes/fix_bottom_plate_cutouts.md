# Fix Bottom Plate Cutouts

I'm sorry to say that the initial version of the bottom plate had non-reversible cutouts for the TRRS socket. If you have already printed it, it will only work for one side, and you need to fix it for the other side.

There are a few ways to do it:

1. **Drill missing holes**
   This is probably the best way if you have a drill. Just stack the PCB and the bottom plate, mark the positions with a pen, and then drill the missing holes.

2. **Cut TRRS socket legs**
   You could cut the legs of the TRRS socket in half and then solder them inside the holes to keep the PCB bottom flush. That's what I actually did and showed in the build guide.

3. **Use foam**
   You could place foam between the PCB and the bottom plate - something around 2mm should work. This will increase the overall height, and you should use taller standoffs.

   The standoff height should be less than the whole stack. By default, they are 6mm (~4.7mm spacing between the PCB and the top plate + 1.6mm PCB = 6.3mm). Depending on the foam density, you could either add the foam thickness to the standoff length or use a slightly smaller one (so 7mm or 8mm should work with 2mm foam).
