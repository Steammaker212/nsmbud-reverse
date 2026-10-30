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
#include "actors/enemy.h"
#include "actors/actor.h"
#include "actors/actormgr.h"
#include "audio/sound.h"
#include "util/math.h"
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
// No 64-bit cast: f32 -> s64 is libgcc's __aeabi_f2lz, which the module does not
// link (the call would land in an empty PLT slot). The turn is wrapped into
// [0, 1) first, then converted with the native f32 -> u32.
inline u32 deg2idx(f32 degrees)
{
    f32 turns = degrees / 360.0f;
    s32 whole = (s32)turns;
    if (turns < (f32)whole)
        whole--;
    return (u32)((turns - (f32)whole) * 4294967296.0f);
}

// Mathu::chase: u32 angles, stepping the short way round's sign as Tsuru does
// (straight toward target, no wrap-around).
inline bool chase(u32* value, u32 target, u32 step)
{
    if (*value < target) {
        if (target - *value <= step) { *value = target; return true; }
        *value += step;
        return false;
    }
    if (*value - target <= step) { *value = target; return true; }
    *value -= step;
    return false;
}

// tsuru/utils.h moveValueWithOverflowTo: steps an angle by `step` (down when
// `subtract`), letting it wrap; true once within a step of target.
inline bool moveValueWithOverflowTo(u32& value, u32 target, u32 step, bool subtract)
{
    s64 offset = (s64)target - (s64)value;
    if (offset < 0)
        offset = -offset;
    if ((s64)step < offset) {
        value = subtract ? value - step : value + step;
        return false;
    }
    value = target;
    return true;
}

// Mathf::rad2idx: radians to the game's u32 angle (deg2idx's wrap).
inline u32 rad2idx(f32 radians)
{
    return deg2idx(radians * (180.0f / (f32)M_PI));
}

// ---- Direction (Tsuru's game/direction.h) ---------------------------------------

// Direction::Right ... Down: the StageActor::direction numbering (RIGHT 0, LEFT 1).
namespace Direction {
enum : u32 { Right = 0, Left = 1, Up = 2, Down = 3 };

// Direction::directionToRotationList: the model turn that faces each way --
// a full side view (90 degrees), unlike the 3/4 view walking enemies use
// (Enemy_CommonRotations 0x60AFE3E4, +/-45 degrees).
constexpr u32 toRotation[4] = { 0x40000000, 0xC0000000, 0x00000000, 0x80000000 };

// Direction::opposite.
inline u32 opposite(u32 direction) { return direction ^ 1; }
}

// ---- StageActor / CollisionActor helpers -----------------------------------------

// Tsuru: sead::Vector2f d = this->distanceToPlayer(). Deluxe's
// StageActor::distanceToPlayer(out) (0x60000BAC) writes the distance from the
// actor (plus effectOffset) to the nearest player and returns that player's
// id, -1 with none (Tsuru's distanceToPlayer(out) overload, used as is).
inline Vec2 distanceToPlayer(StageActor* actor)
{
    Vec2 out(0.0f, 0.0f);
    actor->distanceToPlayer(out);
    return out;
}

// Yoshi bounces off an enemy that lands him on top, and it survives: the retail Fuzzy's
// collisionYoshi (0x60277C98). Enemy::processCollision does the bounce and the sound and does not
// kill; it returns Collide when he did not land on top, and then the enemy hurts him. For an
// enemy that uses this, also return false from collisionGroundPoundYoshi: Enemy::vfF8 then falls
// through to collisionYoshi, so a ground pound bounces too instead of killing it.
inline void yoshiBounce(Enemy* enemy, ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (enemy->processCollision(acSelf, acOther, 1) == HitType::Collide)
        enemyDamagePlayer(enemy, acSelf, acOther);
}

// Tsuru: this->gravity (PhysicsActor). StageActor +0x64, what
// CollisionActor::handleGravity adds to speed.y every frame.
inline f32& gravity(StageActor* actor)
{
    return *(f32*)&actor->_64;
}

