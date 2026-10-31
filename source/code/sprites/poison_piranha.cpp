// poison_piranha.cpp -- the Poison Piranha (sprite 753): a Piranha Plant that
// spits poison balls; each one leaves a poison puddle where it lands.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/poisonpiranha.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// besides the porting kit's renames (docs/TSURU_PORTING.md), the model is a
// plain ModelWrapper (Tsuru's BlendingModel cross-fades; here anims switch at
// once).
//
// Settings: none. It turns to face the player, and spits every 190 frames.
//
// Hammers kill the plant (Enemy's default), but not its balls or puddles. Yoshi can eat the
// plant and the balls, not the puddles. He spits a ball back as a thrown hammer:
// the Spit state hits as attack 9, leaves no puddle and never touches players.
//
// Models: pakkun (the retail Piranha Plant: anims "fire_wait_up",
// "fire_attack_up"), poisball (the ball, anim "idle") and e_poison (the
// puddle, anim "idle"). A puddle lasts as long as its ball's 600 frames, shrinking away over
// the last POISONPUDDLE_SHRINK_FRAMES. A ball coming down on one dissolves it, quickly.

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"
#include "modbase/yoshi.h"
#include "modbase/tumble_death.h"

// Tsuru RP_Cmn_PoisonSplash_00 (effectid.h).
constexpr s32 cEffect_PoisonSplash = 0x0E4;

#define POISONPIRANHA_IDLE_FRAMES       190
#define POISONPIRANHA_ATTACK_FRAMES     106
#define POISONPIRANHA_SPIT_FRAME        75      // of the attack timer
#define POISONBALL_LIFETIME             600
#define POISONBALL_ARC_HEIGHT           48.0f
#define POISONBALL_SPIT_LIFETIME        120
#define POISONBALL_SPIT_SPEED_X         3.5f
#define POISONBALL_SPIT_SPEED_Y         1.5f
#define POISONBALL_SPIT_GRAVITY         0.12f
#define POISONPUDDLE_SHRINK_FRAMES      150
#define POISONPUDDLE_DISSOLVE_FRAMES    12
#define POISONPIRANHA_DEATH_SOUND       "SE_EMY_PAKKUN_DOWN"

// As spawnHammer (hammer_suit.cpp): attack as a Shell, never pair with players.
constexpr u32 cAttack_Shell     = 9;
constexpr u32 cVsKind_Players   = (1u << 0) | (1u << 1) | (1u << 2) | (1u << 9);

