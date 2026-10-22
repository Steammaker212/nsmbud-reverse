# Recovered struct layouts — `include/structs.h`

Two independent evidence channels, plus a structural gate that rejects anything self-contradictory.

## Channel A — stores

A constructor of class `C` writes `C`'s fields at fixed offsets from `this`, so every

```asm
STR  Rt, [Rthis, #offset]
```

proves a field at `offset`, with width fixed by the instruction (`STR`=4, `STRH`=2, `STRB`=1).

`this` is tracked as a live register alias — `R0` on entry, propagated by `MOV Rx,R0`, invalidated by
`BL`/`BLX` for `R0`–`R3` and by any other write — so stores to sub-objects, globals and parameters
are rejected rather than recorded.

Extended this round to also follow register-computed addresses:

```asm
MOVW R0, #0x17D4
MOV  R1, #0x64
STR  R1, [R4, R0]      ; this + 0x17D4, previously missed entirely
```

## Channel B — in-place sub-objects

```asm
MOVW R0, #0x17D4
ADD  R0, R4, R0          ; R4 = this
BL   LightMask::LightMask
```

proves a member of type `LightMask` at `+0x17D4`. Where two such constructions are adjacent, the gap
gives the constructed type's **size**:

| type | size | from |
|---|---|---|
| `ActiveCollider` | `0x130` | **20 independent boundaries** |
| `EffectWrapper` | `0x68` | 25 |
| `EffectData` | `0x40` | 12 |
| `LightSource` | `0x48` | 3 |
| `LightMask` | `0x28` | 2 |
| `CircularCollider` | `0x190` | 2 |
| `StateMgr` | `0x198` | 1 |

**`ActiveCollider` = `0x130` closes a dispute that ran for several rounds** (the competing figure was
`0xB8`). Twenty independent boundaries agree, and `ColliderBase` independently extracts to `0x124`,
so a derived class adding `0xC` lands exactly at `0x130`.

## The structural gate, and what it caught

A real struct cannot have a member that begins before the previous member ends. Any overlap proves
at least one member is wrong, and there is no way to tell which — so the **whole class is dropped**
rather than published with an untrustworthy layout.

This gate earned its place immediately. Without it, phantom "sub-objects" inflated `sizeof(PlayerBase)`
from a plausible size to `0x2854`, with six members overlapping. Cause: the sub-object pass initially
accepted `ADD Rx,Rbase,Rx` with *any* register as base. After a call `this` lives in `R4`, and later
code constructs **other** objects addressed as `some_base + const`, which looks identical. Requiring a
provably live `this` alias cut `PlayerBase` from 19 phantom sub-objects to 0, while `FireballBase`'s
three genuine ones (`LightMask`/`LightSource`/`ActiveCollider`) survived untouched.

Applying the gate more broadly dropped 5 further classes (`CollisionMgr`, `GoombaBase`, `AreaTask`,
`BlockCoinBase`, `BabyYoshiBaseProbably`) whose field maps overlap. **67 of 72 classes survive.**

## A correction to the previous round

Round 11 published `sizeof(PlayerBase) == 0x52C` and presented it as verification, because the
power-up mode field sits at `+0x528` and `0x52C` is exactly `0x528 + 4`. That agreement was real but
the conclusion was wrong.

`PlayerBase_ctor` demonstrably writes fields at `+0x1B34`, `+0x1B9C`, `+0x1BA0` … and up to `+0x2C58`
on `R4`, which is `this` — verified by reading the disassembly. The v1 extractor simply could not
follow `MOVW Rk,#off ; STR Rt,[Rbase,Rk]`, so it saw only the low fields and the struct looked like it
ended at `0x528`.

**`sizeof(PlayerBase)` is `0x2C5C`, not `0x52C`.** The `+0x528` mode field is where it always was;
it is simply not the last member. The lesson is the same one this project keeps relearning: agreement
with one known fact does not validate a derivation that is structurally incomplete.

## Verified sizes

| type | size |
|---|---|
| `PlayerBase` | `0x2C5C` |
| `Player` | `0x3AF8` |
| `FireballBase` | `0x19A8` |
| `ActiveCollider` | `0x130` |
| `ColliderBase` | `0x124` |
| `StageActor` | `0x284` |
| `BasicSoundActor` | `0x1A4` |
| `Actor` | `0x50` |

`offsetof(PlayerBase, field_0528) == 0x528` — unchanged, and still the power-up mode field.

Header compiles clean under `clang -fsyntax-only`, and every emitted struct is overlap-free.

## Honesty notes carried in the header itself

1. Field **width** is exact; the **type** is not. `uint32_t field_0528` means "4-byte field at
   `0x528`", not "an int32".
2. Coverage is deliberately incomplete; unfollowable offsets are omitted rather than guessed.
3. Opaque, correctly-sized types (`LightMask`, `LightSource`, …) are used where size is proven but
   contents are not. A right-sized placeholder beats a wrong layout.
