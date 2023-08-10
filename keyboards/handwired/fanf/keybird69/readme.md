# fanf's keybird69

This is a DIY 65% keyboard with a unix69 layout
made by Tony Finch <dot@dotat.at>

Repository for the PCB and case design:

  * https://github.com/fanf2/kbd/

It uses a Waveshare RP2040-Tiny controller and an 8x9 matrix.

The Waveshare RP2040-Tiny has the same pinout as the Waveshare
RP2040-Zero, and the -Zero has a [Raspberry Pi USB PID][usb-pid]
whereeas the -Tiny does not, so I re-used the Waveshare RP2040-Zero
VID and PID.

(The differences are that the -Zero is double-sided whereas the -Tiny
can be surface mounted; the -Tiny lacks the extra GPIO pads on the
underside of the -Zero, and -Zero has a built-in USB-C socket unlike
the  separate USB adapter board for the -Tiny.)

[usb-pid]: https://github.com/raspberrypi/usb-pid
