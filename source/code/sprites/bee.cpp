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
//              Cheep's chase speed (0.75 units a frame) and never loses them. Retail's Search
//              (0x60371AC4) only swims level with a bob, and Chase (0x60371E0C) starts only for a
//              player in a box ahead, so a Bee off that line flew away: the class runs in mode 1
//              (profile 534) for its turning and animation, and the position is set here.
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
#include "modbase/yoshi.h"
#include "util/math.h"

namespace ModBase { namespace bee {
extern u8 stateSearch[];    // the Cheep Cheep's states, symbols/actors/bee.sym
extern u8 stateChase[];
} }

namespace {

constexpr u32 cPukupukuMode   = 0x2DA8;     // Pukupuku::mode (ledger F0036)
constexpr u32 cModeSearch     = 1;          // what profile 534 sets
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

inline u32 speedSetting(StageActor* bee) { return bee->settings2 >> 24 & 0xF; }     // nybble 14

void beforeCreate(Actor* actor)
{
    StageActor* bee = (StageActor*)actor;
    if (bee->settings2 >> 28 & 1)                                                   // nybble 13
        *(u32*)((u8*)bee + cPukupukuMode) = cModeSearch;
    if (::yoshi::EatData* eat = freeEatData())
        ModBase::yoshi::makeEdible(bee, eat);
}

// Following: only in the two states that swim, so a frozen, stomped or eaten Bee stays out of it.
bool following(Enemy* bee)
{
    if (!(bee->settings2 >> 28 & 1))
        return false;
    void* state = bee->states.currentState();
    return state == ModBase::bee::stateSearch || state == ModBase::bee::stateChase;
}

u32 onExecute(Actor* actor, u32 (*vanilla)(Actor*))
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
            bee->direction = toPlayer.x < 0.0f;     // the class turns the model to this
    }

    u32 r = vanilla(actor);

    if (follow) {
        if (following(bee)) {                       // it may have been hit during vanilla
            f32 step = distance >= cFollowReached ? cFollowSpeed * k / distance : 0.0f;
            bee->position.x = before.x + toPlayer.x * step;
            bee->position.y = before.y + toPlayer.y * step;
        }
        static u32 sDiag;
        if (sDiag < 600 && sDiag++ % 60 == 0)
            ModBase::log("[DIAG] follow bee pos=", (s32)bee->position.x, ",", (s32)bee->position.y,
                         " toPlayer=", (s32)toPlayer.x, ",", (s32)toPlayer.y, " dir=", bee->direction);
    } else {
        bee->position.x = before.x + (bee->position.x - before.x) * k;
        bee->position.y = before.y + (bee->position.y - before.y) * k;
    }
    return r;
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
