// actor_variant.cpp -- see nsmbudx/actor_variant.h.

#include "nsmbudx/actor_variant.h"
#include "nsmbudx/log.h"
#include "nsmbudx/profile_resources.h"
#include "actor/actor.h"
#include "profile.h"

inline void* operator new(size_t, void* where) noexcept { return where; }

namespace {

constexpr u32 cMaxVariants = 8;

// How much of the vanilla vtable is copied. The largest vtables in the game
// reach about vf5D0 (KoopalingBase); 512 slots covers them with room to spare.
constexpr u32 cVtableSlots = 512;

// Actor lifecycle virtuals, slots 4-16 (codedx actor.h; checked against the
// Cheep Cheep vtable 0x60BF08AC, ledger F0034).
enum Slot : u32
{
    BeforeCreate = 4, OnCreate, AfterCreate,
    BeforeExecute, OnExecute, AfterExecute, FinalExecute,
    BeforeDraw, OnDraw, AfterDraw,
    BeforeDelete, OnDelete, AfterDelete,
    FirstWrapped = BeforeCreate, LastWrapped = AfterDelete,
};

struct Variant
{
    const nsmbudx::ActorVariant* def;
    u32 numRemaps;
    Profile* base;
    alignas(Profile) u8 profileStorage[sizeof(Profile)];
    alignas(sead::SafeString) u8 resourceStorage[2 * nsmbudx::cMaxVariantRemaps][sizeof(sead::SafeString)];

    sead::SafeString* resources() { return (sead::SafeString*)resourceStorage; }
    void* vtable[cVtableSlots];     // the copy new actors point at
    void* original[LastWrapped + 1];
    void** vanilla;                 // the vanilla vtable, for hit rules
    bool vtableReady;
};

Variant sVariants[cMaxVariants];
u32 sNumVariants;

Variant* byProfile(u32 id)
{
    for (u32 i = 0; i < sNumVariants; i++)
        if (sVariants[i].def->profileId == id)
            return &sVariants[i];
    return nullptr;
}

inline Variant* byActor(Actor* actor)
{
    void* vptr = *(void**)actor;
    for (u32 i = 0; i < sNumVariants; i++)
        if (vptr == sVariants[i].vtable)
            return &sVariants[i];
    return nullptr;
}

bool sameName(const char* a, const char* b)
{
    while (*a && *a == *b)
        a++, b++;
    return *a == *b;
}

// ---- which variant is running (for hooks that only see game arguments) -------

inline void* currentThread()
{
    void* tls;
    asm volatile("mrc p15, 0, %0, c13, c0, 3" : "=r"(tls));    // TPIDRURO
    return tls;
}

Variant* sRunning;
void* sRunningThread;

// Name remap plus "which variant is running", for one wrapped call.
struct VariantScope
{
    Variant* prev;
    void* prevThread;
    nsmbudx::ScopedNameRemap remap;

