# framework

Reusable code for sweet-dx mods. A mod pulls parts in by listing them in its
`requires.txt`; `scripts/sdk/make_mod_project.py` copies each part's
`code/`, `hooks/`, `include/` and `symbols/` into the build.

| Part | Gives you | Hooks it installs |
|---|---|---|
| `core` | `nsmbudx::log(...)` writes one line to the debug log (the Ryujinx log) | none |
| `game` | codedx-style class headers for game classes: `game/block.h` (`BlockBase`, `ItemMgr`, the contents/code/item enums), bound to game addresses in `symbols/` | none |
| `resources` | `nsmbudx::ScopedNameRemap` swaps archive/model names inside the game's own code; `isArchiveLoaded()` | `ResArchiveMgr::get` `0x43B548`, `ResArchive::getModel` `0x430090` |
| `items` | `nsmbudx::blockItems::registerContents(21..31, profile)` puts any actor inside ?-blocks and bricks | `getContents` `0x563294`, spawnPowerup `0x5B5A3C`/`0x5B5FA8`, `ItemMgr::spawnItem` `0x4663F4` |
| `diagnostics` | the archive guard logs any archive the game looks up but never loaded, just before the null dereference | archive manager `getFile` `0x8226EC` |

`resources` and `items` need `core`, and `items` also uses `game`.
`diagnostics` can also be added to any build with `--with-diagnostics`.

Usage examples are in [docs/MODDING.md](../docs/MODDING.md) §6–8. The readable
reconstruction of the code these hook is in [readable/](../readable/). Evidence
for each address is in `data/findings/ledger.csv`.
