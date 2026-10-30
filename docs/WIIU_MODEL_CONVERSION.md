# Converting Wii U NSMBU models to NSMBU Deluxe: the complete guide

This is the reference for getting a Wii U model (NSMBU, or a Tsuru custom actor) to draw
correctly in NSMBU Deluxe v1.0.0 on the Switch: it loads, animates, and is lit the way
Deluxe's own enemies are. It covers how the two formats differ, every pitfall found while
porting the 26 Tsuru models (each one's symptom, cause, evidence and fix), the tools, and
how to check a result before loading the game.

[WIIU_MODELS.md](WIIU_MODELS.md) is the original investigation log, with its own ledger
entries (F0231-F0236). This file is the consolidated reference.

## Quick start

```sh
py -3 scripts/models/convert_wiiu_model.py --wiiu <wiiu x.szs or x.bfres> --template <deluxe actor> \
    --name <archive name> --romfs "<Deluxe romfs>" --out <dir> [options] [--install <romfs/Model>]
```

`convert_wiiu_model.py` runs the conversion, which applies every fix below, then a safety
pass and a full verification. It installs only if every check passes. Run it with plain
`py -3`, **not** `py -3 -I`: isolated mode hides the user-installed `libyaz0` and Yaz0
drops to pure Python, which takes minutes per file.

Options passed through to `wiiu2dx.py`:

| Option | Use |
|---|---|
| `--map wiiuMat=templateMat` | bind a Wii U material to a template material (default: same name, else the first) |
| `--tex mat=t0,t1,...` | the material's textures in template sampler order (albedo first, then the lightmaps): needed for nw4f materials, whose sampler variables mean different things |
| `--template-lightmaps` | lightmap slots (`lm_*`) take the template's own Deluxe textures |
| `--drop-material M` | remove the shapes drawn with M (a material no Deluxe program can draw) |
| `--bake-scale s` | scale the model itself; draw it at scale 1 in the actor code |
| `--pattern-frame N` | resolve texture-pattern animations at frame N (for an actor that holds a frame) |

To batch-convert the Tsuru set: `scripts/models/port_tsuru_models.py` (its job table records
every model's template and options). To repair archives converted before these fixes:
`scripts/models/fix_bntx_dict.py <folder>` (the textures), and `wiiu2dx --fix-normals`
(the normals: see [Normals](#7-packed-normals-lit-on-one-side-flat-on-the-other)).

## One-time setup

1. **BfresLibrary** (KillzXGaming, MIT), checked out next to the repo:
   `git clone https://github.com/KillzXGaming/BfresLibrary ../third_party/BfresLibrary`
2. **The converter:** `dotnet build -c Release tools/wiiu2dx`
   (`-p:BfresLibraryDir=<path>` if BfresLibrary lives elsewhere). It needs the .NET 9 SDK.
3. **Fast Yaz0** (optional but strongly recommended): AboodXD's `libyaz0`.
   - `py -3 -m pip install --user libyaz0`
   - Its bundled `yaz0_pyd.pyd` is a **32-bit** build ("not a valid Win32 application" on
     64-bit Python), and on-the-fly Cython compilation fails on Cython 3: in `yaz0_cy.pyx`,
     line 148, `range_ = 0x10e0 * opt_compr / 9 - 0x0e0` assigns a double to a `u32`. Build
     it yourself:
     1. copy `yaz0_cy.pyx` as `yaz0_pyd.pyx` and change that line to
        `range_ = <u32>(0x10e0 * opt_compr // 9 - 0x0e0)`;
     2. use a `setup.py` with `cythonize([Extension("yaz0_pyd", ["yaz0_pyd.pyx"])], language_level=3)`;
     3. build it from a `vcvars64.bat` shell with `DISTUTILS_USE_SDK=1` and `MSSdk=1`. The
        setuptools that ships with Python 3.10 cannot find VS 2022 on its own ("Unable to
        find a compatible Visual Studio installation");
     4. copy the resulting `yaz0_pyd.cp310-win_amd64.pyd` into the `libyaz0` package folder.
        Python loads it ahead of the bundled 32-bit `yaz0_pyd.pyd`.
   - Result: a 640 KB archive compresses in 33 ms (pure Python: over 6 minutes, not done).
   - Use compression **level 1**. Level 9's brute-force search over a 4 KB window takes
     minutes even when compiled. Level 1 files are about 18% larger than Nintendo's, which
     makes no difference to the game.

## How Deluxe stores a model

| | NSMBU (Wii U) | NSMBU Deluxe (Switch) |
|---|---|---|
| archive | `content/Common/actor/<name>.szs`: Yaz0, SARC big-endian | `romfs/Model/<name>.Nin_NX_NVN.szs`: Yaz0, SARC little-endian (data at 0x2000, files 0x1000-aligned), or inside `Pack/*.pack` |
| model | `<name>.bfres`: FRES v3, big-endian | `output.bfres`: FRES v0.8.1.1 (`0x00080101`), little-endian |
| textures | FTEX in the bfres, GX2-tiled | `textures.bntx` embedded in the bfres, Tegra block-linear |
| shaders | `.sharc` + `.sharcfb` (GX2 binaries) | `Wii_UBER.Nin_NX_NVN.bfsha` (NVN binaries), **per archive** |

The game loads a model with `ResArchive::getModel` (0x604300DC). It binds each material to
a shading model of the archive's own `.bfsha`, and each texture by name through the BNTX
texture dictionary.

**Shaders cannot be converted** (GX2 binaries do not run on NVN), and they don't need to be.
Nintendo compiled each Wii U program into a Deluxe shading model named
`<wii u shader archive>_<program>` (`kakibo_mat_kakibo_body`) and shipped it inside the
archive that uses it. A converted model borrows the materials and the `.bfsha` of a
**template**, a retail Deluxe archive.

## The pipeline, step by step

`convert_wiiu_model.py` → `wiiu2dx.py` (Python: archives, template lookup, BNTX repair,
packing) → `tools/wiiu2dx` (C#, on BfresLibrary: the bfres itself).

1. Read the Wii U archive, and the template's `output.bfres` and `.bfsha` (from
   `romfs/Model` or any `romfs/Pack/*.pack`).
2. Read each template shading model's compiled skin count (`gsys_weight`) from its `.bfsha`.
3. In C#:
   1. `ChangePlatform` (BfresLibrary: big-endian v3 → Switch v8, FTEX → BNTX);
   2. rebuild the inverse bind matrices (§3);
   3. drop the shapes of `--drop-material`;
   4. de-interleave the vertex buffers (§2);
   5. rebind each material to its template material: shader assign, options, render info
      and parameters from the template (`fog_index` always, §6); textures routed by sampler
      (or `--tex`), template lightmaps and missing textures imported (§9);
   6. fit every shape to its program's skin count (§4);
   7. re-target texture-pattern animations (§5); `--pattern-frame`;
   8. restore the packed normals from the Wii U data (§7);
   9. `--bake-scale` (§10);
   10. write the imported textures into `textures.bntx` (§9);
   11. save.
4. Python:
   1. repair the damaged BNTX name and **rebuild the texture dictionary** (§8);
   2. pack the SARC like Deluxe does, then Yaz0.
5. `fix_bntx_dict.py` safety pass, then verification.

## The pitfalls

Each entry below gives the symptom, the cause, how it was established, and the fix. They
are in the order they were found.

### 1. Shader binding

- **Symptom:** a model with Wii U shaders draws nothing.
- **Cause:** see "Shaders cannot be converted" above.
- **Fix:** bind every material to a template material and ship the template's `.bfsha`.
- **Choosing the template:** see [Choosing a template](#choosing-a-template).

### 2. Vertex buffers: one per attribute (ledger F0232)

- **Symptom:** a crash (address 0) in the per-shape draw at 0x60434AE8, the first frame the
  model is drawn.
- **Cause:** Nintendo's converter **de-interleaves** every vertex buffer: one tightly packed
  buffer per attribute, position first, then by name. It keeps only the attributes the
  shading model reads. The Wii U interleaves them (kakibo: stride 21).
- **Fix:** de-interleaved the same way. Vertex colour, tangents and binormals are dropped
  (logged). Converting the vanilla Wii U kakibo now gives geometry identical to Nintendo's.

### 3. Smooth skinning: inverse bind matrices (F0233)

- **Symptom:** the same crash in a smooth-skinned model.
- **Cause:** FRES < 3.4 stores each inverse bind matrix on its bone. The Switch stores one
  list on the skeleton, and BfresLibrary writes the smooth-matrix count as that list's
  length, so conversion silently made every smooth matrix rigid.
- **Fix:** rebuild the list from the bones ("N smooth matrices, inverse bind matrices taken
  from the bones").

### 4. Skin count: one compiled program per shading model (F0234)

- **Symptom:** the same crash again.
- **Cause:** every Deluxe shading model contains **exactly one** compiled program, keyed by
  `gsys_weight` = the skin count of the shape Nintendo drew with it, and has no default.
  A shape with any other count selects no program, and the draw dereferences null.
- **Fix:** every skinned shape is fitted to its program's count:
  - **more → fewer:** keep the strongest weights, renormalised;
  - **0 → N:** index the shape's bone;
  - **N → more:** pad with zero-weight copies of the first index. The program sums
    weight × palette[index] × position, so a zero-weight influence leaves the vertex where it
    was, in whatever space (bone-local for rigid, model-space for smooth);
  - **a skin-0 shape whose bone has no palette entry:** that bone gets a rigid matrix
    appended to `MatrixToBoneList`. BfresLibrary saves the rigid count as palette length
    minus inverse bind matrices (Kamek's wand, Basalt Bones' head).
- **Indices are always rewritten in Nintendo's layout,** even at an equal count: 8-bit
  `_i0`, and `_w0` only for two or more weights. nw4f exports keep 32-bit indices and a
  spare `_w0`. Any index past the palette is refused.
- **Down to 0 is refused:** pick a template material compiled for the right count.
- **Check:** `scripts/models/bfsha_info.py --option gsys_weight` lists the compiled counts.
- **Safety net in game:** `source/code/debug/draw_guard.cpp` logs and skips a shape whose
  draw would dereference null.

### 5. Texture-pattern animations follow re-routed samplers (F0235/F0236)

- **Symptom:** the Bee drew dark; then it drew a blank texture.
- **Cause:** a pattern animation names the *material sampler* it drives. Rebinding moves
  textures between samplers, so the animation pasted colour textures over a lightmap. And
  the game *holds* the Cheep Cheep's pattern on frame 0, where the Bee model had a blank
  placeholder.
- **Fix:** the animations are re-targeted to the new samplers. `--pattern-frame N` resolves
  every pattern at frame N.
- **Rule:** check what frame the game holds, not what Toolbox previews.

### 6. `fog_index`: inherited from nw4f materials

- **Symptom:** the Cataquack and Peepa drew black. On its own, this was not the cause; see §8.
- **Cause:** the converter keeps a Wii U parameter value wherever the template has a
  parameter of the same name and type. nw4f materials (Captain Toad / 3D World exports)
  carry `fog_index = 1`. The game code never reads it: it is a uniform the `Wii_UBER`
  program uses to pick a scene fog slot.
- **Evidence:**
  - Retail enemies use 0; map objects (`daikonbouBig`) use 1.
  - Nintendo's own conversion of an nw4f enemy (`mokinger` → `crasher_mat_crasher`) has 0.
  - The envsets' enemy environments (`e_default.baglenv`, an AAMP file) define lights and no fog.
- **Fix:** `fog_index` always comes from the template (`TemplateOnlyParams`).

### 7. Packed normals: lit on one side, flat on the other

- **Symptom:** the Stingby and the Hammer Suit helmet were lit on one side and looked flat
  on the other. A scan found it in 22 of 44 installed models.
- **Cause:** BfresLibrary's `ChangePlatform` mangles `Format_10_10_10_2_SNorm` normals. Both
  platforms store the same 32-bit word (x bits 0-9, y 10-19, z 20-29, signed 10-bit). The
  Wii U word is big-endian and the Switch one little-endian, but the converted words no
  longer decode to unit vectors. Typically 60-80% are wrong, skewed toward +x. Float
  normals (`Format_32_32_32_Single`) convert correctly, which is why the Cataquack and the
  Shy Guy were never affected.
- **Evidence:** unit length in the Wii U source, 0-1 after conversion. Retail Deluxe packed
  normals all decode to unit length with the same bit layout.
- **Fix:** the Wii U words are copied over, byte-swapped (`RestorePackedNormals`).
  - Models are matched by name, then by position, then the source's only model.
  - Vertex buffers are matched by index, with vertex counts checked.
  - For an archive converted before this fix: `wiiu2dx --fix-normals <installed output.bfres>
    <wiiu bfres> <out.bfres>`, then repack (see the repair workflow below).
- **One exception:** `laron`'s `laron_partsB` has 444 normals up to 15% long in Tsuru's own
  file. The conversion now matches the source, and the verifier accepts that count.

### 8. The BNTX texture dictionary: the real cause of the black models

- **Symptom:** the Cataquack and Peepa stayed solid black (correct shape) after every other
  fix. Every other model was missing exactly one texture: usually its second lightmap
  (half the lighting), sometimes an environment, specular or animation-frame texture.
- **Cause:** BfresLibrary's BNTX writer writes a stray u32 over the last three characters
  and the NUL of the name just before `textures` in the string table, for example
  `Poihana` → `Poih?\x01\x00`. It also builds the texture dictionary (an `nn::util::ResDic`)
  from the damaged names. The game finds textures only through that dictionary:
  - it is a patricia trie whose nodes branch on name bits (bit *n* = bit `n & 7` of byte
    `len - 1 - (n >> 3)`);
  - the lookup walks it and compares the key it lands on;
  - restoring the string bytes alone leaves a trie that walks past the entry, so the lookup
    fails and the sampler stays unbound. A colour texture then draws black; a lightmap
    halves the lighting.
  - In Stingby, the damaged name was `star_env`, which it never draws. That's why it
    looked fine.
- **Evidence:** a simulation of the lookup (`wiiu2dx.dict_find`) fails for exactly the
  damaged names and succeeds for every name in Nintendo's own files. The pointers and
  relocations (`_RLT`) are all correct.
- **Fix:**
  - `repair_bntx_names` restores the name (matching expected names by length; when the name
    also exists elsewhere, by its sorted neighbours);
  - `rebuild_bntx_dict` rebuilds the trie (`dict_build`). Rebuilt from their own keys,
    Nintendo's `kakibo`, `chorobon`, `kuribo`, `musasabi`, `gorogoro`, `karon`, `star_coin`
    and `obj_block` come out byte for byte the same;
  - the archive is refused unless every texture is found by lookup.
- **Repairing old archives:** `fix_bntx_dict.py` repairs them in place, restoring damaged
  names from the names the bfres itself uses.

### 9. Imported textures: `textures.bntx` is baked bytes

- **Symptom:** textures "taken from the template" were missing from the archive, and
  same-named "replacements" silently kept the Wii U version.
- **Cause:** `ChangePlatform` bakes the textures into the external file `textures.bntx` as
  raw bytes. Changes to `res.Textures` afterwards are not saved.
- **Fix:** imports are written into `textures.bntx` itself, replacing the same-named
  texture or adding it (`WriteImportedTextures`). A texture whose name is *damaged* (§8)
  counts as the same name. Before that, Kamek's `lm_02b` was added a second time, and
  `fix_bntx_dict.py` renames such a duplicate (the earlier copy, `lm_02~`).
- **Guard:** duplicate keys make the dictionary builder raise an error instead of hanging.
  Two equal keys never differ in any bit, so the builder's search for a differing bit would
  never end.

### 10. Model scale

- **Symptom:** the Stingby drew unlit, and was fixed by this. The Cataquack and Peepa were
  not; §8 was their cause.
- **Cause:** Captain Toad-sized models (the Cataquack ±115 units, Peepa ±70, Stingby ±60)
  are shrunk at runtime by Tsuru's `setScale` 0.1-0.17. Every working conversion is drawn
  at scale 1, and Nintendo's enemy programs are drawn at scale 1.
- **Fix:** `--bake-scale s` scales positions, bone translations, inverse bind matrices,
  shape bounds and every skeletal translation track; the actor draws at scale 1.
  - Quantised curves scale through their Scale and Offset; float curves through the keys.
  - Nintendo did not bake its own `mokinger`/`daikonbouBig`, so this is a choice for
    shrunk actors, not a format rule.

### 11. Materials no Deluxe program can draw

Peepa's `Clouds` sphere is a translucent `nw4f_kakiwari_shader` fog. Bound to an enemy
program it would be an opaque blob, so it is dropped (`--drop-material Clouds`).

### 12. Smaller things

- **A texture a material names but the file lacks** (Tsuru's `laron` `mat_kalav_body` →
  `lavaanim`): `--tex` it to one that exists (`lavaglow`). Otherwise wiiu2dx reports a problem.
- **Lightmaps used for effects:** Basalt Bones' `lavaglow` sits in a lightmap slot as its
  glow. Leave out `--template-lightmaps` there, so the model keeps its own.
- **nw4f sampler routing:** an nw4f material feeds its albedo through different sampler
  variables (`_a2`, `_a3`) than the template expects. Give `--tex mat=albedo,lm_01,lm_02[,env]`.
- **Vertex colour:** `_c0` (nw4f baked shading, `var_vertex_color = 1`) is dropped. No Deluxe
  enemy program reads it, so that soft shading is lost.

## Choosing a template

In order of preference:

1. **The same material:**
   - `block_challenge` is Nintendo's conversion of the triple block's material;
   - `gorogoro` (Grrrol) has `guruguru`'s materials;
   - `star_coin` has the Time Clock's B body/eye/star.
2. **The same family:** `karon` (Dry Bones) for Basalt Bones, `nokonokoA` (Koopa) for
   Para-Bones, `iggy` for Kamek-style `mat_bodyA`.
3. **A generic program proven in game:**
   - `kakibo` (Goombrat, skin 1; the Shy Guy, Stingby, Cataquack);
   - `chorobon` (Fuzzy, skin 2 with env; the Cold Fuzzy, Peepa);
   - `musasabi` (Waddlewing, body skin 4);
   - `kuribo`, `gabon_rock`, `switch`, `obj_block`.

Match the skin count if you can: the fewer weights are dropped, the smoother the bends.
`scripts/models/port_tsuru_models.py` lists every Tsuru model with its template.

## Verifying a conversion

`convert_wiiu_model.py` refuses to install unless all of these hold:

| Check | Catches |
|---|---|
| each shape's skin count is one its shading model was compiled for | §4: the null-program crash |
| each shading model is in the `.bfsha` | a wrong `--map` |
| each texture a material names exists | a missing texture (empty slot) |
| every texture name is printable, and found by the game's dictionary lookup | §8: black / half-lit |
| every packed normal is unit length (or as in the source) | §7: one-sided lighting |
| `fog_index` equals the template's | §6 |

Diagnostic dumps: `WIIU2DX_DUMP_PARAMS=1 wiiu2dx --dump <bfres>` lists, per material, the
parameters, render info and shader options. It also gives the bone transforms,
animation scale tracks, vertex attribute ranges and packed-normal lengths, and the textures
with their channel selectors. `scripts/models/bntx_compare.py <a> [b] --png <dir>` decodes
textures (mip 0) and compares two archives.

## Repairing archives converted earlier

```sh
py -3 scripts/models/fix_bntx_dict.py <romfs/Model>          # textures: names, dictionary, duplicates
wiiu2dx --fix-normals <output.bfres> <wiiu.bfres> <out.bfres> # normals, per archive (unpack/repack around it)
```

- `fix_bntx_dict.py` patches only the dictionary and name bytes, in place. The SARC layout,
  the other files and the rest of the bfres stay as they were, and an archive that needs
  nothing is not written.
- `--fix-normals` re-saves the bfres through BfresLibrary, so run `fix_bntx_dict`'s check on
  the result. That is what the 2026-10-28 repair of the installed models did: 22 archives,
  each verified identical apart from the normals.

## Ruled out along the way

These were checked and are **not** problems. Don't chase them again:
- texture channel selectors (converted correctly);
- mip-level data (all populated);
- BNTX texture records (identical apart from pointers);
- relocation tables (complete);
- UV transforms (`texmtx0-2` are identity in nw4f materials);
- bind-pose bone scales (all 1), and animation scale tracks (about 1);
- float normals and UV ranges.
