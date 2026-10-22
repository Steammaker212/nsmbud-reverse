# Making the corpus actually compile

Two things were claimed by this repository and were not true: that the generated headers were usable,
and that the `.c` files were readable C. Both were checked with `clang -fsyntax-only`, and both failed.

## Headers: 1 of 6 compiled

```
actors.h:   FAIL  unknown type name '_BYTE'
libs.h:     FAIL  unknown type name 'sead'
player.h:   FAIL  unknown type name 'sead'
powerup.h:  FAIL  unknown type name '_DWORD'
systems.h:  FAIL  unknown type name '_DWORD'
structs.h:  OK
```

The generator copied Hex-Rays signatures verbatim, so the headers used three things nothing declared:
IDA's scalar aliases (`_BYTE`, `_DWORD`, `_BOOL4`), ARM NEON lane types (`float32x4_t`, `int32x4_t`),
and C++-qualified names (`sead::IDisposer`, `nn::atk::SoundActor`).

Fixed in the generator, not by hand-patching output:

* IDA aliases defined at IDA's exact widths
* NEON lane types defined with the correct lane count and width
* `a::b::C` → `struct a_b_C`, an **opaque** forward declaration. Deliberately incomplete: the
  recovered layouts are in `structs.h`, and inventing a second definition would collide with them.
* `#include <stdbool.h>` for `bool`, and `structs.h` for the real types

**All 6 now compile.**

## Per-function `.c` files: 17 of 475 parsed

Each is a bare function with no includes, so it hit the same vocabulary gap. Rather than duplicate a
200-line prologue into 475 files, `scripts/add_prelude.py` writes one `nsmbudx_prelude.h` and prepends
a single `#include` to each file.

**475 → 219 parse.** Baseline was 17.

Three bugs had to be fixed to get there, each found by reading the actual error:

**A blanket `::` rewrite destroyed function names.** `int __fastcall ActiveCollider::init(...)` became
`int __fastcall struct ActiveCollider_init(...)`. Only a qualified name used as a *type* may be
rewritten, so the type pattern now requires a following `*` — the only way these signatures use a
qualified type. Function names get their `::` flattened to `_` separately, preserving class and method.

**`MEMORY[...]` had no definition.** The decompiler writes `MEMORY[0xC99D70]` for a raw load at an
image-relative address; the prelude now expands it to `((uint32_t *)(uintptr_t)0x60000000)`.

**`nullptr` in C.** 23 occurrences; mapped to `0`.

## What still fails, and why it is not a syntax problem

The remaining 256 files fail on **undeclared identifiers**, not grammar:

```
CollisionMgr_process.c: use of undeclared identifier 'sub_6015DF58'
CollisionActor_ctor.c:  use of undeclared identifier 'StageActor'
```

A single-function `.c` calls other functions and references other types that live in other files.
Making those parse needs a whole-program include graph — every prototype from the generated headers
declared up front — which is a different and larger change than supplying the vocabulary. Stating
this plainly beats claiming a compile that does not happen.

The aggregate region files (`actors/actors_a.c`, `libs/libs.c`, …) fail on this too: they reference
data labels such as `dword_60C92E18` that exist only as addresses.

## A destructive mistake I made and reverted

Clearing `decompiled/*.c` to re-run cleanly removed **464 per-function files**, which are written by a
different step than the one I was re-running. `git checkout -- decompiled` restored all 475 and the
17/475 baseline was re-measured before proceeding. Nothing was lost, but the recovery depended on
those files being committed.

## Verified state

```
headers:  6 / 6 compile
.c files: 219 / 475 parse as C   (was 17)
asm:      0 executable lines     (pure C, unchanged)
corpus:   475 .c, 48.8 MB
```
