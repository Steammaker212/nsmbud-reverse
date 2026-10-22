#pragma once

#include "types.h"
#include "resarchive.h"
#include "sead.h"
#include "preprocessor.h"
#include "profileid.h"

class Actor;
struct ActorInfo;
struct ActorBuildInfo;

//
// A profile describes one kind of actor: how to build it, what id it answers to,
// and which resource archives must be resident before it can exist.
//
// The retail game ships 914 of these in fixed tables. This header also declares
// parallel arrays for CUSTOM profiles (ids 914 and up) so a mod can add new
// actor kinds without displacing anything that already exists.
//
// Confirmed field offsets:
//     +0x04  buildFunc           function that allocates the actor
//     +0x08  id                  this profile's id
//     +0x0C  actorInfo           static metadata block
//     +0x10  hasResourcesLoaded  set once the archives are in memory
//     +0x14  flags
//
class Profile
{
public:
    Profile(Actor* (*buildFunc)(const ActorBuildInfo*), u32 id,
            const sead::SafeString& name, const ActorInfo* actorInfo, u32 flags);

    virtual u32 vf00();

    ResArchive* getResArchiveById(u32 idx);

    static Profile* get(u32 id);
    static s16  getPriority(u32 id);
    static u8   getHasResources(u32 id);
    static u8   getResourceCount(u32 id);
    static const sead::SafeString* getResourceList(u32 id);

    Actor* (*buildFunc)(const ActorBuildInfo*);
    u32 id;
    const ActorInfo* actorInfo;
    u8  hasResourcesLoaded;
    u32 flags;

    static u32 spriteToProfileList[];

    static const u32 NUM_PROFILES_ORIGINAL = 914;
    static const u32 NUM_PROFILES_CUSTOM   = ProfileId::Num - NUM_PROFILES_ORIGINAL;
    static const u32 NUM_PROFILES          = NUM_PROFILES_ORIGINAL + NUM_PROFILES_CUSTOM;

    static u32 getNumProfiles();

    // Retail tables. These live in the binary; we only read them.
    static Profile* profilesOriginal[NUM_PROFILES_ORIGINAL];
    static const s16 prioritiesOriginal[NUM_PROFILES_ORIGINAL];
    static const u8  hasResourcesOriginal[NUM_PROFILES_ORIGINAL];
    static const u8  resourceCountOriginal[NUM_PROFILES_ORIGINAL];
    static const sead::SafeString* resourceListsOriginal[NUM_PROFILES_ORIGINAL];

    // Our additions, indexed by (id - NUM_PROFILES_ORIGINAL).
    static Profile* profilesCustom[NUM_PROFILES_CUSTOM];
    static s16 prioritiesCustom[NUM_PROFILES_CUSTOM];
    static u8  hasResourcesCustom[NUM_PROFILES_CUSTOM];
    static u8  resourceCountCustom[NUM_PROFILES_CUSTOM];
    static const sead::SafeString* resourceListsCustom[NUM_PROFILES_CUSTOM];
};


//
// Declaring one of these at file scope registers a custom profile's resource
// archives. It does nothing for retail ids, so it is safe to write unconditionally.
//
struct ProfileResources
{
    ProfileResources(u32 id, u32 count, const sead::SafeString resources[])
    {
        if (id < Profile::NUM_PROFILES_ORIGINAL || id >= Profile::NUM_PROFILES)
            return;

        const u32 slot = id - Profile::NUM_PROFILES_ORIGINAL;

        Profile::hasResourcesCustom[slot]  = (count != 0);
        Profile::resourceCountCustom[slot] = count;
        Profile::resourceListsCustom[slot] = resources;
    }
};

// Internal: builds the array and the registering object with a unique name.
#define PROFILE_RESOURCES_IDENT(IDENT, ID, ...)                     \
    const sead::SafeString PP_CONCAT(profileResFiles, IDENT)[] =    \
        { __VA_ARGS__ };                                            \
    const ProfileResources PP_CONCAT(profileResReg, IDENT)(         \
        ID, PP_NARG(__VA_ARGS__),                                   \
        PP_CONCAT(profileResFiles, IDENT))

// Public form: the resource archive names this profile needs.
#define PROFILE_RESOURCES(ID, ...) \
    PROFILE_RESOURCES_IDENT(__COUNTER__, ID, __VA_ARGS__)
