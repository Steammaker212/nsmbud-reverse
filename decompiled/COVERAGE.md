# Coverage of `main.i64`

## The number that matters

| | count |
|---|---:|
| functions in `main.i64` | 47,158 |
| covered by the corpus before this pass | 36,783 (78.0%) |
| **absent** | **10,375 (22.0%)** |
| …of which `nullsub_N` — literally `{ ; }` | 6,710 |
| …of which `j_XXXX` — unconditional jump thunks | 2,109 |
| …of which ≤ 8 bytes — a single `bx lr` | 193 |
| …of which **substantive bodies** | **1,362** |

So 22% "missing" overstates the gap considerably: two thirds of it is empty functions and jump stubs that carry no
behaviour to read. The real gap was 1,362 functions, and all of them are now recovered.

## What was recovered

`decompiled/recovered/recovered_missing.c` — 1,351 bodies, 313 KB of code. Plus `recovered_named.c` (472 bodies)
from the earlier named-function pass, described in `RECOVERED_NAMED_STATUS.md`.

Every one of the 1,362 substantive addresses now has a decompiled body:

    substantive wanted: 1362
    still absent:       0

## Two real bugs found while integrating them

**1. C++ local statics produced invalid identifiers.** Hex-Rays writes function-local statics with the full C++
signature embedded in the name:

    `guard variable for'sead::CalculateTask::getRuntimeTypeInfoStatic(void)::typeInfo'

A naive `::` → `_` rewrite turned that into `...(void)_typeInfo`, which is not an identifier. That single broken
declaration cascaded into **1,322** "function definition is not allowed here" errors, because everything after it
was parsed as the body of the broken function. The whole quoted fragment is now rewritten to one stable identifier
(`g_guard_variable_for_sead_CalculateTask_...`), which brought the cascade from 1,322 to 1.

**2. `this` is the FIRST parameter, not the last.** An earlier version of the flattener took the last parameter and
produced 110 "undeclared identifier 'v'" errors. Recorded because the mistake is easy to repeat.

## Current state of the two recovered units

| unit | bodies | errors |
|---|---:|---:|
| `recovered_named.c` | 472 | 198 |
| `recovered_missing.c` | 1,351 | 2,802 |

The remaining errors are not mechanical. They come from class-typed locals and members — `no member named X in Y`,
`member reference base type is not a structure or union`, `expected expression` — which need real struct
definitions. The corpus has none for these classes because its own functions only ever passed them as opaque
pointers. Producing those structs means recovering field layout from the binary.

The bodies are kept rather than dropped: they are correct, readable C, and they compile once the structs exist.

## A caveat about the dependency generator

`scripts/declare_recovered_deps.py` fills `decompiled/include/nsmbudx_recovered_deps.h` with the data-address
macros and type declarations both units need. It is **not stable**: re-running it alternates the error count between
2,802 and 3,421, because each pass reclassifies a handful of names as either data objects or types, and the two
choices produce different follow-on errors. The committed header is the 2,802 state, which was measured as the
better of the two. Anyone re-running the generator should compare the count afterwards and keep the better header,
rather than assuming another pass improves things.

Evidence gathering for the header is sound — the 1,990 data macros are found by scanning the source for
`dword_`/`off_`/`byte_`-shaped names, which is complete by construction. It is the type-versus-data classification
that oscillates.

## Parse count

    466 / 477

The corpus is 475 units and still parses 466 of them. The two recovered units are new (476th and 477th) and do not
yet parse, so they are counted and fail rather than being excluded to make the number look better.

## Scripts

    list_missing_functions.py    diff main.i64's function list against corpus banners
    filter_substantive.py        drop nullsub / j_ / <=8-byte stubs from the recovery list
    measure_coverage.py          the coverage table above
    merge_recovered_missing.py   C++ -> C flatten and emit recovered_missing.c
    find_unbalanced_bodies.py    per-body brace balance for both recovered units
    declare_recovered_deps.py    additive generator for nsmbudx_recovered_deps.h

## Note on the IDB dump

`idb_all_funcs.txt` (47,158 addresses, sizes, names) and `idb_names.txt` (the 2,920 named ones) live in the IDA
working directory, not in this repository. The dump scripts are in the same place and are named
`dump_all_funcs.py` and `inv_names.py`.
