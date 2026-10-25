# Project-SteamDX — Yaz0moto patch for the custom actors

A Yaz0moto patch for *New Super Mario Bros. U Deluxe* that puts the actors from
[nsmbud-reverse](../../nsmbud-reverse) into the level editor.

It declares 12 sprites: the seven that codedx's template already provides
(724–732) plus the five this project adds (734–738), and it re-declares the two
block sprites (59/60) so a block's `Contents` can reach the custom items.

## Install

Copy this folder into the editor's patch directory, which is **not** the editor's
own `miyamotodata`. The metadata folder's `README.txt` says so directly:

> !!!! DO NOT INSTALL YOUR OWN MODS/PATCHES TO THIS DIRECTORY !!!!
> In Yaz0moto, visit Preferences → Games Setup → click Mods directory

In practice this project is installed at:

```
...\Yaz0moto-<version>\yaz0data\patches\steam-dx-test\        (current nightly)
...\Yaz0moto-<version>\miyamotodata\patches\steam-dx-test\    (older builds)
```

Both layouts were found in use on this machine, so a patch edited in one is
invisible to the other. `scripts/validate_steam_dx_patch.py` in the repo checks
every installed copy against the repo copy and fails if they diverge — that is
how the stale nightly copy was caught.

## Sprites

| ID | Name | Owner | Fields |
|---|---|---|---|
| 724 | Angry Sun | codedx template | 1 |
| 725 | Mad Moon | codedx template | 1 |
| 726 | Actor Spawner | codedx template | 6 |
| 728 | Light Source | codedx template | 9 |
| 730 | Effect Spawner | codedx template | 10 |
| 731 | Fake Star Coin | codedx template | 5 |
| 732 | Magic Lift | codedx template | 6 |
| 734 | Hammer Flower | `mods/hammer_suit` | — |
| 735 | Bee | `mods/bee` | 6 |
| 736 | P-Acorn | `mods/p_acorn` | — |
| 737 | Shy Guy | `mods/shy_guy` | 4 |
| 738 | Actor Spawner (custom) | `mods/custom_spawner` | 7 |

Seven **base** sprites are also overridden, to give them the extended contents
list (16–31) so the two new power-ups are placeable inside them:

| ID | Name | Fields added |
|---|---|---|
| 59 | Question Block | checkbox 13, list 20 (gated) |
| 60 | Brick Block | checkbox 13, list 20 (gated) |
| 148 | Brick Block - Uses Lines | checkbox 13, list 20 (gated) |
| 422 | Big Brick Block | checkbox 13, list 20 (gated) |
| 526 | Screen-following Brick Block | checkbox 13, list 20 (gated) |
| 704 | Brick Block (2) - NSLU | checkbox 13, list 20 (gated) |
| 706 | Pivotal-rotation-controlled Brick Block - NSLU 9-9 | checkbox 13, list 20 (gated) |

That checkbox is bit 28 of `settings2`, and the game does the arithmetic itself:
`BlockBase::getContents` returns `(settings2 & 0xF) | ((settings2 >> 24) & 0x10)`,
so ticking it turns contents *N* into *N + 16*. The vanilla game already ships
the same checkbox on 20 sprites. **Contents 21 is the Hammer Flower and 22 the
P-Acorn**, matching `HAMMER_BLOCK_CONTENTS 21` in `mods/hammer_suit` and
`PACORN_BLOCK_CONTENTS 22` in `mods/p_acorn`. 23–31 are unclaimed.

Every base field is copied verbatim, so with the box unticked the block behaves
exactly as it does in the base game.

727, 729 and 733 are deliberately absent: codedx's template has sprites in
`spriteToProfileList` for them (ModelTest, BombBros, KoopaShellBros) but never
defines a `Profile`, so they cannot be placed.

734 and 736 have no editable fields on purpose. They are item pickups that read
no placement settings, so there is nothing to expose; they still need a sprite
entry so a level can place one at all.

## 738 versus 726

These are two different actors, and the newer one exists because the older one has
three defects on Deluxe. All three are documented in
[`readable/actor/ActorSpawner.cpp`](../../nsmbud-reverse/readable/actor/ActorSpawner.cpp):

1. **726 reads the event mask at `EventMgr+0x0`.** On Deluxe the `u64 events`
   field is at **`+0x10`** (the `IDisposer` base is 0x10 bytes), so `+0x0` is the
   vtable pointer and a gated 726 tests garbage and never fires. 738 uses `+0x10`.
2. **726 makes the event mandatory** — an empty event id deletes the spawner. A
   level that knows nothing about events gets a sprite that silently removes
   itself. 738 treats `eventId2 == 0` as "no gate, spawn now".
3. **726 indexes `spriteToProfileList` unchecked**, while the id it decodes
   reaches 4095 and the vanilla table is 738 entries. 738 range-checks and logs.

