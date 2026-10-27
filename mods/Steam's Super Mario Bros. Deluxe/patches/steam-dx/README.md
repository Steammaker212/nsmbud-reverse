# Project-SteamDX, the Yaz0moto patch

The one level-editor patch for [nsmbud-reverse](../../): every custom actor, the
extended ?-block contents, and movement binding on the Cheep Cheep family. It
matches the all-in-one build in [`mods/nsmbudx_all`](../../mods/nsmbudx_all/).

## Install

Copy this folder into Yaz0moto's mods directory (Preferences -> Games Setup ->
Mods directory), **not** the editor's own `miyamotodata/games`. On this machine:

```
...\Yaz0moto-<version>\miyamotodata\patches\steam-dx-test\
```

`scripts/validate_steam_dx_patch.py` checks every installed copy against this one.

## New sprites (16)

| ID | Name | From | In-game |
|---|---|---|---|
| 724 / 725 | Angry Sun / Mad Moon | codedx template | works |
| 726 | Actor Spawner | codedx, replaced by a fixed copy in `mods/custom_spawner` | works (1-1) |
| 728 | Light Source | codedx template | |
| 730 | Effect Spawner | codedx template | |
| 731 | Fake Star Coin | codedx template | |
| 732 | Magic Lift | codedx template | |
| 734 | Hammer Flower | `mods/hammer_suit` | works |
| 735 | Bee | `mods/bee` | works |
| 736 | P-Acorn | `mods/p_acorn` | works |
| 737 | Shy Guy | `mods/shy_guy` | works |
| 738 | Actor Spawner (custom) | `mods/custom_spawner` | |
| 739 | Blue Shell | `mods/shell_suit` | works |
| 740 | Cold Fuzzy | `mods/cold_fuzzy` (Tsuru port) | |
| 741 | Poison Mushroom | `mods/poison_mushroom` (Tsuru port) | |
| 742 | Biddybud | `source/code/sprites/biddybud.cpp` (Tsuru port) | builds; not tested in-game |

727, 729 and 733 are absent on purpose: codedx's sprite table lists them, but no
`Profile` is defined for them.

## Overridden base sprites (25)

**Blocks, extended contents.** 59 Question Block, 60 Brick Block, 148, 422, 526,
704, 706 gain checkbox 13 (*Extended contents (+16)*, bit 28 of `settings2`).
`BlockBase::getContents` returns `(settings2 & 0xF) | ((settings2 >> 24) & 0x10)`,
so ticking it turns contents *N* into *N + 16*: **21 Hammer Flower, 22 P-Acorn,
23 Blue Shell, 24 Poison Mushroom** (`framework/items`). Every base field is restated, so an unticked
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

`icons/` holds the editor picture of each new sprite (`<id>.png`) and, for the
?-block and brick sprites, one per extended content
(`<id>_0000-0000-0000-1000-000<n>-0000.png` = contents 16 + n).
`scripts/yaz0moto_icons.py` makes them for new sprites from Yaz0moto's own art.

## Model archives

Custom models are romfs archives, not sprites: `romfs/Model/<name>.Nin_NX_NVN.szs`
(Yaz0 SARC with `output.bfres` + `Wii_UBER.Nin_NX_NVN.bfsha`). Wii U models
convert with [`tools/wiiu2dx`](../../tools/wiiu2dx/); see
[docs/WIIU_MODELS.md](../../docs/WIIU_MODELS.md).

## Base data

Deluxe has no spritedata of its own in Yaz0moto (`games/NSMBUDX/main.xml`:
"shared with the Wii U version and inherited from it"), so sprites 0-723 come
from `games/NSMBU`, and every new id here is above that range.
