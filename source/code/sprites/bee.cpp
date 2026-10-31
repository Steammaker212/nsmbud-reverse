// bee.cpp -- the Spike Top Bee (sprite 735): a Cheep Cheep that flies, with a bee model.
//
// =====================================================================
//  CONFIGURATION
// =====================================================================

// Your model: romfs/Model/<BEE_ARCHIVE>.Nin_NX_NVN.szs with a model named
// BEE_MODEL. The Cheep Cheep plays a skeletal animation "swim" and a texture
// animation "pukupuku" on it, so include animations with those names (or the
// model shows without them). Until the archive exists the Bee uses the Cheep
// Cheep model and logs "remap: archive 'bee' is not loaded".
// 1: your model; 0: the Cheep Cheep's own (the placeholder). Follows the build:
// `make_mod_project.py --placeholder-models` switches every mod at once.
#define BEE_CUSTOM_MODELS   MODBASE_CUSTOM_MODELS
#define BEE_ARCHIVE         MODBASE_PICK_MODEL(BEE_CUSTOM_MODELS, "bee", "pukupuku")
#define BEE_MODEL           MODBASE_PICK_MODEL(BEE_CUSTOM_MODELS, "bee", "pukupuku")

// Which Cheep Cheep the Bee behaves like. Its editor settings are that
// sprite's (Yaz0moto sprite 101 for 530):
//   530 Cheep Cheep: swims straight, or turns around / 45° by nybble 12
//   532 big Cheep Cheep (1.5x)
//   534 searching: chases the player
//   536 fleeing:   swims away from the player
#define BEE_BEHAVES_LIKE    530

// The Cheep Cheep keeps itself 16 units under the water surface every frame.
// The air-swim option reports the surface far above the Bee, so it moves
// through the air the way a Cheep Cheep moves through water.
#define BEE_OPTIONS         ModBase::cVariant_AirSwim

// 1: fireballs bounce off the Bee (code/framework/actor_variant.cpp hit rules; ice, stomps,
// stars and shells still work). 0: it reacts exactly like a Cheep Cheep.
#define BEE_FIREPROOF       0

// =====================================================================
//
// New settings (the Cheep Cheep class never reads these bits of settings2):
//   nybble 13  1: follow the player. It steers straight at them, up and down too, at the Deep
//              Cheep's chase speed (0.75 units a frame). The class stays in its plain Swim state,
//              so it spawns and despawns as any Bee, and the turning and position are set here.
//   nybble 14  speed: 0 the default, otherwise value x 0.25 of it (4 = the same, 8 = twice).
//              Without Follow, all the class's movement ends up in position during onExecute,
//              so the move it made is scaled afterwards.
//
// The Spike Top Bee can be eaten, though the Cheep Cheep it is built on cannot: the class has no
// EatData, so it takes one from a small pool (modbase/yoshi.h makeEdible). Yoshi bounces off its
// spikes when he lands on it (code/tweaks/yoshi_urchin.cpp).
//
// Everything else is code/framework/actor_variant.cpp: the Bee is the game's own Cheep Cheep
// class with a private vtable whose lifecycle virtuals run with the names
// swapped (modbase/actor_variant.h). Evidence: reverse-engineering/FindingsB/ledger.csv
// F0034-F0042; the class is readable in reverse-engineering/FindingsA/enemy/Pukupuku.cpp.
//
// Deluxe (Switch) v1.0.0 only.

#include "actors/actormgr.h"
#include "actors/enemy.h"
#include "actors/profileid.h"
#include "actors/stageactor.h"
#include "game/enemy.h"
#include "modbase/game.h"
#include "modbase/models.h"
#include "modbase/actor_variant.h"
#include "modbase/log.h"
#include "modbase/tsuru.h"
#include "modbase/yoshi.h"
#include "util/math.h"

namespace ModBase { namespace bee {
extern u8 stateSwim[];      // the Cheep Cheep's state, symbols/actors/bee.sym
u32 facingYaw(void* bee, u32 direction);    // 0x603737E4: rotation.y to face this way
} }