The ID encoding is deliberately codedx's, so a level authored for 726 spawns the
same thing through 738:

| field | nybbles | meaning |
|---|---|---|
| `linkId` | 23–24 | id bits 0–7 |
| `movementId` low nibble | 22 | id bits 8–11 |
| `movementId` bit 4 | 21 (mask 1) | set: the id is a **sprite** id |
| `eventId2` | 1–2 | event index + 1; **0 = no gate** |
| `eventId1` | 4 | passed to each spawned actor |
| spawn count | 19 | 1–16; 0 means 1. Bits 4–7 of `settings2`. |
| child settings1 | 5–12 | passed through |
| child settings2 | 13–18, 20 | passed through, minus the count nibble |

Nybble 19 is the spawn count because the count is `(settings2 >> 4) & 0xF`, and
`settings2` spans nybbles 13–20 with nybble 20 at bits 0–3. That places bits 4–7
on nybble 19, so 13–18 and 20 are what the child actually receives.

## Giving the Hammer Flower its own model

The item needs a romfs archive, not a sprite here. The path is fixed by the
game: an archive is

```
romfs/Model/<archive>.Nin_NX_NVN.szs
```

and the model is a name *inside* that archive. `nsmbudx/name_remap.h` documents
the substitution mechanism, and `mods/hammer_suit/code/hammer_suit.cpp` sets the
two names at the top:

```c
#define HAMMER_ITEM_ARCHIVE         "hammer"   // -> Model/hammer.Nin_NX_NVN.szs
#define HAMMER_ITEM_MODEL           "hammer"   // -> the model inside it
```

So to test a custom Hammer Flower model, put it at:

```
...\mods\<project>\romfs\Model\hammer.Nin_NX_NVN.szs
```

Layout inside, by analogy with every other item/model archive in the game (the
codedx showcase keeps one example per actor, e.g. `Model/mrsun.Nin_NX_NVN.szs`):

- **Yaz0-compressed SARC**, little-endian, holding two entries
- `Wii_UBER.Nin_NX_NVN.bfsha` — the shader archive
- `output.bfres` — the model
- an `FMDL` whose name is the model name, i.e. `hammer`
- skeletal animations named **`out`, `out2`, `out3`, `wait`, `wait2`**

Those five names are not guesses: they are the string literals in the six
Fire Flower item functions the mod hooks
(`0x6045D980`, `0x6045DA4C`, `0x6045DB18`, `0x6045DBF8`, `0x6045DCC4`). An
archive without them builds and loads, then fails at the first animation.

Three things that will otherwise waste your time:

- **A missing archive does not crash.** `ScopedNameRemap` checks the lookup
  result and falls back to the vanilla name, logging
  `remap: archive 'hammer' is not loaded; using 'I_fireflower'`. If the Hammer
  Flower still looks like a Fire Flower, that log line is the answer — the
  archive is not loaded, not merely misnamed.
- **The archive must be referenced to be loaded.** Loading is driven by the
  profile's resource list, which `hammer_suit` already registers
  (`hammer`, `I_fireflower`, `bros`). Dropping the file in romfs is enough only
  because that list already names it.
- **`hammer_suit` prefers `hammer` and falls back to `I_fireflower`.** Your
  working tree currently sets both to `"hammer"`, so the game is looking for the
  new archive first. If you want to compare against the retail look, that is the
  one line to change.

`make_mod_project.py` copies `mods/<name>/romfs/` into
`atmosphere/contents/0100EA80032EA000/romfs/`, so the build output is already
laid out for LayeredFS.

## The base data this patch depends on

The patch declares `base="New Super Mario Bros. U Deluxe"`, but Deluxe has **no
spritedata of its own** in Yaz0moto. Its `games/NSMBUDX/main.xml` says so:

> Everything not listed here (sprites, backgrounds, tileset names, music,
> entrances...) is shared with the Wii U version and inherited from it.

So the 724 vanilla sprites come from `games/NSMBU/spritedata.xml`, and every new
id here starts above that range. The validator enforces that: a "new" sprite id
at or below 723 would silently replace a real one.

## Verify

```sh
python ../nsmbud-reverse/scripts/validate_steam_dx_patch.py
```

21 checks: XML well-formedness, every nybble in 1–24, no ungated field
collisions, overrides restate every base field, every `mods/*/profiles.txt` id
appears here, every custom sprite is in a view, and every installed copy matches
this one.

Two things it does **not** prove, because neither can be shown statically:

- that the actors behave correctly in-game — **no mod in this project has ever
  been run**; everything is `seen-static` from the disassembly;
- that a given `Contents` value produces a specific item. The block contents
  mapping is still unresolved; see
  [`yaz0moto/HAMMER_LIMITATION.md`](../../nsmbud-reverse/yaz0moto/HAMMER_LIMITATION.md).
