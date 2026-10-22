# Hammer Question Block — a Yaz0moto patch

Makes a `?` block's contents dropdown say **Hammer** for the two entries that
already dispense it, so the power-up can be found and placed in the editor.

**Requires the Hammer build** (the one where the Fire Flower grants power-up mode
10). Without it, values 2 and 3 are ordinary Fire Flowers and these labels are
wrong.

## The part to read first

This patch does **not** add a new power-up, because the field has no room for one.
A block's contents is a single nybble — 16 values — and all 16 are already
assigned. There is no Hammer and no spare slot.

What it does instead is tell the truth about two entries that the base game ships
as duplicates.

## Why values 2 and 3

In the retail binary, `Contents` 2 and 3 both resolve to **action code 0**:

```
contents 0 -> code 21      contents 8  -> code 9
contents 1 -> code 12      contents 9  -> code 16
contents 2 -> code 0   <   contents 10 -> code 13
contents 3 -> code 0   <   contents 11 -> code 2
contents 4 -> code 7       contents 12 -> code 15
...                        ...
```

That is why the base data already labels both "Fire Flower" — they are the same
item. Two labels, one behaviour. The Hammer build changes that one shared grant
handler (`mov r2,#2` → `mov r2,#10`), so both values now dispense the Hammer.

So with the Hammer build installed, setting a block to 2 or 3 has always given you
a Hammer. It just said "Fire Flower" in the editor, which is why it looked missing.

Choosing *which* of the two duplicates to relabel is therefore free: they are
interchangeable in the retail game, so no behaviour can depend on the distinction.
This patch relabels both, because after the build change neither is a Fire Flower.

## What it covers

Fourteen block sprites, so it does not matter which one you reach for:

`59` Question Block · `60` Brick Block · `147`/`148` line-following ·
`154` Flying · `205` Floating · `233`/`234` Grouped · `422` Big Brick ·
`475` Big Question · `525` Screen-following · `678`/`704`/`706` NSLU variants

Three are deliberately **not** touched:

| Sprite | Why not |
|---|---|
| `380` | Its values 0–2 are Baby Yoshi types ("Glow Baby Yoshi" at 2), not power-ups. Relabelling would corrupt it. |
| `397`, `398` | Every entry is marked `(unused)` in the base data, so they are not a reliable way to hand the player an item. |

## Install

1. Copy this folder into your Yaz0moto mods directory —
   **Preferences → Games Setup → Mods directory**.
   Not `miyamotodata/patches/`, which says in capitals not to put mods there.
2. Enable it in the mod list, layered on **New Super Mario Bros. U Deluxe**.
3. Place a `?` block, open it, set its contents to **Hammer**.

## A loader bug this patch had to work around

Worth knowing if you write your own patch, because it bit the first version.

Yaz0moto's `patch="true"` is documented — including in its own bundled
`ExamplePatch` — as an additive merge: *"the existing fields from the base game are
kept and these new ones are appended."*

The loader does not do that. `gamedefs.recursiveFiles()` only decides whether the
file is appended to the *load chain*. Then `loading.LoadSpriteData()` does, per
sprite:

```python
sdef = SpriteDefinition()
sdef.loadFrom(sprite)              # misc.py: self.fields = [] then rebuild
globals.Sprites[spriteid] = sdef   # replaces the earlier object outright
```

**The last file to define a sprite wins entirely.** A patch that adds one field
deletes every base field it fails to restate. My first attempt would have reduced
the Question Block from 13 fields to 1 — silently removing its movement type,
movement ID, target ID and eight unknowns.

Both patches in this repository therefore emit each sprite **in full**, deep-copied
from the base data and then modified. The generated files look redundant; they are
not.

## Verification

```
python scripts/validate_yaz0moto_patch.py     # 32/32 across both patches
python scripts/smoke_test_patch_load.py       # load-order smoke test
```

The validator fails if any base field would be dropped, if a base field is
silently retitled, if values 2/3 do not read Hammer on every block, or if sprite
380 is touched.

The smoke test walks the real load chain from `settings.json` and asserts that each
patched sprite ends up with the same number of base fields plus its additions.

Not verified by breaking a block in-game. The relabel is verified against the
binary; the grant itself is verified only by the byte diff on the Fire Flower's
handler.

## Licence

XML and research notes only. No game code, assets or ROMFS contents. See the parent
repository's `NOTICE.md`.

*New Super Mario Bros. U Deluxe* is a trademark of Nintendo. Not affiliated.
