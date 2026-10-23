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
| `recovered_missing.c` | 1,351 | 2,683 |

`scripts/repair_cxx_leftovers.py` removed the last 78 `::` runs (identifiers that had been truncated at an embedded
`(void)`) and rewrote 56 subscripted data macros to the pointer form the corpus uses, taking `recovered_missing.c`
from 2,802 to 2,683.

The remaining errors need class layouts, and **the database does not have them**. `main.i64`'s local type library
holds 208 ordinal slots and zero struct, union and enum definitions — dumping it produced
`/* Local types from main.i64: 0 definition(s) */`. The corpus has no layouts for these classes either, because its
own functions only ever passed them as opaque pointers.

So closing these two units fully means recovering field layout from the code that reads each field — real analysis
work, not a formatting pass. Until then the bodies stay, because they are correct and readable, and they compile the
moment layouts exist.

## Naming: why 89.9% of functions are still `sub_*`

     corpus definitions   34,774
     named                 3,504  (10.1%)
     sub_XXXXXXXX         31,270  (89.9%)

This is not a naming backlog that can be worked through. `main.i64` contains 47,158 functions and only **2,920**
carry a meaningful name — the other 44,238 are IDA auto-names (`sub_` 35,414, `nullsub_` 6,710, `j_` 2,114). The
corpus has already adopted every name the database has: of the 2,400 names shared between the two, 2,397 sit at
identical addresses.

The symbol file does not add coverage either. It holds 2,950 mangled C++ names; 2,097 already appear in the corpus,
and of the 853 that do not, only 73 land on an address the corpus labels `sub_`, and those 73 are synthetic
`_ZN..._helper` labels rather than real symbols.

Further naming therefore requires inferring names from behaviour or from vtable ownership — a different kind of
work from applying a symbol table.

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