    explicit VariantScope(Variant* v)
        : prev(sRunning), prevThread(sRunningThread), remap(v->def->remaps, v->numRemaps)
    {
        sRunning = v;
        sRunningThread = currentThread();
    }
    ~VariantScope()
    {
        sRunning = prev;
        sRunningThread = prevThread;
    }
};

inline Variant* runningHere()
{
    return sRunning && sRunningThread == currentThread() ? sRunning : nullptr;
}

// ---- wrapped lifecycle virtuals -----------------------------------------------

template <u32 S>
u32 wrapU32(Actor* actor)
{
    Variant* v = byActor(actor);
    VariantScope scope(v);
    return ((u32 (*)(Actor*))v->original[S])(actor);
}

template <u32 S>
void wrapVoidU32(Actor* actor, u32 result)
{
    Variant* v = byActor(actor);
    VariantScope scope(v);
    ((void (*)(Actor*, u32))v->original[S])(actor, result);
}

template <u32 S>
void wrapVoid(Actor* actor)
{
    Variant* v = byActor(actor);
    VariantScope scope(v);
    ((void (*)(Actor*))v->original[S])(actor);
}

// onCreate also applies the variant's damage-mask edits (enemies), once the
// vanilla onCreate has built the collider from its CollisionData.
u32 wrapOnCreate(Actor* actor)
{
    Variant* v = byActor(actor);
    u32 r;
    {
        VariantScope scope(v);
        r = ((u32 (*)(Actor*))v->original[OnCreate])(actor);
    }
    if (v->def->vsDamageSet || v->def->vsDamageClear) {
        u32& mask = *(u32*)((u8*)actor + 0xBC + 0x94);      // aCollider.info.vs_damage (F0010)
        mask = (mask | v->def->vsDamageSet) & ~v->def->vsDamageClear;
    }
    return r;
}

// ---- enemy hit rules ----------------------------------------------------------

constexpr u32 cFirstHit = 0x114 / 4, cLastHit = 0x154 / 4;

typedef bool (*HitFn)(Actor*, void*, void*);

template <u32 Index>
bool wrapHit(Actor* actor, void* self, void* other)
{
    Variant* v = byActor(actor);
    for (u32 i = 0; i < nsmbudx::cMaxHitRules && v->def->hitRules[i].slot; i++) {
        const nsmbudx::HitRule& r = v->def->hitRules[i];
        if (r.slot / 4 != Index)
            continue;
        if (r.reaction == nsmbudx::HitReaction::Immune)
            return false;
        if (r.reaction == nsmbudx::HitReaction::SameAs && r.asIf)
            return ((HitFn)v->vanilla[r.asIf / 4])(actor, self, other);
    }
    return ((HitFn)v->vanilla[Index])(actor, self, other);
}

// One wrapper per reaction slot, 0x114 (index 69) to 0x154 (index 85).
void* const kHitWrappers[] = {
    (void*)&wrapHit<69>, (void*)&wrapHit<70>, (void*)&wrapHit<71>, (void*)&wrapHit<72>,
    (void*)&wrapHit<73>, (void*)&wrapHit<74>, (void*)&wrapHit<75>, (void*)&wrapHit<76>,
    (void*)&wrapHit<77>, (void*)&wrapHit<78>, (void*)&wrapHit<79>, (void*)&wrapHit<80>,
    (void*)&wrapHit<81>, (void*)&wrapHit<82>, (void*)&wrapHit<83>, (void*)&wrapHit<84>,
    (void*)&wrapHit<85>,
};
static_assert(sizeof(kHitWrappers) / sizeof(void*) == cLastHit - cFirstHit + 1, "hit slots");

void* const kWrappers[LastWrapped + 1] = {
    nullptr, nullptr, nullptr, nullptr,
    (void*)&wrapU32<BeforeCreate>,  (void*)&wrapOnCreate,       (void*)&wrapVoidU32<AfterCreate>,
    (void*)&wrapU32<BeforeExecute>, (void*)&wrapU32<OnExecute>, (void*)&wrapVoidU32<AfterExecute>,
    (void*)&wrapVoid<FinalExecute>,
    (void*)&wrapU32<BeforeDraw>,    (void*)&wrapU32<OnDraw>,    (void*)&wrapVoidU32<AfterDraw>,
    (void*)&wrapU32<BeforeDelete>,  (void*)&wrapU32<OnDelete>,  (void*)&wrapVoidU32<AfterDelete>,
};

// ---- the build function every variant profile uses ---------------------------

Actor* buildVariant(const ActorBuildInfo* buildInfo)
{
    Variant* v = byProfile(buildInfo->profile->id);
    if (!v)
        return nullptr;

    // Build as the vanilla actor: constructors read their profile id.
    ActorBuildInfo asBase = *buildInfo;
    asBase.profile = v->base;
    Actor* actor = v->base->buildFunc(&asBase);
    if (!actor)
        return nullptr;

    // The final class's vtable is only known once constructed: copy it once.
    void** vanilla = *(void***)actor;
    if (!v->vtableReady) {
        for (u32 i = 0; i < cVtableSlots; i++)
            v->vtable[i] = vanilla[i];
        for (u32 s = FirstWrapped; s <= LastWrapped; s++) {
            v->original[s] = vanilla[s];
            v->vtable[s] = kWrappers[s];
        }
        v->vanilla = vanilla;
        // Only the reactions a rule names are wrapped; the rest stay vanilla.
        for (u32 i = 0; i < nsmbudx::cMaxHitRules && v->def->hitRules[i].slot; i++) {
            u32 idx = v->def->hitRules[i].slot / 4;
            if (idx >= cFirstHit && idx <= cLastHit)
                v->vtable[idx] = kHitWrappers[idx - cFirstHit];
        }
        v->vtableReady = true;
    } else if (vanilla[FirstWrapped] != v->original[FirstWrapped]) {
        nsmbudx::log("actor variant '", v->def->name, "': vanilla class changed; not swapping models");
        return actor;
    }
    *(void***)actor = v->vtable;
    return actor;
}

} // namespace

