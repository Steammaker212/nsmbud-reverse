# Tsuru enemies on Deluxe

All of [Tsuru](https://github.com/Zenith-Team/Tsuru)'s enemies, ported to the
mod in `source/code/sprites/`, with
their Yaz0moto entries in `yaz0moto/patches/steam-dx` (spritedata, the Enemies
category, and a 128x128 icon each). The recipe and name map are in
[TSURU_PORTING.md](TSURU_PORTING.md).

Each one builds and links: no unresolved GOT slots, no branches to 0, and no
calls into `.plt` besides the destructors' usual one. None has been tested
in game.

## Sprites

| Sprite | Enemy | File | Models (`romfs/Model/<archive>.Nin_NX_NVN.szs`: models; anims) |
|---|---|---|---|
| 743 | Angry Grrrol | `angry_grrrol.cpp` | `guruguru`: `guruguru`; tex-SRT `guruguru` |
| 744 | Basalt Bones | `basalt_bones.cpp` | `laron`: `laron` (skl `walk`, `big_stop`), `laron_partsB`, `_partsC`, `_partsD`, `_partsE`, `_partsF`, `laron_head` |
| 745 | Para-Bones | `para_bones.cpp` | `nokonokoB`: `nokonokoB` (skl `flyA`); `wing`: `wing` (skl `wing_kuri`); retail `karon` |
| 746 | Cataquack | `cataquack.cpp` | `poihana`: `poihana` (skl `walk`, `throw`) |
| 747 | Flaptor | `flaptor.cpp` | `mokinger`: `mokinger` (skl `Fly`, `Attack`, `AttackLand`, `PressDown`) |
| 748 | Floaty Goomba | `floaty_goomba.cpp` | `ukibofloat`: `ukibofloat`; retail `kuribo` (skl `hikkuri`) |
| 749 | Gushen | `gushen.cpp` | `star_coin`: `star_coinA` (Tsuru's placeholder) |
| 750 | Jumbo Ray | `jumbo_ray.cpp` | `star_coin`: `star_coinA` (Tsuru's placeholder) |
| 751 | Peepa | `peepa.cpp` | `teren`: `teren` (skl `wait`); retail `lift_han_sky` (`lift_han_sky_S`, skl `move00_S`), `lift_han_wood`, `lift_han_stone`, `lift_han_spin` |
| 752 | Piranha Sprout | `piranha_sprout.cpp` | `nukunuku`: `nukunuku` (skl `Wait`, `AttackSign`, `PullOut`; bone `Crest`); `nukubomb`: `nukubomb` |
| 753 | Poison Piranha | `poison_piranha.cpp` | retail `pakkun` (skl `fire_wait_up`, `fire_attack_up`); `poisball`: `poisball` (skl `idle`); `e_poison`: `e_poison` (skl `idle`) |
| 754 | Scuttlebug | `scuttlebug.cpp` | `gasagoso`: `gasagoso` (skl `walk`), `string` |
| 755 | Stingby | `stingby.cpp` | `hacchin000`: `hacchin000` (skl `fly_idle`, `notice`, `fly_dash`, `die_squish`) |
| 756 | Falling Chestnut | `falling_chestnut.cpp` | `iga_kuribo`: `iga_kuribo` |
| 757 | Giant Skewer | `giant_skewer.cpp` | `daikonbouBig`: `daikonbouBig` |

The projectiles have profiles but no sprites: `BasaltBoneProjectile` (an
effect, no model), `PiranhaSproutProjectile` and `PoisonPiranhaProjectile`.
Their archives load with their parent's.

A missing archive doesn't crash: the actor logs it and removes itself
(`tsuru::createModel`).

The Deluxe conversions of these archives are made by
`scripts/models/port_tsuru_models.py` into `romfs/Model/dx/`. The game loads
from `romfs/Model`, so move a file up to use it. The template each model uses
is in [WIIU_MODELS.md](WIIU_MODELS.md#tsurus-models-2026-10-28).
`daikonbouBig` (Giant Skewer) and `mokinger` (Flaptor) are retail Deluxe
archives and need no conversion.

## Where a port differs from Tsuru

- **Basalt Bones.** Tsuru's version is a `BossWrapper<18>`: it needs the game's
  Boss class and a boss controller, and stirs the zone's lava. Here it is a
  plain Enemy that keeps the 18 hit points itself (6 a stomp, three stomps).
  Its defeat turns on an event (nybbles 1-2) instead of telling a controller.
  The lava stays calm. Its effects are `new`'d EffectWrappers.
- **Floaty Goomba, Scuttlebug.** Tsuru never ran their state machines: the
  Scuttlebug never moved, and neither stomp death began. Here they run.
- **Gushen.** Its spray collider is initialised once and resized each frame;
  Tsuru re-initialised it every frame while the game held it in a list. It is
  never frozen (Tsuru's `freeze()` did nothing).
- **Peepa.** Its platform is drawn only when it has one. Tsuru drew an unplaced
  wood platform for every Peepa. Like the Biddybud, it ends the game's own
  death states (a POW) with its cloud, because its position follows a movement
  controller.
- **Flaptor.** Its fall speed resets on landing. A bad movement value removes it
  (Tsuru returned 2 from `onCreate`).
- **Stingby, Piranha Sprout, Poison Piranha.** Tsuru's `BlendingModel`
  cross-fades between anims; here they switch at once. Piranha Sprout throws on
  the first frame at or past 39 of `AttackSign`, where Tsuru compared floats
  for equality.
- **Cataquack.** Tsuru's unused bouncy RectCollider (never added) is left out.
- **Jumbo Ray, Peepa.** Their line colliders keep their points in the actor.
  Tsuru passed a stack array.
- **Para-Bones.** It turns into Deluxe's Dry Bones, profile 649 (Tsuru's Wii U
  ID is 648).
- **Event IDs.** Tsuru's "nybble 1/2" settings (`eventID1`) are nybbles 3-4 in
  the spritedata, because `eventId1` is nybbles 3-4 on Deluxe.

## Unverified guesses

These were not found in the game; they are best guesses, worth checking in game:

- `tsuru::Direction::toRotation`, the facing turns: right 0x40000000, left
  0xC0000000, up 0, down 0x80000000. The Wii U table wasn't located in Deluxe.
- `rumble(n, 1, 0, 0)` for Tsuru's `rumble(n)`.
- Giant Skewer's push on a Star player uses damage type 2 through `setDamage`
  (+0x490). Tsuru's `vf8D4` is the next slot along.
- The `lift_han_*` segments are 16 units wide and centred.
