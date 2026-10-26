// actorspawner.cpp -- codedx's ActorSpawner (sprite 726), fixed for Deluxe.
//
// This file has the template's name on purpose: make_mod_project.py copies a
// mod's code/ over the template's, so a build with this mod replaces codedx's
// spawner instead of adding a second definition of ProfileId::ActorSpawner.
// Placement is unchanged (spritedata for 726 still applies):
//
//   eventId2 (nybbles 1-2)   triggering event + 1; 0 deletes the spawner
//   eventId1 (nybble 4)      the spawned actor's eventId1
//   settings1 / settings2    copied to the spawned actor
//   movementId / linkId      the actor to spawn, codedx encoding
//
// What changed from RicBent's version, and why:
//
//  1. The crash (ledger F0223). Spawning an actor whose archive is not loaded
//     dereferences null in ResArchive::getModel (PC main+0x430110), and a
//     spawner's target is never in the level's loaded-sprite list. Level 1-1
//     (726 -> MrSun) crashed this way. framework/actors now loads every
//     spawner target with the level, and the spawn goes through
//     nsmbudx::spawnActors, which refuses (and logs) instead of crashing if an
//     archive is still missing.
//  2. `(eventId1 >> 8) & 0xF` on a u8 is always 0, so the child's eventId2
//     was always cleared. The nibble codedx meant is bits 4-7.
//  3. The sprite id is bounds-checked (the game's table is not, F0101).
//  4. onCreate logs what it will spawn, so a placement can be checked in the
//     Ryujinx log ("[nsmbudx] spawner 726: ...").
//
// Deluxe (Switch) v1.0.0 only.

#include "actor/stageactor.h"
#include "profileid.h"
#include "nsmbudx/actor_spawner.h"
#include "nsmbudx/log.h"

class ActorSpawner : public StageActor
{
public:
    ActorSpawner(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;

    u16 spawnProfileId;
    bool spawned;
};

const Profile actorSpawnerProfile(&ActorSpawner::build, ProfileId::ActorSpawner, "ActorSpawner", nullptr, 0);


ActorSpawner::ActorSpawner(const ActorBuildInfo* buildInfo)
    : StageActor(buildInfo), spawnProfileId(0), spawned(false)
{
}

Actor* ActorSpawner::build(const ActorBuildInfo* buildInfo)
{
    return new ActorSpawner(buildInfo);
}

u32 ActorSpawner::onCreate()
{
    // codedx: the event is mandatory; 0 deletes the spawner.
    if (!eventId2)
        return 2;

    spawnProfileId = (u16)nsmbudx::spawnTarget(linkId, movementId);
    if (!spawnProfileId)
        return 2;

    spawned = false;
    nsmbudx::log("spawner 726: profile ", (u32)spawnProfileId, " on event ", (u32)eventId2);
    return 1;
}

u32 ActorSpawner::onExecute()
{
    if (nsmbudx::eventActive(eventId2 - 1))
    {
        if (!spawned)
        {
            // eventId1's low nibble is the child's eventId1, its high nibble
            // the child's eventId2 -- spawnActors unpacks it that way.
            nsmbudx::spawnActors(spawnProfileId, &position, 1, nullptr,
                                 settings1, eventId1, settings2);
            spawned = true;
        }
    }
    else
        spawned = false;

    return 1;
}