// ---- cVariant_AirSwim ---------------------------------------------------------

// checkLiquidCollisions (0x60151ED8; a label in the database, read from the
// disassembly): (result*, float* surfaceY, const Vec3* position, u8 layer).
extern "C" u32 Variant_checkLiquid_orig(void* result, f32* surfaceY, const Vec3* position, u8 layer);

extern "C" u32 Variant_checkLiquid(void* result, f32* surfaceY, const Vec3* position, u8 layer)
{
    u32 r = Variant_checkLiquid_orig(result, surfaceY, position, layer);
    Variant* v = runningHere();
    // Callers may pass no surface or no position (the Cheep Cheep's death path does: the Bee
    // crashed at address 0 here when killed by a hammer, Ryujinx 2026-10-26 11:58, ledger F0235).
    if (v && (v->def->options & nsmbudx::cVariant_AirSwim) && surfaceY && position) {
        // Far above the actor, so "stay 16 below the surface" never pulls it down.
        f32 high = position->y + 1024.0f;
        if (*surfaceY < high)
            *surfaceY = high;
    }
    return r;
}

namespace nsmbudx {

u32 variantProfileOf(const void* actor)
{
    Variant* v = actor ? byActor((Actor*)actor) : nullptr;
    return v ? v->def->profileId : 0;
}

ActorVariantRegistration::ActorVariantRegistration(const ActorVariant& def)
    : mOk(false)
{
    Profile* base = Profile::get(def.baseProfileId);
    u32 custom = def.profileId - Profile::NUM_PROFILES_ORIGINAL;
    if (sNumVariants >= cMaxVariants || !base || def.profileId < Profile::NUM_PROFILES_ORIGINAL
        || def.profileId >= Profile::NUM_PROFILES) {
        log("actor variant '", def.name, "': cannot register (base profile ", def.baseProfileId,
            ", profile ", def.profileId, ")");
        return;
    }

    Variant& v = sVariants[sNumVariants];
    v.def = &def;
    v.base = base;
    v.numRemaps = 0;
    while (v.numRemaps < cMaxVariantRemaps && def.remaps[v.numRemaps].archiveFrom)
        v.numRemaps++;

    new (v.profileStorage) Profile(&buildVariant, def.profileId, sead::SafeString(def.name),
                                   base->actorInfo, base->flags);

    // Resources: each replacement archive, then the vanilla archives it falls back to.
    u32 count = 0;
    auto add = [&](const char* name) {
        if (!name)
            return;
        for (u32 i = 0; i < count; i++)
            if (sameName(v.resources()[i].data, name))
                return;
        new (v.resourceStorage[count++]) sead::SafeString(name);
    };
    if (!(def.options & cVariant_NoArchiveLoad))
        for (u32 i = 0; i < v.numRemaps; i++)
            add(def.remaps[i].archiveTo);
    const sead::SafeString* vanilla = Profile::getResourceList(def.baseProfileId);
    u8 vanillaCount = Profile::getResourceCount(def.baseProfileId);
    for (u32 i = 0; vanilla && i < vanillaCount && count < 2 * cMaxVariantRemaps; i++)
        add(vanilla[i].data);

    // Load class (nsmbudx/profile_resources.h): the base profile's, so a variant
    // of an item loads at game start like the item, a variant of an enemy with
    // its level; cVariant_LoadAtBoot forces game start.
    ResourceLoad when = (def.options & cVariant_LoadAtBoot)
        ? ResourceLoad::AtBoot : (ResourceLoad)Profile::getHasResources(def.baseProfileId);
    setProfileResources(def.profileId, v.resources(), count, when);
    Profile::prioritiesCustom[custom]    = Profile::getPriority(def.baseProfileId);

    sNumVariants++;
    mOk = true;
}

} // namespace nsmbudx
