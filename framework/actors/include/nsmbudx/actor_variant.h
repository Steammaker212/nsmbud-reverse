// nsmbudx/actor_variant.h -- a new sprite made from any vanilla actor, with your model.
//
// Pick an actor whose behaviour you want, give it your own archive/model, and
// it becomes a new sprite:
//
//   NSMBUDX_ACTOR_VARIANT(beeVariant,
//       ProfileId::Bee,          // your profile (profiles.txt gives it a sprite id)
//       530,                     // the vanilla actor to copy: Cheep Cheep
//       "Bee",
//       nsmbudx::cVariant_AirSwim,                        // options
//       { { "pukupuku", "bee", "pukupuku", "bee" } });   // archive/model swaps
//
// The new actor *is* the vanilla actor: same class, same code, same settings
// nybbles. Only its archive and model names differ. That works for most
// actors, because their models and animations are looked up by name.
//
// How it works:
//
//  1. The profile's build function runs the vanilla factory, with a copy of
//     the build info that names the vanilla profile, so constructors that
//     check their profile id (the Cheep Cheep does) keep their behaviour.
//  2. The new actor gets a private copy of its vtable. The 13 lifecycle
//     virtuals (before/on/after Create, Execute, Draw, Delete; slots 4-16,
//     the order in codedx's actor.h, ledger F0034) are wrapped so they run
//     inside a ScopedNameRemap with your names. Everything else is untouched.
//  3. Your archives are added to the profile's resource list, so any level
//     containing the sprite loads them. The vanilla archives are listed too:
//     if yours is missing, the remap falls back to the vanilla model and logs
//     a warning instead of crashing.
//
// Limits:
//
//  * Names are swapped only while those 13 virtuals run. Code that builds a
//    model elsewhere (in a collision callback, say) sees the vanilla names.
//  * Animations are looked up inside your archive by their vanilla names:
//    your archive must contain the animations the actor plays (each actor's
//    readable/ file lists them).
//  * The actor's profile stays the vanilla one at runtime, so profile-id
//    checks behave as for the original.
//
// Up to 8 variants per build. Deluxe (Switch) v1.0.0 only.

#pragma once

#include "nsmbudx/name_remap.h"

namespace nsmbudx {

constexpr u32 cMaxVariantRemaps = 4;

enum ActorVariantOption : u32
{
    cVariant_None   = 0,

    // Swimmers in the air. Water actors call checkLiquidCollisions every frame
    // and clamp themselves 16 units below the reported surface (the Cheep Cheep
    // does: ledger F0040). With this option the surface is reported far above
    // the actor while the variant's code runs, so the clamp never pulls it down
    // and it moves through air exactly as it would through water.
    cVariant_AirSwim = 1 << 0,
};

struct ActorVariant
{
    u32 profileId;
    u32 baseProfileId;
    const char* name;
    u32 options;                           // ActorVariantOption bits
    NameRemap remaps[cMaxVariantRemaps];   // unused entries left zero
};

// Constructs the variant's profile and registers it. Runs from a static
// constructor, after the game has registered its own profiles.
class ActorVariantRegistration
{
public:
    explicit ActorVariantRegistration(const ActorVariant& variant);
    bool ok() const { return mOk; }

private:
    bool mOk;
};

} // namespace nsmbudx

#define NSMBUDX_ACTOR_VARIANT(ident, profileId, baseProfileId, name, options, ...)  \
    static const nsmbudx::ActorVariant ident##_definition = {                       \
        profileId, baseProfileId, name, options, __VA_ARGS__ };                     \
    static nsmbudx::ActorVariantRegistration ident(ident##_definition)
