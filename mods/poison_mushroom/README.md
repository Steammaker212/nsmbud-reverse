# Poison Mushroom (sprite 741, block contents 24)

Ported from Tsuru (`src/actors/poisonmushroom.cpp`, MPL-2.0). It moves like a
Super Mushroom; touching it hurts the player instead of powering up.

**Status:** builds 2026-10-26; **awaiting an in-game test.**

## How

- A Super Mushroom (profile 591) variant with Tsuru's model, like the Hammer
  Flower is a Fire Flower variant: same movement, block behaviour and timing.
- The Mushroom's per-frame collect check (vtable +0xE0, 0x60467F48) is hooked.
  For this item it damages the player through `tsuru::damagePlayer2`
  (`setDamage2(item, Poison)`, as Tsuru's `doDamage`), removes the item and
  grants nothing. `POISON_LIKE_TSURU 0` makes it an ordinary hit (the player
  shrinks) instead.
- It also has the Hammer Flower's touch fallback, in case the variant's
  collider does not report the player.
- Place it as sprite 741, or in a ?-block or brick: contents 24 (tick Extended
  contents, pick 8).

## Model

`romfs/Model/I_kinxkx.Nin_NX_NVN.szs` (not committed), from Tsuru's
`Common/actor/I_kinxkx.szs`, against the Super Mushroom (same two bones, same
`out`/`out2`/`out3`/`wait`/`wait2`):

```
py -3 scripts/models/wiiu2dx.py --wiiu I_kinxkx.szs --template I_kinoko --name I_kinxkx --map mat_kinxkx=mat_kinoko --romfs <romfs> --out mods/poison_mushroom/romfs/Model
```

The Mushroom also plays texture animation `I_kinoko_switch` to pick its
colour. This archive has none of that name, and `TexAnim_play` (0x604510E4)
skips a name it cannot find, so the item keeps its own purple texture. The
placeholder build uses the red Super Mushroom.
