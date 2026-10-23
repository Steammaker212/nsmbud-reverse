# Corpus status

Measured, not asserted. Every number below comes from a script in
`scripts/pipeline/` and can be reproduced from the IDA database.

## Function inventory

| Measure | Value |
| --- | --- |
| Functions in the database | 47,153 |
| Carrying a readable name | 9,671 (20.51%) |
| Still `sub_`/`nullsub_` | 37,482 |
| Compiling clean, `clang -std=gnu89` | 37,789 / 45,148 (83.70%) |

Names come from the Deluxe database itself. Neither the shipped symbol file
(`sweetdx/symbols/nsmbudx.sym`) nor codedx's `main.sym` adds a name that the
database does not already carry: the symbol file lands on 7,536 function starts
but contributes 0 new names, and codedx's 413 entries contribute 0 function
names. Their value is in headers, the `ProfileId` table, and 31 data symbols.

### How names are earned

Three measured sources, no guesses:

1. **The database's own analysis.** Names carried over from IDA and the symbol
   file.
2. **Vtable slot ownership.** 55 names, from reading the vtable words out of the
   ELF and recording which class owns each slot (`Class__vf<byte offset>`).
3. **Itanium demangling.** 1,881 names, from decoding the mangled names the
   database kept verbatim: `j__ZdlPv_1` becomes `operator_delete_9700`,
   `j__ZN12BowserJrBase6onDrawEv` becomes `BowserJrBase__onDraw__thunk`.

A function keeps its `sub_` name until evidence arrives. There is no
`sub_XXXXXXXX` renaming for cosmetic reasons.

## Decompiled C

Every function whose body can be expressed without a struct layout is emitted as
readable C:

| Measure | Value |
| --- | --- |
| Functions in the corpus (after veneer collapse) | 45,148 |
| Compiling clean, `clang -std=gnu89` | 37,789 (83.70%) |
| Excluded: no recoverable body | 274 |

The 47,153 functions in the database collapse to 45,148 `.c` units because
1,789 `operator_delete` veneers became one maplist (see "Stub collapse"), and
the remaining difference is the 274 units with no recoverable body.

The compile-clean figure is measured by
`scripts/pipeline/measure_compile_failures.py`, which also buckets the 7,359
failures by cause; see [`COMPILE_FAILURES.md`](COMPILE_FAILURES.md).

Verified independently by re-running `verify_all.py` against the published
directory, not just self-reported by the build.

### Does the C actually match the binary?

Compiling proves a body is well-formed, not that it belongs to the address in
its filename. `verify_codegen.py` disassembles each sampled function out of the
ELF and checks that the calls the C claims are present as branch instructions.

| Check | Result |
| --- | --- |
| Sampled functions with calls and disassemblable code | 419 |
| C calls corroborated by a BL/B in the code | 418 (99.8%) |

The one exception, `nn__mii__GetExpressionCount`, calls only itself, so its
body has no distinct call target to find.

Getting this number honestly took three fixes to the checker itself, and each
bug had been reporting a false failure:

- Branch decoding masked a nibble instead of the top byte, so every veneer
  (`0xEA......`, an ARM `B`) looked like it contained no call.
- `range(0, len(code) - 4, 4)` is empty for a 4-byte body — exactly the thunks
  under test.
- IDA pseudo-calls (`HIDWORD`, `vaddq_f32`, `COERCE_FLOAT`) are macros and
  intrinsics that inline to no branch.

The first measurement said 83%, then 98.9%, then 99.8%. The wrong numbers
looked just as plausible as the right one.

### The `->` problem, and how it was solved

Hex-Rays emits `base->member` because the database has struct types. Those types
are in the local type library, so `export_types.py` reads them out: 176 types,
1,294 members at exact bit offsets.

`rewrite_arrows.py` replaces each access with `FIELD_U32(base, 0xNN)`, walking
multi-hop chains like `this->_.vtable` by accumulating each hop's offset within
the previous hop's type (`StageActor.field_248` at 0x248 plus `.y` at 4 =
`FIELD_F32(this, 0x24C)`). Measured coverage: 11,934 of 12,058 accesses (98.9%).

Three defects were found and fixed by measuring rather than assuming:

- A chain pattern that also matched plain `a.field` accesses counted 18,000
  non-problems as failures and silently dropped 996 functions from the corpus.
  A chain must begin with `->`.
- `this` is not declared in a function body, so its type had to be taken from
  the definition's own `StageActor *this` parameter. Without that, the whole
  StageActor family looked unresolvable.
- An earlier version rewrote only the first arrow of `a1->_._._.vtable`,
  emitting 984 malformed expressions like `FIELD_U32(a1, 0x0)._._._`. The
  published corpus is now checked for this pattern and contains 0.

## What is still not decompiled to a clean compile

The remaining 7,359 units (16.30%) fail for reasons that are understood and
listed here rather than hidden. The counts come from
`measure_compile_failures.py`, which buckets each unit by the *kind* of its
first error; [`COMPILE_FAILURES.md`](COMPILE_FAILURES.md) has the full
18-category breakdown with per-category single-error counts.

| Category | Cause |
| --- | --- |
| Array assigned as scalar | A global the decompiler treats as an array is assigned a value. |
| Conflicting types | Two database functions share a name with different signatures. |
| Incomplete type | A type the decompiler named but never defined. |
| Not assignable | An lvalue the decompiler invented. |
| Undeclared identifier | A name only reachable through a type the corpus does not define. |

## Provenance

- `main.i64` is the authoritative database (IDA 9.3, 47,148 functions). It was
  authored by RicBent.
- `convertedmain.rebased.elf.i64` is a superset in analysis (49,470 functions,
  5,688 named) over the identical binary, but every extra name was cosmetic
  (`_0` versus `_0_0`), so nothing was adopted from it.
- codedx is GPL-3.0 and is used as a reference only, never vendored.
- REA drives the live IDA session; `rea doctor` reports the provider available.

## Reproducing

```sh
python scripts/pipeline/export_all.py          # Hex-Rays -> JSONL
python scripts/pipeline/normalize_c.py         # field access -> macros
python scripts/pipeline/generate_corpus.py     # grouped C + headers
python scripts/pipeline/emit_per_function.py   # one unit per function
python scripts/pipeline/close_undeclared.py    # close the symbol set
python scripts/pipeline/verify_all.py          # clean count
```
