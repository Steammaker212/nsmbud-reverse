# Verified boot artifact

    output_verified/atmosphere/contents/0100EA80032EA000/exefs/main

13,084,504 bytes, MD5 `F53B6A05EC5A82454AFF19A9EC186C84`.

This is the retail `main` with its three LZ4 segments decompressed, the four `item_grant` guard patches applied at
their correct offsets, and the `flags` word set to 0. There is **no `exefs_patches` IPS in this tree on purpose**: the
patch is already inside `main`, which is the point — a loader cannot misplace an offset that was applied to the right
image in the first place.

## How to install

Copy the `atmosphere` directory to the root of the SD card and boot the game. Do not also install an
`exefs_patches` IPS for this title; it would be applied on top of an already-patched, uncompressed image.

## What was verified before writing it

Every claim below was checked by reading the file back and comparing bytes, not by trusting the writer.

| check | result |
|---|---|
| magic | `NSO0` |
| flags | `0x0` (uncompressed), was `0x3F` |
| build ID at 0x40..0x50 | `AEE6DCCC06D9C05B42061E2019123A61`, identical to retail |
| header bytes 0x50..0x100 | identical to retail |
| text segment | 0x9AE990 bytes, reads back identical |
| rodata segment | 0x210A53 bytes, reads back identical |
| data segment | 0x0BB274 bytes, reads back identical |
| RVA 0x465F34 | `0xE3500009` = `CMP R0, #9` |
| RVA 0x465F40 | `0xE30013FB` = `MOVW R1, #0x3FB` |
| RVA 0x466000 | `0xE3500009` = `CMP R0, #9` |
| RVA 0x46600C | `0xE30013FB` = `MOVW R1, #0x3FB` |

Each of the four words was checked to equal its expected retail value (`0xE3500008`, `0xE30011FB`) **before** being
replaced. A stale or unexpected image aborts the build rather than producing a silently wrong patch.

## Two header mistakes made and corrected while building this

Recorded because both would have produced an unbootable image that looks fine at a glance:

1. **Offset 0x40 is the build ID, not a bss size.** The first attempt wrote the BSS dword there. It happens that the
   retail bytes at 0x40 are exactly the build ID constant sweet-dx uses
   (`AEE6DCCC06D9C05B42061E2019123A61`), which is how the error was caught — the value was too familiar to be a
   size. A NSO header is 0x50 bytes; there are no `buildModuleIdOffset`/`buildModuleIdSize` fields at 0x48/0x4C, and
   writing to them corrupts the ID.
2. **The header must otherwise be copied verbatim.** 0x50..0x100 carries per-module and ASLR data that is not zero.
   Only 0x0C (flags) and the three 16-byte segment descriptors at 0x10..0x3C may change.

## What this does not establish

The ten `*_table_*` records in the disabled `mode_tables.hks` target addresses around `0xB49xxx`, which lie past even
the decompressed data segment (which ends at `0x60C611AC`, i.e. RVA `0xC611AC`). Those records are addressed to a
different image and stay disabled; this artifact does not include them and makes no claim about them.
