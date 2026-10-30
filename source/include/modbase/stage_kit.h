// modbase/stage_kit.h -- helpers for blocks and stage objects (the Tsuru block/object ports).
//
//   ModBase::ActorList<MusicNote> notes;     // find sibling actors without scanning ActorMgr
//   ModBase::BumpSensor bump;                // a block hit from below
//   ModBase::blockHit::setCallbacks(...);    // ...from above (ground pound) / the side (shell)
//   ModBase::parkCollider(&collider, true);  // switch a solid collider off / on
//   ModBase::spawnBlockCoin(pos, dir, player);
//   ModBase::playSoundAt("SE_OBJ_GET_RED_COIN", 2, position);   // the label 2 entries after
//   ModBase::levelPath(id, &count);          // a path of the current area
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "actors/stageactor.h"
#include "actors/actor.h"
#include "actors/multistateactor.h"
#include "collision/collisionmgr.h"
#include "actors/actormgr.h"
#include "actors/profile.h"
#include "audio/sound.h"
#include "collision/collider.h"
#include "level/level.h"
#include "modbase/log.h"

namespace ModBase {

// ---- ActorList ---------------------------------------------------------------------------
//
// Tsuru finds a manager's notes by walking every actor (ActorMgr::actors), which Deluxe's
// ActorMgr is not mapped for. Each actor class keeps its own live instances instead: add()
// in onCreate, remove() in the destructor.
template <class T, u32 N = 64>
class ActorList
{
public:
    void add(T* actor)
    {
        for (u32 i = 0; i < N; i++)
            if (!items[i]) { items[i] = actor; return; }
        ModBase::log("ActorList: full, an actor is not listed");
    }
    void remove(T* actor)
    {
        for (u32 i = 0; i < N; i++)
            if (items[i] == actor) items[i] = nullptr;
    }
    template <class F> void forEach(F f)
    {
        for (u32 i = 0; i < N; i++)
            if (items[i] && !items[i]->isDeleted) f(items[i]);
    }
    template <class F> T* find(F f)
    {
        for (u32 i = 0; i < N; i++)
            if (items[i] && !items[i]->isDeleted && f(items[i])) return items[i];
        return nullptr;
    }
    T* first()
    {
        return find([](T*) { return true; });
    }
private:
    T* items[N] = { };
};

// ---- The Red-Blue switch ---------------------------------------------------------------
//
// The state Switch Blocks flip and Red-Blue Blocks / Switch Block Event Activators follow:
// true = blue. Tsuru keeps it in its own save data per save slot; here it lasts while the
// game runs (code/sprites/switch_block.cpp defines it), and starts red at boot.
extern bool gSwitchBlockBlue;

// ---- Collider parking --------------------------------------------------------------------
//
// Switching a solid block on and off (Beep, Red-Blue blocks), as Tsuru does: the collider is
// taken out of the ColliderMgr and added back. ColliderMgr::remove is 0x601536E8
// (removeRelated1): the mirror of add (0x601535AC), unlinking the same lists. Moving the
// collider out of the level instead dragged a player standing on it along (then snapped to
// the ground). add() and remove() both check membership, so repeats are harmless.
inline void parkCollider(ColliderBase* collider, bool park, const Vec2& home = Vec2(0.0f, 0.0f))
{
    (void)home;
    if (park)
        ColliderMgr::instance->removeRelated1(collider);
    else
        ColliderMgr::instance->add(collider);
}

// ---- BumpSensor --------------------------------------------------------------------------
//
// A standalone block (no BlockBase) learns it was hit from below through its own
// ActiveCollider: a thin box just under the block, met by a player (or Yoshi) moving up.
// Set the actor's aCollider info from sensorInfo() and call hit() in its callback.
class BumpSensor
{
public:
    static ActiveCollider::Info sensorInfo(f32 halfWidth, f32 blockHalfHeight, ActiveCollider::Callback cb)
    {
        ActiveCollider::Info info = {
            {0.0f, -blockHalfHeight - 2.0f}, {halfWidth - 2.0f, 3.0f}, 0, 3, 0, 0xFFFFFFFF, 0, 0, cb
        };
        return info;
    }

