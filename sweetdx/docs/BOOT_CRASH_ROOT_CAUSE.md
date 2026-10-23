# Boot crash: the IPS writes past the end of the NSO, and 6 records overwrite code

Status: **diagnosed from the shipped patch and the retail NSO.**
Date: 2026-10-22

## What was tested

`output_test` crashes on game boot. Every earlier build in `%TEMP%` has a **byte-identical IPS**
(`MD5 234FD5EA`, 293 bytes, 40 of 40, including the previously shipped `sdx_f`). So this is not a
regression from this session -- the patch content never changed. What follows is why it cannot work.

## Finding 1: 11 of 21 records write past the end of the file

Retail NSO is 8,001,591 bytes (`0x7A1837`). Comparing every IPS record against it:

    IPS off    hook                   file                    status
    0x7AB100   execute_mode_mask      hammer_projectile.hks   PAST EOF by 39117
    0x466034   item_gate_max_mode     item_grant.hks          applies
    0x466040   item_gate_mode_mask    item_grant.hks          applies
    0x466100   item_gate_max_mode_2   item_grant.hks          applies
    0x46610C   item_gate_mode_mask_2  item_grant.hks          applies
    0x78C68C   body_reader_a          mode_tables.hks         applies
    0x78E704   body_reader_b          mode_tables.hks         applies
    0x78E8E8   body_reader_c          mode_tables.hks         applies
    0x7960F0   height_reader_a        mode_tables.hks         applies
    0x7961F8   height_reader_b        mode_tables.hks         applies
    0x7983D8   balloon_reader         mode_tables.hks         applies
    0xB494A8   height_table_0         mode_tables.hks         PAST EOF by 3832961
    0xB494B8   height_table_1         mode_tables.hks         PAST EOF by 3832977
    0xB494C8   height_table_2         mode_tables.hks         PAST EOF by 3832989
    0xB494D8   body_table_0           mode_tables.hks         PAST EOF by 3833009
    0xB494E8   body_table_1           mode_tables.hks         PAST EOF by 3833025
    0xB494F8   body_table_2           mode_tables.hks         PAST EOF by 3833037
    0xB49504   balloon_table_0        mode_tables.hks         PAST EOF by 3833053
    0xB49514   balloon_table_1        mode_tables.hks         PAST EOF by 3833069
    0xB49524   balloon_table_2        mode_tables.hks         PAST EOF by 3833081
    0xB0C428   tall_actor_type_hammer mode_tables.hks         PAST EOF by 3582965

**11 of 21 cannot apply.** The ten `*_table_*` records are the table CONTENTS; the six `*_reader_*`
records that REPOINT the readers at those tables *do* apply. So the readers are moved to tables that
were never written, and the game reads whatever bytes were already there.

## Finding 2: the six "reader" records overwrite instructions, not pointers

For the records that do land in the file, the retail word at the patched offset is CODE:

    IPS off    retail       patched      retail decodes as
    0x466034   0xE3400003   0xE3500009   mov r0,#3 / cmp-class immediate
    0x466040   0x01E40AB4   0xE30013FB   not a valid word at this alignment
    0x466100   0x0368DA00   0xE3500009   data-processing immediate class
    0x46610C   0x00300310   0xE30013FB   data-processing register class
    0x78C68C   0x4000BD50   0x003BCE98   data processing register
    0x78E704   0x780028B9   0x003BAE18   VFP/coprocessor
    0x78E8E8   0x9800C8FB   0x003BADA8   VFP/coprocessor
    0x7960F0   0x480051ED   0x003B3664   VFP/coprocessor
    0x7961F8   0x6C00CA99   0x003B3390   VFP/coprocessor
    0x7983D8   0x840058BE   0x003B11E0   load/store immediate

`mode_tables.hks` calls these "PC-relative readers" and assumes the stored word is a table offset. The
retail values have varying high nibbles (`0x4`, `0x7`, `0x9`, `0x4`, `0x6`, `0x8`) and decode as
instructions, so they are not literal-pool offsets for a single table region. Overwriting six
instructions in the boot path is by itself enough to crash.

## Finding 3: the address formula is NOT the problem

The obvious suspect is `address: hook.address + NSO_HEADER_SIZE` in `actions/compile.ts:187`, since the
NSO reports `flags = 0x3F` (all three segments marked compressed) and its three segment blobs occupy
0x7A1837 bytes on disk versus 0x1AB93A0 (~28 MB) decompressed.

