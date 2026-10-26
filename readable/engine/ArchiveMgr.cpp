// ArchiveMgr.cpp -- how a profile's archives get loaded, and how a name becomes
// a loaded resource.
//
// This is the layer under `framework/resources/`: the Shy Guy mod says "behave
// like a Goombrat" and gets the `kakibo` archive for free, because *the profile
// id*, not the class, decides what is on disk. Reading this is how you know what
// you get for free and what you must ship yourself.
//
// The chain, top to bottom:
//
//   Profile_loadResources(profile)          0x60017FCC  once per profile
//     Profile_getResourceListById(id)       0x60020FF0  -> SafeString* array
//     Profile_getResourceCountById(id)      0x600183F0  -> count
//     for each name:
//       ArchiveManager_loadSzs("Model/<name>.Nin_NX_NVN.szs")
//       RegisterRes(profile id, name)
//     profile->hasResourceLoaded = 1
//
//   Profile::getResArchiveById(id, n)       0x6001824C  index into that list
//     -> LoadResource(ResourceMgr, &list[n])
//
// Deluxe (Switch) v1.0.0. Ledger: F0119-F0123.

#include "types.h"
#include "game/actor.h"

// ---------------------------------------------------------------------------
// The profile resource tables
// ---------------------------------------------------------------------------
//
// Three parallel arrays, each indexed directly by profile id and each 914
// entries long:
//
//     ResourceList[914]             SafeString*  -- the names, 8 bytes per entry
//     ProfileResourceCount[914]     u32
//     ProfileHasResourceList[914]   u8
//
// They are not per-Profile fields. That is the design decision worth noticing:
// resource lists live in a side table keyed by id, so a profile gets its
// archives from its *id* whether or not any Profile object exists yet, and
// Profile_loadResources can run before construction. It also means a mod cannot
// attach resources to a profile by writing into the Profile -- the table is
// indexed by id, and 914 is the hard end of it.

// 0x600183F0. Out-of-range ids return 0 rather than reading past the array.
u32 Profile::getResourceCountById(u32 id)
{
    if (id > 0x391)          // 913 is the last valid index
        return 0;
    return ProfileResourceCount[id];
}

// 0x60020FF0.
SafeString* Profile::getResourceListById(u32 id)
{
    if (id > 0x391)
        return nullptr;
    return ResourceList[id];
}

// 0x600183C8. 1 if this profile has a resource list at all.
bool Profile::getHasResources(u32 id)
{
    if (id > 0x391)
        return false;
    return ProfileHasResourceList[id] != 0;
}


// ---------------------------------------------------------------------------
// Loading
// ---------------------------------------------------------------------------

// 0x60017FCC. Load every archive a profile names, once.
//
// Three things here are load-bearing for mods:
//
// 1. **The path is built, not stored.** Each entry becomes
//
//        "Model/%s.Nin_NX_NVN.szs"
//
//    so a resource-list entry is a bare archive name ("kuribo", "kakibo",
//    "I_fireflower") and the loader adds the directory and extension. A mod that
//    wants a custom archive only has to put `<name>.Nin_NX_NVN.szs` in
//    romfs/Model/ and name it in the list. The format string is at 0x60AB916D,
//    immediately after "block_ice" in .rodata.
//
// 2. **The guard is on the Profile, not the tables.** `hasResourceLoaded` is
//    checked first (ldrb r2,[r0,#0x10]; bxne lr) and set last, so a second call
//    is free. Profile_unsetResourcesLoaded (0x60018238) is the only clearer, and
//    the stage teardown path calls that for every profile -- which is why
//    changing levels reloads archives and why a stale `hasResourceLoaded` would
//    leave a level with no models.
//
// 3. **"block_ice" is special-cased.** Despite what the decompiler's rendering
//    suggests (it prints the literal as if it were the entry being loaded), the
//    loop compares each entry's name against the string "block_ice" and *skips*
//    the load when it matches, without returning early from the whole function
//    -- the `beq` at 0x600180D4 lands on the loop increment at 0x6001815C, not
//    on the epilogue at 0x6001816C. block_ice is the one archive the engine
//    expects to be already resident, so it is not re-requested per profile.
//
// The load itself is two calls per entry: ArchiveManager::loadSzs (0x6082243C)
// with the built path, then a registration against the resource manager
// (0x6043B2D8) keyed by the entry.
bool Profile::loadResources(u32 heapToken)
{
    if (this->hasResourceLoaded)
        return true;

    SafeString* list  = Profile::getResourceListById(this->id);
    if (!list)
    {
        this->hasResourceLoaded = 1;
        return true;
    }

    u32 count = Profile::getResourceCountById(this->id);
    if (!count)
    {
        this->hasResourceLoaded = 1;
        return true;
    }

    for (u32 i = 0; i < count; i++)
    {
        SafeString* entry = &list[i];          // the loop steps r6 by 8

        // Resident already; not re-requested. See point 3 above.
        if (entry->cstr && streq(entry->cstr, "block_ice"))
            continue;

        // "Model/%s.Nin_NX_NVN.szs", with the entry's name substituted.
        SafeString path = formatModelPath(entry->cstr);

        ArchiveManager::loadSzs(ArchiveManagerMaybe::sInstance, entry, &path,
                                heapToken, 1);

        registerResource(ResourceMgrRelated::sInstance, entry);
    }

    this->hasResourceLoaded = 1;
    return true;
}

