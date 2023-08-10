# fanf's keybird

This is a DIY 65% keyboard made by Tony Finch <dot@dotat.at>

It is designed to support a unix69 layout with minimal soldering
(tho, it turns out, not as little as I was aiming for)

It uses a Waveshare RP2040-Tiny controller and an 8x9 matrix.

The Waveshare RP2040-Tiny has the same pinout as the Waveshare
RP2040-Zero, and the -Zero has a [Raspberry Pi USB PID][usb-pid]
whereeas the -Tiny does not, so I re-used the Waveshare RP2040-Zero
VID and PID.

(The differences are that the -Zero is double-sided whereas the -Tiny
can be surface mounted; the -Tiny lacks the extra GPIO pads on the
underside of the -Zero, and -Zero has a built-in USB-C socket unlike
the  separate USB adapter board for the -Tiny.)
