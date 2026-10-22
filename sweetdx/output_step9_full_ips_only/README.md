# TEST BUILD: step9 -- full hook set, IPS only, no subsdk0

All 36 records our project currently defines, delivered by the IPS alone.

    atmosphere/exefs_patches/0100EA80032EA000/AEE6DCCC06D9C05B42061E2019123A61.ips   428 bytes

No `subsdk0`, no `contents` folder.

## Why this build exists

Our project defines zero `hook` and zero `call` hooks -- 20 `instr` and 16 `data`. Only
`hook` and `call` need trampolines, and trampolines are the only thing `subsdk0` carries.
So nothing in this project requires the module, and sweet-dx writes it regardless. Dropping it
removes the one exefs artifact that was present in every failing test.

## Contents by segment

    26 records in .text     reader repoints, mode guards, gate widen, projectile setup
    10 records in .rodata   three relocated 11-entry tables + tall_actor_type

The .rodata group is new in this build; no earlier failing build contained any of them.

## Deploy

Remove `atmosphere\contents\0100EA80032EA000\exefs\subsdk0` if present, then copy this
`atmosphere` folder over the SD card root.

## Do not read too much into a failure here

If step 7 renders correctly and this one does not, the difference is the `.rodata` records,
which is a separate and much narrower question. Test step 7 first.