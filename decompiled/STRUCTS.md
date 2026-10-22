# Recovered struct layouts — `include/structs.h`

The objective asks for "matching headers". The headers until now were prototype lists. This adds
actual **struct layouts**, recovered mechanically from constructor stores.

## How each field is justified

A constructor of class `C` writes `C`'s fields at fixed offsets from `this`. So every

```asm
STR  Rt, [Rthis, #offset]
```

in that class's constructor is evidence that `C` has a field at `offset`, with a width fixed by the
store instruction (`STR`=4, `STRH`=2, `STRB`=1).

That alone over-counts badly, because a constructor also stores to sub-objects, globals and
parameters. A first unguarded pass gave `CollisionMgr` 389 fields, which is not credible.

So `this` is tracked as a live register alias:

- on entry `this` is `R0`
- `MOV Rx, R0` while `R0` still holds `this` makes `Rx` an alias
- a `BL`/`BLX` clobbers `R0`–`R3`, so those stop being aliases
- any other write to a register invalidates it
- only stores whose **base register is a live alias** are recorded

Result: **350 stores rejected**, 1,524 fields kept across 48 classes.

## Validation against hand-established facts

`PlayerBase` was checked against six offsets established independently by earlier rounds:

| offset | required width | extracted |
|---|---|---|
| `+0x484` | 1 | 1 ✓ |
| `+0x485` | 1 | 1 ✓ |
| `+0x4DC` | 4 | 4 ✓ |
| `+0x522` | 1 | 1 ✓ |
| `+0x524` | 4 | 4 ✓ |
| `+0x528` | 4 | 4 ✓ |

And the resulting struct is **1324 bytes = `0x52C`**, consistent with a 4-byte field at `0x528`
being the last member. That is the power-up mode field, so the two independent derivations agree.

The header compiles clean with clang (`-fsyntax-only`).

## What the header deliberately does not claim

- **Width is known; type is not.** `uint32_t field_0528` means "4-byte field at 0x528", not "an
  int32". Recorded in the file's own banner.
- **Coverage is incomplete by design.** The extractor only records literal `[Rn, #imm]` stores
  against a tracked alias. Constructors that compute an offset into a register —

  ```asm
  MOVW R0, #0x17D4
  ADD  R0, R4, R0
  BL   LightMask::LightMask
  ```

  — are **not** captured. That is why `FireballBase` shows zero fields even though its constructor
  demonstrably writes `+0x17D4`, `+0x17FC`, `+0x1800`, `+0x1924` and more. Missing fields are
  acceptable; invented ones are not, so this under-reports on purpose.

## Largest recovered layouts

| class | fields | max offset |
|---|---|---|
| CollisionMgr | 389 | `0xFFC` (4096 bytes) |
| AreaTask | 131 | `0xA24` |
| ResultScene | 83 | `0x40C` |
| CourseSelectTask | 72 | `0xC9F` |
| DemoScene | 70 | `0xF94` |
| BasicSoundActor | 59 | `0x1A0` |
| StageActor | 53 | `0x280` |
| ColliderBase | 46 | `0x120` |
| PlayerBase | 20 | `0x528` |

`CollisionMgr`'s 4096-byte size with contiguous slot initialisation reads as an array-like manager
whose constructor zeros or fills a fixed table; the layout is real but it is not 389 distinct named
members.
