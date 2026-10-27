# framework

Reusable code for sweet-dx mods. A mod pulls parts in by listing them in its
`requires.txt`; `scripts/sdk/make_mod_project.py` copies each part's
`code/`, `hooks/`, `include/` and `symbols/` into the build.

| Part | Gives you | Hooks it installs |
|---|---|---|
| `core` | `nsmbudx::log(...)` writes one line to the debug log (the Ryujinx log); `nsmbudx/models.h`: `NSMBUDX_PICK_MODEL(useCustom, yours, placeholder)` and the build-wide `--placeholder-models` switch | none |
| `game` | codedx-style class headers with layout `static_assert`s: `game/block.h` (`BlockBase`, `ItemMgr`, the contents/code/item enums), `game/pukupuku.h` (the Cheep Cheep family), `game/player.h` (power-up modes, per-mode tables, model fields), `game/enemy.h` (every damage dispatcher and the 17 hit reactions), `game/worldmap.h` (world map points, routes, flags, limits), `game/yoshi.h` (Yoshi, EatData, his states and tunables), bound to game addresses in `symbols/` | none |
| `resources` | `nsmbudx::ScopedNameRemap` swaps archive/model names inside the game's own code (a remap whose archive is missing falls back for the model too); `isArchiveLoaded()`; `nsmbudx/mod_archives.h`: a mod archive missing from the SD card is taken off the load lists before the first load (logged) instead of crashing the loader; `nsmbudx/profile_resources.h`: `setProfileResources(profile, list, count, ResourceLoad::AtBoot|PerLevel|WorldMap)` -- which archives a custom profile loads and when | `ResArchiveMgr::get` `0x43B548`, `ResArchive::getModel` `0x430090` |
| `items` | `nsmbudx::blockItems::registerContents(21..31, profile)` puts any actor inside ?-blocks and bricks | `getContents` `0x563294`, spawnPowerup `0x5B5A3C`/`0x5B5FA8`, `ItemMgr::spawnItem` `0x4663F4` |
| `actors` | `NSMBUDX_ACTOR_VARIANT`: a new sprite made from any vanilla actor with your archive/model; its archives load when the base profile's do (items at game start, enemies with the level; `cVariant_LoadAtBoot` forces game start); `cVariant_AirSwim` lets water actors move through air; per-variant enemy hit rules (`Immune`, `SameAs`) and damage-mask edits; `nsmbudx/actor_spawner.h`: `spawnActors` (refuses, with a log line, an actor whose archives are not mounted), `spawnTarget`, `registerSpawnerProfile` -- every actor spawner's target (codedx 726 included) loads its archives with the level, which the game never does on its own (ledger F0223) | `checkLiquidCollisions` `0x151ED8` (air-swim only); `LoadProfileArchives` `0x8F10`, `Profile_loadResources` `0x17FCC` |
| `player` | `nsmbudx::suits::showColorAs/overrideColor/clear/refresh`: a power-up's own suit colours, on every character (borrow another colour type's look, or your own frame of the PB/PH/PC_switch animations on Mario/Luigi), owner-tagged, and carried by character to models no level player owns (the world map's); `suits::showBodyOf/clearBody`: another mode's body while the real mode stays (the model's forced mode, F0226), also on the world map; `nsmbudx/player_models.h`: listeners for every player model's creation and drawing (level and world map), `character`/`shownMode`/`playerOf`; `nsmbudx/throws.h`: throw gates (forbid a throw) and handlers (replace the projectile), shared by every mod (F0225) | the three model classes' `setColorType`: `0x75A6E4`, `0x757B58`, `0x75D3AC`; `Player::canThrow` `0x7AA954`, `Player::createFireBall` `0x7AABA0`; `PlayerModel` constructor `0x78C444` and draw `0x78E574` |
| `yoshi` | `nsmbudx::yoshi::setBreathFromEnemies/setEatType/mouthActor/fruitCount`: what Yoshi does with what he eats (`game/yoshi.h`: class layout, states, EatData, tunables) | tongue "caught" phase `0x7D0A4C` |
| `worldmap` | `nsmbudx::worldmap::map/findPoint/currentPosition`: the parsed world maps (`game/worldmap.h`), and one log line per map at boot (`worldmap W1: 72 points, 134 routes`). Guide: [docs/WORLDMAP.md](../docs/WORLDMAP.md) | `WorldMapData::load` `0x17BE7C` |
| `tsuru` | the Tsuru porting kit, `nsmbudx/tsuru.h`: `tsuru::damagePlayer/damagePlayer2` (player vtable +0x490/+0x49C, Wii U damage types), `createModel`, `playSklAnim`, `placeModel`, `drawModel`, `chase`, `deg2idx`. Guide and Tsuru-to-codedx name map: [docs/TSURU_PORTING.md](../docs/TSURU_PORTING.md) | none |
| `diagnostics` | the archive guard logs any archive the game looks up but never loaded, just before the null dereference | archive manager `getFile` `0x8226EC` |

`yoshi` needs `core` and `game`. `worldmap` needs `core` and `game`. `resources` and `items` need `core`, `items` also uses `game`, and `actors`
needs `core` and `resources`. Parts list their own needs in `requires.txt`;
the assembler resolves them.
`diagnostics` can also be added to any build with `--with-diagnostics`.

Usage examples are in [docs/MODDING.md](../docs/MODDING.md) §6–8. The readable
reconstruction of the code these hook is in [readable/](../readable/). Evidence
for each address is in `data/findings/ledger.csv`.
