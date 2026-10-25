# framework

Reusable code for sweet-dx mods. A mod pulls parts in by listing them in its
`requires.txt`; `scripts/sdk/make_mod_project.py` copies each part's
`code/`, `hooks/` and `include/` into the build.

| Part | Gives you | Hooks it installs |
|---|---|---|
| `core` | `nsmbudx::log(...)` writes one line to the debug log (the Ryujinx log) | none |
| `resources` | `nsmbudx::ScopedNameRemap` swaps archive/model names inside the game's own code; `isArchiveLoaded()` | `ResArchiveMgr::get` `0x43B548`, `ResArchive::getModel` `0x430090` |
| `diagnostics` | the archive guard logs any archive the game looks up but never loaded, just before the null dereference | archive manager `getFile` `0x8226EC` |

`resources` needs `core`. `diagnostics` can also be added to any build with
`--with-diagnostics`.

Usage examples: [docs/MODDING.md](../docs/MODDING.md) §6 and §8. Evidence for
each hook address: `data/findings/ledger.csv` (F0003, F0021).
