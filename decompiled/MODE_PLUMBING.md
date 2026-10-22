# Power-up mode plumbing — what is proven, and what the Fire Flower symptom is NOT

Read directly from code this round, in the Player's own virtual method table.

## The mode → group table

`dword_60B0C300` (`Player_modeGroupTable`), reached by `Player_vtable_a` slot 39, whose entire body is:

```c
int Player_modeToGroupIndex(Player *p, int mode)   // slot 39, RVA 0x796A60
{
    return Player_modeGroupTable[mode];            // LDR R0,=dword_60B0C300; LDR R0,[R0,R1,LSL#2]
}
```

Contents:

| mode | power-up | group |
|---|---|---|
| 0 | Kinoko | **1** |
| 1 | FireFlower | **2** |
| 2 | Star | 2 |
| 3 | IceFlower | 0 |
| 4 | Propeller | 2 |
| 5 | MameKinoko | 2 |
| 6 | Penguin | 2 |
| 7 | NutKinoko | 2 |
| 8 | PNutKinoko | 2 |
| 9 | PeachCrown | 2 |

Groups observed: 0, 1, 2.

## What this rules out

**The Fire Flower is not conflated with the mushroom in this table.** Kinoko maps to group 1 and
FireFlower to group 2 — distinct. So the reported symptom ("the fire flower appears and acts as a
normal mushroom") is *not* caused by a missing or duplicated mode→group entry.

That is a real elimination, and it is worth stating because this table was the obvious suspect: a
group of 1 vs 2 is exactly the kind of thing that would make two power-ups share behaviour.

## What else was checked and cleared

**`Player_vtable_a` slot 305** (`0x7AA41C`, 36 bytes) reads the mode and passes it to slot 39, then
indexes `Player_modeGroupDataTable` by the result:

```asm
LDR  R2,[R0]            ; vtable
LDR  R1,[R0,#0x528]     ; mode
LDR  R2,[R2,#0x9C]      ; slot 39 = Player_modeToGroupIndex
BLX  R2
LDR  R1,=(Player_modeGroupDataTable - ...)
LDR  R0,[R1,R0,LSL#2]   ; index by group
```

`Player_modeGroupDataTable[0..2] = 0x3B, 0x3A, 0x39`. Larger strides follow, so it is a per-group
record rather than a flat array — named for its access pattern only, not its meaning.

**`Player_heightFallbackBySubtype`** (`0xB0CE34`) is indexed by `*(player+0x524)` when that value
exceeds 3; entries are floats (9.0, 3.0, …). Unrelated to the fire symptom; named conservatively.

## Where to look next

The mode value is correct, the group mapping is correct, and the fireball creation path has no
permission gate (established in an earlier round: `FireballBase_onCreate`'s two virtual gates return
1 unconditionally). So the remaining candidates for "nothing fires" are:

1. the **input/state** layer that would *request* a shot — nothing yet found that reads mode 1 and
   requests a spawn;
2. the **animation** driving it — `P_FireFlower_00/01` exist and are referenced by
   `sub_604F9090` and `sub_6052F1C4`, which have not been read yet.

The second is the more promising lead, and is the next thing to read.
