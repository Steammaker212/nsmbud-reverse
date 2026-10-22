# Cheep Cheep Family — a Yaz0moto patch

A [Yaz0moto](https://github.com/Steammaker212/Yaz0moto) patch for
*New Super Mario Bros. U Deluxe* that exposes the movement binding on all
eighteen Cheep Cheep (Pukupuku) sprites, and collects them into one view.

![kind: sprite patch](https://img.shields.io/badge/kind-sprite%20patch-blue)

## What it does

The stock editor already documents most Cheep Cheep behaviour: starting
direction, swimming distance, speed, type, jumping height. What it does **not**
expose on any of the eighteen family sprites is nybbles **19-20** and **21-22** —
the shared movement system. Those are the two fields this patch adds.

The retail game binds them in every family actor's `onCreate`:

```cpp
movementHandler.link(position,
                     movementHandler.getMaskForMovementType(settings2 & 0xFF),
                     movementId);
```

`settings2` occupies nybbles 13-20 with nybble 20 holding bits 0-3, so its low
byte is exactly nybbles 19-20; `movementId` is `Actor+0x1C` at nybbles 21-22. The
base game labels those two ranges "Movement Type" and "Movement ID" on 143 other
sprites, so this follows the editor's own convention rather than inventing one.

Practically: you can now attach a Cheep Cheep to a movement controller, rotation
controller or path from the editor instead of editing raw nybbles.

It also adds a **Cheep Cheep Family** view, so the eighteen sprites stop being
scattered across Underwater, Beach and Enemies.

## What it deliberately does not do

- **Does not touch `notes`.** The merge behaviour for that attribute isn't
  documented; overwriting the base game's text would be a regression.
- **Does not rename anything.**
- **Does not write to an occupied nybble.** Every field was checked against the
  base definition's used-nybble set. The two grouped variants (615, 723) get only
  19-20 because 21-22 is their Group ID.
- **Does not claim the UNUSED sprites work.** Six of the eighteen are marked
  UNUSED by the base game. They're collected into the view and labelled as they
  are — this patch changes no behaviour, so it can't make them function.

## Install

Yaz0moto's own `miyamotodata/patches/` directory says, in capitals, not to put
your mods there. Copy this folder somewhere else and point Yaz0moto at it:

1. Open Yaz0moto → **Preferences → Games Setup → Mods directory**
   (or **File → Show Yaz0moto Data Folder** to find where mods live).
2. Copy the whole `CheepCheepFamily` folder in.
3. In the mod list, the patch appears as **Cheep Cheep Family (RE)** layered on
   **New Super Mario Bros. U Deluxe**. Enable it.

## Sprite IDs, and the trap in them

Yaz0moto indexes sprites; our reverse-engineering notes index **profile IDs**.
They are not the same number, and two of them are easy to confuse:

| Sprite | Profile | Name |
|---:|---:|---|
| 101 | 530 | Cheep Cheep |
| 106 | 542 | Cheep Cheep Spawn Location [UNUSED] |
| 113 | 532 | Medium-sized Cheep Cheep |
| 114 | 547 | Cheep Cheep Formation [UNUSED] |
| 120 | 539 | Spiny Cheep Cheep |
| 129 | 540 | Jumping Cheep Cheep |
| 131 | 545 | Jumping Cheep Cheep Spawn Area |
| 482 | 538 | Mecha Cheep |
| 586 | 546 | Flying Mecha Cheep Spawner [UNUSED] |
| 587 | 541 | Flying Mecha Cheep [UNUSED] |
| 588 | 534 | Deep Cheep |
| 589 | 535 | Medium Deep Cheep |
| 590 | 536 | Eep Cheep |
| 591 | 537 | Medium Eep Cheep |
| 592 | 543 | Searching Cheep Cheep [UNUSED] |
| 597 | 544 | Eep Cheep Spawner [UNUSED] |
| 615 | 531 | Grouped Cheep Cheep |
| 723 | 533 | Medium-sized Grouped Cheep Cheep |

The mapping comes from the game's own `Profile::spriteToProfileList` table, which
has exactly 724 entries (sprite 0-723). That is why sprite `723` is the highest
ID in the base game, and why the sibling SweetDX patch starts at 724: it ships
code that extends the table. **This patch ships no code**, so it can only patch
sprites that already exist. There is no sprite ID here for the Hammer, the ice
ball or the player fireball — profiles 474, 476 and 759 have no sprite entry at
all, so they cannot be placed in the editor regardless of what a patch says.

I got this wrong once while writing this very file: I wrote `sprite="544"` for the
Eep Cheep Spawner when 544 is its *profile* id and 597 is its *sprite* id.
`validate_yaz0moto_patch.py` caught it, which is the reason that script checks
every id against the recovered table instead of trusting the author.

## A loader trap this patch had to work around

`patch="true"` does **not** merge a sprite definition, despite what the format
docs suggest. `LoadSpriteData` builds a fresh `SpriteDefinition` per sprite and
assigns it over the previous one; `loadFrom` starts with `self.fields = []`. The
last file to define a sprite wins entirely, so a patch adding one field deletes
every base field it does not restate.

This patch therefore emits each of the 18 sprites **in full**, deep-copied from the
base data. The repetition is deliberate.

## Verification

```
python scripts/validate_yaz0moto_patch.py     # 32/32 checks, both patches
python scripts/smoke_test_patch_load.py       # walks the real load chain
```

| Check | What it prevents |
|---|---|
| every patched sprite exists in base | patch silently doing nothing |
| every sprite is in the Cheep family | profile/sprite id confusion above |
| no field overrides a used nybble | silently breaking a base field |
| grouped variants leave 21-22 alone | clobbering the Group ID |
| no sprite overrides `notes` | losing the base game's descriptions |
| all 18 family sprites categorised | a sprite vanishing from the new view |
| no duplicate attaches | editor weirdness |
| well-formed XML | the whole patch failing to load |

## Honest status

The movement binding is **not confirmed by loading a level in-game**. It comes
from decompiling the Cheep Cheep constructor path and is consistent with the
editor's convention on 143 other sprites, but nobody has watched a Cheep Cheep
ride a moving platform because of this patch.

If it turns out a variant ignores movement controllers, those two fields are inert
rather than harmful — they occupy nybbles nothing else in the family uses.

The header comments in `spritedata.xml` carry the same reasoning, so it stays
auditable from inside the file.

## Licence

Research notes and XML only. No game code, assets or ROMFS contents. See the
parent repository's `NOTICE.md`.

*New Super Mario Bros. U Deluxe* is a trademark of Nintendo. Not affiliated.
