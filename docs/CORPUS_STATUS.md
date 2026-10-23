# Corpus status

Measured, not asserted. Every number below comes from a script in
`scripts/pipeline/` and can be reproduced from the IDA database.

## Function inventory

| Measure | Value |
| --- | --- |
| Functions in the database | 47,153 |
| Carrying a real name | 7,522 (15.95%) |
| Still `sub_`/`nullsub_` | 39,631 |
| Code bytes under a real name | 24.20% |

Names come from the Deluxe database itself. Neither the shipped symbol file
(`sweetdx/symbols/nsmbudx.sym`) nor codedx's `main.sym` adds a name that the
database does not already carry: the symbol file lands on 7,536 function starts
but contributes 0 new names, and codedx's 413 entries contribute 0. Their value
is in headers and the `ProfileId` enum, not in naming.

### How names are earned

Only two sources have produced new names so far, both measured:

1. **The database's own analysis.** 7,466 names carried over from IDA and the
   symbol file.
2. **Vtable slot ownership.** 55 names, from reading the vtable words out of the
   ELF and recording which class owns each slot (`Class__vf<byte offset>`).

A function keeps its `sub_` name until evidence arrives. There is no
`sub_XXXXXXXX` renaming for cosmetic reasons.

## Decompiled C

Every function with a layout-independent body is emitted as readable C:

| Measure | Value |
| --- | --- |
| Functions with layout-independent bodies | 44,054 |
| Excluded: bodies that dereference named struct members | 3,099 |
| Compiling clean, `clang -std=gnu89` | 36,720 (83.35%) |

The 3,099 excluded functions are not missing — they exist in the database and
their Hex-Rays output is in `_work/export/all_funcions.jsonl`. They are held back
from the C corpus because their bodies use `->` on a struct whose layout has not
been recovered, and emitting them with a guessed layout would produce C that
compiles but is wrong. `data/recovered/member_evidence.json` records what *is*
known about those structs: 57 classes, 887 member observations, 524 of them real
names.

## What is still not decompiled to a clean compile

The remaining 7,322 functions fail for reasons that are understood and listed
here rather than hidden:

| Category | Count (per 1,500 sampled) | Cause |
| --- | --- | --- |
| Array assigned as scalar | 41 | A global that the decompiler treats as an array is assigned a value. Resolved by scalar detection; residual cases remain. |
| Conflicting types | 22 | Two database functions share a name with different signatures. |
| Incomplete type | 16 | A type the decompiler named but never defined. |
| Not assignable | 11 | An lvalue the decompiler invented. |
| Undeclared identifier | 10 | A name only reachable through a struct the corpus does not define. |

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
