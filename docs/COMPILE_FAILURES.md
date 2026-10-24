# Compile failures: the measured number
Every number on this page was produced by running clang over the
published corpus. Nothing here is estimated. Reproduce it with:
```sh
python scripts/pipeline/measure_compile_failures.py
```
Command per unit:
```
clang -fsyntax-only -std=gnu89 -Wno-everything -ferror-limit=0 -I decompiled/src/include <unit>
```
- clang: `clang version 23.1.3 (https://github.com/llvm/llvm-project 0d261d1ca552c95a8f007e061c787ac7132fbcbc)`
- corpus root: `decompiled/src` (45148 `.c` files; headers excluded)
- measured: 2026-10-23T21:05:44-0400

## The number
| | units | share |
| --- | ---: | ---: |
| total `.c` units | 45148 | 100% |
| compile clean | 38916 | 86.20% |
| **fail** | **6232** | **13.80%** |

## The docs disagree, and all three are wrong
| Source | Claimed failures | Measured | Delta |
| --- | ---: | ---: | ---: |
| docs/CORPUS_STATUS.md | 9339 | 6232 | -3107 |
| docs/LOADER_STATUS.md | 9092 | 6232 | -2860 |
| a verbal/other claim | 7303 | 6232 | -1071 |

## Breakdown by cause
Bucketed by diagnostic *kind* (the first error of each failing
unit), not by exact message text. `single-error units` counts the
units whose *only* error is of that kind — those are the ones a fix
would flip straight to clean.

| # | Cause bucket | Units | % of failing | single-error units |
| ---: | --- | ---: | ---: | ---: |
| 1 | member not found | 2395 | 38.43% | 313 |
| 2 | not assignable | 939 | 15.07% | 366 |
| 3 | assignment to array type | 662 | 10.62% | 503 |
| 4 | member access on non-struct | 662 | 10.62% | 197 |
| 5 | indirection requires pointer | 380 | 6.10% | 132 |
| 6 | invalid operands | 283 | 4.54% | 210 |
| 7 | conflicting types | 258 | 4.14% | 183 |
| 8 | called object is not a function | 246 | 3.95% | 103 |
| 9 | incompatible return type | 167 | 2.68% | 161 |
| 10 | syntax error / malformed expression | 139 | 2.23% | 51 |
| 11 | incompatible types | 44 | 0.71% | 24 |
| 12 | undeclared label | 20 | 0.32% | 5 |
| 13 | too few arguments | 12 | 0.19% | 12 |
| 14 | undeclared identifier | 9 | 0.14% | 0 |
| 15 | unknown type name | 7 | 0.11% | 1 |
| 16 | incomplete type | 4 | 0.06% | 1 |
| 17 | other | 4 | 0.06% | 2 |
| 18 | too many arguments | 1 | 0.02% | 1 |

### Evidence: representative units per bucket

**member not found** (2395 units)

- `decompiled/src/actorcore/60017FCC_Profile_loadResources.c`
- `decompiled/src/actors/60000850_StageActor__befreDraw.c`
- `decompiled/src/actors/60024E78_BossBase__collisionPlayer.c`

  most common message (2395): `no member named 'X' in 'X'`

**not assignable** (939 units)

- `decompiled/src/actors/60025F64_BossBase__vfDC.c`
- `decompiled/src/actors/600A48EC_Actor_Kamek_2_build.c`
- `decompiled/src/actors/601245C0_Actor_underwater_BowserJr_retreat_pos_build.c`

  most common message (931): `expression is not assignable`

**assignment to array type** (662 units)

- `decompiled/src/actors/6000260C_StageActor__checkDerivedRuntimeTypeInfo_const.c`
- `decompiled/src/actors/6000270C_StageActor__getRuntimeTypeInfo_const.c`
- `decompiled/src/actors/60002F74_Actor__checkDerivedRuntimeTypeInfo_const.c`

  most common message (650): `array type 'X' is not assignable`

**member access on non-struct** (662 units)

- `decompiled/src/actors/60024B30_BossBase__onCreate.c`
- `decompiled/src/actors/60025630_BossBase__collisionIceball.c`
- `decompiled/src/actors/600B18FC_KoopalingBase__vf400.c`

  most common message (353): `member reference base type 'X' (vector of N 'X' values) is not a structure or union`

**indirection requires pointer** (380 units)

- `decompiled/src/actors/60025AB4_BossBase__isOnGround.c`
- `decompiled/src/actors/602A29AC_Enemy__vfF8.c`
- `decompiled/src/actors/6033DCF0_GoombaBase__vf2C8.c`

  most common message (359): `subscripted value is not an array, pointer, or vector`

**invalid operands** (283 units)

- `decompiled/src/misc/600281C4_sub_600281C4.c`
- `decompiled/src/misc/6003290C_registerProfile_BossKK_Demo_manage_Tag_03290C.c`
- `decompiled/src/misc/60080750_registerProfile_final_Bowser_fire_080750.c`

  most common message (192): `invalid operands to binary expression ('X' and 'X')`

**conflicting types** (258 units)