class PoisonPiranhaProjectile : public Enemy
{
public:
    PoisonPiranhaProjectile(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionEnemy(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionHammer(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    void vf228() override;      // Enemy's EatOut: Yoshi spat it out

    void splash();
    void dissolve(u32 frames);

    static const ActiveCollider::Info collisionInfo;

    struct {
        ModelWrapper* ball;
        ModelWrapper* puddle;
    } model;
    ::yoshi::EatData eatData;
    Vec2 baseline;
    f32 travel;                 // how far along the arc: a wall stops position.x, not this
    f32 size;                   // of the puddle, 1 until it starts shrinking
    f32 shrink;                 // of size, a frame; 0 until then
    u32 timer;
    bool hitWall;
    bool spitOut;

    DECLARE_STATE(PoisonPiranhaProjectile, Ball);
    DECLARE_STATE(PoisonPiranhaProjectile, Puddle);
    DECLARE_STATE(PoisonPiranhaProjectile, Spit);
};

CREATE_STATE(PoisonPiranhaProjectile, Ball);
CREATE_STATE(PoisonPiranhaProjectile, Puddle);
CREATE_STATE(PoisonPiranhaProjectile, Spit);

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why). Shape 1: circle.
const ActiveCollider::Info PoisonPiranhaProjectile::collisionInfo = {
    {0.0f, 0.0f}, {5.0f, 5.0f}, 1, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

class PoisonPiranha : public Enemy
{
public:
    PoisonPiranha(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    // Enemy's own deaths, the ones the tumble does not see: a hammer, a fireball, a stomp.
    void beginState_DieFumi() override { Enemy::beginState_DieFumi(); tsuru::playSound(POISONPIRANHA_DEATH_SOUND, position); }
    void beginState_DieFall() override { Enemy::beginState_DieFall(); tsuru::playSound(POISONPIRANHA_DEATH_SOUND, position); }

    void vf228() override;      // Enemy's EatOut: Yoshi spat it out

    ModelWrapper* model;
    ::yoshi::EatData eatData;
    ModBase::TumbleDeath tumble;
    u32 timer;

    static const ActiveCollider::Info collisionInfo;

    DECLARE_STATE(PoisonPiranha, Idle);
    DECLARE_STATE(PoisonPiranha, Attack);
};

CREATE_STATE(PoisonPiranha, Idle);
CREATE_STATE(PoisonPiranha, Attack);

const Profile poisonPiranhaProfile(&PoisonPiranha::build, ProfileId::PoisonPiranha, "PoisonPiranha", nullptr, 0);
PROFILE_RESOURCES(ProfileId::PoisonPiranha, "pakkun", "poisball", "e_poison");

const Profile poisonPiranhaProjectileProfile(&PoisonPiranhaProjectile::build, ProfileId::PoisonPiranhaProjectile, "PoisonPiranhaProjectile", nullptr, 0);

// Tsuru's info as is (kind 3 already).
const ActiveCollider::Info PoisonPiranha::collisionInfo = {
    {0.0f, 16.0f}, {5.0f, 16.0f}, 0, 3, 0, 0xA4F, 0xFFFAFFFF, 0x2, &Enemy::collisionCallback
};

PoisonPiranha::PoisonPiranha(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , timer(0)
{ }

Actor* PoisonPiranha::build(const ActorBuildInfo* buildInfo)
{
    return new PoisonPiranha(buildInfo);
}

u32 PoisonPiranha::onCreate()
{
    position += Vec3(8.0f, -16.0f, 0.0f);

    model = tsuru::createModel("pakkun", "pakkun", 2);
    if (!model) {
        isDeleted = true;
        return 1;
    }

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();
    ModBase::yoshi::makeEdible(this, &eatData);
    tumble.sound = POISONPIRANHA_DEATH_SOUND;

    doStateChange(&StateID_Idle);

    return onExecute();
}

u32 PoisonPiranha::onExecute()
{
    if (!tumble.execute(this))
        states.execute();
    tsuru::placeModel(model, this);
    return 1;
}

// Yoshi bounces off it.
void PoisonPiranha::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::yoshiBounce(this, acSelf, acOther);
}

bool PoisonPiranha::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return false;
}

// Enemy's EatOut does nothing (0x602A972C), and a plant has nowhere to go back to.
void PoisonPiranha::vf228()
{
    tumble.begin(this);
}

u32 PoisonPiranha::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

/** STATE: Idle */

void PoisonPiranha::beginState_Idle()
{
    tsuru::setSklAnim(model, "fire_wait_up", 10.0f);
    timer = POISONPIRANHA_IDLE_FRAMES;
}

void PoisonPiranha::executeState_Idle()
{
    if (timer > 0)
        timer--;
    else
        doStateChange(&StateID_Attack);

    direction = directionToPlayerH(position);
    tsuru::chase(&rotation.y, tsuru::Direction::toRotation[direction], tsuru::deg2idx(2.0f));
}

void PoisonPiranha::endState_Idle() { }

/** STATE: Attack */

void PoisonPiranha::beginState_Attack()
{
    timer = POISONPIRANHA_ATTACK_FRAMES;
    tsuru::setSklAnim(model, "fire_attack_up", 4.0f);
}

void PoisonPiranha::executeState_Attack()
{
    if (timer > 0) {
        timer--;

        if (timer == POISONPIRANHA_SPIT_FRAME) {
            const f32 sign = direction == tsuru::Direction::Left ? -1.0f : 1.0f;

            StageActor* ball = tsuru::spawnActor(ProfileId::PoisonPiranhaProjectile, position + Vec3(14.0f * sign, -22.0f, 0.0f));
            tsuru::playSound("SE_EMY_KANIBO_THROW", position);
            if (ball)
                ball->direction = direction;
        }
    } else {
        doStateChange(&StateID_Idle);
    }
}

void PoisonPiranha::endState_Attack() { }

/** PROJECTILE: / POISON: */

const CollisionMgr::Sensor cPoisonBelow = { -4.0f, 4.0f, 0.0f };
const CollisionMgr::Sensor cPoisonSides = { -4.0f, 4.0f, 7.0f };
const CollisionMgr::Sensor cPoisonAbove = { -4.0f, 4.0f, 7.0f };

PoisonPiranhaProjectile::PoisonPiranhaProjectile(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , baseline(buildInfo->position.x, buildInfo->position.y)
    , travel(0.0f)
    , size(1.0f)
    , shrink(0.0f)
    , timer(POISONBALL_LIFETIME)
    , hitWall(false)
    , spitOut(false)
{
    model.ball = nullptr;
    model.puddle = nullptr;
}

Actor* PoisonPiranhaProjectile::build(const ActorBuildInfo* buildInfo)
{
    return new PoisonPiranhaProjectile(buildInfo);
}

u32 PoisonPiranhaProjectile::onCreate()
{
    scale = Vec3(0.5f, 0.5f, 0.5f);

    model.ball = tsuru::createModel("poisball", "poisball", 1);
    model.puddle = tsuru::createModel("e_poison", "e_poison", 1);

    collisionMgr.init(this, &cPoisonBelow, &cPoisonAbove, &cPoisonSides);

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();
    ModBase::yoshi::makeEdible(this, &eatData);
    eatData.scoreType = 2;      // no points
    eatData.type = ::yoshi::EatType::HoldInMouth;

    doStateChange(&StateID_Ball);

    return onExecute();
}

u32 PoisonPiranhaProjectile::onExecute()
{
    if (spitOut) {
        spitOut = false;
        doStateChange(&StateID_Spit);
    }

    states.execute();

    // Yoshi has it: he moves it, and its lifetime waits.
    if (ModBase::yoshi::beingEaten(eatData)) {
        tsuru::placeModel(model.ball, this);
        return 1;
    }

    tsuru::placeModel(model.ball, this);
    tsuru::placeModel(model.puddle, this);

    if (timer == 0) {
        isDeleted = true;
        if (states.currentState() != &StateID_Puddle)
            splash();
    } else {
        timer--;
    }

    return 1;
}

u32 PoisonPiranhaProjectile::onDraw()
{
    if (states.currentState() == &StateID_Puddle)
        tsuru::drawModel(model.puddle);
    else
        tsuru::drawModel(model.ball);

    return 1;
}

void PoisonPiranhaProjectile::splash()
{
    Vec3 effectScale(0.5f, 0.5f, 0.5f);
    Effect::spawn(cEffect_PoisonSplash, &position, nullptr, &effectScale);
}

// A ball coming down on a puddle, or a new puddle next to it: the older one makes way. A spat
// ball flies through them.
void PoisonPiranhaProjectile::collisionEnemy(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (states.currentState() != &StateID_Puddle || acOther->owner->getProfileId() != ProfileId::PoisonPiranhaProjectile)
        return;

    PoisonPiranhaProjectile* other = static_cast<PoisonPiranhaProjectile*>(acOther->owner);
    if (other->states.currentState() == &StateID_Puddle ? timer < other->timer
        : other->states.currentState() == &StateID_Ball && other->travel > POISONBALL_ARC_HEIGHT)
        dissolve(POISONPUDDLE_DISSOLVE_FRAMES);
}

// Hammers pass through, the plain or Yoshi's. False is "nothing happened": true is a hit that
// landed, and Enemy::collisionCallback (0x602A21B0) switches the collider off for it.
bool PoisonPiranhaProjectile::collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return false;
}

bool PoisonPiranhaProjectile::collisionHammer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return false;
}

// Called from inside Yoshi's spit, so the state changes in onExecute.
void PoisonPiranhaProjectile::vf228()
{
    spitOut = true;
}

void PoisonPiranhaProjectile::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    splash();
    Enemy::collisionPlayer(acSelf, acOther);
}

bool PoisonPiranhaProjectile::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    acOther->owner->isDeleted = true;
    isDeleted = true;
    return false;
}

