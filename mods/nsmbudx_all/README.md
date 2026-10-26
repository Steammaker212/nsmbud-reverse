# nsmbudx_all: every mod in one sweet-dx project

One ready-to-build sweet-dx source tree with **every mod in this repo, the
framework, and codedx's template code merged**. It produces the exact module
that was tested in-game on 2026-10-26: the build is byte-identical to the
`release_all` build that ran on Ryujinx (same SHA-256 for `subsdk0`).

## What is inside

| | Where it comes from |
|---|---|
| `source/code/`, `source/hooks/` | every mod (`mods/*/code`, `hooks`), the framework parts they need (`framework/*`), codedx's template actors and profile system, the diagnostics |
| `source/include/` | codedx headers, the generated game API (`sdk/include`), framework headers, `nsmbudx/build_config.h` |
| `source/symbols/` | codedx `main.sym`, the generated `nsmbudx_game.sym`, each mod's and framework part's `.sym` |
| `build.py` | builds it, adds the model archives, checks the module, optionally installs it |
| `romfs/Model/` | **not in the repo**: put your model archives here (see below) |

Mods: hammer_suit, bee, p_acorn, shy_guy, shell_suit, yoshi_fire, yoshi_tuning,
worldmap_log, custom_spawner (which replaces codedx's sprite 726 with a fixed
copy), custom_boss. Framework: core, resources, items, game, player, actors,
yoshi, worldmap, diagnostics (archive guard + draw guard). codedx template
sprites 724-733.

| Sprite | Actor | Block contents |
|---|---|---|
| 724 / 725 | Angry Sun / Mad Moon (codedx) | |
| 726 | Actor Spawner (codedx, fixed by custom_spawner) | |
| 728 / 730 / 731 / 732 | Light Source / Effect Spawner / Fake Star Coin / Magic Lift (codedx) | |
| 734 | Hammer Flower | 21 |
| 735 | Bee | |
| 736 | P-Acorn | 22 |
| 737 | Shy Guy | |
| 738 | Actor Spawner (custom: optional event, 1-16 spawns, spread) | |
| 739 | Blue Shell | 23 |

The level editor side is the one Yaz0moto patch in [`yaz0moto/SteamDX`](../../yaz0moto/SteamDX/).

## Build

You need your own `main` NSO of NSMBU Deluxe **v1.0.0** (build id
`AEE6DCCC06D9C05B42061E2019123A61`); it is never committed. The toolchain
(clang/clang++ from LLVM, `arm-none-eabi-ld`, `c++filt`) must be on `PATH`. On
this machine that is PowerShell's `PATH`, not Git Bash's.

```powershell
py -3 mods/nsmbudx_all/build.py --nso <path>\main --sweetdx-exe <path>\sweetdx-x86_64-windows.exe
# and to put it on the Ryujinx SD card (backs up what it replaces):
py -3 mods/nsmbudx_all/build.py --nso <path>\main --sweetdx-exe <path>\sweetdx.exe `
    --install "$env:APPDATA\Ryujinx\sdcard"
```

Output: `output/atmosphere/contents/0100EA80032EA000/exefs/subsdk0`, the IPS
patch in `output/atmosphere/exefs_patches/`, and any archives from
`romfs/Model/` under `output/.../romfs/Model/`.

## Model archives (not in the repo)

The mods load these by name; without them they fall back to the game's own
models (and log `remap: archive '...' is not loaded`):

| File | Used by | How to make it |
|---|---|---|
| `hammer.Nin_NX_NVN.szs` | hammer_suit (item model) | your own model |
| `shyguy.Nin_NX_NVN.szs` | shy_guy | `scripts/models/wiiu2dx.py --wiiu kakibo.pack --template kakibo --name shyguy ...` |
| `bee.Nin_NX_NVN.szs` | bee | `scripts/models/wiiu2dx.py --wiiu pukupuku.pack --template pukupuku --name bee --map mt_eye=mat_pukupuku --map mat_pukupuku=mat_pukupuku --pattern-frame 1 ...` |

The Wii U model converter is described in [docs/WIIU_MODELS.md](../../docs/WIIU_MODELS.md).

## Regenerate this folder

It is assembled by the same tool as every other build; rerun it after changing
a mod or the framework (then delete `source/nso/main`, which is your game file):

```powershell
py -3 scripts/sdk/make_mod_project.py --repo . `
  --mod mods/hammer_suit --mod mods/bee --mod mods/p_acorn --mod mods/shy_guy --mod mods/shell_suit `
  --mod mods/yoshi_fire --mod mods/yoshi_tuning --mod mods/worldmap_log --mod mods/custom_spawner `
  --mod mods/custom_boss --sweetdx "<sweet-dx checkout>" --nso <main> `
  --out mods/nsmbudx_all --with-template-code --with-diagnostics
```

## Licences

codedx (RicBent) and sweet-dx (jabonchan) are GPL-3.0; the codedx code and
headers merged here keep that licence. See [NOTICE.md](../../NOTICE.md).