// Tsuru: this->offscreenDelete(mask). Deluxe's StageActor::cullCheck (0x60000CD0)
// is the same routine: it sets isDeleted once the actor leaves the view.
inline void offscreenDelete(StageActor* actor, u32 mask = 0)
{
    actor->cullCheck(mask);
}

// ---- Animations ---------------------------------------------------------------------

// Tsuru: model->sklAnims[idx]->frameCtrl.isDone(): a non-looping anim at its end.
inline bool sklAnimDone(ModelWrapper* model, u32 idx = 0)
{
    if (!model || idx >= (u32)model->sklAnims.count)
        return true;
    Animation* anim = model->sklAnims[idx];
    return !(anim->flags & Animation::FlagRepeat) && anim->frame >= anim->endFrame - 1.0f;
}

// Tsuru: frameCtrl.currentFrame / frameCtrl.endFrame.
inline f32 sklAnimFrame(ModelWrapper* model, u32 idx = 0)
{
    return (model && idx < (u32)model->sklAnims.count) ? model->sklAnims[idx]->frame : 0.0f;
}
inline f32 sklAnimEnd(ModelWrapper* model, u32 idx = 0)
{
    return (model && idx < (u32)model->sklAnims.count) ? model->sklAnims[idx]->endFrame : 1.0f;
}

// Tsuru: BlendingModel::setSklAnim(name, blendFrames). Deluxe's blending model
// is not mapped; the anim switches at once (no cross-fade), the only visible
// difference.
inline void setSklAnim(ModelWrapper* model, const char* name, f32 blendFrames, bool loop = true)
{
    (void)blendFrames;
    playSklAnim(model, name, loop);
}

// ---- Sound ----------------------------------------------------------------------

// Tsuru: GameAudio::startSoundEmy / startSoundMap(label, position).
inline void playSound(const char* label, const Vec3& position)
{
    PlaySound(label, Vec2(position.x, position.y));
}

// ---- PlatformModel (Tsuru's game/graphics/model/platformmodel.h) ----------------
//
// The game's segmented lift: a left end, middle pieces and a right end, each 16
// units wide, from the archive lift_han_<kind> (models <kind>_L / _M / _R: the
// strings at 0x60AD5273...). Tsuru calls the game's class; this draws the
// same models itself.
class PlatformModel
{
public:
    enum Type : u32
    {
        Wood = 0, Stone, PinkMushroom, BoltPlatform, KoopaLift, Bowser, YellowMushroom,
        WoodSnow, Sky, Tower, Karansha
    };

    static const u32 cMaxPieces = 16;

    PlatformModel() : width(0), count(0) { }

    // width in tiles. Wood, Stone, BoltPlatform and WoodSnow; with fallbackToWood, any other
    // type draws as Wood (else it draws nothing).
    void create(u32 type, u32 tiles, bool fallbackToWood = false)
    {
        const char* archive = nullptr;
        const char* base = nullptr;
        switch (type) {
            case Wood:         archive = "lift_han_wood";  base = "lift_han_wood";      break;
            case Stone:        archive = "lift_han_stone"; base = "lift_han_stone";     break;
            case BoltPlatform: archive = "lift_han_spin";  base = "lift_han_spin";      break;
            case WoodSnow:     archive = "lift_han_wood";  base = "lift_han_wood_snow"; break;
            default:
                if (!fallbackToWood)
                    return;
                archive = base = "lift_han_wood";
                break;
        }
        width = tiles;
        count = tiles < 2 ? 2 : (tiles > cMaxPieces ? cMaxPieces : tiles);
        for (u32 i = 0; i < count; i++) {
            const char* suffix = i == 0 ? "_L" : (i == count - 1 ? "_R" : "_M");
            char name[48];
            u32 n = 0;
            for (const char* c = base; *c && n < sizeof(name) - 4; c++)
                name[n++] = *c;
            for (const char* c = suffix; *c; c++)
                name[n++] = *c;
            name[n] = 0;
            pieces[i] = createModel(archive, name);
        }
    }

