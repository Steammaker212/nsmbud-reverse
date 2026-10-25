// nsmbudx/actor_spawner.h -- a sprite that creates other sprites.
//
// The Deluxe port of codedx's ActorSpawner, with the event gate optional and a
// spawn count added. See readable/actor/ActorSpawner.cpp for the reverse.
//
// Placement fields (the level file's sprite entry):
//
//   linkId          low 8 bits of the id to spawn
//   movementId      bits 0-3: bits 8-11 of the id
//                   bit 4:    1 = the id is a SPRITE id (goes through
//                                 Profile::spriteToProfileList)
//                             0 = the id is already a PROFILE id
//   eventId2        event index + 1. 0 = no gate: spawn immediately, once.
//   eventId1        passed to the child as eventId1 (low nibble) and eventId2
//                   (high nibble), so the spawned actor can gate on its own.
//   settings1       passed through to the child unchanged.
//   settings2       spawn count in the HIGH nibble, 1-16 (0 means 1).
//   initStateFlag   horizontal offset in the low nibble, vertical in the high
//                   nibble, each times 32 units.
//
// The mode and id encoding are codedx's, so a level authored for codedx spawns
// the same thing here. Everything above the first two rows is new.
//
// Example -- spawn a Choropoo (sprite 611) when the level starts:
//
//   linkId = 611 & 0xFF, movementId = (611 >> 8) | 0x10, eventId2 = 0
//
// Example -- three Goombas, only while event 4 is active:
//
//   profile 6, eventId2 = 5, settings2 = 0x30
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

namespace nsmbudx {

// How many actors one spawner may create (the high nibble of settings2 + 1).
constexpr u32 cMaxSpawnCount = 16;

// Spawns actors from its placement fields. Call it from your own actor's
// onCreate/onExecute; it is the implementation the bundled ActorSpawner profile
// uses, and it is public so a custom actor can reuse it without duplicating the
// build-info plumbing.
//
//   profileId   profile to spawn (already resolved; use resolveProfile for the
//               sprite-vs-profile decision)
//   position    where to put it
//   count       how many (clamped to cMaxSpawnCount)
//   offset      per-actor offset applied as (i % 4) * offset.x horizontally and
//               (i / 4) * offset.y vertically
//   settings1   passed through
//   eventId1    packed: low nibble to the child's eventId1, high to its eventId2
//
// Returns how many were created (0 on failure, and the failure is logged).
u32 spawnActors(u32 profileId, const void* position, u32 count, const void* offset,
                u32 settings1, u8 eventId1);

// spriteToProfileList lookup with bounds checking: a sprite id past the end of
// the table returns 0 and logs, instead of reading whatever follows the table.
// The game's own table is indexed without a bound check (ledger F0101), so a
// bad sprite id in a level is a silent out-of-bounds read there; this is the
// safe path for custom code.
u32 profileForSprite(u32 spriteId);

// Number of entries currently in the sprite table. Custom profiles appended by
// the build tooling are included, which is what makes `profileForSprite` work
// for sprite ids no vanilla level contains.
u32 spriteTableSize();

// True if event `index` (0-based; a level's "event 1" is index 0) is active.
// Reads EventMgr::instance at 0x60C7B390 and the u64 mask at instance+0x10 --
// NOT +0x0, which is codedx's offset and is wrong on Deluxe (ledger F0181).
// Returns false if EventMgr has not been constructed yet, which is normal very
// early in boot and is why the spawner defaults to no gate.
bool eventActive(u32 index);

} // namespace nsmbudx
