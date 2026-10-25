// custom_spawner.cpp -- a custom actor spawner sprite.
//
// The Deluxe reimplementation of codedx's ActorSpawner (RicBent). codedx already
// ships *a* spawner at sprite 726 (ProfileId::ActorSpawner, in the template's
// code/actorspawner.cpp), so this one deliberately does NOT take that name or
// that sprite: it registers its own profile, which means both can live in the
// same build and be compared, and nothing silently overrides anything.
//
// The reverse is in readable/actor/ActorSpawner.cpp. The reusable machinery
// (event gate, sprite lookup, spawn loop) is nsmbudx/actor_spawner.h.
//
// =====================================================================
//  WHY THIS EXISTS WHEN codedx ALREADY HAS ONE
// =====================================================================
//
// Three defects in codedx's version matter on Deluxe, all reversed in
// readable/actor/ActorSpawner.cpp:
//
//  1. It reads the event mask at EventMgr+0x0. On Deluxe the u64 `events` is at
//     +0x10 (the IDisposer base is 0x10 bytes). +0x0 is the vtable pointer, so
//     the gate tests nonsense and a gated spawner never fires. (F0181)
//
//  2. `if (!eventId2) return 2;` makes the event MANDATORY. A level that does
//     not set an event gets a sprite that deletes itself on spawn -- the most
//     common "my spawner does nothing" failure. Here eventId2 == 0 means
//     "no gate, spawn immediately", which is what a hand-written level wants.
//
//  3. `Profile::spriteToProfileList[inputId]` is unbounded (the game's own table
//     is indexed without a check, F0101). inputId reaches 4095 but the vanilla
//     table is 738 entries, so a typo reads past the end. Here it is checked and
//     logged.
//
// Added beyond a port: a spawn count (1-16) and a positional spread, so one
// placement can build a group instead of a single actor.
//
// =====================================================================
//  PLACEMENT
// =====================================================================
//
// One sprite covers profile ids 0-4095:
//
//   linkId          bits 0-7 of the id
//   movementId      bits 0-3  -> bits 8-11 of the id
//                   bit 4     -> the id is a SPRITE id (goes through
//                                spriteToProfileList); clear means it is
//                                already a PROFILE id
//   eventId2        event index + 1; 0 = no gate, spawn at once
//   settings2       count in the high nibble (0 means 1, max 16)
//   initStateFlag   spread: low nibble horizontal, high nibble vertical, x32
//   settings1       passed through to every actor created
//
// Examples:
//
//   Rocky Wrench (sprite 611), immediately:
//       linkId = 611 & 0xFF = 99, movementId = 0x10 | (611 >> 8) = 0x12,
//       eventId2 = 0
//
//   Cheep Cheep (profile 530) x2, only while event 3 is active:
//       linkId = 530 & 0xFF = 18, movementId = (530 >> 8) = 2,
//       eventId2 = 4 (event 3, 1-based), settings2 = 0x20
//
// Deluxe (Switch) v1.0.0 only.

#include "profileid.h"
#include "actor/stageactor.h"
#include "nsmbudx/actor_spawner.h"
#include "nsmbudx/log.h"

class SpawnerActor : public StageActor
{
public:
    SpawnerActor(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;

    u32 spawnProfileId;
    u32 spawnCount;
    Vec3 spawnOffset;
    u8  gateEvent;      // 0-based event index, or cNoGate
    bool spawned;

private:
    static constexpr u8 cNoGate = 0xFF;
};

// The profile. Sprite 738 comes from this mod's profiles.txt; the build tooling
// appends it to Profile::spriteToProfileList, which is what makes the sprite
// placeable in a level. 734-737 are taken by the other mods in this repo and
// 724-733 by codedx's own custom sprites.
const Profile spawnerProfile(&SpawnerActor::build, ProfileId::SpawnerActor,
                             "SpawnerActor", nullptr, 0);

SpawnerActor::SpawnerActor(const ActorBuildInfo* buildInfo)
    : StageActor(buildInfo), spawnProfileId(0), spawnCount(1), spawnOffset(0.0f),
      gateEvent(cNoGate), spawned(false)
{
}

Actor* SpawnerActor::build(const ActorBuildInfo* buildInfo)
{
    return new SpawnerActor(buildInfo);
}

u32 SpawnerActor::onCreate()
{
    // Decode the id exactly as codedx does, so a level authored for codedx
    // spawns the same thing here.
    u32 inputId = (u32)linkId | (((u32)movementId & 0xF) << 8);

    if (movementId & 0x10) {
        spawnProfileId = nsmbudx::profileForSprite(inputId);
        if (!spawnProfileId) {
            // Nothing to spawn. Return anything but 1 and the game marks the
            // actor deleted (+0x13) instead of leaving an invisible no-op in
            // the level -- anything except a verdict of 1 does that (F0180).
            return 3;
        }
    } else {
        spawnProfileId = inputId;
    }

    // Count from the high nibble of settings2; 0 means 1.
    u32 encodedCount = (settings2 >> 4) & 0xF;
    spawnCount = encodedCount ? encodedCount : 1;

    // Spread from initStateFlag's two nibbles, 32 units per step.
    spawnOffset.x = (f32)(initStateFlag & 0xF) * 32.0f;
    spawnOffset.y = (f32)((initStateFlag >> 4) & 0xF) * 32.0f;

    // eventId2 is 1-based in a level file; 0 means "no gate", the default and
    // the only mode a level that knows nothing about events gets.
    gateEvent = eventId2 ? (u8)(eventId2 - 1) : cNoGate;

    nsmbudx::log("spawner: profile ", spawnProfileId, " x", spawnCount,
                 gateEvent == cNoGate ? " (no gate)" : " gated");

    return 1;
}

u32 SpawnerActor::onExecute()
{
    // A gated spawner re-arms when its event goes inactive, so it is a reusable
    // "appear while the switch is on" rather than a one-shot.
    if (gateEvent != cNoGate) {
        if (!nsmbudx::eventActive(gateEvent)) {
            spawned = false;
            return 1;
        }
        if (spawned)
            return 1;
    } else if (spawned) {
        return 1;
    }

    nsmbudx::spawnActors(spawnProfileId, &position, spawnCount, &spawnOffset,
                         settings1, eventId1);
    spawned = true;
    return 1;
}
