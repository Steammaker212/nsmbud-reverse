# What romfs contains, and what it means for the Hammer

Read from `New Super Mario Bros U Deluxe (NSP)(Base Game) Tree.txt` — the shipped romfs
listing for Deluxe, 2,344 lines, 1,609 `.szs` archives. This is Deluxe's own asset tree; the
Wii U game is not involved.

## Power-up item models that exist

```
l_fireflower.Nin_NX_NVN.szs
l_iceflower.Nin_NX_NVN.szs
l_kinoko.Nin_NX_NVN.szs
l_moon.Nin_NX_NVN.szs
l_musasabi.Nin_NX_NVN.szs
l_penguin.Nin_NX_NVN.szs
l_propeller.Nin_NX_NVN.szs
l_star.Nin_NX_NVN.szs
```

Eight models. Compare with the ten mode names the code knows
(`Kinoko, FireFlower, Star, IceFlower, Propeller, MameKinoko, Penguin, NutKinoko,
PNutKinoko, PeachCrown`): the item *pickups* are a subset, because MameKinoko/NutKinoko/
PNutKinoko/PeachCrown are delivered differently rather than as floor items.

## There is no Hammer player model

Every hammer reference in the entire romfs tree:

```
EF_MortonHammerBlur.Nin_NX_NVN.szs      effect, Morton's blur
lift_zen_hammer.Nin_NX_NVN.szs          a lift platform
```

That is all of them. `EF_MortonHammerBlur` is an *effect* belonging to Morton, and
`lift_zen_hammer` is level geometry. There is **no player Hammer Suit model, no hammer
animation set, and no `l_hammer` item model.**

The player models live in a single archive, `MarioMdl.Nin_NX_NVN.szs`, so a Hammer suit would
have to be a variant inside it — and the string evidence agrees with the asset evidence: the
only hammer strings in the binary are `EF_MortonHammerBlur*` and `SE_OBJ_HAMMER_HIT_BOTH`,
both of which are Morton's and the projectile's, not the player's.

## What this means concretely

A mode-10 Hammer is **not renderable from shipped assets**. That is consistent with what the
tables already said: mode 10 is outside the ten-entry body/height/balloon tables, and the body
table has no Hammer body type, so mode 10 resolves to body type 0 with colour 2 — big Mario.

So a Hammer Suit is a genuinely larger piece of work than a table entry. It needs:

1. an **11th entry** in each of the three mode tables, at a repointed location (the write
   targets at `0xB493A8`/`0xB493D8`/`0xB49404` are 44 zero bytes, genuinely free), plus the
   six PC-relative reader repoints that `mode_tables.hks` already makes;
2. a **body type and colour** that render as something hammer-like — the only option without
   new assets is to reuse an existing Mario variant and accept it looks wrong;
3. a **model and animations**, which do not exist and cannot be synthesised from a code patch.

Item 3 is the blocker. No amount of code patching produces a model that the romfs does not
contain.

## Why the Fire Flower is a different situation

The Fire Flower needs none of that. `l_fireflower.Nin_NX_NVN.szs` exists, the mode name
`FireFlower` is index 1 in the game's own item list, and the binary has full fireball support
(`PlayerTrendFireball`, `BroFileball`, `PlantFireball`, `PlayerFireball_ctor`). The Fire Flower
is a *logic* problem — finding the right grant path — not an asset problem.

That is why the Fire Flower is worth chasing and the Hammer is worth being honest about. The
next Fire Flower step is recorded in [ITEM_GRANT_GATE.md](ITEM_GRANT_GATE.md): read which
function the pickup calls, now that `Player_setPowerupMode` (`0x795CDC`) is identified as the
general setter.

## Using this file

The tree also answers resource questions cheaply, without opening the binary: which course
files exist, which boss arenas are present, whether a sound archive or layout file was shipped.
Search it before assuming an asset is missing.