bool PoisonPiranhaProjectile::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
    return false;
}

/** STATE: Ball */

void PoisonPiranhaProjectile::beginState_Ball()
{
    tsuru::playSklAnim(model.ball, "idle");
}

void PoisonPiranhaProjectile::executeState_Ball()
{
    const f32 widthFraction = 3.0f / 20.0f;
    const f32 arcHeight = POISONBALL_ARC_HEIGHT;
    const f32 sign = direction == tsuru::Direction::Right ? 1.0f : -1.0f;

    // position.y used to come from position.x: a wall stopped both, and the ball hung there.
    travel += 1.0f;
    if (!hitWall)
        position.x += sign;
    position.y = -pow(widthFraction * (travel - arcHeight), 2.0f) + baseline.y + 2.0f * arcHeight;

    collisionMgr.process();
    if (collisionMgr.isOnGround())
        doStateChange(&StateID_Puddle);
    else if (collisionMgr.isCollidedLeft() || collisionMgr.isCollidedRight())
        hitWall = true;
}

void PoisonPiranhaProjectile::endState_Ball() { }

/** STATE: Puddle */

void PoisonPiranhaProjectile::beginState_Puddle()
{
    ModBase::yoshi::makeInedible(this);
    tsuru::playSklAnim(model.puddle, "idle");
    aCollider.info.shape = ActiveCollider::ShapeRectangle;
    aCollider.info.distToEdge = Vec2(10.0f, 4.0f);

    tsuru::playSound("SE_EMY_TOBIPUKU_SPLASH", position);
    splash();
}

