#include "profile.h"
#include "profileid.h"
#include "actor/actor.h"

// Custom-profile support.
//
// The retail game has a fixed table of 914 profiles. This file's job is to make
// the engine consult OUR arrays as well, so a mod can register profile ids at
// 914 and above.
//
// Two things are needed and both are in hooks/profiles_custom.hks:
//   1. The Profile accessors (get / getPriority / getHasResources /
//      getResourceCount / getResourceList) must be redirected here.
//   2. The sprite-count guards must be relaxed, because they clamp sprite ids
//      to the original table size.
//
// Nothing here is needed for the Hammer power-up. The Hammer reuses retail
// profile 759, so it stamps existing data rather than adding a profile. This
// file exists so the project is *capable* of new actors, which is what the
// Cheep Cheep reskin direction eventually wants.

// The engine's original tables. These live in the retail binary and are
// resolved through symbols/nsmbudx.sym (they appear as mangled statics).
extern "C" {

// Provided by the linker script from our own arrays below.
u32  g_numCustomProfiles = 0;
Profile* g_customProfiles[Profile::NUM_PROFILES_CUSTOM];
s16  g_customPriorities[Profile::NUM_PROFILES_CUSTOM];
u8   g_customHasResources[Profile::NUM_PROFILES_CUSTOM];
u8   g_customResourceCount[Profile::NUM_PROFILES_CUSTOM];
const sead::SafeString* g_customResourceLists[Profile::NUM_PROFILES_CUSTOM];

} // extern "C"

u32 Profile::getNumProfiles()
{
    // Retail count comes from the original code; we only report our own additions.
    return Profile::NUM_PROFILES_ORIGINAL + g_numCustomProfiles;
}

// Registers a custom profile. Called from a static initialiser in mod code.
void RegisterCustomProfile(Profile* profile)
{
    if (!profile) return;
    if (profile->id < Profile::NUM_PROFILES_ORIGINAL) return;
    if (profile->id >= Profile::NUM_PROFILES) return;

    u32 idx = profile->id - Profile::NUM_PROFILES_ORIGINAL;
    g_customProfiles[idx] = profile;
    if (idx + 1 > g_numCustomProfiles)
        g_numCustomProfiles = idx + 1;
}
