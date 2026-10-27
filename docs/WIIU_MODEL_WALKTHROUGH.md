# Porting a Wii U model to Deluxe, step by step (the Biddybud)

This is the full walkthrough of one real port: Tsuru's Biddybud model
`tenten_w`, from its Wii U archive (`tenten_w.szs`) to a Deluxe archive
(`tenten_w.Nin_NX_NVN.szs`). Every command that was run is here, with what it
printed and why it mattered. That includes the wrong turn at the start, which
teaches the most.

Background on the formats and the converter is in
[WIIU_MODELS.md](WIIU_MODELS.md). Read its "shading models" and "Skin count
(F0234)" sections first. This guide is the hands-on version.

**Status:** the final archive converts, and every check below passes. As of
writing, it has **not** been confirmed in-game, so treat the last section's
checks as necessary but not proven sufficient.

---

## 0. What you need

| Thing | Where | Notes |
|---|---|---|
| Python 3 | `py -3` in PowerShell | It isn't on Git Bash's PATH. |
| .NET SDK 9 | `C:\Program Files\dotnet\dotnet.exe` | Check with `dotnet --list-sdks`. |
| The Wii U model | e.g. `tenten_w.szs` (Yaz0 + big-endian SARC holding `tenten_w.bfres`) | From Tsuru's romfs, or wherever the mod got it. |
| A Deluxe romfs | e.g. `G:\SSMB\ROMFS` (`Model\`, `Pack\`, ...) | For the template, whose shaders the model borrows. |
| This repo's tools | `scripts/models/` (`wiiu2dx.py`, `bfres_dump.py`, `bfsha_info.py`, `bntx_compare.py`), `tools/wiiu2dx/` | |
| An emulator log | e.g. `...\KenjiNX\Logs\Ryujinx_*.log` | The ModBase log goes there when `MODBASE_NETWORK_LOG` is 0. |

All commands below are PowerShell, run from `custom-code-repo/` unless they say otherwise.

---

## 1. Build the converter (`wiiu2dx.exe`)

`wiiu2dx` is a small C# program on top of KillzXGaming's **BfresLibrary**
(MIT). BfresLibrary does the generic Wii U -> Switch BFRES conversion, and
`wiiu2dx` adds the Deluxe-specific part: rebinding materials to a template's
shaders and fitting skin counts.

The documented setup clones BfresLibrary next to the repo:

```powershell
git clone https://github.com/KillzXGaming/BfresLibrary ..\third_party\BfresLibrary
& "C:\Program Files\dotnet\dotnet.exe" build -c Release tools\wiiu2dx
```

For the Biddybud we kept the repo clean (no `bin\`/`obj\` folders inside it).
BfresLibrary and a copy of the project went into a scratch folder, and the
csproj's `BfresLibraryDir` property pointed the build at it:

```powershell
$W = "C:\temp\conv"                       # any scratch folder
New-Item -ItemType Directory -Force "$W\wiiu2dx" | Out-Null
git clone --depth 1 https://github.com/KillzXGaming/BfresLibrary "$W\BfresLibrary"
Copy-Item tools\wiiu2dx\wiiu2dx.csproj, tools\wiiu2dx\Program.cs "$W\wiiu2dx\"
& "C:\Program Files\dotnet\dotnet.exe" build -c Release "$W\wiiu2dx\wiiu2dx.csproj" "-p:BfresLibraryDir=$W\BfresLibrary"
```

Expected: `0 Errores` / `0 Errors`. There are about 1000 warnings, mostly
missing XML doc comments in BfresLibrary; ignore them. The program lands at
`$W\wiiu2dx\bin\Release\net9.0\wiiu2dx.exe`. You pass that path to the script
with `--tool` (the script's default is `tools/wiiu2dx/bin/Release/net9.0/`).

---

## 2. Look at the Wii U model before converting anything

```powershell
py -3 scripts\models\bfres_dump.py "<path>\tenten_w.szs"
```

What to read off it (the Biddybud's values in brackets):

- **Animations** [skeletal `BlowDown`, `FlyWait`, `PressDown`; tex SRT `FlyWait`;
  tex pattern `bud`]. The actor's code asks for these names. On Switch the
  material animations come out as `FlyWait_fts` and `bud_ftp`. That is normal:
  Nintendo's own files use the suffixes (`kakibo` has `walk_ftp`), and the game
  passes the plain name (`"bud"`).
- **Textures** [12: `lm_01e`, `lm_02e`, `yoshi_body`, `yoshi_eye.0-2`, `red`,
  `yellow`, `blue`, `green`, `pink`, `TentenWingBody_alb`].
- **Materials and their textures.** This is the important part:

  ```
  material 'mat_yoshicheek'      textures ['red', 'lm_01e', 'lm_02e']
  material 'mat_yoshi_eye'       textures ['yoshi_eye.0', 'lm_01e', 'lm_02e']
  material 'mat_yoshi_body'      textures ['TentenWingBody_alb', 'lm_01e', 'lm_02e']
  material 'mat_yoshicheek_eye'  textures ['yoshi_eye.0', 'lm_01e', 'lm_02e']
  material 'mat_yoshitongue'     textures ['yoshi_body', 'lm_01e', 'lm_02e']
  ```

  The names give it away: Tsuru built the Biddybud out of **Yoshi's** model.
  That tells you which Deluxe template to use (step 3).

---

## 3. Pick the template

A Wii U model can't bring its own shaders (GX2 binaries don't run on NVN). It
borrows the compiled shaders of a Deluxe actor, the **template**. The template
has to fit on three points, and you check each of them.

### 3a. Find a candidate

Yoshi's Deluxe model is a standalone file:

```powershell
Get-ChildItem G:\SSMB\ROMFS\Model -Filter "*yoshi*"      # YoshiMdl.Nin_NX_NVN.szs, YoshiChibi...
```

(`find_template` in `wiiu2dx.py` also searches inside `Pack\*.pack`. Use the
name without `.Nin_NX_NVN.szs`, here `YoshiMdl`.)

### 3b. Compare the materials

```powershell
py -3 scripts\models\bfres_dump.py G:\SSMB\ROMFS\Model\YoshiMdl.Nin_NX_NVN.szs
```

```
material 'mat_yoshi_body'      shader Wii_UBER/YB_model_mat_yoshi_body      textures ['yoshi_body', 'lm_01p', 'lm_02p']
material 'mat_yoshi_eye'       shader Wii_UBER/YB_model_mat_yoshi_eye       ...
material 'mat_yoshicheek'      shader Wii_UBER/YB_model_mat_yoshicheek      ...
material 'mat_yoshicheek_eye'  shader Wii_UBER/YB_model_mat_yoshicheek_eye  ...
material 'mat_yoshitongue'     shader Wii_UBER/YB_model_mat_yoshitongue     ...
```

These are the same five names with the same sampler layout (`_a0` colour,
`_a1`/`_a2` light maps), so `wiiu2dx` binds every material by name with no
`--map` needed. In principle.

### 3c. Check what the template's shaders were compiled for

```powershell
py -3 scripts\models\bfsha_info.py G:\SSMB\ROMFS\Model\YoshiMdl.Nin_NX_NVN.szs
```

Read two options for every shading model you'll use:

```
shading model YB_model_mat_yoshi_body:     gsys_renderstate compiled ['0']   gsys_weight compiled ['1']
shading model YB_model_mat_yoshi_eye:      gsys_renderstate compiled ['0']   gsys_weight compiled ['0']
shading model YB_model_mat_yoshicheek:     gsys_renderstate compiled ['0']   gsys_weight compiled ['0']
shading model YB_model_mat_yoshicheek_eye: gsys_renderstate compiled ['0']   gsys_weight compiled ['0']
shading model YB_model_mat_yoshitongue:    gsys_renderstate compiled ['0']   gsys_weight compiled ['1']
```

- **`gsys_renderstate`**: 0 is opaque. Every model we have that renders, both
  Nintendo's and ours, uses an opaque shader whose material also says 0. Prefer
  templates compiled for 0.
- **`gsys_weight`**: the skin count, meaning how many bones each vertex
  follows. Each shading model has **one** compiled program and no default. A
  shape drawn with any other skin count gets no program (F0234). `wiiu2dx`
  fits shapes to it when there is exactly one compiled value. Note which are 0:
  a 0 shader means the part is glued to one bone and can't bend.

---

## 4. The wrong turn: an archive that loaded but drew nothing

The first `tenten_w.Nin_NX_NVN.szs` in the mod folder had been made with **Kamek's**
shaders (`kameck_mat_bodyA`). In game, the Biddybud spawned (the log showed
`spawn ... profile=932`) but was invisible: no crash and no `draw guard` line.
This is how it was narrowed down. The same checks apply to any invisible model.

### 4a. Read the log

The Ryujinx log is huge (2 million lines at trace level). Pull out only the
ModBase lines (`OutputDebugString` when `MODBASE_NETWORK_LOG` is 0):

```bash
L="/e/Emulators/KenjiNX/Logs/Ryujinx_<date>.log"
grep -a "\[ModBase\]" "$L" | sed 's/.*OutputDebugString//' | grep -v "worldmap W"
```

Look for:
- `spawn id=... profile=<your profile>` followed by its `settings1/settings2`.
  This proves the actor exists and shows its editor settings.
- `draw guard: model '...' shape N '...': null <link>`
  (`code/debug/draw_guard.cpp`). A shape with no shader program logs here
  instead of crashing.
- `mod archive missing: ...` and `tsuru: archive ... not loaded`. These mean
  the file isn't on the SD card at all.

Biddybud: spawned, no draw-guard line, no missing archive. So it **was** being
drawn, and the problem had to be in the model data.

### 4b. Rule out the archive contents

Using the repo helpers from Python (`scripts/sdk/course_sprites.py` provides
`yaz0` and `sarc`, and `scripts/models/bntx_compare.py` provides `textures` and
`image`):

```python
import sys; from pathlib import Path
sys.path.insert(0, r"scripts\sdk"); sys.path.insert(0, r"scripts\models")
from course_sprites import sarc, yaz0
import bntx_compare as bc
p = Path(r"<Model>\tenten_w.Nin_NX_NVN.szs")
d = p.read_bytes(); files = sarc(yaz0(d))
print(list(files))                              # Wii_UBER.Nin_NX_NVN.bfsha, output.bfres
for name, t in bc.textures(p).items():          # every texture, with its alpha range
    px = [q for row in bc.image(t) for q in row]
    print(name, hex(t[0]), t[1], t[2], "alpha", min(q[3] for q in px), max(q[3] for q in px))
```

All 12 textures were present and fully opaque (alpha 255), so the problem
wasn't missing or transparent textures.

### 4c. Read each shape's skin count

`bfres_dump.py` prints skin counts only for Wii U files. For a Switch BFRES,
read them out of each `FSHP` header directly:

```python
b = files["output.bfres"]; i = 0
while (i := b.find(b"FSHP", i)) >= 0:
    h = b[i:]
    # FSHP + 0x5C index u16, +0x5E material u16, +0x60 bone u16,
    #        +0x62 vertex buffer u16, +0x64 skin-bone count u16, +0x66 skin count u8
    idx, mat, bone, vbuf, nskin = [int.from_bytes(h[o:o+2], "little") for o in (0x5C, 0x5E, 0x60, 0x62, 0x64)]
    print(f"shape {idx}: material {mat}, bone {bone}, skin count {h[0x66]}")
    i += 4
```

All four shapes had skin count 2, and `kameck_mat_bodyA` had programs for 0
and 2. So that matched too.

### 4d. Compare render state with models that work

The deciding check. For the broken model and several working ones (Cold Fuzzy,
Shy Guy, Bee, Poison Mushroom, and vanilla `kakibo` / `nokonokoA`):

```powershell
py -3 scripts\models\bfres_dump.py <archive> | Select-String "gsys_renderstate'|gsys_render_state_mode"
py -3 scripts\models\bfsha_info.py  <archive> | Select-String "shading model|gsys_renderstate"
```

| | every working model | broken `tenten_w` |
|---|---|---|
| render info mode | `opaque`, blend `none` | `custom`, blend `color` |
| material `gsys_renderstate` | 0 | 0 |
| compiled for | 0 | **3** (Kamek's only program) |

That was the only difference from everything that renders. `gsys_alpha_test_func`
also differs from its compiled value in every model, including the working
ones and Nintendo's own, so it is **not** a factor. Don't chase it.

### 4e. The quick patch, and why it wasn't the answer

We tried making the materials match Kamek's program, setting `gsys_renderstate`
to 3. The BFRES string table had no `"3"`. Its only `"6"` was used solely by
`gsys_alpha_test_func` (alpha test was off), so that one string was rewritten
to `"3"` and each material's `gsys_renderstate` value pointer was moved to it:
six bytes in all. That needed two facts about the layout:

- **ShaderAssign (Switch v8):** pointers at +0x00 archive name, +0x08 shading
  model, +0x10/+0x18 attrib values/dict, +0x20/+0x28 sampler values/dict,
  +0x30/+0x38 **option values/dict**. Option values are u64 pointers to
  length-prefixed strings, in the same order as the dict's entries (entry
  *k* + 1, since node 0 is the root).
- **Watch out:** a string search for `"\x01\x003\x00"` found a "3" inside the
  relocation table (past `0x47000`). That's a coincidental byte pattern, not a
  string. Only use strings inside the `_STR` block.

The patched file re-read cleanly. The Biddybud was **still invisible**. The
lesson: rather than patching a model built on an unsuitable template, convert
again from the original with a template that fits (step 5).

---

## 5. Convert

First attempt, with the Yoshi template and a scratch output folder:

```powershell
$Tool = "C:\temp\conv\wiiu2dx\bin\Release\net9.0\wiiu2dx.exe"
py -3 scripts\models\wiiu2dx.py --wiiu "<path>\tenten_w.szs" --template YoshiMdl --name tenten_w `
    --romfs "G:\SSMB\ROMFS" --out "C:\temp\out" --tool $Tool `
    --map mat_yoshicheek=mat_yoshi_body
```

Why the one `--map`: `mat_yoshicheek` is the coloured bud body (texture
`red`). Yoshi's cheek shader is compiled for skin count 0, so the converter
would glue the whole body to one bone, and it would stay still while the wings
and legs animate. Binding it to `mat_yoshi_body` (skin count 1) lets each
vertex follow its strongest bone.

It failed:

```
shape Body__TentenWingWingMat00: skin count 2 -> 1 (the program YB_model_mat_yoshitongue was compiled for)
Unhandled exception. System.IO.InvalidDataException: eye0__TentenWingEyeMat00: skin count 1
  cannot be fitted to 0 (the only program YB_model_mat_yoshi_eye has); pick a template material compiled for it
```

The converter can reduce a skin count (2 -> 1) but won't go from 1 to 0. Yoshi's
eye shader only exists for 0, so the eye material gets the same remap.
Second, successful run:

```powershell
py -3 scripts\models\wiiu2dx.py --wiiu "<path>\tenten_w.szs" --template YoshiMdl --name tenten_w `
    --romfs "G:\SSMB\ROMFS" --out "C:\temp\out" --tool $Tool `
    --map mat_yoshicheek=mat_yoshi_body --map mat_yoshi_eye=mat_yoshi_body
```

```
tenten_w: 4 smooth matrices, inverse bind matrices taken from the bones
tenten_w vbuf 1: dropping attribute _b0 (Format_8_8_8_8_SNorm), no Deluxe shader reads it
tenten_w vbuf 1: dropping attribute _t0 (Format_8_8_8_8_SNorm), no Deluxe shader reads it
material 'mat_yoshicheek' -> Wii_UBER/YB_model_mat_yoshi_body: textures [red, lm_01e, lm_02e], 11/35 parameter values from the Wii U material
...
shape Body__TentenWingWingMat00: skin count 2 -> 1 (the program YB_model_mat_yoshitongue was compiled for)
wrote ...\tenten_w.Nin_NX_NVN.szs (91410 bytes; bfres 279968, shaders from 'YoshiMdl')
```

Reading that output:
- **`dropping attribute _b0 / _t0`**: binormals and tangents. No Deluxe shader
  reads them, so nothing visible is lost.
- **`11/35 parameter values from the Wii U material`**: the other 24 shader
  parameters keep Yoshi's defaults, so lighting can differ slightly from the
  Wii U version.
- `Texture original data not set` at the very top is BfresLibrary chatter. Ignore it.
- `--name` sets both the archive's file name and the model name inside it, so
  it must be what the code loads: `tsuru::createModel("tenten_w", "tenten_w", ...)`.

---

## 6. Verify the result before installing it

Check everything that broke last time, on the new archive (`$O`):

```powershell
$O = "C:\temp\out\tenten_w.Nin_NX_NVN.szs"
py -3 scripts\models\bfres_dump.py $O | Select-String "_anims|model '|material '|textures \["
py -3 scripts\models\bfres_dump.py $O | Select-String "render_info"   # look at gsys_render_state_mode
py -3 scripts\models\bfres_dump.py $O | Select-String "options \{"    # look at gsys_renderstate
```

Then rerun the skin-count reader from 4c, and the texture listing from 4b.
Biddybud results:

| Check | Expected | Got |
|---|---|---|
| shader per material | a Yoshi `YB_model_*` program | yes (cheek and eye on `yoshi_body`) |
| render mode / `gsys_renderstate` | `opaque` / `0`, compiled 0 | yes, all five |
| skin count per shape | equals its material's compiled `gsys_weight` | all four shapes 1, on programs compiled for 1 |
| skeletal anims | `BlowDown`, `FlyWait`, `PressDown` | yes |
| material anims | `FlyWait_fts`, `bud_ftp` | yes |
| textures | all 12 | yes |
| shader file in the archive | the template's `Wii_UBER.Nin_NX_NVN.bfsha` | yes |

For the skin row, the shapes use materials 2, 0, 4 and 1, i.e. `yoshi_body`,
cheek (remapped to body), `yoshitongue`, and eye (remapped to body). All of
those are compiled for 1.

**The texture-pattern frame order.** This is what the level editor's colour
list must match. The `bud` animation lists its textures as an array of u64
pointers to names in the string table. Find the run of pointers that all land
on the colour names:

```python
import struct
names = ["red", "yellow", "blue", "green", "pink"]
where = {}
for n in names:
    enc = struct.pack("<H", len(n)) + n.encode() + b"\0"
    j = b.find(enc)
    if j >= 0: where[j] = n
for i in range(0, len(b) - 8, 8):
    if struct.unpack_from("<Q", b, i)[0] in where:
        run = []; k = i
        while struct.unpack_from("<Q", b, k)[0] in where:
            run.append(where[struct.unpack_from("<Q", b, k)[0]]); k += 8
        if len(run) > 1: print(hex(i), run); break
```

Result: `['red', 'yellow', 'green', 'blue', 'pink']`. So frame 0 is red, 1
yellow, 2 green, 3 blue and 4 pink, which is exactly the editor's list for
sprite 742, nybble 5. The order in the BNTX (red, yellow, **blue, green**) is
**not** the frame order. Always read the animation's own list.

---

## 7. Install and test

Deluxe loads `romfs/Model/<name>.Nin_NX_NVN.szs` from the emulator's mod folder:

```powershell
$M = "$env:APPDATA\Ryujinx\sdcard\atmosphere\contents\0100EA80032EA000\romfs\Model"
Copy-Item "$M\tenten_w.Nin_NX_NVN.szs" "C:\temp\backup\" -ErrorAction SilentlyContinue   # keep the old one
Copy-Item "C:\temp\out\tenten_w.Nin_NX_NVN.szs" "$M\"
Get-FileHash "C:\temp\out\tenten_w.Nin_NX_NVN.szs", "$M\tenten_w.Nin_NX_NVN.szs" -Algorithm SHA1
```

Restart the game (archives load at boot or level load, not live), place the
sprite in a level, and read the log again (step 4a). The Wii U `tenten_w.szs`
can sit in the same folder without harm, since the game only opens
`.Nin_NX_NVN.szs`.

If the model is still invisible after all of section 6 passes, the cause is
outside the model file. Check the actor: is `onDraw` reached, are the scale
and position sane, and is the archive's model name what `createModel` asks for.

---

## Quick reference: the Biddybud in one command

```powershell
py -3 scripts\models\wiiu2dx.py --wiiu tenten_w.szs --template YoshiMdl --name tenten_w `
    --romfs <Deluxe romfs> --out <dir> --tool <wiiu2dx.exe> `
    --map mat_yoshicheek=mat_yoshi_body --map mat_yoshi_eye=mat_yoshi_body
```

## Lessons, in order of how much time they would have saved

1. **Choose the template from the Wii U material names.** A model built from an
   NSMBU character's materials (here Yoshi's) should use that character's
   Deluxe model as its template.
2. **Read `bfsha_info.py` before converting.** Look at `gsys_renderstate`
   (prefer 0, opaque) and `gsys_weight` (each material's single skin count).
   Remap any material whose shader was compiled for 0 if its shape needs to
   bend or is skinned.
3. **"Spawns, no crash, invisible" means the model data.** An actor that isn't
   created doesn't log a spawn. A shape with no shader program logs a draw
   guard or crashes.
4. **Compare against a model that works.** Every field that differs from all
   working models is a suspect. Fields that differ in the working ones too
   (`gsys_alpha_test_func`) are not.
5. **Patching a converted file is a last resort.** Converting again from the
   original with the right template is cleaner and usually what's needed.
