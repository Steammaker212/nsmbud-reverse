// actor_spawner.cpp -- see nsmbudx/actor_spawner.h and
// readable/actor/ActorSpawner.cpp.
//
// The Deluxe port of codedx's ActorSpawner. The three things that had to change
// from codedx are marked DELUXE below; everything else is the same shape so a
// level authored for codedx behaves the same.

#include "nsmbudx/actor_spawner.h"
#include "nsmbudx/log.h"
#include "actor/stageactor.h"
#include "actormgr.h"
#include "profile.h"

namespace nsmbudx {

// ---------------------------------------------------------------------------
// EventMgr
// ---------------------------------------------------------------------------
//
// DELUXE: EventMgr has no symbol name and no RTTI in this build -- the strings
// "EventMgr", "eventId" and "isActive" are absent from main.nso -- but the class
// exists. EventMgr::set survives as 0x6072A4B0, has 34 call sites, and its own
// code proves the layout:
//
//     ldrd r6,r7,[r0,#0x10]      ; u64 events
//     orr  r4,r6,r4
//     strd r4,[r0,#0x10]
//
// so the instance pointer lives at 0x60C7B390 and the mask is at +0x10.
//
// codedx's eventmgr.h puts `events` at +0x0 and inherits IDisposer; on Deluxe
// the base object is 0x10 bytes, so +0x0 would read a vtable pointer and every
// gate would test true for some ids and false for others for no reason. This is
// the one codedx offset that MUST NOT be copied.
constexpr u32 cEventMgrInstance = 0x60C7B390;
constexpr u32 cEventMgrEvents   = 0x10;

static inline u64 load64(u32 address)
{
    u64 v;
    asm volatile("ldr %Q0, [%1]\n\tldr %R0, [%1, #4]" : "=r"(v) : "r"(address) : "memory");
    return v;
}

bool eventActive(u32 index)
{
    if (index >= 64)
        return false;
    const void* instance = *(const void**)(uintptr_t)cEventMgrInstance;
    if (!instance)
        return false;
    return (load64((u32)(uintptr_t)instance + cEventMgrEvents) >> index) & 1;
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
//   * vanilla Deluxe has 738 entries, indices 0..737 (verified: the assembled
//     profile.cpp's last comment index is 737)
//   * a mod that adds sprites past that must set NSMBUDX_SPRITE_TABLE_SIZE to
//     its highest sprite id + 1, or its own sprites are rejected here
//
// Getting this wrong in the safe direction rejects a valid custom sprite (a
// log line, no spawn). Getting it wrong in the other direction is an
// out-of-bounds read, which is what the vanilla code already does and what this
// check exists to stop -- so the default is the verified vanilla size and
// over-setting it is a deliberate act.
#ifndef NSMBUDX_SPRITE_TABLE_SIZE
#define NSMBUDX_SPRITE_TABLE_SIZE 738
#endif

u32 spriteTableSize()
{
    return NSMBUDX_SPRITE_TABLE_SIZE;
}

u32 profileForSprite(u32 spriteId)
{
    if (spriteId >= NSMBUDX_SPRITE_TABLE_SIZE) {
        log("spawner: sprite ", spriteId, " is past the table (", NSMBUDX_SPRITE_TABLE_SIZE,
            " entries; set NSMBUDX_SPRITE_TABLE_SIZE)");
        return 0;
    }
    u32 profileId = Profile::spriteToProfileList[spriteId];
    if (!profileId)
        log("spawner: sprite ", spriteId, " has no profile");
    return profileId;
}

// ---------------------------------------------------------------------------
// spawn
// ---------------------------------------------------------------------------

u32 spawnActors(u32 profileId, const void* position, u32 count, const void* offset,
                u32 settings1, u8 eventId1)
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
        info.settings2     = 0;
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

} // namespace nsmbudx
