# Boot crash: the NSO is compressed, so RVA + 0x100 patches the wrong bytes

Status: **root cause proven by decompressing the shipped NSO and comparing against IDA.** Date: 2026-10-22.
Supersedes the compression discussion in `BOOT_CRASH_ROOT_CAUSE.md`, which reached the right question and then
answered it the wrong way round.

## The proof

`sweetdx/nso/main` reports `flags = 0x3F`, which means **all three segments are LZ4-compressed**. Decoding each
segment reproduces its declared size exactly:

    text    block 0x63FAB8 -> 0x9AE990  (declared 0x9AE990)  OK
    rodata  block 0x11BE57 -> 0x210A53  (declared 0x210A53)  OK
    data    block 0x45E27  -> 0xBB274   (declared 0xBB274)   OK

With the text segment decompressed, the four hooks in `item_grant.hks` resolve to exactly the instructions the hook
file says they are:

    VA 0x60465F34  RVA 0x465F34  word 0xE3500008   CMP R0, #8      <- hook expects this
    VA 0x60465F40  RVA 0x465F40  word 0xE30011FB   MOVW R1, #0x1FB <- hook expects this
    VA 0x60466000  RVA 0x466000  word 0xE3500008   CMP R0, #8      <- second call site
    VA 0x6046600C  RVA 0x46600C  word 0xE30011FB   MOVW R1, #0x1FB <- second call site

And over the whole enclosing function, every one of its 121 words in the decompressed image is **identical** to
IDA's: `checked 121 words, 0 mismatches`.

So:

* the hook **addresses** are correct;
* the hook **intent** (`cmp r0,#8` -> `cmp r0,#9`, `movw r1,#0x1FB` -> `movw r1,#0x3FB`) is correct and matches the
  decompiled guard exactly (see below);
* the patch **offset arithmetic** is wrong.

## Why every offset is wrong

`compile.ts` writes to `hook.address + NSO_HEADER_SIZE`. In a compressed NSO, `file offset = 0x100 + RVA` holds only
while the data before the target happens to be stored uncompressed. Here it is not, so all four records land in the
middle of unrelated bytes:

    wants to patch   RVA 0x465F34  (decompressed: 0xE3500008)
    actually writes  file 0x466034 (compressed:   0xE3400003)

Four random words overwritten inside the item-resolution path of the boot sequence is a crash.

## Why the "4-record build is the only one reported to boot" reasoning was unsafe

It inferred correctness from a report that the build booted. But the four bytes written were *garbage derived from a
real instruction interpreted at the wrong file offset* — they are not `cmp r0,#9` at all. Any build of this shape
patches whatever happens to sit at those compressed offsets. One of them landing on a harmless byte is luck, not
evidence, and it changes as soon as the retail NSO (or its compression) differs. The earlier note that
`0xE30011FB` "finds none" in the file is explained by the same fact: absent from the *compressed* file, present in
the *decompressed* text 0 times as a literal search because it is `MOVW`-encoded alongside its immediate, which is
why the decompressed-image check above is the meaningful one.

## What the guard actually does — and why the hook is correct

The decompiled function (RVA `0x00465E4C`, our name `ItemId_resolveGuardedByPlayerMode`) contains:

```c
if ( v6
  && (**(int (__fastcall ***)(int, int))v6)(v6, 13087608) == 1
  && (v7 = *(_DWORD *)(v6 + 1320) - 1, v7 <= 8)     /* mode-1 <= 8, i.e. mode <= 9 */
  && ((0x1FBu >> v7) & 1) != 0 )                    /* allowed modes 1..9 except 4 and 5 */
```

`0x1FB` is binary `1 1111 1011` — allowed modes, bit `n` meaning mode `n+1`:

    mode 1  bit0  1   allowed
    mode 2  bit1  1   allowed
    mode 3  bit2  0   BLOCKED
    mode 4  bit3  1   allowed
    mode 5  bit4  1   allowed
    mode 6  bit5  1   allowed
    mode 7  bit6  1   allowed
    mode 8  bit7  1   allowed
    mode 9  bit8  1   allowed

That is exactly a mask to widen when adding a power-up: `0x1FB -> 0x3FB` sets bit 2, allowing **mode 3**, and
`cmp #8 -> cmp #9` raises the ceiling by one. The hook is well-formed; it has never once been applied.

## The fix, stated as an invariant

Patching a compressed NSO requires decompressing the segment, applying the patch at `RVA`, recompressing, and
rewriting the segment headers when the compressed size changes — the later segments move, so each following segment's
`file` offset and every size in the header must be updated. Writing at `0x100 + RVA` into the on-disk file cannot
work and must not be used for any NSO whose `flags` has the corresponding bit set.

Two safe implementations, in order of preference:

1. **Decompress once, patch the decompressed image, launch the decompressed image.** Atmosphere accepts an
   uncompressed `main` (`flags = 0`), and a build like this was already reported to boot earlier in the project.
   This removes the recompression step entirely and makes the offsets trivially correct.
2. **Patch in place with recompression.** Decompress the text segment, apply the four words, recompress, then
   recompute the `rodata`/`data` file offsets and the header. More work and more room for a size-related mistake,
   for no gain over option 1.

For the four hooks specifically, a third option exists and is worth stating because it is smaller than all of them:
the guard's two immediates (`#8` and `#0x1FB`) live in `MOVW`/`CMP` instruction encodings, which the patch already
knows exactly (`0xE3500009`, `0xE30013FB`). Only the **offset computation** has to change; the values are right.

## What this does NOT establish

The ten `*_table_*` records in the disabled `mode_tables.hks` target addresses around `0xB49xxx`, which are far past
the end of a file whose data segment ends at `0x60C611AC`. Those are still addressed to a different image and remain
disabled. The four `item_grant` records are the ones this document proves out.
