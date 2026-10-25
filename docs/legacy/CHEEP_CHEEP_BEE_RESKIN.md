# Cheep Cheep (`pukupuku`) → Bee reskin — RE findings

**Target:** *NSMBU Deluxe* (Switch), `convertedmain.rebased.elf`
**IDA DB verified:** base `0x60000000`, MD5 `f8a2e4c3616b8a99632b8ffe68938c34`
(all values below are IDA VAs)

---

## 1. The model binding is name-driven — this is the good news

`pukupuku` does **not** hardcode a model pointer. At object-construction time the
actor loads its model by string, then plays an animation by string.

### Plain `pukupuku` — `sub_60203138` @ `0x60203138`

```c
v9  = 12321336;                 // 0x00BC00B8  resource-kind tag
v10 = "pukupuku";               // resource name
v2  = LoadResource(MEMORY[0xC9CA88], &v9);
*(_DWORD *)(a1 + 376) = v2;     // +0x178  resource handle

v9  = 12321336;
v10 = "pukupuku";
v3  = Resource_getModel(v2, &v9, 6, 1, 0,0,0,0, 1, 0);

v4  = operator new(48, 0, 4);
v5  = ModelWrapper_ctor(v4, v3, 1, 0, 0, 0, 0);
ModelWrapper_setup(v5, v2, 0, 0);
*(_DWORD *)(a1 + 372) = v4;     // +0x174  model wrapper

v9  = 12321336;
v10 = "fly";                    // anim name
SkeletalAnim_play(**(_DWORD **)(v4 + 12), *(_DWORD *)(a1 + 376), &v9);
```

### `pukupuku_toge` — `sub_60375E24` @ `0x60375E24`

Same shape, different names and a texture animation:

```c
v10 = "pukupuku_toge";
v2  = LoadResource(MEMORY[0xC9CA88], &v9);
Model2 = Resource_getModel2(v2, &v9, 1, 1, 0,0,0,0, 0);
v5  = operator new(48, 0, 4);
ModelWrapper_ctor(v5, Model2, 1, 1, 0, 0, 0);
ModelWrapper_setup(v6, v3, 0, 0);
*(_DWORD *)(a1 + 6300) = v5;    // +0x189C model wrapper

v10 = "swim";  sub_6040F4B8(v5, &v9, 1);          // anim
v10 = "pukupuku_toge";  TexAnim_play(v7, v3, &v9); // texture anim
```

### `pukupuku_mecha` — `sub_60370B74` @ `0x60370B74`

Same pattern, name `"pukupuku_mecha"` (xreffed at `0x60370EFC`).

**Consequence:** a reskin is a *string/asset* change, not a code rewrite. The
engine resolves `"pukupuku_toge"` to `Model/pukupuku_toge.Nin_NX_NVN.szs` at
runtime. Point that string at a bee archive and the Cheep Cheep mechanics,
state machine, collisions and behaviour all stay intact.

---

## 2. Resource-path and pack facts (verified)

| Fact | Value |
|---|---|
| Resource-kind tag | `12321336` = `0x00BC00B8` |
| Model path template | `Model/<name>.Nin_NX_NVN.szs` |
| Pack path strings in binary | `0x60ABF077 "Pack/cobPack.pack"`, `0x60ADC653 "Pack/jyotyuActorPack.pack"`, `0x60AE4573 "Pack/Layout.pack"` |

### ⚠️ Correction to the premise

`Model/pukupuku.Nin_NX_NVN.szs` **does not exist in the ROMFS.** Verified against
the extracted game tree:

- `romfs/Model/` contains `pukupuku_toge.Nin_NX_NVN.szs` (34.5 KB) and
  `pukupuku_mecha.Nin_NX_NVN.szs` (49.8 KB) — **no plain `pukupuku.szs`**
- `cobPack.pack` at file offset `1134` *does* contain the string
  `Model/pukupuku.Nin_NX_NVN.szs`, but the file it names is absent from the
  loose `Model` tree — it lives inside a `.pack` archive, not in `romfs/Model/`

So the plain Cheep Cheep (the normal, non-spiky, non-mechanical one) pulls its
model from **`jyotyuActorPack.pack` or `cobPack.pack`**, not a loose `.szs`.
`pukupuku_toge` is the safe reskin target precisely because it is loose on disk.

---

## 3. Where a bee model can come from

Nothing in this game is a bee actor — there is no bee enemy to copy. The
closest candidates already on disk (all loose `.szs`):

| Model | Size | Why it is relevant |
|---|---|---|
| `ibaramushi.Nin_NX_NVN.szs` | 547.5 KB | "bramble bug" — the closest insect body plan |
| `huhu.Nin_NX_NVN.szs` | 95.1 KB | airborne enemy, hovering motion |
| `kakibo.Nin_NX_NVN.szs` | 93.5 KB | small flying/swarming enemy |
| `hanachan.Nin_NX_NVN.szs` | 115.8 KB | overhead enemy, wing-like limbs |
| `met.Nin_NX_NVN.szs` | 78.0 KB | small round body, comparable silhouette |

A true bee requires a **new `.szs`** — modelled in Blender, exported through
NintendoWare (Switch, `Nin_NX_NVN` target), with a skeleton whose joint names
and anim names match what `pukupuku_toge` asks for (`swim`, plus the texture
animation). The engine does not care what the mesh looks like, only that the
archive resolves and the named animations exist.

---

## 4. Two viable routes

**Route A — string-only swap (minutes).**
Repoint `v10 = "pukupuku_toge"` at `0x60375E58` to a new name, and ship that new
`.szs` in `romfs/Model/`. Mechanics untouched. Fastest proof that the reskin
pipeline works. Risk: `TexAnim_play` bundles a texture animation named
`pukupuku_toge`, so a replacement archive must supply that too or the actor may
assert.

**Route B — new archive, same name (cleanest).**
Leave code completely untouched. Replace the bytes of
`Model/pukupuku_toge.Nin_NX_NVN.szs` with a bee archive that reuses the
`pukupuku_toge` internal names for its skeleton/anims. Zero code patches, zero
byte patching, fully reversible. This is the recommended path.

---

## 5. Open questions

1. Exact `.pack` archive format and whether a loose `romfs/Model/*.szs`
   overrides the packed copy (needed to know if Route B works for plain
   `pukupuku`).
2. Whether `TexAnim_play` tolerates a missing/unmatched texture-anim name, or
   hard-asserts.
3. `12321336` / `0x00BC00B8` tag field layout — required if the new archive
   omits optional sub-resources.
4. Whether the bee should reuse `pukupuku_toge`'s spike-collision damage or
   need a new collision descriptor (spiky Cheep Cheep damages on contact;
   a bee would presumably do the same).

---

## Evidence log

| Claim | Evidence |
|---|---|
| Model is name-driven | `q_focus.py` → `sub_60203138`, `sub_60375E24` decompiles |
| `pukupuku_toge` string @ `0x60AB9F3B` | IDA `list_strings` scan (`q_strings.py`) |
| `pukupuku_mecha` @ `0x60AB9F2C`, `pukupuku` @ `0x60AB9285` | same scan |
| Path template `Model/%s.Nin_NX_NVN.szs` | 26 `Model/*.szs` strings, e.g. `0x60AD8B53` |
| Pack paths | `0x60ABF077`, `0x60ADC653`, `0x60AE4573` |
| `pukupuku.szs` absent | `romfs/Model/` listing, 455 files, no match |
| `cobPack.pack` mentions it | byte scan at offset `1134` |
