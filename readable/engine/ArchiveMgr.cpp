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