    // Tsuru: update(leftEdge, widthInUnits).
    void update(const Vec3& left, f32 widthUnits)
    {
        Vec3i flat = { 0, 0, 0 };
        update(left, widthUnits, flat);
    }

    // Tsuru's PlatformModel::rotation: the whole platform turned about its centre. z turns it
    // in the level's plane (the pieces follow), x flips it over.
    void update(const Vec3& left, f32 widthUnits, const Vec3i& rotation)
    {
        f32 half = count * 8.0f;
        f32 a = unfix_deg(rotation.z) * (f32)M_PI / 180.0f;
        f32 c = cos(a), s = sin(a);
        (void)widthUnits;
        for (u32 i = 0; i < count; i++) {
            if (!pieces[i])
                continue;
            f32 dx = 8.0f + 16.0f * i - half;
            Mtx34 mtx;
            mtx.rotateAndTranslate(rotation, Vec3(left.x + half + dx * c, left.y + dx * s, left.z));
            pieces[i]->setMtx(mtx);
            pieces[i]->setScale(Vec3(1.0f, 1.0f, 1.0f));
            pieces[i]->updateModel();
        }
    }

    void draw()
    {
        for (u32 i = 0; i < count; i++)
            drawModel(pieces[i]);
    }

    u32 width;
    u32 count;
    ModelWrapper* pieces[cMaxPieces];
};

// ---- Curves (Tsuru's tsuru/bezier.h and tsuru/easing.h) ---------------------------

class QuadraticBezier
{
public:
    void set(const Vec3& a, const Vec3& b, const Vec3& c) { keyframes[0] = a; keyframes[1] = b; keyframes[2] = c; }

    void execute(Vec3* out, f32 t) const
    {
        f32 u = 1.0f - t;
        out->x = u*u*keyframes[0].x + 2.0f*u*t*keyframes[1].x + t*t*keyframes[2].x;
        out->y = u*u*keyframes[0].y + 2.0f*u*t*keyframes[1].y + t*t*keyframes[2].y;
        out->z = u*u*keyframes[0].z + 2.0f*u*t*keyframes[1].z + t*t*keyframes[2].z;
    }

    Vec3 keyframes[3];
};

class Easing
{
public:
    typedef f32 (*Function)(f32);

    static f32 quadIn(f32 t)    { return t * t; }
    static f32 quadInOut(f32 t) { return t < 0.5f ? 2.0f*t*t : 1.0f - (-2.0f*t + 2.0f)*(-2.0f*t + 2.0f) / 2.0f; }
    static f32 cubicIn(f32 t)   { return t * t * t; }

    Easing() : function(nullptr), start(0.0f), end(1.0f), step(0.0f), progress(0.0f) { }

    void set(Function f, f32 from, f32 to, f32 stepPerFrame)
    {
        function = f; start = from; end = to; step = stepPerFrame; progress = 0.0f;
    }

    // Writes the eased value; true once the curve has run out.
    bool ease(f32& out)
    {
        progress += step;
        if (progress >= 1.0f)
            progress = 1.0f;
        out = start + (end - start) * (function ? function(progress) : progress);
        return progress >= 1.0f;
    }

    Function function;
    f32 start, end, step, progress;
};

// ---- Spawning ---------------------------------------------------------------------

// Tsuru: ActorBuildInfo b = { 0 }; b.profile = Profile::get(id); b.position = pos;
//        ActorMgr::instance()->create(b).
inline StageActor* spawnActor(u32 profileId, const Vec3& position, u32 settings1 = 0, u8 eventId1 = 0)
{
    ActorBuildInfo buildInfo = { 0 };
    buildInfo.profile = Profile::get(profileId);
    buildInfo.position = position;
    buildInfo.settings1 = settings1;
    buildInfo.eventId1 = eventId1;
    return (StageActor*)ActorMgr::instance->create(&buildInfo, 0);
}

} // namespace tsuru