void PoisonPiranhaProjectile::dissolve(u32 frames)
{
    const f32 rate = 1.0f / frames;
    if (shrink < rate)
        shrink = rate;
}

void PoisonPiranhaProjectile::executeState_Puddle()
{
    if (timer <= POISONPUDDLE_SHRINK_FRAMES)
        dissolve(POISONPUDDLE_SHRINK_FRAMES);
    if (shrink == 0.0f)
        return;

    size -= shrink;
    if (size <= 0.0f) {
        isDeleted = true;
        return;
    }
    scale = Vec3(0.5f * size, 0.5f * size, 0.5f * size);
    aCollider.info.distToEdge = Vec2(10.0f * size, 4.0f * size);
}

void PoisonPiranhaProjectile::endState_Puddle() { }

/** STATE: Spit */

void PoisonPiranhaProjectile::beginState_Spit()
{
    ModBase::yoshi::makeInedible(this);

    aCollider.info._18 = cAttack_Shell;
    aCollider.info._1C &= ~cVsKind_Players;

    timer = POISONBALL_SPIT_LIFETIME;
    speed.x = direction == tsuru::Direction::Right ? POISONBALL_SPIT_SPEED_X : -POISONBALL_SPIT_SPEED_X;
    speed.y = POISONBALL_SPIT_SPEED_Y;
}

// It keeps flying through what it hits, as a hammer does, until the ground or a wall stops it.
void PoisonPiranhaProjectile::executeState_Spit()
{
    speed.y -= POISONBALL_SPIT_GRAVITY;
    position.x += speed.x;
    position.y += speed.y;

    collisionMgr.process();
    if (collisionMgr.isOnGround() || collisionMgr.isCollidedLeft() || collisionMgr.isCollidedRight()) {
        splash();
        isDeleted = true;
    }
}

void PoisonPiranhaProjectile::endState_Spit() { }
