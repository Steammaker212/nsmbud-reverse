# nsmbud-reverse

A modding framework and reverse-engineering notes for
***New Super Mario Bros. U Deluxe*** (Switch, v1.0.0). Mods are written in C++
and built with [sweet-dx](https://github.com/jabonchan/sweet-dx). Every fact they
rely on is recorded with its evidence.

> **Working in-game today:** Fire Mario throws Hammer Bros hammers (tested on
> Ryujinx). Next up: the Hammer Flower item, Cheep Cheep-based custom sprites, and
> readable C regenerated from a fully typed database.

No game files are distributed here. You need your own `main` NSO. See [NOTICE.md](NOTICE.md).

---

## Start here

| I want to… | Go to |
|---|---|
| **Make a mod** | [docs/MODDING.md](docs/MODDING.md): build, install, write a hook, add a sprite, debug a crash |
| **See a complete example** | [mods/hammer_suit/](mods/hammer_suit/): a new power-up, with model names you can change at the top of one file |
| **Call game functions from my code** | [sdk/](sdk/): `#include "nsmbudx/game.h"` gives 7,079 game functions by name |
| **Use the framework pieces** | [framework/](framework/): logging, model-name remapping, crash diagnostics |
| **Look up what we know** | [data/findings/ledger.csv](data/findings/ledger.csv): every finding with its address, evidence and grade |
| **Help reverse engineer** | [docs/RE_PLAN.md](docs/RE_PLAN.md): which sources to trust, how a finding is verified, and the phases |
| **Read the decompiled game** | [decompiled/src/](decompiled/src/): 45,148 functions, one C file each (see the caveat below) |

## Repository map

```
mods/            mods you can build (each has a README)
  hammer_suit/     Hammer Flower power-up
  diag_passthrough/  diagnostic: the hammer hook doing nothing
framework/       reusable code mods pull in through requires.txt
  core/            nsmbudx::log -> the Ryujinx log
  resources/       ScopedNameRemap: your archive/model names in the game's own code
  diagnostics/     archive guard: names a missing archive before the crash
sdk/             generated game API (header, .sym, hookable.csv)
scripts/
  sdk/             the mod toolchain: build, inspect, check levels, read crash logs
  ida/             live-IDA tools (ida-pro-mcp), type planning, export
  pipeline/        builds the decompiled corpus
  (loose scripts)  earlier one-off research scripts, see scripts/README.md
docs/
  MODDING.md       the guide
  RE_PLAN.md       the reverse-engineering plan
  legacy/          earlier reports, quarantined until re-verified
data/
  findings/        the findings ledger
  loader/          symbol inventory (symbols.csv) used by the generators
decompiled/      the C corpus (src/) and earlier hand-picked functions
research/        logs and base-game file listings
loader/ sweetdx/ hooks/ yaz0moto/   earlier harnesses and patch sets (legacy)
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
