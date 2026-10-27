# The built subsdk0 contains no code; the crash is entirely in the IPS

Status: **measured**. Date: 2026-10-22

## The measurement

`output_test/atmosphere/contents/0100EA80032EA000/exefs/subsdk0`, 569 bytes:

    flags = 0x38   (no segment compressed)
    text    file=0x101 mem=0x0     size=0x58      (88 bytes)
    rodata  file=0x100 mem=0x159   size=0x1000
    data    file=0xD0  mem=0x1     size=0x229
    bss     size=0x2000

    ELF magic inside the file : ABSENT
    non-zero bytes            : 220 of 569

The .text is 88 bytes and decodes as ordinary crt0 boilerplate:

    +0x00  0x00000000   <- entry
    +0x08  0x30444F4D   "MOD0"  (module-info structure)
    +0x24  0xE12FFF1E   bx lr          <- _init, the value DT_INIT points at
    +0x28  0xEB000007   bl +0x2C       <- the _start stub calling it
    +0x38  0xE52DE004   push {lr}      <- this is libc _dl_relocate_object-ish tail
    +0x48  0x00001FB8   literal

There are **no trampolines**, and the build log confirms it:

    Wrote all trampolines' (0) source code to ".../trampolines.s"
    Resolved 0 trampoline patch(es)

So `subsdk0` is a nearly empty module: 88 bytes of startup stub plus a MOD0 header. It has never
contained code in any of the 40 builds in `%TEMP%` either; all of them have this same shape (569 or 577
bytes, no ELF magic, `.text` of 0x58).

## What this means

`subsdk0` cannot be what crashes the game on boot. It is not even reachable:

* the IPS has **zero** references into the `0xff33xxxx` range where a subsdk0 would be mapped
  (`0xff33xxxx` appears nowhere in the 293-byte patch), and
* the engine only loads `subsdk0` if something jumps into it.

So the fault is 100% in the IPS records. See `BOOT_CRASH_ROOT_CAUSE.md`: 11 of the 21 records point
past the end of the 8,001,591-byte NSO, and 6 of the rest overwrite ARM instructions with table
pointers.

## Correcting an earlier claim

`docs/SUBSDK0_DT_INIT_ROOT_CAUSE.md` states that `_init = 0x24` in the symbol file produced
`DT_INIT = 0x24 - 0xCD1000 = 0xff32f024` and that this was the rendering fault. The arithmetic is
right, and removing `_init`/`_fini` from `nsmbudx.sym` is still the correct thing to do (it is now
done: the generator drops `^_(init|fini|start|end|...)$`, and the symbol file has zero such entries).

But it cannot have been the cause of anything observed, because the module it applies to contains no
code and is never loaded. The rendering fault that document describes must have a different cause, and
the "step7 vs step9" table in `docs/CURRENT_STATE.md` is explained by the IPS record sets, not by
subsdk0 at all.

## Build state

The symbol file is correct now (21,585 symbols, no crt0 labels, no duplicates, none negative). The
build produces a valid `NSO0`. What it does not produce is a module with any behaviour in it, because
none of the hooked sites use trampolines -- every active hook is a patch record, so there is nothing
for the C++ in `code/powerup_modes.cpp` to attach to.

That is the real gap: `sweetdx/code/powerup_modes.cpp` is compiled (the log shows it being collected),
but if no hook references a function in it, the linker drops it and the module stays empty. Adding a
`type: hook` record that names a function in that file is what would put code in `subsdk0`.
