# Rendering corruption: every mode hook is a SUBSTITUTION, not an addition

Status: analysis complete, fix designed, verification pending in-game.
Date: 2026-10-22

## The finding

Every power-up hook in this build was derived from the byte diff against the reference
build. Reading the retail instruction at each site shows what the diff actually did:

| hook | address | retail | reference | what it is |
|---|---|---|---|---|
| `mode_six_or_ten` | `0x78E6A8` | `cmp r0,#2` | `cmp r0,#0xa` | mode **2 moved to 10** |
| `check_set_fireball_mode` | `0x7AA9BC` | `cmp r1,#2` | `cmp r1,#0xa` | mode 2 moved to 10 |
| `set_fireball_action_mode` | `0x7AAA88` | `cmp r0,#2` | `cmp r0,#0xa` | mode 2 moved to 10 |
| `create_fireball_a_mode` | `0x7AABB8` | `cmp r0,#2` | `cmp r0,#0xa` | mode 2 moved to 10 |
| `create_fireball_b_mode` | `0x7AAC94` | `cmp r0,#2` | `cmp r0,#0xa` | mode 2 moved to 10 |
| `execute_mode_guard` | `0x7AAFF4` | `cmp r1,#6` | `cmp r1,#0xa` | mode **6 moved to 10** |
| `execute_mode_guard2` | `0x7AB0E4` | `cmp r0,#2` | `cmp r0,#0xa` | mode 2 moved to 10 |
| `grant_hammer_mode` | `0x45DDCC` | `mov r2,#2` | `mov r2,#0xa` | grants **10 instead of 2** |

Not one of these *adds* a case. Each replaces an existing mode's test with a test for 10.
On ARM you cannot express `mode == 2 || mode == 10` in a single `cmp` with a 12-bit
immediate, so the reference build did the only thing a byte patch can do: it moved the
case.

## Why that produces a rendering fault

`sub_6078E608` (`0x78E608`, **11 callers**) contains:

```asm
0x6078E6A0  CMP  R0, #6          ; mode == 6 ?
0x6078E6A4  BEQ  loc_6078E6BC    ;   -> R1 = 3
0x6078E6A8  CMP  R0, #2          ; mode == 2 ?   <<< our hook rewrote this to #0xa
0x6078E6AC  LDR  R0, [R4]
0x6078E6B0  MOVNE R1, #1         ;   else       -> R1 = 1
0x6078E6B4  MOVEQ R1, #2         ;   mode 2     -> R1 = 2
0x6078E6B8  B    loc_6078E6C4
0x6078E6BC  LDR  R0, [R4]
0x6078E6C0  MOV  R1, #3         ; mode 6 -> R1 = 3
0x6078E6C4  LDR  R3, [R0,#0xB0] ; vtable slot
```

`R1` is a **variant selector** (1 = normal body, 2 = fire body, 3 = mode-6 body) handed to
a vtable call. With the hook applied, mode 2 selects **1** instead of **2**: Fire Mario
renders as the normal body. All eleven callers are affected, which is why the fault is
broad and does not depend on the Hammer at all.

## Why removing hooks in earlier steps did not fix it

`mode_tables.hks` ships in every staged build. It carries `mode_six_or_ten`, so the
substitution was present in all of them. The step-1/step-2 "bisection" therefore only
varied which *extra* hooks were on top of an already-broken base.

## What a correct build needs

Two options:

**A. Remap once, at entry (preferred).** Leave all sixteen retail comparisons untouched and
translate the stored mode value: wherever mode 10 enters the power-up logic, write 2. One
edit instead of eight, no retail behaviour is moved, and the geometry tables need no
extension because the logic only ever sees 2. Cost: the Hammer behaves exactly like Fire
Flower, which is what the reference build does anyway.

**B. Preserve both cases per site.** At each site, replace the single `cmp` with an
instruction sequence that accepts the original mode *and* 10, e.g.

```asm
cmp   r0, #2
cmpne r0, #0xa
```

That needs two instructions where retail had one, so each site needs room (a rewritten
branch, or a code cave). This is real work and must be done per site.

Either way, the build must stop asserting that "reproducing the reference bytes" is the
same as "implementing the Hammer". It is not: the reference bytes moved behaviour.

## Retracting two earlier claims

1. **"The two `0x13FBxx` hooks rescale every actor."** Withdrawn. `sub_6013FB0C` has zero
   references in the image: no xrefs, no pointer, no `ADR`/`ADD PC` construction. Those
   hooks are inert and cannot be the cause. (They are still wrong in principle, since
   retail reads a per-actor divisor, but they are not what broke rendering.)
2. **"`can_change_to_hammer` causes an out-of-bounds jump."** Withdrawn. The `ADD PC`
   instruction sits at the label, so the jump table begins one word later; `MOVHI R3,#1`
   deliberately routes out-of-range modes to case 1. It is a redirect, correctly formed.

## "No hammer gets thrown" — expected, and here is what to look for instead

Because every projectile hook moves the **Fire Flower** case onto mode 10, the build does
not implement a hammer. It makes mode 10 behave like Fire Mario. So the correct expectation
is not "a hammer flies out" but "**a fireball** flies out".

Two different failures are hiding under one description:

1. **The build throws fireballs, not hammers.** Then the projectiles exist and the remaining
   work is asset/sprite replacement, not code. Test: pick up the power-up, press the throw
   button, and watch whether *any* projectile appears.
2. **Nothing appears at all.** Then a gate outside the eight patched comparisons is
   blocking, or the projectile spawns and despawns. Test with the gdb stub: break at
   `0x607AABA0` (`createFireBall`) and see whether it is entered at all after a throw input.

Confirming which of these it is changes the whole remaining plan, so do it before writing
more patches.

There is also no Hammer suit model in the image: mode 10 maps to body type 0, colour 2, so
even a working Hammer renders as a Fire-coloured Normal body. The only hammer-named
resources present are `EF_MortonHammerBlur*` (Morton's boss effect) and
`SE_OBJ_HAMMER_HIT_BOTH` (an audio event), neither of which is a player projectile.

## Verification plan

Staged so that each step changes one thing:

| build | hooks | purpose |
|---|---|---|
| `output_step4_gate_only` | `item_grant` + `hammer_grant` | **new baseline**: no table repoints, no `mode_six_or_ten`, no projectile, no actor hooks. 5 records / 20 patched bytes. If rendering is clean here, the corruption is inside the hook set, not the grant. |
| `output_step3_no_actor_scale` | + `mode_tables`, `hammer_projectile` | adds the substitutions and relocated tables (no actor ctor) |
| `output_step3b_ctor_kept` | + 5 actor ctor hooks | isolates the ctor hooks from the scale hooks |
| `output_step2_hammer_enabled` | full previous set | reproduces the reported fault |

`output_step4_gate_only` is the one to try first: it is the smallest build that can still
apply mode 10.
