# Wii U models in Deluxe

> **The consolidated reference is [WIIU_MODEL_CONVERSION.md](WIIU_MODEL_CONVERSION.md)**: the whole
> pipeline, every pitfall (including the later black-model, normal and texture-dictionary
> fixes), setup and verification. This file is the original investigation log.


How NSMBU Deluxe stores a model, how that differs from NSMBU (Wii U), and what a
Wii U model needs before Deluxe can draw it. Every claim below was read from the
two games' own files with `scripts/models/bfres_dump.py`, which dumps either
format the same way. Deluxe is a port, so most Wii U models have a Deluxe twin
(291 archives exist in both; 116 are Wii U only, 164 Deluxe only). Those pairs
show exactly what Nintendo's converter did.

## In short

**Status: works in-game** (2026-10-26, Ryujinx): a Wii U remodel of the
Goombrat (Shy Guy) and of the Cheep Cheep (Bee) draw, animate and die correctly.

A Wii U model cannot bring its shaders to the Switch, but it does not need to:
Deluxe ships every material's shader *pre-compiled per archive*, and a converted
model is rebound to those. Six things had to be right; each one crashed or
broke the model until it was (ledger F0231-F0236):

| | Rule | Found because |
|---|---|---|
| 1 | Bind each material to a template material's compiled shading model (`<archive>_<material>`) and ship that archive's `.bfsha` | the format comparison (F0231) |
| 2 | One vertex buffer per attribute, only the attributes the shader reads | crash in the per-shape draw (F0232) |
| 3 | Keep smooth-skinning inverse bind matrices (FRES < 3.4 stores them per bone) | same crash (F0233) |
| 4 | Fit every shape to the skin count its shader was compiled for (one program, no default) | same crash, the real cause (F0234) |
| 5 | Re-target texture-pattern animations when samplers move | the Bee drew dark (F0235) |
| 6 | Show the animation frame the *game* holds, not the one Toolbox previews | the Bee showed a blank texture (F0236) |

## Where the code is

