// shy_guy.cpp -- the Shy Guy: a new sprite with the Goombrat's mechanics.
//
// =====================================================================
//  CONFIGURATION
// =====================================================================

// Your model: romfs/Model/<SHYGUY_ARCHIVE>.Nin_NX_NVN.szs with a model named
// SHYGUY_MODEL. The Goombas play a skeletal animation "walk" at creation and
// then "walk0" / "walk1" -- and the same names as *texture* animations -- so
// give your archive those four. A missing one is logged, not fatal: the actor
// falls back to the vanilla model.
// 1: your model; 0: the Goombrat's own (the placeholder). Follows the build:
// `make_mod_project.py --placeholder-models` switches every mod at once.
#define SHYGUY_CUSTOM_MODELS MODBASE_CUSTOM_MODELS
#define SHYGUY_ARCHIVE      MODBASE_PICK_MODEL(SHYGUY_CUSTOM_MODELS, "shyguy", "kakibo")
#define SHYGUY_MODEL        MODBASE_PICK_MODEL(SHYGUY_CUSTOM_MODELS, "shyguy", "kakibo")

// Which vanilla behaviour to copy. This is the whole point of the mod:
//
//   468 Goombrat (Kakibo) -- TURNS AT LEDGES. Every frame it checks for floor
//                            one and a half units ahead and turns instead of
//                            walking off the edge.
//   467 Goomba            -- same class, same code, walks off any ledge.
//
// The two are one C++ class with one build function and one state table. The
// only difference in the game is `getProfileId() == 468` inside onCreate
// (0x603393F0), which also selects the archive ("kakibo" vs "kuribo"), the
// starting walk state, the walk animation set and the tuning table -- see
// reverse-engineering/FindingsA/enemy/Goomba.cpp and ledger F0092-F0097. Building with 468 therefore
// yields a Goombrat, not merely something that looks like one.
#define SHYGUY_BEHAVES_LIKE GoombaProfile::Goombrat

// The archive the vanilla build looks up for that profile, which is what the
// remap below replaces. Must match SHYGUY_BEHAVES_LIKE.
#define SHYGUY_VANILLA_ARCHIVE  "kakibo"

// The Goombrat's model is looked up by the same name as its archive, so both
// halves of the remap use it.
#define SHYGUY_VANILLA_MODEL    "kakibo"

// Two stomps: the first squashes it -- half its height (model and collider)
// and SHYGUY_SQUASHED_SPEED times as fast -- the second kills it, as a stomp
// kills a Goomba. Spin jumps count as stomps. 0 = one stomp kills, as vanilla.
#define SHYGUY_TWO_STOMPS       1
#define SHYGUY_SQUASHED_HEIGHT  0.5f
#define SHYGUY_SQUASHED_SPEED   1.7f

// A squashed Shy Guy that is still alive SHYGUY_RECOVER_FRAMES later (60 a
// second) pops back up: it stretches to SHYGUY_RECOVER_TALL of its full height,
// squashes, stretches, squashes again -- SHYGUY_RECOVER_STEP frames each -- and
// returns to its full height. It then takes two stomps again. Until it is back
// to full height, one stomp kills it. 0 frames = it stays squashed.
#define SHYGUY_RECOVER_FRAMES   180
#define SHYGUY_RECOVER_TALL     0.75f
#define SHYGUY_RECOVER_STEP     8

// =====================================================================
//
// Everything else is code/framework/actor_variant.cpp: the Shy Guy is the game's own Goomba
// class with a private vtable whose lifecycle virtuals run with the names
// swapped (modbase/actor_variant.h). Deluxe (Switch) v1.0.0 only.

#include "actors/profileid.h"
#include "actors/stageactor.h"
#include "game/goomba.h"
#include "modbase/models.h"
#include "modbase/actor_variant.h"