namespace {

constexpr u32 cTurnStep       = 0x2000000;  // rotation.y a frame, as the Search state
constexpr u32 cDeadFlag       = 0x218;      // set by Enemy::beforeExecute when it dies
constexpr f32 cFollowSpeed    = 0.75f;      // the Deep Cheep's chase speed
constexpr f32 cFollowReached  = 2.0f;       // closer than this it stops, as the Deep Cheep
constexpr f32 cFollowTurn     = 13.0f;      // ...and it only turns when further than this

// One EatData per living Bee: an entry is free once its owner is gone (actor ids never repeat).
constexpr u32 cEatPoolSize = 32;
::yoshi::EatData sEatPool[cEatPoolSize];

::yoshi::EatData* freeEatData()
{
    ActorMgrRelated* actors = (ActorMgrRelated*)((s32)ActorMgr::instance + 0x6A20);
    for (::yoshi::EatData& e : sEatPool)
        if (!e.ownerId || !actors->getById(e.ownerId))
            return &e;
    return nullptr;
}

// Where each follower was made: see onExecute.
struct Follower
{
    u32 id;
    Vec3 position;
};
Follower sFollowers[cEatPoolSize];

inline u32 speedSetting(StageActor* bee) { return bee->settings2 >> 24 & 0xF; }     // nybble 14

void beforeCreate(Actor* actor)
{
    StageActor* bee = (StageActor*)actor;
    if (::yoshi::EatData* eat = freeEatData())
        ModBase::yoshi::makeEdible(bee, eat);

    if (bee->settings2 >> 28 & 1) {
        ActorMgrRelated* actors = (ActorMgrRelated*)((s32)ActorMgr::instance + 0x6A20);
        for (Follower& f : sFollowers)
            if (!f.id || !actors->getById(f.id)) {
                f.id = bee->id;
                f.position = bee->position;
                break;
            }
    }
}

// Following: only while it swims, so a frozen, stomped or eaten Bee stays out of it.
bool following(Enemy* bee)
{
    return (bee->settings2 >> 28 & 1) && (void*)bee->states.currentState() == ModBase::bee::stateSwim;
}

u32 steer(Actor* actor, u32 (*vanilla)(Actor*))
{
    Enemy* bee = (Enemy*)actor;
    ::yoshi::EatData* eat = ModBase::yoshi::eatData(bee);
    bool busy = *((u8*)bee + cDeadFlag) || (eat && ModBase::yoshi::beingEaten(*eat));
    bool follow = !busy && following(bee);
    u32 speed = speedSetting(bee);
    if (!follow && (!speed || busy))
        return vanilla(actor);

    f32 k = speed ? speed * 0.25f : 1.0f;
    Vec3 before = bee->position;
    Vec2 toPlayer(0.0f, 0.0f);
    f32 distance = 0.0f;
    if (follow) {
        bee->distanceToPlayer(toPlayer);
        distance = sqrt(toPlayer.x * toPlayer.x + toPlayer.y * toPlayer.y);
        if (fabs(toPlayer.x) >= cFollowTurn)
            bee->direction = toPlayer.x < 0.0f;
        tsuru::chase(&bee->rotation.y, ModBase::bee::facingYaw(bee, bee->direction), cTurnStep);
    }

    u32 r = vanilla(actor);

    if (follow) {
        if (following(bee)) {                       // it may have been hit during vanilla
            f32 step = distance >= cFollowReached ? cFollowSpeed * k / distance : 0.0f;
            bee->position.x = before.x + toPlayer.x * step;
            bee->position.y = before.y + toPlayer.y * step;
        }
    } else {
        bee->position.x = before.x + (bee->position.x - before.x) * k;
        bee->position.y = before.y + (bee->position.y - before.y) * k;
    }
    return r;
}

// A follower reaches its first frame far from where it was made (the log, every spawn: made at
// y -824, y 360 and a different z), and that frame's cull would delete it before it was ever seen,
// leaving it to respawn only once the player had gone away and come back. It is put back, once;
// what moves it is not known. The ones after that are its own.
u32 onExecute(Actor* actor, u32 (*vanilla)(Actor*))
{
    Enemy* bee = (Enemy*)actor;
    if (bee->settings2 >> 28 & 1)
        for (Follower& f : sFollowers)
            if (f.id == bee->id) {
                bee->position = f.position;
                f.id = 0;
                break;
            }
    return steer(actor, vanilla);
}

} // namespace

MODBASE_ACTOR_VARIANT(beeVariant,
    ProfileId::Bee, BEE_BEHAVES_LIKE, "Bee", BEE_OPTIONS,
    {
        { "pukupuku",       BEE_ARCHIVE, "pukupuku",       BEE_MODEL },
        { "pukupuku_mecha", BEE_ARCHIVE, "pukupuku_mecha", BEE_MODEL },
    },
    {
#if BEE_FIREPROOF
        { EnemyVt::hitFire, ModBase::HitReaction::Immune, 0 },
#endif
        // Not consumed, so a Yoshi ground pound falls through to the stomp check: he bounces.
        { EnemyVt::hitYoshiHipAttack, ModBase::HitReaction::Immune, 0 },
    },
    0, 0, &onExecute, &beforeCreate);