- `decompiled/src/actors/6017B718_Actor__beforeCreate__thunk.c`
- `decompiled/src/actors/60194B20_Actor__beforeCreate__thunk_194B20.c`
- `decompiled/src/actors/601AC294_Actor__beforeCreate__thunk_1AC294.c`

  most common message (244): `conflicting types for 'X'`

**called object is not a function** (246 units)

- `decompiled/src/misc/60414DA0_sub_60414DA0.c`
- `decompiled/src/misc/604157F4_sub_604157F4.c`
- `decompiled/src/misc/6041A024_sub_6041A024.c`

  most common message (239): `called object type 'X' (aka 'X') is not a function or function pointer`

**incompatible return type** (167 units)

- `decompiled/src/actors/60000770_StageActor__afterExecute.c`
- `decompiled/src/misc/600220C0_sub_600220C0.c`
- `decompiled/src/misc/60038CA0_j_nullsub_401.c`

  most common message (161): `returning 'X' from a function with incompatible result type 'X'`

**syntax error / malformed expression** (139 units)

- `decompiled/src/actors/60025EB8_BossBase__vfD0.c`
- `decompiled/src/actors/602A9358_Enemy__vfD0.c`
- `decompiled/src/actors/6033B068_Goomba__vfD0.c`

  most common message (58): `expected expression`

**incompatible types** (44 units)

- `decompiled/src/misc/6016CF90_sub_6016CF90.c`
- `decompiled/src/misc/6037A4C4_sub_6037A4C4.c`
- `decompiled/src/misc/603F8408_sub_603F8408.c`

  most common message (29): `assigning to 'X' from incompatible type 'X'`

**undeclared label** (20 units)

- `decompiled/src/misc/6000EA00_sub_6000EA00.c`
- `decompiled/src/misc/601873D0_sub_601873D0.c`
- `decompiled/src/misc/601BE7AC_sub_601BE7AC.c`

  most common message (20): `use of undeclared label 'X'`

**too few arguments** (12 units)

- `decompiled/src/actors/603D2B90_Actor__onDelete__thunk.c`
- `decompiled/src/misc/60857530_sub_60857530.c`
- `decompiled/src/misc/60887EA4_sub_60887EA4.c`

  most common message (11): `too few arguments to function call, expected N, have N`

**undeclared identifier** (9 units)

- `decompiled/src/actors/602B62C0_Actor_kafugumannen_build.c`
- `decompiled/src/misc/6048210C_BootScene_ctor_helper.c`
- `decompiled/src/misc/604BA62C_GameOverScene_ctor_helper_helper_4BA62C.c`

  most common message (8): `use of undeclared identifier 'X'`

**unknown type name** (7 units)

- `decompiled/src/misc/60157200_CircularCollider_initImpl.c`
- `decompiled/src/misc/6015E3F0_SolidOnTopCollider_initImpl.c`
- `decompiled/src/misc/60877720_sub_60877720.c`

  most common message (4): `unknown type name 'X'; did you mean 'X'?`

**incomplete type** (4 units)

- `decompiled/src/misc/600096F8_j__ZdlPv_0.c`
- `decompiled/src/misc/60312034_DryBones_beginState_Walk.c`
- `decompiled/src/misc/608DE7A4_sub_608DE7A4.c`

  most common message (3): `variable has incomplete type 'X'`

**other** (4 units)

- `decompiled/src/misc/6042FFF0_ModelBase_ctor.c`
- `decompiled/src/misc/606D3C7C_sub_606D3C7C.c`
- `decompiled/src/misc/608A01A4_sub_608A01A4.c`

  most common message (2): `array subscript is not an integer`

**too many arguments** (1 units)

- `decompiled/src/misc/60887620_sub_60887620.c`

  most common message (1): `too many arguments to function call, expected N, have N`

## Per-group distribution
| Group | units | failing | failure rate |
| --- | ---: | ---: | ---: |
| actorcore | 13 | 1 | 7.7% |
| actors | 1465 | 208 | 14.2% |
| blocks | 65 | 4 | 6.2% |
| collision | 108 | 30 | 27.8% |
| g_image.c | 1 | 0 | 0.0% |
| items | 8 | 4 | 50.0% |
| misc | 42664 | 5901 | 13.8% |
| player | 110 | 26 | 23.6% |
| projectile | 145 | 27 | 18.6% |
| sdklib | 563 | 31 | 5.5% |
| state | 5 | 0 | 0.0% |
| stubs | 1 | 0 | 0.0% |

## Method

- One translation unit per `.c` file, compiled alone. The corpus is never
  compiled as a single unit, because one local mistake would cascade and
  inflate the count.
- `-Wno-everything` keeps warnings out; only `error:` lines count.
- `-ferror-limit=0` lets a unit emit all its errors, so each unit's first
  diagnostic is its genuine first failure, not a capped one.
- A unit counts as failing if clang exits non-zero or emits any `error:`.
- The bucket is decided from the first `path:line:col: error:` line only.
  Cascades after that line are not counted; they are why the per-bucket
  `single-error units` column exists.
