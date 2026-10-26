# Why there is no Hammer power-up patch

**Short answer: a Yaz0moto patch cannot add a Hammer power-up. Not "not yet" — the
patch format has no field that reaches it.**

This document records the evidence so the conclusion can be checked rather than
taken on trust, and so nobody spends a weekend rediscovering it.

```
python scripts/prove_hammer_not_patchable.py
```

## What a Yaz0moto patch can change

The patch format is data-only. It rewrites entries in these files:

| File | Contains | Can it express a power-up? |
|---|---|---|
| `spritedata` | sprite definitions, including block `Contents` | only within the 16 existing values |
| `spritecategories` | which view a sprite appears in | no |
| `spriteresources` | model/resource names per sprite | no |
| `levelnames`, `music`, `tilesets`, `entrancetypes`, `ts1_descriptions`, `spritelistdata` | names and mappings | no |

There is **no** file describing power-up modes. Power-ups are not level data in the
editor's model at all; they are entries in a block's `Contents` field, and each
value maps to an item that the *game code* turns into a power-up mode.

## Evidence 1: `Contents` is one nybble, fully assigned

All five block sprites that expose `Contents` agree on 16 values, and every value
is already taken:

| Value | Item | Value | Item |
|---:|---|---:|---|
| 0 | Nothing | 8 | Continuous star |
| 1 | 1 coin | 9 | Yoshi egg |
| 2 | Fire Flower | 10 | 10-Coin |
| 3 | Fire Flower (alt) | 11 | 1-UP |
| 4 | Propeller Mushroom | 12 | Vine |
| 5 | Penguin Suit | 13 | Spring |
| 6 | Mini Mushroom | 14 | Super Mushroom (if small) |
| 7 | Star | 15 | Ice Flower |

There is no Hammer, and no spare value to put one in. The field is a single nybble
(`nybble="20"`), so 16 is the hard ceiling.

I checked whether the field might secretly be wider — our own notes describe
`actor+0x18` as 5 bits. Two reasons that does not help:

- Nybble 19 *is* free on all five block sprites, so a `19-20` field could be
  declared. But the game reads the contents byte, not our declared field width;
  changing what the editor *shows* does not change what the game *reads*.
- Reading the action-code table `dword_60B04164` past index 15 produced garbage
  (`0xFFFFFFE0`, `512`), which is what an out-of-range read looks like, not a set
  of real extra entries. That table is 16 meaningful entries.

## Evidence 2: no `Contents` value reaches mode 10

Power-up modes reached by the game's 11 item classes, from the verified grant
table in `docs/HAMMER_POWERUP_REPORT.md` §10.2:

| Mode | Item | Mode | Item |
|---:|---|---:|---|
| 1 | Mushroom, LightMask, 1-UP | 5 | Mini Mushroom |
| 2 | Fire Flower | 6 | Star |
| 3 | Propeller | 7 | Ice Flower |
| 4 | Penguin | 9 | Yoshi Egg |

**Mode 10 is absent.** No item in the base game grants it. The report says so
directly: *"No base-game item grants mode 10 (musasabi row) — that row exists but
is only reached through Approach B."*

## Evidence 3: mode 10 is reached by a code byte, not a data value

The Hammer in our build works because of a one-byte change:

| VA | File offset | Before | After | Meaning |
|---|---|---|---|---|
| `0x6045DDCC` | `0x45E228` | `02 20 A0 E3` | `0A 20 A0 E3` | `mov r2,#2` → `mov r2,#10` |

The **Fire Flower's** grant handler now yields mode 10. Nothing in level data
selects this — it is unconditional for that item class once the build is installed.

That is the whole trick, and it is why the workaround below needs no patch at all.

## Evidence 4: the Hammer has no sprite ID

| Profile | Name | Sprite ID |
|---:|---|---|
| 474 | Ice Ball | none |
| 475 | Plant Ice Ball | none |
| 476 | Player Fireball | none |
| 477 | Plant Fireball | none |
| 478 | Yoshi Flame | none |
| 759 | **Hammer** | **none** |

`Profile::spriteToProfileList` has exactly 724 entries, sprite `0`–`723`. Sprite
`723` is the highest in the base game. Profiles that are not in that table cannot
be placed in the editor at any price.

I also confirmed our Hammer build does **not** extend the table: diffing
`convertedmain.rebased.elf` against `convertedmain.hammer_b.elf` gives 115 changed
bytes in 57 regions, and **none** of them fall in `.bss` (where the runtime-built
table lives) in a way consistent with new entries. So even a build-aware patch
would have nothing to point at.

This is exactly the difference from SweetDX's patch, which uses sprite ids
`724`–`732`. Those work because SweetDX ships **code** that extends the table. We
ship no code here.

## What to do instead

Once the Hammer build (`convertedmain.hammer_b.elf`) is installed, the block gives
you the Hammer today:

> **Set a block's Contents to `2` or `3`.** Both now grant mode 10: the Hammer.

`Contents` 2 and 3 both resolve to action code 0 in the retail binary, so they are
the same item; that is why the base data labels both "Fire Flower". Choosing which
duplicate to use is behaviourally free. This is not a workaround for a missing
feature, it is the actual design of Approach B: the Fire Flower *is* the Hammer item
in the patched build.

To make that discoverable in the editor, use the sibling patch
[`HammerQuestionBlock/`](./HammerQuestionBlock/), which relabels those two entries
to "Hammer". It changes no behaviour, it just stops the dropdown lying.

### The loader trap in writing that patch

`patch="true"` does **not** merge a sprite definition. `LoadSpriteData` builds a
fresh `SpriteDefinition` per sprite and assigns it over the previous one, and
`loadFrom` starts with `self.fields = []`. The last file to define a sprite wins
entirely. A patch that redefines the Question Block to relabel one dropdown must
therefore restate all thirteen of its fields, or the other twelve disappear.

That is why both patches here emit full definitions. See
`scripts/emit_full_sprite_patch.py`.

## If a real Hammer entry is ever wanted

Something would have to change outside the patch format:

1. **Extend `spriteToProfileList` in code**, the way SweetDX does, and register
   profile 759 at some id ≥ 724. Then a patch *could* add a `string_id` sprite.
2. **Add a 17th contents value in code.** The nybble is full, so this means
   widening the field and repointing `dword_60B04164` — a much larger change than
   the one-byte grant patch.
3. **Ship a custom item class** for the Hammer instead of reusing the Fire Flower,
   which would also fix the shared icon and the missing suit model.

Any of these is a code project, not a patch. Worth doing deliberately, not as a
side effect.

## Known rough edges in the current build

Documented in `docs/HAMMER_POWERUP_REPORT.md` and worth repeating where a modder
will see it:

- **No Hammer suit model exists.** Mode 10 uses body type 0 (Normal) and colour
  type 2 (Fire), so the player looks like Fire Mario while throwing hammers.
- **The item icon is the Fire Flower's**, because the item *is* the Fire Flower.
- The mode gate at `0x6078E6A8` had to change from `cmp r0,#2` to `#10`, and the
  item-grant bitset to `0x3FB`, for mode 10 to be permitted. Those are code edits
  already applied in the build.
