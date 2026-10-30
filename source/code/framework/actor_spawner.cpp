// actor_spawner.cpp -- see modbase/actor_spawner.h and
// reverse-engineering/FindingsA/actor/ActorSpawner.cpp.
//
// The Deluxe port of codedx's ActorSpawner. The three things that had to change
// from codedx are marked DELUXE below; everything else is the same shape so a
// level authored for codedx behaves the same.

#include "modbase/actor_spawner.h"
#include "modbase/log.h"
#include "modbase/name_remap.h"
#include "actors/stageactor.h"
#include "actors/actormgr.h"
#include "level/eventmgr.h"
#include "actors/profile.h"

#if __has_include("modbase/build_config.h")
#include "modbase/build_config.h"       // MODBASE_SPRITE_TABLE_SIZE, from make_mod_project.py
#endif

namespace ModBase {

// ---------------------------------------------------------------------------
// EventMgr
// ---------------------------------------------------------------------------
//
// EventMgr::set (0x6072A4B0, 34 call sites) proves the layout:
//
//     ldrd r6,r7,[r0,#0x10]      ; u64 events
//     orr  r4,r6,r4
//     strd r4,[r0,#0x10]
//
// and every caller loads the instance through the GOT entry for
// EventMgr::instance, 0x60CBD8AC (e.g. 0x600C7AD0, right before
// `bl 0x6072A4B0`). codedx's eventmgr.h has the same layout (u64 events after
// its 0x10-byte sead::IDisposer base, F0211) and main.sym binds the symbol to
// the same address, so this reads it through codedx's declaration.
//
// It must be the *symbol*. This used to read a constant address, 0x60C7B390:
// an IDA address (the game is not loaded at 0x60000000 at runtime, so it read
// unrelated memory) and the wrong one (0x60C7B390 is an RTTI static used by
// CollisionActor::checkDerivedRuntimeTypeInfo). In Ryujinx the "instance" read
// there was 0xFFFFFFF0, and the mask read at +0x10 faulted at address 0 inside
// this function the first frame a spawner asked about its event (ledger F0229).

bool eventActive(u32 index)
{
    if (index >= 64)
        return false;
    EventMgr* mgr = EventMgr::instance;
    if (!mgr)
        return false;
    return mgr->isActive((u8)index);
}

// ---------------------------------------------------------------------------
// sprite table
// ---------------------------------------------------------------------------

// DELUXE: the game indexes spriteToProfileList with no bound check (F0101), and
// the build tooling appends custom profiles to that table (that is what a mod's
// profiles.txt does), so its length is a build-time fact, not a game constant.
//
// `Profile::spriteToProfileList` is declared with an incomplete type in
// profile.h, so sizeof() cannot be used from this translation unit. The table
// length is therefore supplied by the build:
//
//   * make_mod_project.py writes MODBASE_SPRITE_TABLE_SIZE into
//     modbase/build_config.h after appending the build's custom sprites, so
//     the mods' own sprites (738, 739, ...) are spawnable
//   * without it, the vanilla template size: 738 entries, indices 0..737
//
// Getting this wrong in the safe direction rejects a valid custom sprite (a
// log line, no spawn). Getting it wrong in the other direction is an
// out-of-bounds read, which is what the vanilla code already does and what this
// check exists to stop.
#ifndef MODBASE_SPRITE_TABLE_SIZE
#define MODBASE_SPRITE_TABLE_SIZE 738
#endif

u32 spriteTableSize()
{
    return MODBASE_SPRITE_TABLE_SIZE;
}

u32 profileForSprite(u32 spriteId)
{
    if (spriteId >= MODBASE_SPRITE_TABLE_SIZE) {
        log("spawner: sprite ", spriteId, " is past the table (", MODBASE_SPRITE_TABLE_SIZE,
            " entries; set MODBASE_SPRITE_TABLE_SIZE)");
        return 0;
    }
    u32 profileId = Profile::spriteToProfileList[spriteId];
    if (!profileId)
        log("spawner: sprite ", spriteId, " has no profile");
    return profileId;
}

u32 spawnTarget(u8 linkId, u8 movementId)
{
    u32 id = (u32)linkId | (((u32)movementId & 0xF) << 8);
    return (movementId & 0x10) ? profileForSprite(id) : id;
}

// ---------------------------------------------------------------------------
// archives
// ---------------------------------------------------------------------------

// The check the model lookup lacks: is every archive this profile names
// mounted? "block_ice" is skipped exactly as Profile_loadResources (0x60017FCC)
// skips it -- the engine keeps it resident and never loads it per profile.
bool archivesReady(u32 profileId)
{
    const sead::SafeString* list = Profile::getResourceList(profileId);
    u32 count = Profile::getResourceCount(profileId);
    for (u32 i = 0; list && i < count; i++) {
        const char* name = list[i].data;
        if (!name || !*name)
            continue;
        const char* ice = "block_ice";
        const char* n = name;
        while (*n && *n == *ice)
            n++, ice++;
        if (*n == *ice)
            continue;
        if (!isArchiveLoaded(name)) {
            log("spawner: profile ", profileId, " needs archive '", name, "', which is not loaded");
            return false;
        }
    }
    return true;
}

// ---------------------------------------------------------------------------
// spawn
// ---------------------------------------------------------------------------

u32 spawnActors(u32 profileId, const void* position, u32 count, const void* offset,
                u32 settings1, u8 eventId1, u32 settings2)
{
    if (!count)
        count = 1;
    if (count > cMaxSpawnCount)
        count = cMaxSpawnCount;

    // Resolve first: a bad profile must create nothing at all, not create the
    // default actor `count` times. Profile::get returns profilesOriginal[0] for
    // anything out of range, which would otherwise spawn N wrong actors quietly.
    Profile* profile = Profile::get(profileId);
    if (!profile || profileId >= Profile::NUM_PROFILES) {
        log("spawner: no profile ", profileId);
        return 0;
    }

    // An actor whose archive is not mounted dereferences null in
    // ResArchive::getModel (0x60430110) the moment it builds its model -- the
    // 1-1 crash (ledger F0223). The level-load scan normally prevents this;
    // refusing here covers anything it could not see (a target changed at
    // runtime, an archive that failed to load).
    if (!archivesReady(profileId)) {
        log("spawner: not spawning profile ", profileId, " (archives missing)");
        return 0;
    }

    const Vec3* at = (const Vec3*)position;
    const Vec3* step = (const Vec3*)offset;

    u32 made = 0;
    for (u32 i = 0; i < count; i++) {
        ActorBuildInfo info;
        // Zero every field, including the padding, so a stack slot that held a
        // stale profile pointer cannot leak into parentId or _28.
        u8* raw = (u8*)&info;
        for (u32 b = 0; b < sizeof(info); b++)
            raw[b] = 0;

        info.settings1     = settings1;
        info.settings2     = settings2;
        info.profile       = profile;
        info.eventId1      = eventId1 & 0xF;
        info.eventId2      = (eventId1 >> 4) & 0xF;
        info.movementId    = 0;
        info.linkId        = 0;
        info.initStateFlag = 0;

        info.position.x = at->x;
        info.position.y = at->y;
        info.position.z = at->z;
        if (step && (step->x || step->y)) {
            // 4 per row: a 4-wide grid keeps a group compact instead of a line.
            info.position.x += (f32)(i % 4) * step->x;
            info.position.y += (f32)(i / 4) * step->y;
        }

        // DELUXE: 0 is the ordinary path -- it inserts the actor into the
        // manager's list and bumps the count. 1 is the special case used by 19
        // of the game's 323 call sites. A spawner wants 0.
        if (ActorMgr::instance->create(&info, 0))
            made++;
    }

    if (!made)
        log("spawner: profile ", profileId, " created nothing");
    return made;
}

} // namespace ModBase