    // From the collider callback: true once per bump (a player or Yoshi moving up).
    bool hit(ActiveCollider* acOther)
    {
        StageActor* other = acOther->owner;
        if ((other->type != 1 && other->type != 2) || cooldown || other->speed.y <= 0.0f)
            return false;
        cooldown = 12;
        hitPlayer = other->playerId;
        return true;
    }

    // Once per frame, in onExecute.
    void tick()
    {
        if (cooldown)
            cooldown--;
        if (offsetT > 0) {
            offsetT--;
            // The ?-block bump: up 5 units and back over 10 frames.
            f32 t = offsetT / 10.0f;
            offset = offsetSign * 5.0f * (t > 0.5f ? 2.0f * (1.0f - t) : 2.0f * t);
        } else {
            offset = 0.0f;
        }
    }

    // From a BlockHit callback: true once per hit. Contact that goes on (a player standing
    // on the block mid ground pound, a shell pressed against it) keeps the cooldown running,
    // so one hit counts once.
    bool hitBy(s8 player)
    {
        bool fresh = !cooldown;
        cooldown = 12;
        if (fresh)
            hitPlayer = player;
        return fresh;
    }

    // up: the ?-block bump; down: the ground-pound bump.
    void bumpAnimation(bool down = false) { offsetT = 10; offsetSign = down ? -1.0f : 1.0f; }