| What | Where |
|---|---|
| The command you run | [`scripts/models/wiiu2dx.py`](../scripts/models/wiiu2dx.py) |
| The converter (C#, on BfresLibrary) | [`tools/wiiu2dx/Program.cs`](../tools/wiiu2dx/Program.cs), [README](../tools/wiiu2dx/README.md) |
| BFRES dump (Wii U + Switch) | [`scripts/models/bfres_dump.py`](../scripts/models/bfres_dump.py), `wiiu2dx --dump` |
| Shader archive: compiled programs | [`scripts/models/bfsha_info.py`](../scripts/models/bfsha_info.py) |
| Textures to PNG / pixel compare | [`scripts/models/bntx_compare.py`](../scripts/models/bntx_compare.py) |
| In-game safety net | [`source/code/debug/draw_guard.cpp`](../source/code/debug/draw_guard.cpp) |
| Bee death crash fix | [`source/code/framework/actor_variant.cpp`](../source/code/framework/actor_variant.cpp) (`Variant_checkLiquid`) |
| Findings | [`reverse-engineering/FindingsB/ledger.csv`](../reverse-engineering/FindingsB/ledger.csv) F0231-F0236 |
| Where converted models go | `<SD>/atmosphere/contents/0100EA80032EA000/romfs/Model/` (never committed) |

## The two archive formats

| | NSMBU (Wii U) | NSMBU Deluxe |
|---|---|---|
| archive | `content/Common/actor/<name>.szs`: Yaz0, SARC big-endian | `romfs/Model/<name>.Nin_NX_NVN.szs`: Yaz0, SARC little-endian (or inside `Pack/*.pack`) |
| model file | `<name>.bfres`: FRES v3.0.0.1, big-endian, self-relative s32 offsets | `output.bfres`: FRES v0.8.1.1 (`0x00080101`), little-endian, absolute u64 offsets |
| textures | FTEX in the bfres, GX2 tiled | `textures.bntx` embedded as an external file, Tegra block-linear |
| shaders | `<name>.sharc` + `<name>.sharcfb` (agl, GX2 binaries) | `Wii_UBER.Nin_NX_NVN.bfsha` (nn::g3d, NVN binaries) |
| material anims | separate dicts (`tex_pattern_anims` ...) | one material-anim dict, names suffixed `_ftp` / `_fsp` / ... |

The game loads models with nn::g3d on nn::gfx and binds materials to shaders
through `ResFileEx::bind(..., agl::ShaderProgramArchive)` -- names from the
symbolised 64-bit build of the engine (`main.dynsym.demangled.map`; its
addresses do not apply to the 32-bit v1.0.0 main). In v1.0.0 the model lookup
is `ResArchive::getModel` 0x604300DC.

## The shader binding -- the part that matters

Nintendo compiled each Wii U shader program into its own NVN shading model and
shipped it **inside the archive that uses it**. A material's shading model is
named after its Wii U shader archive and program:

| NSMBU material | Wii U shader | Deluxe shader |
|---|---|---|
| kakibo / mat_kakibo_body | `kakibo` / `mat_kakibo_body` | `Wii_UBER` / `kakibo_mat_kakibo_body` |
| kakibo / mat_kakibo_eye | `kakibo` / `mat_kakibo_eye` | `Wii_UBER` / `kakibo_mat_kakibo_eye` |
| pukupuku / mat_pukupuku | `pukupuku` / `mat_pukupuku` | `Wii_UBER` / `pukupuku_mat_pukupuku` |

Each archive's `Wii_UBER.Nin_NX_NVN.bfsha` holds exactly those shading models
plus `gsys_assign_material`. Material names, texture lists, sampler names
(`_a0.._a2`) and attribute assigns (`_p0 _n0 _i0 _u0 ...`) are unchanged.
Nintendo's converter added:

- shader options `enable_debug_flag 0, enable_vertex_alpha 0,
  gsys_alpha_test_enable 0, gsys_alpha_test_func 6, gsys_renderstate 0,
  material_alpha 0`
- render info `gsys_*` (alpha test, blend funcs and ops, depth test/write,
  render-state blend mode, ...), from the Wii U render state
- default parameters (`gsys_bake_*`, `ind_texmtx0-2`, `texmtx0-7`, `shadow_*`,
  `spec_power`, `reflect_power`, ...)

**Correction (F0234):** each shading model holds exactly *one* compiled
program, with no default, keyed by `gsys_weight` = the skin count of the shape
Nintendo drew with it (kakibo body 1, eye 0, pukupuku 1). A shape with any
other skin count selects no program and the draw dereferences null. `wiiu2dx`
reads the compiled count from the template's `.bfsha` and fits every shape to
it (more weights -> strongest bone(s), renormalised; 0 -> 1 -> the shape's
bone), or refuses.

**Consequence:** a Wii U model cannot bring its own shaders (GX2 binaries
cannot run on NVN), but it does not need to. A model whose materials map onto
shading models Deluxe already ships, bound to that archive's `.bfsha`, is
drawn by Nintendo's own compiled shaders.

## The two example remodels

| | `kakibo.pack` (Shy Guy) | `pukupuku.pack` (Bee) |
|---|---|---|
| format | Wii U: SARC BE, FRES v3, `.sharc/.sharcfb` | same |
| materials | `mat_kakibo_body`, `mat_kakibo_eye` on `kakibo/*` -- the original programs | `mt_eye`, `mat_pukupuku` on `nw4f_shader/nw4f_map_obj_shader` -- a generic NW4F shader NSMBU never compiled |
| shader target | `kakibo_mat_kakibo_body` / `_eye` in Deluxe's kakibo `.bfsha`, as-is | both materials -> `pukupuku_mat_pukupuku`; textures reordered so the albedo is `_a0` (the bee's sampler assign maps `_a0 -> _a2`) |
| skeleton | the original 11 bones | 5 new bones (`skl_root LegL LegR WingL WingR`) |
| skinning | one shape, 4 weights (original: rigid) | 3 shapes, rigid -- as the original |
| animations | `damage hikkuri walk walk0 walk1` + texture patterns, the names the Goombrat code plays | `fly swim touch` + `pukupuku` pattern, the names the Cheep Cheep code plays |
| new textures | `heyho_tex` 256x128 BC3 | `enemy_xx01_BugEye_dif.2` (BC1), `pukupuku.1` (RGBA8) |

So "rename the archive" is right for the *game side* (the shy_guy and bee
mods already load their model by a configurable archive name, see
`code/framework/actor_variant.cpp`), but the archive itself must be converted.

