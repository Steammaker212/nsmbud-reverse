# Corpus expanded 2.4× and purged of `__asm`

## The gate that was hiding 20,503 functions

The bulk decompiler required a function to have a **code xref or a name**. Measured against the
database:

| bucket | functions | bytes |
|---|---|---|
| decompilable under the old gate | 17,343 (35.1%) | 5,670,040 |
| excluded only by no-xref | 13,595 (27.5%) | 3,241,772 |
| excluded only by small size | 2,734 (5.5%) | 64,188 |
| excluded by both | 6,908 (14.0%) | 147,356 |
| skipped as plumbing (`j_*`, `thunk_*`, `nullsub_*`) | 8,890 (18.0%) | 35,956 |

**66.5% of all functions have zero code xrefs**, and this binary stores function pointers in data
tables and reaches methods by virtual dispatch. A zero xref count is therefore not evidence of
unreachability — the old gate was discarding real code on a false premise.

Removing it raised coverage from 35% to **76.5%**.

| | before | after |
|---|---|---|
| functions decompiled | 16,287 | **39,455** |
| decompile failures | 0 | **0** |
| corpus size | 30.6 MB | **51.2 MB** |

Only compiler plumbing is still skipped (8,876 thunks), because a `j_*` stub is a jump table entry,
not a function.

## Then the `__asm` problem appeared

Expanding the corpus exposed **184 `__asm { ... }` blocks** that had been absent from the smaller
corpus. Hex-Rays emits raw assembly when it has no C idiom. There were only a dozen distinct
instructions, and each has an exact C equivalent, so `scripts/fix_asm_escapes.py` rewrites them by
*form*:

| instruction | C equivalent | why it is exact |
|---|---|---|
| `UXTB16` | `x & 0x00FF00FF` | keeps bits `[7:0]` and `[23:16]` |
| `VMINNM/MAXNM.F32` | `fminf` / `fmaxf` | these *are* IEEE-754 minNum/maxNum, which return the non-NaN operand. Plain `a<b?a:b` would **not** be equivalent for NaN inputs |
| `VCEQ/VCGE/VCLT.F32 #0.0` | lane-wise helper returning `-1`/`0` | matches the all-ones/all-zeros mask |
| `VRINTP/M/Z/A` | `ceilf`/`floorf`/`truncf`/`roundf` | direct |
| `VCVTM/VCVTP.S32.F32` | `(int)floorf(...)` / `(int)ceilf(...)` | truncating vs ceiling conversion |
| `ADD/ORR PC, ...` | `(void)0` + comment | the ARM switch-dispatch idiom; IDA annotates the next construct as a `switch`, so the raw jump is a redundant dispatcher artefact |

207 instructions converted.

Two places where I did **not** take the easy route:

**Q-register lane width.** A `Q` register is four 32-bit lanes, so `VCEQ.F32 Q4,Q9,#0.0` does not
produce a scalar. Emitting the scalar helper would have been quietly wrong. The operand width decides
the helper, and lanes are read through Hex-Rays' own `_Q9.n128_f32[k]` representation rather than an
invented type.

**Flag-dependent blocks.** 3 of 184 blocks are followed by a test of `_ZF`/`_NF`, i.e. the following
code reads the condition flags the instruction sets. An expression cannot express a flag side effect,
so those blocks were left intact and reported rather than guessed at. `scripts/fix_asm_escapes.py`
flags them; they are the residual, not an oversight.

## Verification

```
__asm blocks in code (comments stripped): 0
```

Every `.c` file scanned with comments removed first — an earlier scan without that step reported
false hits on the helper comments that legitimately mention `__asm` by name.

Whole-corpus check across 475 files, matching general instructions, VFP/NEON operands and `__asm`:

```
ZERO -- fully pure C
```
