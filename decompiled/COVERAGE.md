# Corpus status

Measured with clang 23.1.3, -fsyntax-only -Wno-everything -ferror-limit=0 -I decompiled/include.
Counts are compiler errors in the aggregate files, not a completeness measure: a function can compile cleanly and
still be wrong, and 31,270 functions in the database remain unnamed.

## Gates

| Gate | Value |
|---|---|
| parse (units that compile) | 467 / 479 |
| truncated functions (goto with no label) | 0 |
| inline ARM assembly | 0 |
| recovered units (named / missing / stubs / tail) | 64 / 220 / 26 / 0 = 310 |

## Aggregate errors

| File | Errors |
|---|---|
| libs/libs.c | 341 |
| systems/systems.c | 190 |
| systems/states.c | 139 |
| actors/actors_b.c | 234 |
| actors/actor_construction.c | 254 |
| actors/actors_a.c | 125 |
| systems/core.c | 111 |
| player/player.c | 33 |
| powerup/powerup.c | 29 |
| **total** | **1456** |

## Trajectory

| Round | Errors |
|---|---|
| 1 | 4301 |
| 6 | 2288 |
| 7 | 1479 |
| 8 | 1456 |

The large drops came from structural repairs, not from widening declarations: reconstructing dropped loop
terminators that had made whole functions parse as nested definitions, correcting MEMORY[] dereferences to go
through a pointer, and resolving in-file prototypes that contradicted their header. See FABRICATED_REF_CALLS.md and
NAMING_COVERAGE.md for two findings that an error count alone would never have surfaced.
