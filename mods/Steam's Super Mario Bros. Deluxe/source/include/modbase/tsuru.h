// modbase/tsuru.h -- the porting kit for Tsuru (Wii U) actors.
//
// Tsuru's actors are written against the Wii U game; codedx describes the same
// classes on Deluxe, mostly under other names (ActiveCollider for Tsuru's
// HitboxCollider, aCollider for hitboxCollider ...). docs/TSURU_PORTING.md has
// the full name map and the recipe. This header covers what is not a rename:
// calls Deluxe makes differently, and Tsuru helpers codedx does not have.
//
//   #include "modbase/tsuru.h"
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

#include "actors/stageactor.h"
#include "graphics/model.h"
#include "graphics/drawmgr.h"
#include "modbase/log.h"
#include "modbase/name_remap.h"

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

// Enemy vtable slot of Tsuru's Enemy::damagePlayer(hcSelf, hcOther). codedx calls
// it vfC8() with no arguments; on Deluxe it is Enemy 0x602A20E0: it casts
// acOther->owner to a player (RTTI) and calls player vtable +0x48C(player, acSelf,
// acOther) unless acOther's kind is 15. Enemy::collisionPlayer (0x602A2D54) is just
// this call, as on the Wii U.
constexpr u32 cVtEnemyDamagePlayer = 0xC8;

// Tsuru: this->damagePlayer(hcSelf, hcOther) inside an Enemy.
inline void enemyDamagePlayer(StageActor* enemy, ActiveCollider* acSelf, ActiveCollider* acOther)
{
    typedef void (*Fn)(StageActor*, ActiveCollider*, ActiveCollider*);
    void** vt = *(void***)enemy;
    ((Fn)vt[cVtEnemyDamagePlayer / 4])(enemy, acSelf, acOther);
}

// Enemy::processCollision's result: Tsuru's HitType, with the same numbers on
// Deluxe (BrosBase::collisionPlayer 0x60264458: 3 spin kill, 1 stomp, 0 damage).
namespace HitType {
enum : u32
{
    Collide    = 0,   // walked into it (also penguin and slope slides)
    NormalJump = 1,   // jumped on it (also ground pounds)
    MiniJump   = 2,   // jumped on it as Mini Mario
    SpinJump   = 3,   // spin-jumped on it (also propeller drills)
};
}

// ---- Models ---------------------------------------------------------------------

// Tsuru: ModelWrapper::create(archive, model, numSklAnims, numTexAnims, ...).
// Returns nullptr (and logs) when the archive is not loaded -- a model file
// missing from the SD card (modbase/mod_archives.h) -- where ModelWrapper::create
// would dereference the missing archive. The other helpers accept nullptr.
inline ModelWrapper* createModel(const char* archive, const char* model, u32 numSklAnims = 0,
                                 u32 numTexAnims = 0, u32 numShuAnims = 0, u32 numVisAnims = 0,
                                 u32 numShaAnims = 0)
{
    if (!ModBase::isArchiveLoaded(archive)) {
        ModBase::log("tsuru: archive '", archive, "' is not loaded; no model");
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

// Tsuru's ModelWrapper::create(arch, mdl, skl, texPattern, texSrt, ...) has the
// same argument order as Deluxe's (skl, tex, shu, ...): Tsuru's texPatternAnims are
// codedx's texAnims and its texSrtAnims are codedx's shuAnims.

// Tsuru: model->playTexPatternAnim(name, idx).
inline void playTexPatternAnim(ModelWrapper* model, const char* name, u32 idx = 0)
{
    if (model)
        model->playTexAnim(name, idx);
}

// Tsuru: model->playTexSrtAnim(name, idx), then texSrtAnims[idx]->frameCtrl.shouldLoop(loop).
inline void playTexSrtAnim(ModelWrapper* model, const char* name, bool loop = true, u32 idx = 0)
{
    if (!model || idx >= (u32)model->shuAnims.count)
        return;
    model->shuAnims[idx]->playTexSrt(model->archive, name);
    model->shuAnims[idx]->setRepeat(loop);
}

// Tsuru: model->playColorAnim(name, idx). codedx's ShaderAnimation::play is the
// colour-anim player (models.sym).
inline void playColorAnim(ModelWrapper* model, const char* name, bool loop = true, u32 idx = 0)
{
    if (!model || idx >= (u32)model->shuAnims.count)
        return;
    model->shuAnims[idx]->play(model->archive, name);
    model->shuAnims[idx]->setRepeat(loop);
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
