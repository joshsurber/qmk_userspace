Need to clone vial-kb/vial-qmk

compile all with `qmk userspace-compile`

flash sweep with `make ferris/sweep:mine:avrdude-split-left` and `make ferris/sweep:mine:avrdude-split-right`

flash mk47 with `qmk flash -kb inland/mk47 -km vial`
