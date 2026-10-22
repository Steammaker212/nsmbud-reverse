# ARM assembly is gone from the corpus

The objective's final clause is that everything be decompiled to readable C with no ARM assembly. This
round closed the last two gaps.

## `QB_pipeline_summary.c` was never code

It was 124 lines of `//` annotations with **zero non-comment lines**, sitting in a `.c` file. It
documented the question-block pipeline (tables, item grant handlers, block-family field offsets) and
was useful — just misfiled. Renamed to `QB_pipeline_summary.md`; content unchanged. That was not an
assembly problem at all, only a mislabelled one.

## `sub_60916CB4` — the one function Hex-Rays refuses

Hand-reconstructed to C. It is the single function out of 49,470 that Hex-Rays 9.3 declines, even
with the `LDREX`/`STREX` pair neutralised. The disassembly is kept as
`.rea/sub_60916CB4_disassembly.txt` for reference; the corpus now carries only C.

What it is: **NVN (Switch GPU driver) layer code.** Evidence — its four indirect calls go through
`off_60C790DC`, `off_60C790E4`, `off_60C78B38`, `off_60C790D4`, all of which are resolved by
`Nvn_resolveDeviceFunctions`; its callee `sub_60913708` is a GPU state selector; it is called from
exactly one site (`sub_6091A0C8` at `0x91A2E0`).

The reconstruction is annotated line-by-line with the instruction it came from, so every statement is
checkable rather than asserted. Shape of the function:

```c
count    = *(u32*)(a3 + 0x100);
stored   = *(u16*)(a3 + 0xDC);
distance = count - stored;
limit    = *(u32*)(a3 + 0xD4);
base     = *(u8**)(a3 + 0xD8);
stride3  = distance * 3;
if (limit > distance) base += stride3 << 2;      /* distance * 12 */
/* atomic-acquire spin on slot at base+8 */
if ((stride3 & 1) && (*(u32*)(a1 + 0x28) & 0x100000))
{
    kind = *(u16*)(a3 + 0x3C);                    /* selects a 1.0f slot either way */
    gotA = desc_getA(a3);
    gpu_set_state(a2, 7);
    bound = max(gotA, *(u16*)(a3 + 0x1A));
    n     = max(*(u16*)(a3 + 0x18), 1);
    channel = *(void**)(a2 + 0xC0);
    dispatch_1(channel, 0, 0, n, 0, bound);
    dispatch_2(channel, 0, 0, n, 0, bound);
    dispatch_3(channel, 0, a3 + 0x40, n, 0, bound);
    arg3 = desc_getB(a3) ? 0xFF : 0;
    final(channel, 1, 0, arg3, scale);            /* tail call, scale in S0 */
}
```

Both helpers are reconstructed from their (tiny) bodies too:

```c
/* sub_609200A0 */ if (*(u16*)(d + 0x22) == 3) return *(u16*)(d + 0x1A); return 1;
/* sub_609200E0 */ return (u16)(*(u16*)(d + 0x3C) - 0x3D) < 2;             /* 0x3D or 0x3E */
```

Two places where the C is honest about a limit rather than pretending:

- The `LDREX`/`STREX` pair is modelled with `__atomic_load_n`/`__atomic_store_n`. The original clears
  bit 0 only in the *comparison*, not in the stored value; the comment says so, and notes that for
  this single-caller driver path the observable behaviour is identical.
- `scale` reaches the final call in VFP register `S0`, not in a general register. It is expressed as a
  `float` parameter so the value is not silently dropped.

Compiles clean with `clang -fsyntax-only -Wall`: **zero warnings.**

## Verification

Every `.c` file in the corpus was scanned with all comments stripped first, so assembly *text* quoted
inside commentary is not miscounted as code (an earlier scan without that step produced a false
"failure" on files that merely record their own instruction provenance):

```
asm matches in CODE (comments stripped): 0
ZERO executable arm asm in the entire decompiled corpus
```

## What this does and does not prove

It proves no ARM assembly remains anywhere in `decompiled/`.

It does **not** prove every function is decompiled — Hex-Rays' output covers the corpus, but the corpus
itself is a selected subset, not all 49,470 functions. Naming coverage is 32.6% by count and 19.6% by
bytes. Those are the remaining gaps, and they are about *how much* is decompiled, not about assembly
still mixed into it.
