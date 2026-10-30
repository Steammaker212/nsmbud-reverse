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
// Models: pakkun (the retail Piranha Plant: anims "fire_wait_up",
// "fire_attack_up"), poisball (the ball, anim "idle") and e_poison (the
// puddle, anim "idle"). Puddles last 600 frames.

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

// Tsuru RP_Cmn_PoisonSplash_00 (effectid.h).
constexpr s32 cEffect_PoisonSplash = 0x0E4;

#define POISONPIRANHA_IDLE_FRAMES       190
#define POISONPIRANHA_ATTACK_FRAMES     106
#define POISONPIRANHA_SPIT_FRAME        75      // of the attack timer
#define POISONBALL_LIFETIME             600

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

    void splash();

    static const ActiveCollider::Info collisionInfo;

    struct {
        ModelWrapper* ball;
        ModelWrapper* puddle;
    } model;
    Vec2 baseline;
    u32 timer;

    DECLARE_STATE(PoisonPiranhaProjectile, Ball);
    DECLARE_STATE(PoisonPiranhaProjectile, Puddle);
};

CREATE_STATE(PoisonPiranhaProjectile, Ball);
CREATE_STATE(PoisonPiranhaProjectile, Puddle);

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

    ModelWrapper* model;
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

    doStateChange(&StateID_Idle);

    return onExecute();
}

u32 PoisonPiranha::onExecute()
{
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
    , timer(POISONBALL_LIFETIME)
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

    doStateChange(&StateID_Ball);

    return onExecute();
}

u32 PoisonPiranhaProjectile::onExecute()
{
    states.execute();

    tsuru::placeModel(model.ball, this);
    tsuru::placeModel(model.puddle, this);

    if (timer == 0) {
        isDeleted = true;
        splash();
    } else {
        timer--;
    }

    return 1;
}

u32 PoisonPiranhaProjectile::onDraw()
{
    if (states.currentState() == &StateID_Ball)
        tsuru::drawModel(model.ball);
    else
        tsuru::drawModel(model.puddle);

    return 1;
}

void PoisonPiranhaProjectile::splash()
{
    Vec3 effectScale(0.5f, 0.5f, 0.5f);
    Effect::spawn(cEffect_PoisonSplash, &position, nullptr, &effectScale);
}

// Two puddles in one place merge: the newer one goes.
void PoisonPiranhaProjectile::collisionEnemy(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (acOther->owner->getProfileId() == ProfileId::PoisonPiranhaProjectile)
        isDeleted = true;
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
    const f32 arcHeight = 16.0f * 3.0f;
    const f32 sign = direction == tsuru::Direction::Right ? 1.0f : -1.0f;

    position.x += sign;
    position.y = -pow(widthFraction * ((position.x - baseline.x) + (arcHeight * -sign)), 2.0f) + baseline.y + 2.0f * arcHeight;

    collisionMgr.process();
    if (collisionMgr.isOnGround())
        doStateChange(&StateID_Puddle);
}

void PoisonPiranhaProjectile::endState_Ball() { }

/** STATE: Puddle */

void PoisonPiranhaProjectile::beginState_Puddle()
{
    tsuru::playSklAnim(model.puddle, "idle");
    aCollider.info.shape = ActiveCollider::ShapeRectangle;
    aCollider.info.distToEdge = Vec2(10.0f, 4.0f);

    splash();
}

void PoisonPiranhaProjectile::executeState_Puddle() { }

void PoisonPiranhaProjectile::endState_Puddle() { }