// 0x6001824C. Get the n-th archive of a profile, loading its resources first if
// that has not happened. Called by actor code that wants, say, its own model
// archive without knowing the id.
//
// The bounds check is `count > n`, so an out-of-range index returns null instead
// of a pointer into the next profile's list.
void* Profile::getResArchiveById(u32 index)
{
    SafeString* list = Profile::getResourceListById(this->id);
    if (!list)
        return nullptr;

    if (Profile::getResourceCountById(this->id) <= index)
        return nullptr;

    return LoadResource(ResourceMgrRelated::sInstance, &list[index]);
}

// 0x60018238. Clear the "already loaded" flag. The stage teardown path calls
// this for every profile, which is what makes the next level reload its
// archives.
void Profile::unsetResourcesLoaded()
{
    if (this->hasResourceLoaded)
        this->hasResourceLoaded = 0;
}


// ---------------------------------------------------------------------------
// Which profiles get loaded, and when
// ---------------------------------------------------------------------------
//
// Ledger F0202 (the load classes) and F0223 (what this means for spawners).

// One placed sprite in a course area: area->blocks[7], count at
// area->blockEntryCounts[7] (+0x98). Read by the area sprite builder
// sub_60005E40, which copies it into an ActorBuildInfo field by field; the
// stride is the `add sl, sl, #24` at 0x60004B64.
struct AreaSprite                   // 0x18 bytes
{
    u16 type;                       // +0x00 sprite id -> SpriteToProfileTable
    u16 x;                          // +0x02
    u16 y;                          // +0x04
    u8  eventId1;                   // +0x06
    u8  eventId2;                   // +0x07
    u32 settings1;                  // +0x08
    u32 settings2;                  // +0x0C
    u8  _10;                        // +0x10
    u8  layer;                      // +0x11 -> ActorBuildInfo +0x20
    u8  movementId;                 // +0x12
    u8  linkId;                     // +0x13
    u8  initStateFlag;              // +0x14
    u8  _15[3];
};

// The area's loaded-sprite list: area->blocks[8] (+0x24), count +0x9C, one
// 4-byte entry per sprite id. Written by the level editor from the sprites it
// sees placed.
struct LoadedSprite
{
    u16 type;
    u16 _2;
};

enum ProfileLoadClass : u8
{
    cLoad_AtBoot   = 0,     // every power-up item, Yoshi, the egg (173 profiles)
    cLoad_PerLevel = 1,     // enemies and objects (686)
    cLoad_WorldMap = 2,     // world-map actors (55)
};

// 0x60008F10. Called with mode 0 at game start (0x607DF208), 1 at each level
// load (0x603F8408) and 2 on the world map (0x601FDB60).
//
// The detail that matters for modding is mode 1: it loads only the profiles of
// sprites in the *loaded-sprite list*, never the placed sprites. Anything that
// creates an actor the level does not list -- an actor spawner is the obvious
// case -- creates one whose archive was never loaded, and the actor's first
// ResArchive::getModel (0x604300DC) dereferences the null archive. That was
// the level 1-1 crash: spawner 726 -> MrSun, archive "mrsun", PC main+0x430110.
// framework/actors/code/spawn_resources.cpp hooks this function and
// Profile_loadResources to load spawner targets in the same pass.
void LoadProfileArchives(u32 mode, sead::Heap* parent)
{
    u64 start = nn::os::GetSystemTick();

    // Skipped entirely when the parent heap cannot hold the minimum the
    // allocator needs (parent vtable +0x40 free size vs sub_608F61B0(4)).
    if (parent && parent->getFreeSize(4) < sead::ExpHeap::minimumSize(4))
        return;

    // A child heap for this pass, named "ActorResLoader" (size 0: what is left
    // of the parent), made current while the archives load.
    sead::ExpHeap* heap = sead::ExpHeap::create(0, "ActorResLoader", parent, 4, 1, false);
    sead::Heap* previous = heap ? sead::HeapMgr::sInstance->setCurrentHeap(heap) : nullptr;

    if (mode == cLoad_PerLevel)
    {
        for (u32 a = 0; a < 4; a++)
        {
            Level::Area* area = Level::instance->getArea(a);
            if (!area || !area->blocks[8] || !area->blockEntryCounts[8])
                continue;
            const LoadedSprite* list = (const LoadedSprite*)area->blocks[8];
            for (u32 i = 0; i < area->blockEntryCounts[8]; i++)
            {
                u32 profileId = SpriteToProfileTable[list[i].type];
                if (Profile::getHasResources(profileId) == cLoad_PerLevel)
                    if (Profile* profile = Profile::get(profileId))
                        profile->loadResources(heap);
            }
        }
    }
    else
    {
        // The bound is codedx's getNumProfiles call in a modded build (the
        // `movw r4, #914` at 0x6000919C), so custom profiles take part.
        for (u32 id = 0; id != 914; id++)
            if (Profile::getHasResources(id) == mode)
                if (Profile* profile = Profile::get(id))
                    profile->loadResources(heap);
        if (mode == cLoad_AtBoot)
            LoadProfileArchives_helper(heap);
    }

    heap->adjust();                             // vtable +0x14: shrink to what was used
    if (previous)
        sead::HeapMgr::sInstance->setCurrentHeap(previous);
    (void)start;                                // the tick pair only times the pass
}
