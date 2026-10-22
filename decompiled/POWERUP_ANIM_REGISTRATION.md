# Power-up animation registration — and an order mismatch that does *not* explain the symptom

Read from code. This is the layer that gives each power-up its player animations.

## The registration function

`sub_604F9090` is a C++ static initialiser (guarded by `__cxa_guard_acquire`) that fills a
20-entry table at `dword_60CA6BB8` with tagged records, then calls:

```c
v4 = 20;
__Player__applyPowerUpTransform(player, player + 3632, &dword_60CA6BB8, &v4);
```

`__Player__applyPowerUpTransform` (`0x475288`, 76 bytes) is a plain loop — it is **not** where a
power-up is applied:

```c
for (i = 0; i < count; i++) {
    *(a2 + 4*i) = sub_6047488C(a1, a3);   // resolve(name) -> id
    a3 += 8;                              // records are 8 bytes
}
```

So it resolves 20 animation names into ids and stores them at `player + 0xE30` (3632). The name in
the symbol table is therefore slightly misleading; it *registers the animation id table* rather than
transforming the player. Recorded rather than renamed, because the name came from an earlier round
and the correction belongs in that round's context.

## The table layout and the order mismatch

Records are 8 bytes: a tag (`12321336` = `0xBC0058`-style marker) then a name string.

```
index : registration order           : power-up mode order
  0   : P_Kinoko_00                  : 0 Kinoko
  1   : P_FireFlower_00              : 1 FireFlower
  2   : P_Penguin_00                 : 2 Star
  3   : P_Star_00                    : 3 IceFlower
  4   : P_IceFlower_00               : 4 Propeller
  5   : P_MameKinoko_00              : 5 MameKinoko
  6   : P_Propeller_00               : 6 Penguin
  7   : P_NutKinoko_00               : 7 NutKinoko
  8   : P_PNutKinoko_00              : 8 PNutKinoko
  9   : P_PeachCrown_00              : 9 PeachCrown
 10-19: the same ten with _01 suffix
```

**These orders differ from index 2 onward.** Whatever consumes this array must translate, or the
wrong power-up gets a given animation.

## Why that mismatch does *not* explain the reported symptom

The Fire Flower is **index 1 in both orders**. So a naive "index by mode directly" bug would
mis-assign Star/Penguin/Propeller/IceFlower, but would leave FireFlower correct.

Unless the consumer applies an additional offset, the reported behaviour ("the fire flower appears
and acts as a normal mushroom") is not caused by this ordering. Stating this explicitly so the
mismatch is not mistaken for the answer — it is a real observation and a plausible bug elsewhere,
but it is not the fire symptom.

## What is still not established

Consumers of `player + 0xE30` could not be attributed. A scan found 28 functions reading
`[Rx, #0xE30]`, but `0xE30` is a common struct offset (collision-manager and actor code read the same
displacement), so none of them is provably reading the *player's* animation table without a
debugger. That is the same limitation already recorded for `[Rt, #0x94]`.

So the fire symptom remains open, with these eliminated:
- creation gating (`FireballBase_onCreate` slots 62/63 return 1 unconditionally)
- the mode→group table (`Player_modeGroupTable`: Kinoko→1, FireFlower→2, distinct)
- the registration order (FireFlower is index 1 in both orders)

The next thing worth doing is a debugger session rather than more static scanning, since every
remaining candidate needs to know which object a register actually points at.
