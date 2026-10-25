# custom_boss

A custom boss fight built on the reversed World 1 boss (Lemmy), and the harness
for finding out how the fight actually behaves at runtime.

The reverse itself is in
[`readable/boss/Lemmy.cpp`](../../readable/boss/Lemmy.cpp) — read that first;
this README is about using it.

## What this mod changes

| What | How | Why it proves the reverse |
|---|---|---|
| Total HP | `BossBase::vf314` returns `BOSS_TOTAL_HP` (12) instead of 24 | If stamina is that virtual, the fight halves |
| Hits per phase | `BoomBoomBase::vf2FC` returns `BOSS_PHASE_HITS` (3) instead of 6 | 12/3 keeps four phases — if the phase count changes as predicted, the ratio is the model |
| Walk speed | `+0x448` (base `0x600B7EC8`, `1.0f`) returns 1.25 | Lemmy *overrides* this slot, so a hook here should not reach him — a negative control |
| Phase speed | `+0x46C` (base `0x600A13A4`, `0.5f`) returns 0.5 | Lemmy does **not** override this slot, so the same hook *should* reach him — a positive control |
| Fight observation | Hooks `BossBase::vf15C` and logs HP, phase size, link id | Every collision converges there |

The two speed hooks are a matched pair on purpose, and they are the most
instructive thing in the mod. `+0x448` and `+0x46C` are both in the list of
slots "overridden by all seven Koopalings" — but that does not mean seven
*implementations*. Six siblings leave `+0x46C` pointing at the same base
function, and Lemmy is one of them:

```
Lemmy  +0x448 -> 0x600DEE24   his own     hook does NOT reach him
Lemmy  +0x46C -> 0x600A13A4   the BASE    hook DOES reach him
```

So "overridden by all seven" is a statement about the *vtable slot differing
from the base*, not about each sibling owning code. Always resolve the slot's
actual target before assuming a base patch reaches a boss.

The two HP hooks and the two speed hooks are all one-instruction patches with no
trampoline — the vanilla bodies are 8 bytes, so there is literally no room for a
branch-back. Verified emitted code:

```
CustomBoss_vf314   mov r0, #12 ; bx lr
CustomBoss_vf2FC   mov r0, #3  ; bx lr
CustomBoss_vf448   vmov.f32 s0, #1.25 ; bx lr
CustomBoss_vf46C   vmov.f32 s0, #0.5  ; bx lr
```


## How a boss fight actually works (short version)

The full detail is in the readable file; this is the shape:

1. **Being hit** goes through `BossBase::vf15C` (`0x600259B8`), the single funnel
   for every collision type. It sets a "took damage" byte, asks `+0x314` for
   total HP, plays the damage animation via `+0x300`, applies damage through
   `+0x2DC`, and finally calls `+0x370`.

2. **Stamina** is two constant virtuals: `+0x314` = total HP (24, shared),
   `+0x2FC` = hits per phase (per boss; 6 for the Koopalings). Phase count is the
   ratio, so 24/6 = 4 phases.

3. **Winning** does not use an exit condition, a goal pole or the camera. On
   taking damage the boss calls `+0x370`, which looks up **another actor by link
   id** — the arena's Kupper door — and pushes it into its open state:
   `StateMgr::changeState(door + 6084, &doorOpenState)`.

## Level requirements for a Lemmy-style fight

This is the part that makes a custom fight work or silently fail:

- Place a **Kupper door** actor in the arena — sprite **609** (profile 261), or
  sprite **610** (profile 262) for the RDash variant.
- Give that door the **same link id** as the boss's `+0x1FB8`. The boss's factory
  initialises it to 0, so a level with the door at link 0 "just works" and any
  other pairing needs the ids to match.
- The door must really be that class: the boss calls the door's vtable slot 0 as
  an `isA`-style check and only proceeds when it returns 1.

If you omit the door, nothing crashes — the boss dies and the arena stays shut.
That is the standard first-custom-boss bug.

## Ledger

F0149-F0158. Corrections are recorded, not silently rewritten: an earlier draft
claimed `+0x2D8` was a defeat test (it is `[+0x189C] % [+0x18A0] == 0`, a
periodic-tick helper) and that `+0x36C` opened the door (it is voice-line
selection). Both are corrected in the readable file and the ledger.

## Testing

```
python scripts\sdk\make_mod_project.py --repo . --mod mods/custom_boss \
  --sweetdx "<sweet-dx>" --nso "<main.nso>" --out mods\custom_boss_build --build
```

Expect `boss: hp N -> M phaseSize ... link ...` lines in the Ryujinx log during
the fight. If HP starts at 12 the `vf314` hook is live; if the phase changes
after 3 hits the `vf2FC` hook is live.

**Not run in-game yet.** Build passes and all three hooks resolve (verified in
the build log), but behaviour is unverified on hardware.
