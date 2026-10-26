// nsmbudx/profile_resources.h -- which archives a custom profile loads, and when.
//
// Profile::getHasResources is not a yes/no flag: it is a load class.
// LoadProfileArchives (0x60008F10) runs in three modes (ledger F0202):
//
//   mode 0  at game start (0x607DF60C)   every profile whose class is 0
//   mode 1  at each level load (0x603F8EC4)  only the sprites in the level's
//           area sprite lists (area +0x24, count +0x9C) whose class is 1
//   mode 2  on the world map (0x601FDBE0)  every profile whose class is 2
//
// Vanilla: 173 profiles are class 0 -- every power-up item (591-598), Yoshi
// (442), the Yoshi egg (811) -- because ?-blocks can produce them anywhere.
// 686 are class 1 (enemies, objects), 55 are class 2 (world-map actors).
//
// So a custom item that comes out of blocks must be AtBoot: as PerLevel its
// archives load only in levels that also place its sprite, and anywhere else
// the model lookup returns null (the "archive is not loaded" crash). Loading a
// name twice is harmless: ArchiveManager_loadSzs (0x6082243C) returns early
// when its tree already holds that name.
//
// Needs codedx's profile system (--with-template-code), which routes these
// tables to the loader (hooks at 0x183C8 / 0x183F0 / 0x20FF0 and the profile
// count at 0x919C).
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "profile.h"

namespace nsmbudx {

enum class ResourceLoad : u8
{
    AtBoot   = 0,   // loaded once, available in every level (items from blocks)
    PerLevel = 1,   // loaded with levels that place the sprite (enemies, objects)
    WorldMap = 2,   // loaded on the world map
};

// `list` must stay alive (static storage). Call from a static constructor.
inline void setProfileResources(u32 profileId, const sead::SafeString* list, u32 count, ResourceLoad when)
{
    if (profileId < Profile::NUM_PROFILES_ORIGINAL || profileId >= Profile::NUM_PROFILES)
        return;
    u32 custom = profileId - Profile::NUM_PROFILES_ORIGINAL;
    // Class 0 with no archives is what vanilla uses for "nothing to load".
    Profile::hasResourcesCustom[custom]  = count ? (u8)when : 0;
    Profile::resourceCountCustom[custom] = (u8)count;
    Profile::resourceListsCustom[custom] = list;
}

} // namespace nsmbudx
