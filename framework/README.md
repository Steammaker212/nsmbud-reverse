# framework

Reusable code for sweet-dx mods. A mod pulls parts in by listing them in its
`requires.txt`; `scripts/sdk/make_mod_project.py` copies each part's
`code/`, `hooks/`, `include/` and `symbols/` into the build.

| Part | Gives you | Hooks it installs |
|---|---|---|
| `core` | `nsmbudx::log(...)` writes one line to the debug log (the Ryujinx log) | none |
| `game` | codedx-style class headers with layout `static_assert`s: `game/block.h` (`BlockBase`, `ItemMgr`, the contents/code/item enums), `game/pukupuku.h` (the Cheep Cheep family), `game/player.h` (power-up modes, per-mode tables, model fields), `game/enemy.h` (every damage dispatcher and the 17 hit reactions), `game/worldmap.h` (world map points, routes, flags, limits), bound to game addresses in `symbols/` | none |
| `resources` | `nsmbudx::ScopedNameRemap` swaps archive/model names inside the game's own code; `isArchiveLoaded()` | `ResArchiveMgr::get` `0x43B548`, `ResArchive::getModel` `0x430090` |
| `items` | `nsmbudx::blockItems::registerContents(21..31, profile)` puts any actor inside ?-blocks and bricks | `getContents` `0x563294`, spawnPowerup `0x5B5A3C`/`0x5B5FA8`, `ItemMgr::spawnItem` `0x4663F4` |
| `actors` | `NSMBUDX_ACTOR_VARIANT`: a new sprite made from any vanilla actor with your archive/model; `cVariant_AirSwim` lets water actors move through air; per-variant enemy hit rules (`Immune`, `SameAs`) and damage-mask edits | `checkLiquidCollisions` `0x151ED8` (air-swim only) |
| `player` | `nsmbudx::suits::showColorAs/overrideColor/clear/refresh`: a power-up's own suit colours, on every character (borrow another colour type's look, or your own frame of the PB/PH/PC_switch animations on Mario/Luigi) | the three model classes' `setColorType`: `0x75A6E4`, `0x757B58`, `0x75D3AC` |
| `worldmap` | `nsmbudx::worldmap::map/findPoint/currentPosition`: the parsed world maps (`game/worldmap.h`), and one log line per map at boot (`worldmap W1: 72 points, 134 routes`). Guide: [docs/WORLDMAP.md](../docs/WORLDMAP.md) | `WorldMapData::load` `0x17BE7C` |
| `diagnostics` | the archive guard logs any archive the game looks up but never loaded, just before the null dereference | archive manager `getFile` `0x8226EC` |

`worldmap` needs `core` and `game`. `resources` and `items` need `core`, `items` also uses `game`, and `actors`
needs `core` and `resources`. Parts list their own needs in `requires.txt`;
the assembler resolves them.
`diagnostics` can also be added to any build with `--with-diagnostics`.

Usage examples are in [docs/MODDING.md](../docs/MODDING.md) §6–8. The readable
reconstruction of the code these hook is in [readable/](../readable/). Evidence
for each address is in `data/findings/ledger.csv`.
