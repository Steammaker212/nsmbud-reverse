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

Every function whose body can be expressed without a struct layout is emitted as
readable C:

| Measure | Value |
| --- | --- |
| Functions in the corpus | 46,831 |
| Compiling clean, `clang -std=gnu89` | 37,492 (80.06%) |
| Excluded: no recoverable body | 322 |

The corpus grew from 44,054 to 46,831 units by recovering the functions that
were previously held back for using `->`. Those arrows were the one thing
blocking them, and the layouts were in the database all along: `export_types.py`
reads the local type library and gets 176 types and 1,294 members at exact bit
offsets (`StageActor` 60 members, `ColliderBase` 58, `FireballBase` 40).

`rewrite_arrows.py` replaces each `base->member` with `FIELD_U32(base, 0xNN)`,
the same macro the rest of the corpus uses for offset access. Measured coverage:
3,055 of 3,097 arrow-using functions (98.6%) resolve completely, 11,935 of
12,006 accesses (99.4%). No file in the corpus contains `->` any more.

The clean percentage is lower than the previous 83.35% because the newly
included functions are the harder ones — but the absolute number of compiling
functions rose from 36,720 to 37,492, and 46,831 functions are now present as
readable C rather than 44,054.

## What is still not decompiled to a clean compile

The remaining 9,339 units fail for reasons that are understood and listed here
rather than hidden:

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