// ---- Two stomps -------------------------------------------------------------
//
// GoombaBase::collisionPlayer (0x6033C844) asks Enemy::processCollision, which
// already bounces the player and scores a stomp, then hands the kill to its own
// virtuals: +0x28C for a stomp (GoombaBase::vf28C 0x6033CF30, killPlayerJump
// with its speed and the DieFumi state) and +0x294 for a spin jump (a thunk to
// Enemy::killPlayerSpin 0x602A5AE8, hooked there: a one-branch thunk cannot be
// replayed by a trampoline). For a Shy Guy not squashed yet, both squash it
// instead of killing it. Squashed Shy Guys are kept by actor id, so a new actor
// at a freed one's address does not inherit it.
namespace {

// A squashed Shy Guy: its full height, to stretch back to, and how long it has
// been squashed.
struct Squashed
{
    u32 id;         // actor id; 0 = free
    u32 frames;     // frames squashed and alive
    f32 scaleY;     // scale.y and the collider's y before the squash
    f32 centerY;
    f32 edgeY;
};

constexpr u32 cMaxSquashed = 32;
Squashed sSquashed[cMaxSquashed];
u32 sNextSquashed;

bool isShyGuy(void* actor)
{
    return ModBase::variantProfileOf(actor) == ProfileId::ShyGuy;
}

Squashed* squashedOf(StageActor* a)
{
    for (Squashed& s : sSquashed)
        if (s.id && s.id == a->id)
            return &s;
    return nullptr;
}

// This fraction of its full height: the model by its scale; the collider
// (GoombaBase::onCreate 0x6033BE80, info 0x60BED0A4: centre (0, 8), half-size
// (8, 8)) to match.
void setHeight(StageActor* a, const Squashed& s, f32 height)
{
    a->scale.y = s.scaleY * height;
    a->aCollider.info.distToCenter.y = s.centerY * height;
    a->aCollider.info.distToEdge.y   = s.edgeY * height;
}

void squash(StageActor* a)
{
    Squashed& s = sSquashed[sNextSquashed];
    sNextSquashed = (sNextSquashed + 1) % cMaxSquashed;
    s.id      = a->id;
    s.frames  = 0;
    s.scaleY  = a->scale.y;
    s.centerY = a->aCollider.info.distToCenter.y;
    s.edgeY   = a->aCollider.info.distToEdge.y;
    setHeight(a, s, SHYGUY_SQUASHED_HEIGHT);
}

// True when this stomp squashes rather than kills. A stomp that kills frees the
// Shy Guy's entry, so its death is the game's alone.
bool squashInstead(void* enemy)
{
    if (!SHYGUY_TWO_STOMPS || !isShyGuy(enemy))
        return false;
    if (Squashed* s = squashedOf((StageActor*)enemy)) {
        s->id = 0;
        return false;
    }
    squash((StageActor*)enemy);
    return true;
}

// Getting back up: the heights it passes through, SHYGUY_RECOVER_STEP frames
// from each to the next, eased in and out.
constexpr f32 cRecoverHeights[] = {
    SHYGUY_SQUASHED_HEIGHT, SHYGUY_RECOVER_TALL,
    SHYGUY_SQUASHED_HEIGHT, SHYGUY_RECOVER_TALL,
    SHYGUY_SQUASHED_HEIGHT, 1.0f,
};
constexpr u32 cRecoverFrames =
    (sizeof(cRecoverHeights) / sizeof(cRecoverHeights[0]) - 1) * SHYGUY_RECOVER_STEP;

f32 recoverHeight(u32 frame)    // frame < cRecoverFrames
{
    u32 i = frame / SHYGUY_RECOVER_STEP;
    f32 t = (f32)(frame % SHYGUY_RECOVER_STEP) / SHYGUY_RECOVER_STEP;
    t = t * t * (3.0f - 2.0f * t);
    return cRecoverHeights[i] + (cRecoverHeights[i + 1] - cRecoverHeights[i]) * t;
}

// Its collider is registered while it lives: every death removes it (Enemy
// vtable +0x48, e.g. from beginState_DieFumi 0x602A7D9C), so a Shy Guy killed
// another way (fireball, hammer, shell) never gets back up.
bool isAlive(StageActor* a)
{
    ActiveColliderMgr* mgr = ActiveColliderMgr::instance;
    return mgr && mgr->isInActiveList(&a->aCollider);
}

// Counts a squashed Shy Guy's time and, once it is up, stretches it back.
void recover(StageActor* a, Squashed& s)
{
    if (!SHYGUY_RECOVER_FRAMES || !isAlive(a))
        return;
    s.frames++;
    if (s.frames <= SHYGUY_RECOVER_FRAMES)
        return;
    u32 frame = s.frames - SHYGUY_RECOVER_FRAMES;
    if (frame < cRecoverFrames) {
        setHeight(a, s, recoverHeight(frame));
    } else {
        setHeight(a, s, 1.0f);
        s.id = 0;                   // full height: two stomps again
    }
}

// Each frame (ActorVariant::onExecute): a squashed Shy Guy goes
// SHYGUY_SQUASHED_SPEED times as far as the game moved it. Scaling the step the
// game took, after it took it, keeps walls (no step, nothing added) and cannot
// compound, however the walk state sets its speed.
u32 shyGuyExecute(Actor* actor, u32 (*vanilla)(Actor*))
{
    StageActor* a = (StageActor*)actor;
    f32 before = a->position.x;
    u32 r = vanilla(actor);
    if (Squashed* s = squashedOf(a)) {
        a->position.x += (a->position.x - before) * (SHYGUY_SQUASHED_SPEED - 1.0f);
        recover(a, *s);
    }
    return r;
}

} // namespace

namespace ModBase { namespace shyGuy { int stomped_orig(void* goomba, StageActor* player); } }
namespace ModBase { namespace shyGuy { int stomped(void* goomba, StageActor* player); } }
int ModBase::shyGuy::stomped(void* goomba, StageActor* player)
{
    if (squashInstead(goomba))
        return 0;
    return ModBase::shyGuy::stomped_orig(goomba, player);
}

namespace ModBase { namespace shyGuy { int spinKilled_orig(void* enemy, StageActor* player); } }
namespace ModBase { namespace shyGuy { int spinKilled(void* enemy, StageActor* player); } }
int ModBase::shyGuy::spinKilled(void* enemy, StageActor* player)
{
    if (squashInstead(enemy))
        return 0;
    return ModBase::shyGuy::spinKilled_orig(enemy, player);
}

MODBASE_ACTOR_VARIANT(shyGuyVariant,
    ProfileId::ShyGuy, SHYGUY_BEHAVES_LIKE, "Shy Guy", ModBase::cVariant_None,
    {
        { SHYGUY_VANILLA_ARCHIVE, SHYGUY_ARCHIVE,
          SHYGUY_VANILLA_MODEL,   SHYGUY_MODEL },
    },
    {}, 0, 0, &shyGuyExecute);
