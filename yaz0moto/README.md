# Yaz0moto patch

One patch for the level editor: [`steam-dx/`](./steam-dx/) (**Project-SteamDX**).

| It adds | Sprites |
|---|---|
| codedx's custom actors | 724 Angry Sun, 725 Mad Moon, 726 Actor Spawner, 728 Light Source, 730 Effect Spawner, 731 Fake Star Coin, 732 Magic Lift |
| this repo's mods | 734 Hammer Flower, 735 Bee, 736 P-Acorn, 737 Shy Guy, 738 Actor Spawner (custom), 739 Blue Shell |
| Tsuru ports | 740 Cold Fuzzy, 741 Poison Mushroom |
| extended ?-block / brick contents | 59, 60, 148, 422, 526, 704, 706: tick *Extended contents*, then 21 Hammer Flower, 22 P-Acorn, 23 Blue Shell, 24 Poison Mushroom |
| editor icons | `icons/`: one per new sprite, and one per extended content for each block sprite (`scripts/yaz0moto_icons.py`) |
| Cheep Cheep family movement binding | the 18 Pukupuku sprites (101 ... 723): movement type (nybbles 19-20) and movement ID (21-22), plus a "Cheep Cheep Family" view |

It matches the all-in-one build in [`mods/nsmbudx_all`](../mods/nsmbudx_all/).

## Install

Copy `steam-dx/` into Yaz0moto's mods directory (Preferences -> Games Setup ->
Mods directory). On this machine that is
`...\Yaz0moto-<version>\miyamotodata\patches\steam-dx-test\`.

## Verify

```sh
python scripts/validate_steam_dx_patch.py      # 24/24
```

It checks every field against the editor's base data, that every mod sprite is
declared and has an icon, and that the installed copy matches this one.

## Keeping it current

Every change to a mod updates this folder in the same commit: new sprites in
`spritedata.xml` (and a category in `spritecategories.xml`), new block contents
in every block's contents list, and the icons (`scripts/yaz0moto_icons.py`).

## History

Until 2026-10-26 there were three patches. `SteamDXCustomActors` became
`SteamDX` (renamed `steam-dx`, with icons, the same day); `CheepCheepFamily` was merged into it; `HammerQuestionBlock` was
dropped. It relabelled contents 2/3 as "Hammer", which the Hammer Flower
(contents 21) replaced. Its proof that a Hammer could not be added is in
[`docs/legacy/HAMMER_LIMITATION.md`](../docs/legacy/HAMMER_LIMITATION.md), and its
scripts are in `scripts/legacy/`. Both are superseded by framework/items.
