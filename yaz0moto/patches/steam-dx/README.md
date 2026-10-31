# Project-SteamDX, the Yaz0moto patch

The one level-editor patch for [nsmbud-reverse](../../../): every custom actor, the
extended ?-block contents, and movement binding on the Cheep Cheep family. It
matches the mod built from [`source/`](../../../source/).

## Install

Copy this folder into Yaz0moto's mods directory (Preferences -> Games Setup ->
Mods directory), **not** the editor's own `miyamotodata/games`. On this machine:

```
...\Yaz0moto-<version>\miyamotodata\patches\steam-dx-test\
```

`scripts/validate_steam_dx_patch.py` checks every installed copy against this one.

## New sprites (56)

| ID | Name | From | In-game |
|---|---|---|---|
| 724 / 725 | Angry Sun / Mad Moon | codedx template | works |
| 726 | Actor Spawner | codedx, replaced by a fixed copy in `source/code/sprites/actor_spawner_738.cpp` | works (1-1) |
| 728 | Light Source | codedx template | |
| 730 | Effect Spawner | codedx template | |
| 731 | Fake Star Coin | codedx template | |
| 732 | Magic Lift | codedx template | |
| 734 | Hammer Flower | `source/code/powerups/hammer_suit.cpp` | works |
| 735 | Spike Top Bee | `source/code/sprites/bee.cpp` | works; follow, speed, eating and the Yoshi bounce not tested in-game |
| 736 | P-Acorn | `source/code/powerups/p_acorn.cpp` | works |
| 737 | Shy Guy (nine behaviours) | `source/code/sprites/shy_guy_behaviours.cpp`, `shy_guy.cpp` | builds; not tested in-game |
| 738 | Actor Spawner (custom) | `source/code/sprites/actor_spawner_738.cpp` | |
| 739 | Blue Shell | `source/code/powerups/shell_suit.cpp` | works |
| 740 | Cold Fuzzy | `source/code/sprites/cold_fuzzy.cpp` (Tsuru port) | |
| 741 | Poison Mushroom | `source/code/powerups/poison_mushroom.cpp` (Tsuru port) | |
| 742 | Biddybud | `source/code/sprites/biddybud.cpp` (Tsuru port) | builds; not tested in-game |
| 743 | Angry Grrrol | `source/code/sprites/angry_grrrol.cpp` (Tsuru port) | builds; not tested in-game |
| 744 | Basalt Bones | `source/code/sprites/basalt_bones.cpp` (Tsuru port) | builds; not tested in-game |
| 745 | Para-Bones | `source/code/sprites/para_bones.cpp` (Tsuru port) | builds; not tested in-game |
| 746 | Cataquack | `source/code/sprites/cataquack.cpp` (Tsuru port) | builds; not tested in-game |
| 747 | Flaptor | `source/code/sprites/flaptor.cpp` (Tsuru port) | builds; not tested in-game |
| 748 | Floaty Goomba | `source/code/sprites/floaty_goomba.cpp` (Tsuru port) | builds; not tested in-game |
| 749 | Gushen | `source/code/sprites/gushen.cpp` (Tsuru port) | builds; not tested in-game |
| 750 | Jumbo Ray | `source/code/sprites/jumbo_ray.cpp` (Tsuru port) | builds; not tested in-game |
| 751 | Peepa | `source/code/sprites/peepa.cpp` (Tsuru port) | builds; not tested in-game |
| 752 | Piranha Sprout | `source/code/sprites/piranha_sprout.cpp` (Tsuru port) | builds; not tested in-game |
| 753 | Poison Piranha | `source/code/sprites/poison_piranha.cpp` (Tsuru port) | builds; not tested in-game |
| 754 | Scuttlebug | `source/code/sprites/scuttlebug.cpp` (Tsuru port) | builds; not tested in-game |
| 755 | Sting Bee | `source/code/sprites/stingby.cpp` (Tsuru port) | builds; not tested in-game |
| 756 | Falling Chestnut | `source/code/sprites/falling_chestnut.cpp` (Tsuru port) | builds; not tested in-game |
| 757 | Giant Skewer | `source/code/sprites/giant_skewer.cpp` (Tsuru port) | builds; not tested in-game |
| 758 | Beep Block | `source/code/sprites/beep_block.cpp` (Tsuru port) | builds; not tested in-game |
| 759 | Red-Blue Block | `source/code/sprites/red_blue_block.cpp` (Tsuru port) | builds; not tested in-game |
| 760 | Switch Block | `source/code/sprites/switch_block.cpp` (Tsuru port) | builds; not tested in-game |
| 761 | Switch Block Event Activator | `source/code/sprites/switch_block_event.cpp` (Tsuru port) | builds; not tested in-game |
| 762 | Triple Block | `source/code/sprites/triple_block.cpp` (Tsuru port) | builds; not tested in-game |
| 763 | Music Note | `source/code/sprites/music_note.cpp` (Tsuru port) | builds; not tested in-game |
| 764 | Music Note Manager | `source/code/sprites/music_note.cpp` (Tsuru port) | builds; not tested in-game |
| 765 | Star Coin Shard | `source/code/sprites/star_coin_shard.cpp` (Tsuru port) | builds; not tested in-game |
| 766 | Star Coin Shard Manager | `source/code/sprites/star_coin_shard.cpp` (Tsuru port) | builds; not tested in-game |
| 767 | Minecart | `source/code/sprites/minecart.cpp` (Tsuru port) | builds; not tested in-game |
| 768 | Helical Bar | `source/code/sprites/helical_bar.cpp` (Tsuru port) | builds; not tested in-game |
| 769 | One-Way Platform | `source/code/sprites/one_way_platform.cpp` (Tsuru port) | builds; not tested in-game |
| 770 | Wind Generator | `source/code/sprites/tsuru_controllers.cpp` (Tsuru port) | builds; not tested in-game |
| 771 | Layer Changer | `source/code/sprites/tsuru_controllers.cpp` (Tsuru port) | builds; not tested in-game |
| 772 | Power-up Switcher | `source/code/sprites/tsuru_controllers.cpp` (Tsuru port) | builds; not tested in-game |
| 773 | Sound Player | `source/code/sprites/tsuru_controllers.cpp` (Tsuru port) | builds; not tested in-game |
| 774 | Solid | `source/code/sprites/tsuru_controllers.cpp` (Tsuru port) | builds; not tested in-game |
| 775 | Liquid Overlay | `source/code/sprites/tsuru_controllers.cpp` (Tsuru port) | builds; not tested in-game |
| 776 | Time Clock | `source/code/sprites/time_controls.cpp` (Tsuru port) | builds; not tested in-game |
| 777 | Time Changer | `source/code/sprites/time_controls.cpp` (Tsuru port) | builds; not tested in-game |
| 778 | Physics Modifier | `source/code/sprites/tsuru_controllers.cpp` (Tsuru port) | builds; not tested in-game |
| 779 | Wave Platform | `source/code/sprites/wave_platform.cpp` (Tsuru port) | builds; not tested in-game |
| 780 | Model Loader | `source/code/sprites/model_loader.cpp` (Tsuru port; name table instead of String Banks) | builds; not tested in-game |
| 781 | Rain | `source/code/sprites/weather.cpp` (new; the snow's particle drawer) | builds; not tested in-game |
| 782 | Falling Leaves | `source/code/sprites/weather.cpp` (new; needs `romfs/Model/env_leaf`, `scripts/make_leaf_archive.py`) | builds; not tested in-game |

727, 729 and 733 are absent on purpose: codedx's sprite table lists them, but no
`Profile` is defined for them.

## Overridden base sprites (26)

**198 Snow Effect** (retail: unused NSMBW leftover) gains flake and glow colours,
0-255 per channel: flake nybbles 5-12, glow 13-20, each R, G, B, A
(`source/code/tweaks/snow_colors.cpp`, Tsuru port). A colour left all 0 keeps its retail value; Glow Alpha should stay 255.
Listed under "Decoration".

**Blocks, extended contents.** 59 Question Block, 60 Brick Block, 148, 422, 526,
704, 706 gain checkbox 13 (*Extended contents (+16)*, bit 28 of `settings2`).
`BlockBase::getContents` returns `(settings2 & 0xF) | ((settings2 >> 24) & 0x10)`,
so ticking it turns contents *N* into *N + 16*: **21 Hammer Flower, 22 P-Acorn,
23 Blue Shell, 24 Poison Mushroom** (`code/framework/block_items.cpp`). Every base field is restated, so an unticked
block is unchanged.

**Cheep Cheep family.** The 18 Pukupuku sprites (101, 106, 113, 114, 120, 129,
131, 482, 586-592, 597, 615, 723) gain movement type (nybbles 19-20) and movement
ID (21-22), which the retail Cheep Cheep binds in `onCreate`:
`movementHandler.link(position, getMaskForMovementType(settings2 & 0xFF), movementId)`.
615 and 723 get only 19-20 (21-22 is their Group ID). Each sprite is restated in
full because Yaz0moto replaces a patched sprite outright. A "Cheep Cheep Family"
view groups them.

## Actor spawners: 726 and 738

Both decode the actor to spawn the codedx way: `linkId` (nybbles 23-24) is id
bits 0-7, `movementId` (22) bits 8-11, and nybble 21 mask 1 says it is a
**sprite** id rather than a profile id.

- **726** (codedx): spawns while the event in nybbles 1-2 is on; event 0 deletes it.
- **738** (custom): event optional (0 = spawn at once), 1-16 spawns (nybble 19),
  spread, child `settings2` passed through (nybbles 13-18, 20).

Both now load the spawned actor's archives with the level. The game only loads
archives for sprites in a level's loaded-sprite list, which never holds a
spawner's target; that was the 1-1 crash (ledger F0223).

## Icons

`icons/` holds the editor picture of each new sprite. The current ones use Yaz0moto's
`Y0MI_` names (size in tiles, placement and actor ID in hex; see the naming notes in
`.projectignore/ICONS.md`), which win over the older `<id>.png` / `<id>_<raw data>.png` files
still kept here:

- **Sprites with a model** are renders of the model the code draws, at the code's scale,
  made by `.projectignore/icon_renderer/make_icons.py` (models are only read). Settings that
  change the model get their own icon with that raw data (Biddybud colour and behaviour,
  block colours, platform looks and widths, Helical Bar count, and so on). Blocks and
  platforms face front and fill their tiles.
- **Sprites without a model** use [Twemoji](https://github.com/jdecked/twemoji) images
  (CC-BY 4.0, by Twitter, Inc. and other contributors).
- 781 Rain and 782 Falling Leaves are drawn from their own textures.

**Block contents.** Each block sprite with extended contents (59, 60, 148, 422, 526, 704, 706)
has a `Y0MI_` icon per extended content, raw data `0000-0000-0000-1000-000<n>-0000` =
contents 16 + n, and the Triple Block (762) one per normal and extended content. They follow
Yaz0moto's own block pictures (the item on a plain ?-block or brick): contents Yaz0moto already
draws are copied from it; Super Crown (artwork from the Super Mario Wiki), Hammer Flower,
P-Acorn, Blue Shell and Poison Mushroom use the item icons above
(`.projectignore/icon_renderer/make_block_icons.py`).

## Model archives

Custom models are romfs archives, not sprites: `romfs/Model/<name>.Nin_NX_NVN.szs`
(Yaz0 SARC with `output.bfres` + `Wii_UBER.Nin_NX_NVN.bfsha`). Wii U models
convert with [`tools/wiiu2dx`](../../tools/wiiu2dx/); see
[docs/WIIU_MODELS.md](../../docs/WIIU_MODELS.md).

## Base data

Deluxe has no spritedata of its own in Yaz0moto (`games/NSMBUDX/main.xml`:
"shared with the Wii U version and inherited from it"), so sprites 0-723 come
from `games/NSMBU`, and every new id here is above that range.