## The conversion

1. **Container**: SARC BE -> SARC LE, files `output.bfres` + `Wii_UBER.Nin_NX_NVN.bfsha`.
2. **Model**: FRES v3 -> FRES v8: skeleton, vertex buffers (byte-swapped
   attribute data), shapes/meshes/index buffers, skeletal animations,
   texture-pattern animations (renamed `<name>_ftp`).
3. **Textures**: every FTEX -> one `textures.bntx`: GX2 detile, then Tegra
   block-linear swizzle (formats seen: BC1 `0x31`, BC3 `0x33`, RGBA8 `0x1a`).
4. **Materials**: from a *template*, the Deluxe archive of the actor the model
   replaces: shader assign, options, render info and default parameters are
   taken from the template material it maps to; textures and samplers from the
   Wii U material.
5. **Shaders**: the template's `Wii_UBER.Nin_NX_NVN.bfsha`, copied unchanged.

Step 4-5 are what make this NSMBUDX-specific; steps 1-3 are generic
Wii U -> Switch BFRES conversion (what BfresLibrary's `ChangePlatform` does).

## Using it: `scripts/models/wiiu2dx.py`

One-time setup (the generic conversion is KillzXGaming's BfresLibrary, MIT):

```sh
git clone https://github.com/KillzXGaming/BfresLibrary ../third_party/BfresLibrary
dotnet build -c Release tools/wiiu2dx
```

Convert, naming the archive and model after what the mod loads:

```sh
# Shy Guy: a remodelled kakibo that keeps kakibo's materials -> Deluxe's kakibo shaders
python scripts/models/wiiu2dx.py --wiiu kakibo.pack --template kakibo --name shyguy \
    --romfs "<Deluxe romfs>" --out <SD>/atmosphere/contents/0100EA80032EA000/romfs/Model

# Bee: nw4f materials NSMBU never had -> both bound to the Cheep Cheep's shader
python scripts/models/wiiu2dx.py --wiiu pukupuku.pack --template pukupuku --name bee \
    --romfs "<Deluxe romfs>" --out <SD>/atmosphere/contents/0100EA80032EA000/romfs/Model \
    --map mt_eye=mat_pukupuku --map mat_pukupuku=mat_pukupuku
```

`--template` is the Deluxe actor whose compiled shaders the model borrows: pick
the actor the model replaces. Each material is rebound with `--map`, or by
name, or to the template's first material. Textures are routed by shader
sampler variable through the Wii U material's own sampler assign, so a
material whose assign is scrambled (the bee's `_a0 -> _a2`) still gets its
albedo in `_a0`.

That routing assumes the Wii U shader names its variables like the template's.
They don't always: the Tsuru Hammer Flower's `hammer_head` material uses
`nw4f_map_obj_shader`, which feeds its colour texture (`hmr`) from variable `_a2`.
Routed by name, a lightmap landed in the albedo slot and the head would draw
dark. `--tex <material>=<t0>,<t1>,...` lists the textures in template sampler
order instead (`--tex hammer_head=hmr,lm_01i,lm_02i`). Decode the textures
(`bntx_compare.py --png`) when unsure which one is the colour.

A file with several models (Tsuru's `hmrpy`: helmet, shell, three more parts)
keeps their names; only a single model is renamed to `--name`.

Template choice rules:
- the model's skeletal and texture-pattern animations must carry the names
  the game plays for that actor (the converter keeps names; the game looks
  them up by name);
- the template's shading models fix the vertex inputs and samplers a
  material can use (`_p0 _n0 _i0 _u0` and three samplers for the two here);
  extra attributes (tangents, colours) are bound but ignored.

## Validation

- Container: `output.bfres` header identical to Nintendo's (`0x00080101`,
  alignment 12, block offset `0xD0`), material anims renamed `_ftp` as
  Deluxe's, `textures.bntx` v0x00040000, SARC laid out as Deluxe's.
- Textures (`scripts/models/bntx_compare.py`): the eight textures the Shy Guy
  shares with the vanilla Goombrat decode to the same pixels as Nintendo's own
  conversion (mean difference 0.6-2.1 / 255: a different BC3 encoder; a tiling
  error would be ~50+).
- **BfresLibrary bug, worked around:** its BNTX writer overwrites two bytes of
  one texture name (the entry before the `textures` file name: `lm_02e` ->
  `lm_0?\x02`, `pukupuku.2` -> `pukupuku8\x02`). Records and pixels are
  correct; the name is not, and the game binds textures by name.
  `wiiu2dx.py` restores it from the Wii U FTEX names and refuses to write an
  archive whose texture records do not all name a real texture.
- **Tested in-game 2026-10-26** (Ryujinx, level 1-1): the Shy Guy and the Bee draw,
  animate and die correctly after the fixes below.

## Vertex buffers (ledger F0232)

The first in-game test crashed (address 0 in the per-shape draw, 0x60434AE8)
the frame the converted Shy Guy and Bee were drawn. Nintendo's converter
**de-interleaves** every vertex buffer -- one tightly packed buffer per
attribute, position first, then by name -- and keeps only the attributes the
shading model declares (`_p0 _n0 _u0 _i0 _i1 _w0 _w1`). Wii U interleaves them
(kakibo: stride 21, `_u0` at the odd offset 17). `wiiu2dx` now does the same,
and drops vertex colour / tangents / binormals with a log line. Check:
converting the *vanilla* Wii U kakibo gives geometry identical to Nintendo's
own kakibo:

```sh
tools/wiiu2dx/bin/Release/net9.0/wiiu2dx --dump nintendo.bfres > a.txt
tools/wiiu2dx/bin/Release/net9.0/wiiu2dx --dump converted.bfres > b.txt   # diff: none
```

Each Deluxe shading model has exactly one compiled program, for one skin
count (F0234): `scripts/models/bfsha_info.py --option gsys_weight` lists it.

## Smooth skinning (ledger F0233)

The fix above was not enough: 1-1 crashed again in the same draw. Both
remodels are *smooth*-skinned (5 smooth matrices each). Wii U FRES before 3.4
keeps each inverse bind matrix on its bone; Switch keeps one list on the
skeleton, and BfresLibrary writes the smooth-matrix count as that list's
length -- so the conversion silently made every smooth matrix rigid and wrote
no inverse bind matrices. `wiiu2dx` now rebuilds the list from the bones and
logs `N smooth matrices, inverse bind matrices taken from the bones`. Nintendo's
own models never hit this (kakibo is all rigid), which is why the vanilla
round-trip matched.

## Skin count (ledger F0234) and the draw guard

Third crash, same draw: the Shy Guy's body is 4-weight skinned, but Nintendo
compiled `kakibo_mat_kakibo_body` only for skin count 1 (one program per
shading model, keyed by `gsys_weight`, no default). `wiiu2dx` now fits each
shape to its shader's compiled count and logs `skin count 4 -> 1`. Each vertex
then follows its strongest bone -- the Goombrat's own rigid look.

`source/code/debug/draw_guard.cpp` (always in the build) is the safety net: it checks
every link the per-shape draw (0x60434AE8) dereferences and, if one is null,
logs `draw guard: model '...' shape N '...': null <link>` and skips only that
shape, so a bad model shows up in the log instead of crashing the game.

## Texture-pattern frames (ledger F0236)

Look at what the *game* does with a model's animations, not what Toolbox
previews. The Cheep Cheep holds its texture-pattern animation on a colour
frame (0 for a normal Cheep Cheep) instead of playing it. The Bee remodel's
frame 0 is a blank 10x10 placeholder; its real body (`pukupuku.1`) and eyes
(`enemy_xx01_BugEye_dif.2`) are on frame 1. Convert it with
`--pattern-frame 1`: each material takes the frame-1 texture as its own and
the curve is flattened, so whatever frame the game holds shows the bee.

Not reproduced: the Bee's nw4f material also multiplies by vertex colour
(`_c0`, mostly white-to-grey baked shading). No NSMBUDX shading model reads
vertex colour, so that soft shading is lost; colours and textures are kept.

## Tsuru's models (2026-10-28)

[`scripts/models/port_tsuru_models.py`](../scripts/models/port_tsuru_models.py)
converts every Wii U model the Tsuru ports use. They go to
`romfs/Model/dx/<name>.Nin_NX_NVN.szs`; the game loads from `romfs/Model`, so
move a file up one level to use it. Each passes these checks:
- every shape's skin count is one its program was compiled for;
- every program is in the archive's `.bfsha`;
- every texture a material names is in its BNTX.

None has been tested in game yet.

```sh
python scripts/models/port_tsuru_models.py --wiiu <folder of Wii U .szs> --romfs "<Deluxe romfs>" --out <dir> [name ...]
```

### Choosing the template

Pick the Deluxe actor closest to the model, in this order:
1. **The same material.** Retail `block_challenge` is Nintendo's own conversion
   of the triple block's `mat_block_challenge`. Grrrol's `gorogoro` has
   `guruguru`'s materials. `star_coin`'s B coin has the Time Clock's
   body/eye/star.
2. **The same family:** `karon` for Basalt Bones, `nokonokoA` for Para-Bones,
   `iggy` for Kamek's `mat_bodyA`/`mat_magic_wandB`.
3. **A generic enemy program**, the way Nintendo did it. Its own Wii U-only
   `mokinger` became `crasher_mat_crasher`. Here:
   - `kuribo`: skin 1;
   - `musasabi`: body skin 4, eye skin 0;
   - `gabon_rock`: rock skin 0;
   - `switch`: albedo, lightmaps and environment.

| Model | Template | Notes |
|---|---|---|
| `block_beep`, `block_rdbl`, `block_stch` | `obj_block` | Deluxe's flying ?-block (`pata_block`) body and wing |
| `block_trip`, `blocktripa/b/c` | `block_challenge` | the same material |
| `clef`, `note`, `star_shard` | `star_coin` (A) | |
| `timeclock` | `star_coin` (A, B body/eye/star) | |
| `e_poison`, `poisball` | `switch` (`mat_switch_bikkuri_2`) | albedo, lightmaps, `poison_env` |
| `gasagoso` | `musasabi` | body skin 2 -> 4; the string on the eye program |
| `guruguru` | `gorogoro` | the same materials |
| `hacchin000` | `kuribo` | |
| `kamiya` | `iggy` | the broom on `mat_bodyA` |
| `laron` | `karon` | keeps its own lightmaps (`lavaglow` is the glow); `mat_kalav_body`'s `lavaanim` is missing from Tsuru's file, so it uses `lavaglow` |
| `moking` | `mokinger` (`crasher`) | skin 2/3 -> 4 |
| `nokonokoB` | `nokonokoA` | |
| `nukubomb`, `ukibofloat` | `gabon_rock` (`rock`) | `ukibofloat` had no lightmaps; it gets Deluxe's |
| `nukunuku` | `musasabi` | skin 3 -> 4 |
| `poihana` | `kuribo` | |
| `teren` | `musasabi` | its `Clouds` sphere (a translucent `nw4f_kakiwari` fog) is dropped: no Deluxe enemy program draws it |
| `truck` | `gorogoro` (machine) | metal parts on the metal-env program |

Not converted:
- `daikonbouBig` and `mokinger` are retail Deluxe archives.
- `coldobon`, `tenten_w`, `hmrpy`, `I_hmrflower` and `I_kinxkx` were ported
  earlier and are already in `romfs/Model` (`tenten_w` also has the Biddybud's
  hand-made wingless `tenten_w_walk` model).

### What `wiiu2dx` gained for this

- **Skin counts fit upward too** (0 -> N and N -> M > N). The extra
  influences repeat an index at weight 0. The program sums
  weight * palette[index] * position, so the vertex doesn't move, whatever space
  it is in. A skin-0 shape whose bone has no palette entry gets a rigid one,
  appended to `MatrixToBoneList` (Kamek's wand, Basalt Bones' head).
- **`--template-lightmaps`.** Every slot whose template texture is a lightmap
  (`lm_*`) takes the template's own texture, byte for byte, so the model is lit
  like the Deluxe actor it borrows shaders from. Any other texture a material
  names that the Wii U file lacks is imported from the template the same way.
  `ChangePlatform` bakes the textures into `textures.bntx` as bytes, so imports
  are written into that file; `res.Textures` is not saved.
- **`--drop-material`** removes the shapes drawn with a material that no Deluxe
  program can draw.
- **The BNTX name repair** also matches a damaged name that appears twice in
  the table (a texture imported over one of the same name), using the sorted
  table's neighbours.

### Black models: `fog_index` (2026-10-28)

The Cataquack (`poihana`) and Peepa (`teren`) drew solid black in game. Their
converted materials differed from the retail templates (`kuribo`, `musasabi`) in
exactly one value: `fog_index` was 1, where the templates have 0.

That parameter came from the Wii U material: the converter keeps a Wii U value
wherever the template has a parameter of the same name and type. Every nw4f
material (Captain Toad / 3D World exports) carries 1. The game code never reads
it; it is a uniform the `Wii_UBER` program uses to pick a scene fog slot.
- Retail enemies use 0; map objects such as `daikonbouBig` use 1.
- Nintendo's own conversion of an nw4f enemy (`mokinger`, bound to
  `crasher_mat_crasher`) set it to 0.
- The envsets' enemy environments (`e_default.baglenv`: lights only, no fog)
  give the enemy programs no fog setup for slot 1.

`fog_index` now always comes from the template. After that, the converted
materials match their templates parameter for parameter.

The converter also rewrites every skinned shape's indices in Nintendo's layout
(8-bit `_i0`; `_w0` only for two or more weights), even at an unchanged skin
count. A Wii U nw4f model kept 32-bit indices and a spare `_w0`. It also refuses
an index past the matrix palette.

`WIIU2DX_DUMP_PARAMS=1 wiiu2dx --dump <bfres>` lists each material's parameters,
render info and options, for comparing a conversion with its template.

### Still black: baked scale and proven programs (2026-10-28)

With `fog_index` fixed, the Cataquack and Peepa were still black and the
Stingby unlit. Their textures (channel selectors included), normals (unit
length), UVs and materials (identical to the templates) were all correct. What
set them apart from every model that works is size. They are Captain Toad
scale (+-115, +-70 and +-60 units), and Tsuru's code shrinks them with
`setScale` 0.1, 0.15 and 0.17. Every working conversion is drawn at scale 1.

So the three are no longer faithful ports:
- `--bake-scale` scales the model itself: positions, bone translations,
  inverse bind matrices, shape bounds, and the translation tracks of every
  skeletal animation. The actor then draws it at scale 1.
- They are bound to programs already proven in game: `kakibo` (the Shy Guy's)
  for `poihana` and `hacchin000`, and `chorobon` (the Cold Fuzzy's, 2 weights)
  for `teren`.

Textures, skeletons and animations are kept.

### The real cause of the black: the BNTX texture dictionary (2026-10-28)

The Cataquack and Peepa stayed solid black after the fog and scale changes. In
both, the texture name BfresLibrary had damaged was the colour texture itself
(`Poihana`, `Teren_dif`). In the Stingby, which drew correctly, it was
`star_env`, a texture it never draws.

The game doesn't scan names. It finds a material's texture through the BNTX
`_DIC`, an `nn::util::ResDic`: a patricia trie whose nodes branch on bits of the
name (bit *n* = bit `n & 7` of byte `len - 1 - (n >> 3)`). BfresLibrary
builds that trie from the names as damaged. Restoring the string bytes, as
`repair_bntx_names` did, leaves a trie that walks past the entry. The lookup
fails, the sampler stays unbound, and the model draws black.

A simulation of the lookup (`wiiu2dx.dict_find`) confirms it:
- **unreachable:** `Poihana`, `Teren_dif`, `star_env`;
- **reachable:** every name in Nintendo's own files.

`wiiu2dx.py` now rebuilds the trie from the repaired names (`dict_build`).
Rebuilt from their keys, Nintendo's dictionaries come out byte for byte the
same: `kakibo`, `chorobon`, `kuribo`, `musasabi`, `gorogoro`, `karon`,
`star_coin`, `obj_block`. It then refuses to write an archive in which any
texture is not found by lookup.

Every archive written before this fix has one unreachable texture: the name
BfresLibrary damaged. In most it's the second lightmap (`lm_02*`), which leaves
the model with half its lighting rather than black. Affected:
- converted earlier, outside the batch: `shyguy`, `coldobon`, `hmrpy`,
  `I_hmrflower`, `I_kinxkx`;
- from the batch: `kamiya`, `laron`, and the others listed by a re-scan.

Re-running them through `wiiu2dx.py` fixes them.
