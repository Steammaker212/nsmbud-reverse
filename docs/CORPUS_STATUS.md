# Corpus status

Measured, not asserted. Every number below comes from a script in
`scripts/pipeline/` and can be reproduced from the IDA database.

## Function inventory

| Measure | Value |
| --- | --- |
| Functions in the database | 47,153 |
| Carrying a readable name | 9,671 (20.51%) |
| Still `sub_`/`nullsub_` | 37,482 |
| Compiling clean, `clang -std=gnu89` | 37,787 / 46,879 (80.61%) |

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
| Functions in the corpus | 46,879 |
| Compiling clean, `clang -std=gnu89` | 37,787 (80.61%) |
| Excluded: no recoverable body | 274 |

Verified independently by re-running `verify_all.py` against the published
directory, not just self-reported by the build.

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
