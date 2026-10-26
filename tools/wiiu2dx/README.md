# wiiu2dx: Wii U NSMBU model -> NSMBU Deluxe

Converts a Wii U model (FRES v3, `.szs` / `.pack` / `.bfres`) into a Deluxe
model archive (`<name>.Nin_NX_NVN.szs`) that the game draws with **Nintendo's own
compiled shaders**. Proven in-game on 2026-10-26 with a remodelled Goombrat
(Shy Guy) and a remodelled Cheep Cheep (Bee).

Why it works, and every rule it follows: [docs/WIIU_MODELS.md](../../docs/WIIU_MODELS.md).

## Where the code is

| File | Does |
|---|---|
| [`tools/wiiu2dx/Program.cs`](Program.cs) | the converter (C#): Wii U -> Switch BFRES, material rebind, vertex de-interleave, smooth-skinning matrices, skin-count fit, texture-pattern freeze, `--dump` |
| [`tools/wiiu2dx/wiiu2dx.csproj`](wiiu2dx.csproj) | project; references BfresLibrary |
| [`scripts/models/wiiu2dx.py`](../../scripts/models/wiiu2dx.py) | the command you run: finds the template, reads its compiled skin counts, runs the converter, repairs the BNTX names, packs SARC + Yaz0 |
| [`scripts/models/bfres_dump.py`](../../scripts/models/bfres_dump.py) | dumps Wii U and Switch BFRES the same way (materials, bones, shapes, anims) |
| [`scripts/models/bfsha_info.py`](../../scripts/models/bfsha_info.py) | lists a `.bfsha`'s shading models and the option values (skin count) each was compiled for |
| [`scripts/models/bntx_compare.py`](../../scripts/models/bntx_compare.py) | decodes textures to PNG, compares two archives pixel by pixel |
| [`framework/diagnostics/code/draw_guard.cpp`](../../framework/diagnostics/code/draw_guard.cpp) | in-game: logs and skips a shape the renderer cannot draw instead of crashing |

## Setup (once)

```sh
git clone https://github.com/KillzXGaming/BfresLibrary ../third_party/BfresLibrary   # MIT
dotnet build -c Release tools/wiiu2dx
```

## Use

```sh
python scripts/models/wiiu2dx.py --wiiu <model.pack> --template <deluxe actor> --name <archive name> \
    --romfs "<Deluxe romfs>" --out <dir> [--map wiiuMat=templateMat]... [--pattern-frame N]
```

- `--template` the Deluxe actor whose shaders the model borrows (the one it replaces).
- `--name` the archive *and* model name the mod loads.
- `--map` bind a material to a template material (default: same name, else the first).
- `--pattern-frame` show texture-pattern animations as at frame N, whatever frame the game holds them on.

What it prints, and what each line means:

| Log line | Meaning |
|---|---|
| `material 'x' -> Wii_UBER/<shading model>` | rebound to Nintendo's compiled shader |
| `dropping attribute _t0` | the Deluxe shader cannot read it (tangent, binormal, vertex colour) |
| `N smooth matrices, inverse bind matrices taken from the bones` | smooth skinning kept (FRES < 3.4 stores them per bone) |
| `skin count 4 -> 1` | fitted to the one program the shader was compiled for |
| `anim ...: pattern _a2 -> _a0` | texture animation follows its re-routed sampler |
| `... at frame 1 -> pukupuku.1` | `--pattern-frame` baked that texture in |
| `repaired BNTX texture name` | worked around a BfresLibrary writer bug |

Inspect any BFRES (Wii U or Switch):

```sh
tools/wiiu2dx/bin/Release/net9.0/wiiu2dx --dump output.bfres
```
