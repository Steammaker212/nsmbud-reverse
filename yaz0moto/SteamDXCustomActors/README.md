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
