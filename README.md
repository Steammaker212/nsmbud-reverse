# nsmbud-reverse

*Steam's Super Mario Bros. Deluxe*: a C++ code mod for ***New Super Mario Bros. U
Deluxe*** (Switch, v1.0.0), built with [sweet-dx](https://github.com/jabonchan/sweet-dx),
and the reverse-engineering notes behind it. Every fact the mod relies on is
recorded with its evidence.

The mod adds custom sprites 724-779 (many ported from Zenith Team's
[Tsuru](https://github.com/Zenith-Team/Tsuru)), the Hammer Flower, P-Acorn, Blue Shell
and Poison Mushroom power-ups, wavy liquids and other tweaks, and **Wii U models
converted for Deluxe**. Place the sprites with the Yaz0moto patch in
[yaz0moto/patches/steam-dx](yaz0moto/patches/steam-dx/).

No game files are distributed here. You need your own `main` NSO (v1.0.0) at
`source/nso/main`.

---

## Start here

| I want to... | Go to |
|---|---|
| **Build and install the mod** | sweet-dx on `source/` (`compile.bat` builds and installs it to Ryujinx); see [docs/MODDING.md](docs/MODDING.md) |
| **Place the custom sprites in a level** | [yaz0moto/patches/steam-dx/](yaz0moto/patches/steam-dx/): the Yaz0moto patch |
| **Add or change a sprite, hook or tweak** | [docs/MODDING.md](docs/MODDING.md): the layout, hooks, profiles, debugging |
| **Port a Tsuru actor** | [docs/TSURU_PORTING.md](docs/TSURU_PORTING.md); what is ported: [TSURU_ENEMIES](docs/TSURU_ENEMIES.md), [TSURU_OBJECTS](docs/TSURU_OBJECTS.md) |
| **Use a Wii U model in Deluxe** | [docs/WIIU_MODELS.md](docs/WIIU_MODELS.md) + [tools/wiiu2dx/](tools/wiiu2dx/) + `scripts/models/` |
| **Make a custom world map** | [docs/WORLDMAP.md](docs/WORLDMAP.md) + `scripts/worldmap/wmtool.py` |
| **Debug live with GDB** | [docs/GDB_SETUP.md](docs/GDB_SETUP.md) |
| **Look up what we know** | [reverse-engineering/FindingsB/ledger.csv](reverse-engineering/FindingsB/ledger.csv): every finding with its address, evidence and grade |
| **Read the game as clean C++** | [reverse-engineering/FindingsA/](reverse-engineering/FindingsA/): hand-reconstructed, verified subsystems with real names |

## Repository map

```
source/                 the mod: one sweet-dx project
  code/                   .cpp (every file is compiled; file names must be unique)
    sprites/ powerups/ tweaks/ framework/ engine/ debug/
  hooks/                  .hks patches (same folders)
  include/                headers: game classes (actors/, game/, ...) and modbase/ (the kit)
  symbols/                .sym game addresses (RVAs)
  npdm/                   main.npdm
  nso/                    the game's main NSO, which you supply (never committed)
yaz0moto/patches/steam-dx/  the level-editor patch (spritedata, categories, icons)
docs/                   guides (MODDING, TSURU_*, WIIU_*, WORLDMAP, GDB_SETUP) and
                        reports from the first sweet-dx builds (README.md lists them)
reverse-engineering/    what we know about the game
  FindingsA/              hand-reconstructed game source, readable C++
  FindingsB/              ledger.csv, the findings ledger
  FindingsC/              codedx symbol inventory (main.sym, symbols.csv)
  FindingsD/              field and type plans
  FindingsE/              recovered layouts and profiles
  FindingsF/              the generated game API (header, .sym, hookable.csv)
  FindingsG/              world-map tables (events, map enemies)
  FindingsH/              IDA exports (xrefs, disassembly, profile registry)
scripts/
  models/                 Wii U model conversion and checks
  worldmap/               wmtool.py: dump, check, rebuild world maps
  sdk/                    crash symbolizer, subsdk inspector, level checks
  ida/ pipeline/ (loose)  earlier research tooling, see scripts/README.md
tools/wiiu2dx/          Wii U model -> Deluxe converter (C#, BfresLibrary)
```

`.projectignore/` (git-ignored) holds the local-only files: `compile.bat`,
`sweetdx.exe`, the IDA databases, art sources and working notes.

## How much to trust what you read

| Source | Trust |
|---|---|
| The binary, and what we observed in-game | final word |
| RicBent's IDA database and [codedx](https://github.com/RicBent/codedx) headers | high |
| The Wii U decomp ([red-pro2](https://github.com/aboood40091/red-pro2), [NSMBU-Headers](https://github.com/aboood40091/NSMBU-Headers), on the `wiiu-reference` branch) | meaning only; Switch addresses differ |
| Older notes (the early sweet-dx reports in `docs/`), names not yet re-checked in IDA | **leads, not facts.** Several turned out wrong |


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
- **Zenith Team**: Tsuru (MPL-2.0), the source of the ported actors and patches.
