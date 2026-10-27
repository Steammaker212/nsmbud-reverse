// nsmbudx/tsuru.h -- the porting kit for Tsuru (Wii U) actors.
//
// Tsuru's actors are written against the Wii U game; codedx describes the same
// classes on Deluxe, mostly under other names (ActiveCollider for Tsuru's
// HitboxCollider, aCollider for hitboxCollider ...). docs/TSURU_PORTING.md has
// the full name map and the recipe. This header covers what is not a rename:
// calls Deluxe makes differently, and Tsuru helpers codedx does not have.
//
//   #include "nsmbudx/tsuru.h"
//
//   tsuru::damagePlayer(player, this, tsuru::DamageType::Ice);   // trySpecialDamage
//   model = tsuru::createModel("coldobon", "coldobon", 1);       // ModelWrapper::create
//   tsuru::playSklAnim(model, "run", true);                     // playSklAnim + loopSklAnims
//   tsuru::placeModel(model, this);                             // makeRTIdx + setMtx + setScale
//
// Effect IDs need no table: Deluxe kept the Wii U numbering (ledger F0254), so
// Tsuru's include/game/effect/effectid.h values work as they are. Spot-check
// a new one in-game.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "actor/stageactor.h"
#include "model.h"
#include "drawmgr.h"
#include "nsmbudx/log.h"
#include "nsmbudx/name_remap.h"

namespace tsuru {

// PlayerBase::DamageType. The Wii U numbering is unchanged on Deluxe: the
// player's background-damage routine (0x6076357C, Wii U PlayerBase::
// setBgDamage) passes Hit2 1, Fire2 10, Poison 14 and Kill 15 (ledger F0253).
enum class DamageType : u32
{
    Hit = 0, Hit2, HitKnock, Hit3, Knock, Knock2, SmallKnock, SmallKnock2, SmallKnock3,
    Fire,           // damages a big player first; small or mini dies (as Fire2)
    Fire2,          // kills at once
    Ice,            // freezes a big player; small or mini dies
    Ice2,           // always freezes, never kills
    Spark,
    Poison,
    Kill,           // instant death
    DeathCloud,
    Eaten,
    Eaten2,
    SteppedOn,
};

// Player (and Yoshi) vtable slots, from setBgDamage 0x6076357C. Tsuru names in
// brackets.
constexpr u32 cVtSetDamage  = 0x490;   // PlayerBase::setDamage(actor, type)  [trySpecialDamage]
constexpr u32 cVtSetDamage2 = 0x49C;   // PlayerBase::setDamage2(actor, type) [doDamage]: lava, poison, pits

// Damage a player as an enemy does (blinking, power-down, freeze ...). Returns
// whether the player took it. `player` is a StageActor of type 1 (player) or 2
// (Yoshi): collisionPlayer / collisionYoshi's acOther->owner.
inline bool damagePlayer(StageActor* player, StageActor* source, DamageType type)
{
    typedef bool (*Fn)(StageActor*, StageActor*, u32);
    void** vt = *(void***)player;
    return ((Fn)vt[cVtSetDamage / 4])(player, source, (u32)type);
}

// setDamage2: the variant the game uses for lava, poison water and pits.
inline bool damagePlayer2(StageActor* player, StageActor* source, DamageType type)
{
    typedef bool (*Fn)(StageActor*, StageActor*, u32);
    void** vt = *(void***)player;
    return ((Fn)vt[cVtSetDamage2 / 4])(player, source, (u32)type);
}

// ---- Models ---------------------------------------------------------------------

// Tsuru: ModelWrapper::create(archive, model, numSklAnims, numTexAnims, ...).
// Returns nullptr (and logs) when the archive is not loaded -- a model file
// missing from the SD card (nsmbudx/mod_archives.h) -- where ModelWrapper::create
// would dereference the missing archive. The other helpers accept nullptr.
inline ModelWrapper* createModel(const char* archive, const char* model, u32 numSklAnims = 0,
                                 u32 numTexAnims = 0, u32 numShuAnims = 0, u32 numVisAnims = 0,
                                 u32 numShaAnims = 0)
{
    if (!nsmbudx::isArchiveLoaded(archive)) {
        nsmbudx::log("tsuru: archive '", archive, "' is not loaded; no model");
        return nullptr;
    }
    return ModelWrapper::create(archive, model, numSklAnims, numTexAnims, numShuAnims,
                                numVisAnims, numShaAnims);
}

// Tsuru: model->playSklAnim(name, idx = 0); model->loopSklAnims(loop).
inline void playSklAnim(ModelWrapper* model, const char* name, bool loop = true, u32 idx = 0)
{
    if (!model)
        return;
    model->playSklAnim(name, idx);
    if (idx < (u32)model->sklAnims.count)
        model->sklAnims[idx]->setRepeat(loop);
}

// Tsuru's onExecute model block:
//     mtx.makeRTIdx(rotation, position); model->setMtx(mtx); model->setScale(scale);
//     model->updateAnimations(); model->updateModel();
inline void placeModel(ModelWrapper* model, StageActor* actor)
{
    if (!model)
        return;
    Mtx34 mtx;
    mtx.rotateAndTranslate(actor->rotation, actor->position);
    model->setMtx(mtx);
    model->setScale(actor->scale);
    model->updateAnimations();
    model->updateModel();
}

// Tsuru: model->draw().
inline void drawModel(ModelWrapper* model)
{
    if (model)
        DrawMgr::instance->drawModel(model);
}

// ---- Math (Tsuru's Mathf / Mathu) -------------------------------------------------

// Mathf::chase: move *value toward target by at most step; true once there.
inline bool chase(f32* value, f32 target, f32 step)
{
    if (*value < target) {
        *value += step;
        if (*value >= target) { *value = target; return true; }
        return false;
    }
    *value -= step;
    if (*value <= target) { *value = target; return true; }
    return false;
}

// Mathf::deg2idx: degrees to the game's u32 angle (a full turn is 2^32).
constexpr u32 deg2idx(f32 degrees)
{
    return (u32)(long long)(degrees * (4294967296.0f / 360.0f));   // 64-bit: 180..360 fit
}

} // namespace tsuru
