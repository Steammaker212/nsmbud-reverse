# nsmbud-reverse

A modding framework and reverse-engineering notes for
***New Super Mario Bros. U Deluxe*** (Switch, v1.0.0). Mods are written in C++
and built with [sweet-dx](https://github.com/jabonchan/sweet-dx). Every fact they
rely on is recorded with its evidence.

> **Working in-game (Ryujinx, 2026-10-26):** the Hammer Flower (side-on model,
> collectible, throws hammers), the P-Acorn, the Blue Shell, actor spawners, and
> **Wii U models converted for Deluxe**: a Shy Guy and a Bee remodel run on
> Nintendo's own compiled shaders. Build everything at once with
> [mods/nsmbudx_all](mods/nsmbudx_all/); place it in levels with the one
> Yaz0moto patch, [yaz0moto/steam-dx](yaz0moto/steam-dx/).

No game files are distributed here. You need your own `main` NSO. See [NOTICE.md](NOTICE.md).

---

## Start here

| I want to… | Go to |
|---|---|
| **Build every mod at once** | [mods/nsmbudx_all/](mods/nsmbudx_all/): all mods + framework + codedx in one sweet-dx project, `build.py --install` |
| **Use a Wii U model in Deluxe** | [docs/WIIU_MODELS.md](docs/WIIU_MODELS.md) + [tools/wiiu2dx/](tools/wiiu2dx/): convert, rebind to Nintendo's shaders, check |
| **Place the custom sprites in a level** | [yaz0moto/steam-dx/](yaz0moto/steam-dx/): the one Yaz0moto patch |
| **Make a mod** | [docs/MODDING.md](docs/MODDING.md): build, install, write a hook, add a sprite, debug a crash |
| **See a complete example** | [mods/hammer_suit/](mods/hammer_suit/): a new power-up, with model names you can change at the top of one file |
| **Call game functions from my code** | [sdk/](sdk/): `#include "nsmbudx/game.h"` gives 7,079 game functions by name |
| **Use the framework pieces** | [framework/](framework/): logging, model-name remapping, crash diagnostics |
| **Look up what we know** | [data/findings/ledger.csv](data/findings/ledger.csv): every finding with its address, evidence and grade |
| **Help reverse engineer** | [docs/RE_PLAN.md](docs/RE_PLAN.md): which sources to trust, how a finding is verified, and the phases |
| **Read the game as clean C++** | [readable/](readable/): hand-reconstructed, verified subsystems with real names (blocks and items so far) |
| **Make a new enemy from an existing one** | `framework/actors` + [mods/bee/](mods/bee/): any vanilla actor becomes a new sprite with your model (the Bee is a flying Cheep Cheep) |
| **Change what hurts an enemy** | `framework/actors` hit rules + [docs/MODDING.md](docs/MODDING.md) §7e: fireproof, shell-proof, "dies to ice like a Star", per sprite |
| **Give a power-up its own suit colours** | `framework/player` + [docs/MODDING.md](docs/MODDING.md) §7d: suits are a texture-animation frame; add one and select it |
| **Make a custom world map** | [docs/WORLDMAP.md](docs/WORLDMAP.md) + `scripts/worldmap/wmtool.py`: the CSV format, every limit, point → level mapping; `check` tells you if the world can be explored |
| **Change Yoshi** (research mods, not in releases: build with `--with yoshi`) | [docs/MODDING.md](docs/MODDING.md) §7f: fire/ice breath from any enemy ([mods/yoshi_fire/](mods/yoshi_fire/)), fruits per egg and flutter length as data patches ([mods/yoshi_tuning/](mods/yoshi_tuning/)) |
| **Get the P-Acorn from ?-blocks** | [mods/p_acorn/](mods/p_acorn/): the P-Acorn exists in the game but no level gives it; contents 22 now does |
| **Put a new power-up in ?-blocks** | `framework/items` + [docs/MODDING.md](docs/MODDING.md) §7b: block contents 21–31 are free for mods |
| **Read the raw decompiled game** | [decompiled/src/](decompiled/src/): 45,148 functions, one C file each (see the caveat below) |

## Repository map

```
mods/            mods you can build (each has a README)
  nsmbudx_all/     every mod + framework + codedx merged: one sweet-dx project
  hammer_suit/     Hammer Flower power-up (sprite 734, block contents 21)
  bee/             a flying Cheep Cheep with a bee model (sprite 735)
  p_acorn/         the unobtainable P-Acorn in ?-blocks (contents 22, sprite 736)
  shy_guy/         a ledge-turning Goombrat with a Shy Guy model (sprite 737)
  custom_spawner/  actor spawner 738, and a fixed codedx spawner 726
  shell_suit/      the Blue Shell power-up (sprite 739, contents 23)
  diag_passthrough/  diagnostic: the hammer hook doing nothing
framework/       reusable code mods pull in through requires.txt
  core/            nsmbudx::log -> the Ryujinx log
  game/            codedx-style class headers (game/block.h: BlockBase, ItemMgr)
  items/           custom ?-block / brick contents -> any profile
  actors/          new sprites from vanilla actors with your model (+ air-swim)
  player/          suit colours, another mode's body, throw gates/handlers
  resources/       ScopedNameRemap: your archive/model names in the game's own code
  diagnostics/     archive guard + draw guard: name the missing archive / undrawable shape instead of crashing
sdk/             generated game API (header, .sym, hookable.csv)
tools/
  wiiu2dx/         Wii U model -> Deluxe converter (C#, BfresLibrary)
scripts/
  sdk/             the mod toolchain: build, inspect, check levels, read crash logs
  worldmap/        wmtool.py: dump, check (limits + can it be explored), rebuild world maps
  models/          wiiu2dx.py (convert), bfres_dump, bfsha_info, bntx_compare
  ida/             live-IDA tools (ida-pro-mcp), type planning, export
  pipeline/        builds the decompiled corpus
  (loose scripts)  earlier one-off research scripts, see scripts/README.md
docs/
  MODDING.md       the guide
  WORLDMAP.md      world maps: format, limits, custom worlds
  WIIU_MODELS.md   Wii U models in Deluxe: how and why it works
  RE_PLAN.md       the reverse-engineering plan
  legacy/          earlier reports, quarantined until re-verified
data/
  findings/        the findings ledger
  loader/          symbol inventory (symbols.csv) used by the generators
readable/        hand-reconstructed game source, verified, readable C++
decompiled/      the raw C corpus (src/) and earlier hand-picked functions
research/        logs and base-game file listings
yaz0moto/steam-dx/  the level-editor patch
loader/ sweetdx/ hooks/   earlier harnesses (legacy)
```

## How much to trust what you read

| Source | Trust |
|---|---|
| The binary, and what we observed in-game | final word |
| RicBent's IDA database and [codedx](https://github.com/RicBent/codedx) headers | high |
| The Wii U decomp ([red-pro2](https://github.com/aboood40091/red-pro2), [NSMBU-Headers](https://github.com/aboood40091/NSMBU-Headers), on the `wiiu-reference` branch) | meaning only; Switch addresses differ |
| `docs/legacy/`, older names in `decompiled/` | **leads, not facts.** Several turned out wrong (see RE_PLAN §1) |

The decompiled corpus is faithful to the binary (99.8% of sampled calls match).
It's still hard to read: most functions are `sub_XXXXXXXX`, and fields are raw
`FIELD_U32(a1, 0x…)` offsets. Phase 5 of the plan regenerates it with real types
and member names.

## Target

| Property | Value |
|---|---|
| Game | *New Super Mario Bros. U Deluxe* v1.0.0, title `0100EA80032EA000` |
| Module | `main` NSO, build id `AEE6DCCC06D9C05B42061E2019123A61`, MD5 `36c6bf3e2ca07d327373509b313e3e72` |
| Architecture | 32-bit ARM. IDA base `0x60000000`; sweet-dx addresses are RVAs (`VA − 0x60000000`) |
| Mod module | `subsdk0`, loaded at `main + 0xCD1000` |

## Credits

- **RicBent**: the IDA database and codedx, the base of everything here.
- **jabonchan**: sweet-dx.
- **aboood40091**: red-pro2 and NSMBU-Headers (Wii U).
- **KillzXGaming**: BfresLibrary (MIT), used by tools/wiiu2dx; BfshaLibrary, read as a format reference.
