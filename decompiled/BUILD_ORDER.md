# Build order, and three bugs that only existed because of it

The corpus is produced by six scripts that mutate the same files. Running them in the wrong order
silently discards earlier work — no error, no warning, just a smaller result. This round was mostly
about finding that out.

## The order that works

| # | stage | why it must be here |
|---|---|---|
| 1 | `fix_asm_escapes.py` on `decompiled_clean` | must precede assembly; it is the step that emits the NEON helpers |
| 2 | `make_decompiled_corpus.py` | **rewrites** the 11 region files, discarding any include added earlier |
| 3 | `gen_data_header.py` | must precede restructure, which regenerates the prelude that mounts it |
| 4 | `restructure_includes.py` | owns `nsmbudx_prelude.h`; single type definition + measured include set |
| 5 | `add_prelude.py` | adds the `#include` line to all 475 files |
| 6 | `hoist_prototypes.py` | measured **neutral**; skipped unless `--hoist` |

`scripts/build_corpus.py` runs exactly this, and is now the supported way to rebuild.

## Bug 1 — the prelude had two owners, and the wrong one won

`add_prelude.py` wrote `nsmbudx_prelude.h` from its own `PRELUDE_TEXT`, while
`restructure_includes.py` wrote it from the split include graph. Whichever ran last won. Since the
build ran `add_prelude` last, it **silently reverted** the type split and dropped the data header:

```
250 files parse  ->  add_prelude overwrites prelude  ->  219 files parse
```

No error. The prelude still compiled; it just no longer supplied `nsmbudx_data.h`. Fixed by making
`restructure_includes.py` the sole owner — `add_prelude.py` now only reports qualified names it
discovers.

## Bug 2 — a regex that matched calls as well as definitions

To fix "conflicting types" (a function calling a lower-addressed sibling defined later in the same
file), `hoist_prototypes.py` collects definitions and emits forward declarations. Its first version
stripped leading whitespace to catch indented definitions — which made it match **every call site**
too:

```
prototypes inserted : 370     ->  33,408
```

Fixed by requiring the definition to be followed by a line that is exactly `{`. The measured payoff
of hoisting turned out to be **zero** (219 with, 219 without), so it is now off by default rather
than adding 33,000 lines for no benefit.

## Bug 3 — the data header was never mounted

235 distinct data labels (`dword_60C92E18`, `unk_60CABC94D`, …) were the largest single cause of
parse failures. A prototype cannot declare an address, so `scripts/gen_data_header.py` emits a typed
view of the true address rather than a plain `extern`:

```c
#define dword_60C92E18 (*(int32_t *)(uintptr_t)(0x60000000u + 0x00C92E18))
```

A plain `extern` would place the object wherever the linker chose, which is not what the decompiled
code means. Widths come from the database and are cross-checked against IDA's own name prefix:
**233 labels, 0 disagreements**.

## Where it stands

| | before this round | now |
|---|---|---|
| headers compiling | 7 / 7 | **9 / 9** (added `nsmbudx_types.h`, `nsmbudx_data.h`) |
| `.c` files parsing | 235 | **250** / 475 |
| executable asm lines | 0 | **0** |

## What the remaining 225 failures actually are

```
[ 90] expected identifier or '('
[ 69] use of undeclared identifier
[ 29] unexpected type name
[ 16] subscripted value is not an array, pointer, or vector
```

These are semantic, not vocabulary: a `Class::method` name used as a type, a variable that Hex-Rays
typed as scalar but is indexed, and 8 `sub_*` functions that are **not in the database at all** (so
no header could ever declare them). Each is a per-site judgement, not a rule I can apply in bulk —
and four bulk rules have already been reverted in this project, so a wrong one here would cost more
than it saves.