    u8 cooldown = 0;
    u8 offsetT = 0;
    f32 offset = 0.0f;          // add to the model's y
    f32 offsetSign = 1.0f;
    s8 hitPlayer = 0;
};

// ---- BlockHit ----------------------------------------------------------------------------
//
// Ground pounds and shells reach a block through its solid collider, as on a retail block:
// BlockBase's setup (0x605635AC) sets the RectCollider's top / bottom / side callbacks
// (ColliderBase +0x138 / +0x13C / +0x140; retail 0x605B348C / 0x605B3934 / 0x605B4110) and
// ORs 0x18 into its +0x88 flags. ColliderBase calls them with (collider, the toucher's
// CollisionMgr, ...) and ignores the result (0x60160A3C, 0x60161634).
namespace shellSuit { bool playerDashing(void* actor); }   // code/powerups/shell_suit.cpp

namespace blockHit {

// The game's static RTTI objects (checkDerivedRuntimeTypeInfo compares addresses only) and
// ShellEnemy's slide state.
extern u32 enemyRTTI;
extern u32 shellEnemyRTTI;
extern StateBase shellEnemySlideState;

inline void setCallbacks(ColliderBase* collider, ColliderBase::Callback top, ColliderBase::Callback side,
                         ColliderBase::Callback bottom = nullptr)
{
    collider->_138 = top;
    collider->_13C = bottom;
    collider->_140 = side;
    *(u32*)((u8*)collider + 0x88) |= 0x18;
}

inline StageActor* toucher(CollisionMgr* mgr) { return mgr ? mgr->owner : nullptr; }

// The bottom callback: a player's or Yoshi's head against the block's underside. This is the
// solid collider's own contact, so it fires on every head bump (the BumpSensor's thin hitbox
// missed them: by its check the player had often stopped rising).
inline bool isHeadHit(CollisionMgr* mgr)
{
    StageActor* a = toucher(mgr);
    return a && (a->type == 1 || a->type == 2);
}

// The retail top callback's "hit from above": a player or Yoshi whose CollisionMgr has
// 0x120 set at +0x9F8 (the ground pound).
inline bool isGroundPound(CollisionMgr* mgr)
{
    StageActor* a = toucher(mgr);
    return a && (a->type == 1 || a->type == 2) && (*(u32*)((u8*)mgr + 0x9F8) & 0x120);
}

// The retail side callback's shell hit (0x605B4548): an Enemy with flag +0x1804 bit 0, that
// is a ShellEnemy, in (an override of) ShellEnemy's slide state.
inline bool isSlidingShell(CollisionMgr* mgr)
{
    StageActor* a = toucher(mgr);
    if (a && a->type == 1 && shellSuit::playerDashing(a))   // a Blue Shell player's dash
        return true;
    if (!a || a->type != 3)
        return false;
    typedef bool (*CheckRTTI)(StageActor*, const void*);
    CheckRTTI checkRTTI = (*(CheckRTTI**)a)[0];
    if (!checkRTTI(a, &enemyRTTI) || !(*((u8*)a + 0x1804) & 1) || !checkRTTI(a, &shellEnemyRTTI))
        return false;
    // getRootId (vtable +8) through the vtable, as the game calls it: the compiler would
    // otherwise bind shellEnemySlideState's to StateBase's own.
    typedef s32 (*GetRootId)(StateBase*);
    StateBase* state = static_cast<MultiStateActor*>(a)->states.manager.getCurrentState();
    StateBase* slide = &shellEnemySlideState;
    return state && (*(GetRootId**)state)[2](state) == (*(GetRootId**)slide)[2](slide);
}

} // namespace blockHit

// ---- Camera ------------------------------------------------------------------------------
//
// The level camera (Tsuru's LevelCamera), a singleton at 0x60CC6484 found live with GDB: the
// screen's left and right edges, in level units, at +0x28 and +0x30 (+0x48 / +0x50 are the same
// widened by 100 units, +0x74 the centre). Only valid in a level.
namespace camera {
extern u8* instance;
inline f32 left()    { return instance ? *(f32*)(instance + 0x28) : 0.0f; }
inline f32 right()   { return instance ? *(f32*)(instance + 0x30) : 0.0f; }
inline f32 centreX() { return instance ? *(f32*)(instance + 0x74) : 0.0f; }
} // namespace camera

// ---- Coins, sounds -----------------------------------------------------------------------

// A block coin popping out (what a ?-block's coin content spawns): 0x60582B14 builds
// profile 399 with settings1 = player | direction << 4.
inline void spawnBlockCoin(const Vec3& position, u32 direction, s32 player)
{
    ActorBuildInfo buildInfo = { 0 };
    buildInfo.settings1 = (u32)(player & 0xF) | (direction << 4);
    buildInfo.profile = Profile::get(399);
    buildInfo.position = position;
    ActorMgr::instance->create(&buildInfo, 0);
}

// Tsuru plays numbered sound effects as enum arithmetic (SE_OBJ_GET_RED_COIN + n). The
// sound archive keeps them in that order: the label n entries after `label`.
inline void playSoundAt(const char* label, u32 n, const Vec3& position)
{
    if (!SoundSystem::instance)
        return;
    u32 id = SoundSystem::instance->GetItemId(label);
    const char* s = n ? SoundSystem::instance->GetItemLabel(id + n) : label;
    PlaySound(s ? s : label, Vec2(position.x, position.y));
}

// ---- Level paths -------------------------------------------------------------------------
//
// Tsuru's Level::Area::getPath / getPathNodes. The course file's paths are area block 12
// (12-byte entries) and their nodes block 13 (20-byte entries), as in NSMBU.
struct LevelPath
{
    u8 id;              // 0
    s8 _1;
    u16 startNode;      // 2
    u16 nodeCount;      // 4
    u16 flags;          // 6  (bit 1: loops)
    u32 _8;
};

struct LevelPathNode
{
    u16 x;              // 0
    u16 y;              // 2  (down is positive: world y = -y)
    f32 speed;          // 4
    f32 accel;          // 8
    s16 delay;          // C
    u16 _E;
    u8 _10, _11, _12, _13;
};

static_assert(sizeof(LevelPath) == 12 && sizeof(LevelPathNode) == 20, "course path layout");

// The nodes of path `id` in the current area, or nullptr.
inline const LevelPathNode* levelPath(u8 id, u32* count)
{
    *count = 0;
    Level::Area* area = Level::instance ? Level::instance->getArea(LevelInfo::instance->area) : nullptr;
    if (!area || !area->blocks[12] || !area->blocks[13])
        return nullptr;
    if (area->blockEntryCounts[12] && area->blockSizes[12] / area->blockEntryCounts[12] != sizeof(LevelPath)) {
        ModBase::log("levelPath: unexpected path entry size");
        return nullptr;
    }
    const LevelPath* paths = (const LevelPath*)area->blocks[12];
    const LevelPathNode* nodes = (const LevelPathNode*)area->blocks[13];
    for (u32 i = 0; i < area->blockEntryCounts[12]; i++)
        if (paths[i].id == id) {
            if (paths[i].startNode + paths[i].nodeCount > area->blockEntryCounts[13])
                return nullptr;
            *count = paths[i].nodeCount;
            return nodes + paths[i].startNode;
        }
    return nullptr;
}

} // namespace ModBase
