// falling_chestnut.cpp -- the Falling Chestnut (sprite 756): a spiky chestnut
// that drops when a player walks underneath, then breaks up on the ground.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/fallingchestnut.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// the differences are the porting kit's renames (docs/TSURU_PORTING.md).
//
// Settings: none. It falls once a player is within 3 tiles horizontally.
//
// Model: iga_kuribo (Tsuru's archive). It hurts on touch; only a Star (and the
// other attacks of damage mask 0x20208: the Star, ground pound, Yoshi) reach it,
// and none of them kill it -- Tsuru's chestnut is indestructible.

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

// Tsuru RP_ObakeDoor_Disapp (effectid.h).
constexpr s32 cEffect_ObakeDoorDisappear = 0x399;

#define CHESTNUT_DROP_RANGE     48.0f   // |dx| to a player that starts the fall
#define CHESTNUT_SHAKE_RANGE    80.0f   // Tsuru: "TODO: Shake"
#define CHESTNUT_GRAVITY        -0.1875f
#define CHESTNUT_FALL_SPEED     -4.0f
#define CHESTNUT_DESPAWN_FRAMES 60      // on the ground before it breaks up

class FallingChestnut : public Enemy
{
public:
    FallingChestnut(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    ModelWrapper* model;
    u32 despawnDelay;

    static const ActiveCollider::Info collisionInfo;
    static const CollisionMgr::Sensor belowSensor;

    DECLARE_STATE(FallingChestnut, Idle);
    DECLARE_STATE(FallingChestnut, Falling);
    DECLARE_STATE(FallingChestnut, OnGround);
};

CREATE_STATE(FallingChestnut, Idle);
CREATE_STATE(FallingChestnut, Falling);
CREATE_STATE(FallingChestnut, OnGround);

const Profile fallingChestnutProfile(&FallingChestnut::build, ProfileId::FallingChestnut, "FallingChestnut", nullptr, 0);
PROFILE_RESOURCES(ProfileId::FallingChestnut, "iga_kuribo");

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info FallingChestnut::collisionInfo = {
    {0.0f, 0.0f}, {12.0f, 12.0f}, 0, 3, 0, 0x824F, 0x20208, 0, &Enemy::collisionCallback
};

// Tsuru's sensor: one point 16 below, 16 to the right.
const CollisionMgr::Sensor FallingChestnut::belowSensor = { 16.0f, 16.0f, -16.0f };

FallingChestnut::FallingChestnut(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , despawnDelay(0)
{ }

Actor* FallingChestnut::build(const ActorBuildInfo* buildInfo)
{
    return new FallingChestnut(buildInfo);
}

u32 FallingChestnut::onCreate()
{
    model = tsuru::createModel("iga_kuribo", "iga_kuribo");
    if (!model) {
        isDeleted = true;
        return 1;
    }

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    collisionMgr.init(this, &belowSensor, nullptr, nullptr);

    doStateChange(&StateID_Idle);

    return onExecute();
}

u32 FallingChestnut::onExecute()
{
    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position + Vec3(0.0f, -14.0f, 0.0f));
    model->setMtx(mtx);
    model->setScale(scale);
    model->updateModel();

    states.execute();

    return 1;
}

// Yoshi bounces off its spikes.
void FallingChestnut::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::yoshiBounce(this, acSelf, acOther);
}

bool FallingChestnut::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return false;
}

u32 FallingChestnut::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

/** STATE: Idle */

void FallingChestnut::beginState_Idle() { }

void FallingChestnut::executeState_Idle()
{
    Vec2 dist;

    if (distanceToPlayer(dist) > -1 && fabs(dist.x) < CHESTNUT_DROP_RANGE)
        doStateChange(&StateID_Falling);

    else if (distanceToPlayer(dist) > -1 && fabs(dist.x) < CHESTNUT_SHAKE_RANGE)
        ;   // Tsuru: TODO: Shake
}

void FallingChestnut::endState_Idle() { }

/** STATE: Falling */

void FallingChestnut::beginState_Falling()
{
    tsuru::gravity(this) = CHESTNUT_GRAVITY;
    maxSpeed.y = CHESTNUT_FALL_SPEED;
}

void FallingChestnut::executeState_Falling()
{
    handleGravity();
    handleSpeed();

    collisionMgr.process();

    if (collisionMgr.isOnGround()) {
        speed.y = 0.0f;
        doStateChange(&StateID_OnGround);
    }
}

void FallingChestnut::endState_Falling() { }

/** STATE: OnGround */

void FallingChestnut::beginState_OnGround() { }

void FallingChestnut::executeState_OnGround()
{
    despawnDelay++;

    if (despawnDelay >= CHESTNUT_DESPAWN_FRAMES) {
        Vec3 effectPos(position.x, position.y - 18.0f, 4500.0f);
        Effect::spawn(cEffect_ObakeDoorDisappear, &effectPos, nullptr, nullptr);

        isDeleted = true;
    }
}

void FallingChestnut::endState_OnGround() { }