That is a real general hazard, but it is **not** what is wrong here, and it is worth being precise
about why, because the naive "the offsets are uncompressed so everything is wrong" conclusion would send
the next attempt in the wrong direction:

* The file's text runs contiguously from file offset `0x101` and decodes as ARM at a 40/40 plausibility
  score, so `main` on disk is already decompressed for the region these hooks target.
* `rva + 0x100` gives a properly **4-byte-aligned** word at every one of the four `item_grant` sites
  (`0x465F34 -> 0x466034`, and reading at `+0x101` instead yields garbage). So `+0x100` is the correct
  mapping for these addresses.
* The `0xB49xxx` addresses are past the end of the file not because of a transformation error but
  because **those addresses do not exist in this image**: the file ends at `0x7A1837`, and the data
  segment header itself claims `file=0x210A53 size=0x75BA10`, which also runs past EOF. An address of
  `0xB493A8` is beyond the end of the text segment the header declares as well.

So the hook addresses in `mode_tables.hks` and `hammer_projectile.hks` were derived from a different
image (or from a decompressed/rebased view) than the `nso/main` in this tree. They are not off by a
constant; they are addresses that this file does not contain.

## Fix applied

`mode_tables.hks` and `hammer_projectile.hks` are moved to `sweetdx/hooks_disabled/`. The build now
emits a 4-record, 44-byte IPS:

    0x466034  4B  old=0xE3400003 new=0xE3500009  ok
    0x466040  4B  old=0x01E40AB4 new=0xE30013FB  ok
    0x466100  4B  old=0x0368DA00 new=0xE3500009  ok
    0x46610C  4B  old=0x00300310 new=0xE30013FB  ok

    records that cannot apply: 0 of 4

This reproduces the record set that `docs/CURRENT_STATE.md` records as the known-clean step7 build
("4 gate records only: clean, Fire Flower appears, acts correctly"). It should boot. Note that the
values written still describe intent (`cmp r0,#9`, `movw r1,#0x3fb`) rather than having been verified
against the retail instruction at that exact offset -- see the open question below.

## Open question, stated rather than guessed

`item_grant.hks` says retail is `CMP R0,#8` / `MOVW R1,#0x1FB` at both call sites. The retail words at
`0x466034` and `0x4660 40` are `0xE3400003` and `0x01E40AB4`, which are **not** those instructions.
`0x466034` is not even a legal `cmp`: `cmp r0,#8` is `0xE3500008`.

So either these four addresses are also wrong (and the "clean step7" result is clean because it patches
four bytes somewhere harmless), or the image used to derive them differs from `nso/main`. A byte search
for `0xE3500008` finds 8 occurrences and for `0xE30011FB` finds none, which suggests the constant
`0x1FB` is not stored as a `movw` immediate in this image at all.

Until that is resolved, the safest statement is: **the 4-record build is the only configuration that
has ever been reported to boot**, and it is now what the tree produces.

---

## CORRECTION (2026-10-22): the hooks were never wrong; the offset space was

This document's "Finding 3" concluded that the address formula was *not* the problem, and that the `0xB49xxx` and
`item_grant` addresses "do not exist in this image". Only the second half was right about the table addresses.

The NSO has `flags = 0x3F`: all three segments are LZ4-compressed. Once the text segment is decompressed, every
`item_grant` address resolves to exactly the instruction the hook expects:

    RVA 0x465F34  0xE3500008  CMP R0, #8        (hook says: CMP R0, #8)     exact
    RVA 0x465F40  0xE30011FB  MOVW R1, #0x1FB   (hook says: MOVW R1, #0x1FB) exact
    RVA 0x466000  0xE3500008  CMP R0, #8                                   exact
    RVA 0x46600C  0xE30011FB  MOVW R1, #0x1FB                               exact

and all 121 words of the enclosing function match IDA byte for byte (`0 mismatches`). The retail values this document
listed as "not those instructions" were read from the COMPRESSED file at `0x100 + RVA`, which is a different place.

So the `item_grant` hooks are correct, and `0x100 + RVA` must not be used on a compressed NSO. See
`BOOT_CRASH_COMPRESSION_ROOT_CAUSE.md` for the proof and the two safe ways to apply them. A verified 44-byte IPS for
the decompressed image is at `output_verified/item_grant_decompressed.ips`; its four records were each checked against
the retail word before being written (MD5 33A3EC5BCBD88F5E39A9028EF5A2F120).

The `mode_tables.hks` records remain genuinely invalid: `0xB49xxx` is past even the decompressed data segment.
