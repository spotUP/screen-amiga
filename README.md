# screen-amiga

GNU screen 4.9.1 for AmigaOS 3.x with ixemul, for the UP-Term kit. Part of the upterm source tree. Pristine tarballs: sh fetch.sh

GNU screen itself is under its own licence: see COPYING.

## Build

    make -f Makefile.amiga          # ./screen (m68k)

vtcon's `make dist` copies `src/screen` (`SCREEN_BIN=`). This repo is the `src`
drawer: the workspace has it at `screen-amiga/src` (the checkout of `screen-amiga`
is made there by `upterm-bootstrap`). Needs bebbo's gcc 6.5 in `~/opt/amiga`,
ixemul-vtcon's SDK headers and `libixcompat.a` installed, and Geek Gadgets
ncurses 5.5 at `$UPTERM_ROOT/vtcon/build/rig/vtc/pkgs/ncurses-5.5-1-p-bin-m68k`
(`NCURSES=`); see the `upterm` repo's README, "Set up the whole thing". The
test is `python3 tools/rig/screen_rig.py` in vtcon (rig up). The `amiga/`
files that screen's own build generates with host tools are committed, so the
build does not run `configure`.
