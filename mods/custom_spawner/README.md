# custom_spawner -- a sprite that spawns other sprites

The Deluxe reimplementation of codedx's `ActorSpawner` (RicBent), plus two things
codedx's version does not have. **Sprite 738.**

The reverse is in
[readable/actor/ActorSpawner.cpp](../../readable/actor/ActorSpawner.cpp); the
reusable machinery is
[nsmbudx/actor_spawner.h](../../framework/actors/include/nsmbudx/actor_spawner.h).

## The crash (fixed 2026-10-26, ledger F0223)

Level 1-1 crashed when its codedx spawner (sprite 726, event 1) created MrSun
(sprite 724): `Invalid memory access at 0x0`, PC `main+0x430110`, inside
`ResArchive::getModel`. The spawner was fine; **the actor it created had no
archive**. The game loads per-level archives only for the sprite ids in each
area's loaded-sprite list, and the editor builds that list from the sprites it
sees placed -- never a spawner's target -- so `mrsun` was never loaded.

Fixed in three places:

- `framework/actors` (`spawn_resources.cpp`) loads every spawner target's
  archives with the level, in the game's own loader and heap. This covers
  codedx's 726 and this mod's 738 in every build that includes `actors`.
- `spawnActors` refuses an actor whose archives are still missing and logs
  `spawner: profile N needs archive 'x', which is not loaded` instead of
  crashing.
- This mod ships `code/actorspawner.cpp`, which **replaces codedx's 726** in
  the build (same placement; spawns through the guarded path, fixes codedx's
  always-zero child `eventId2`, logs `spawner 726: profile N on event E`).

Also fixed: 738 now passes `settings2` (minus its count nibble) to the child,
as its spritedata says, and the build writes the real sprite-table size into
`nsmbudx/build_config.h`, so the mods' own sprites (734-739) can be spawned.

## Why a second spawner

codedx already ships one at **sprite 726** (`ProfileId::ActorSpawner`), and it is
compiled in whenever you build with `--with-template-code`. This mod deliberately
does **not** reuse that name or that sprite, so both can live in one build:

| | codedx sprite 726 | this mod, sprite 738 |
|---|---|---|
| event gate | mandatory | optional (`eventId2 = 0` = spawn now) |
| sprite-table index | unbounded | range-checked and logged |
| spawn count | 1 | 1–16 |
| positional spread | none | yes |
| failures | silent | logged |

**For a plain event-triggered spawn, use codedx's sprite 726.** It is correct on
Deluxe: its `EventMgr` derives from `sead::IDisposer` (0x10 bytes), so `u64
events` is at `+0x10` there too, the same word `EventMgr::set` (0x6072A4B0)
writes (ledger F0211; an earlier note here said codedx read `+0x0`, which was
wrong). This sprite adds an optional gate, several spawns with a spread, a
range check and logging.

## Placement

One sprite covers profile ids 0–4095:

| field | meaning |
|---|---|
| `linkId` | bits 0–7 of the id |
| `movementId` bits 0–3 | bits 8–11 of the id |
| `movementId` bit 4 | set: the id is a **sprite** id (via `spriteToProfileList`)<br>clear: the id is already a **profile** id |
| `eventId2` | event index + 1. **0 = no gate**, spawn immediately |
| `settings2` | spawn count in the high nibble, 0 means 1 (max 16) |
| `initStateFlag` | spread: low nibble horizontal, high nibble vertical, ×32 units |
| `settings1` | passed through to every actor created |

The id encoding and the `movementId` bit 4 meaning are codedx's, so a level
authored for codedx spawns the same thing here.

### Examples

**A Rocky Wrench (sprite 536), immediately**

```
linkId     = 536 & 0xFF        = 24
movementId = 0x10 | (536 >> 8) = 0x12
eventId2   = 0
```

**Two Cheep Cheep (profile 530) while event 3 is active, 64 units apart**

```
linkId       = 530 & 0xFF = 18
movementId   = 530 >> 8   = 2
eventId2     = 4          (event 3, 1-based)
settings2    = 0x20       (count 2)
initStateFlag= 0x02       (2 * 32 = 64 horizontally)
```

**A boss plus its arena door from one placement**, the multi-actor pattern in
[readable/boss/Lemmy.cpp](../../readable/boss/Lemmy.cpp): use `settings2` for the
count and point `linkId` at the door profile, since companions are wired by link
id and normally need their own level entry.

## Using the framework without this actor

`nsmbudx/actor_spawner.h` is independent of the sprite, so your own actor can
spawn things without registering another profile:

```cpp
#include "nsmbudx/actor_spawner.h"

// Spawn three Goombas 32 units apart, gated by nothing.
Vec3 offset(32.0f, 0.0f, 0.0f);
nsmbudx::spawnActors(/*profile*/ 467, &position, /*count*/ 3, &offset,
                     /*settings1*/ 0, /*eventId1*/ 0);

if (nsmbudx::eventActive(3)) { /* level event 3 is on */ }
```

## Build

```sh
python scripts/sdk/make_mod_project.py --repo . --mod mods/custom_spawner \
  --sweetdx "<sweet-dx>" --nso "<main.nso>" \
  --out mods/custom_spawner/_build --with-template-code --build
```

`--with-template-code` is required: custom profiles come from codedx's
`profile.cpp`, and without it `profiles.txt` is rejected.

Verified: builds PASS. The generated code was disassembled and each instruction
matched back to source — the `ActorMgr::instance` double deref, `mov r2,#0` for
`unk=0`, the `i % 4` / `i / 4` spread. See ledger F0185. (The event read was
also "matched" -- against a constant `0x60C7B390`, which was both the wrong
address and an IDA address the game does not run at. It crashed the first time
it ran, 2026-10-26; it now uses codedx's `EventMgr::instance`, ledger F0229.)

**Not yet tested in-game.** Nothing in this repo has been run on hardware or an
emulator, so treat "builds and the code shape is right" as the current claim, not
"the actor spawns correctly".

## Limits

- The spawned actor is placed at the spawner's position, not parented to it.
  `parentId` is deliberately left 0: a non-zero `parentId` that fails to resolve
  makes `Actor::Actor` mark the new actor deleted (ledger F0187).
- The spawner never keeps the child pointer, because a child may delete itself
  inside its own `onCreate`, which is legal and common.
- A gated spawner re-arms when its event goes inactive, so it is a reusable
  "appear while the switch is on", not a one-shot. Use `settings2 = 0x10` and no
  event for a true one-shot.
- Sprite ids past the table end are rejected by `profileForSprite` (by
  design, ledger F0186); the build sets the size from the assembled table.
