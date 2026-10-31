// gushen.cpp -- the Gushen (sprite 749): a water spout that rises every few
// seconds; its spray column hurts players.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/gushen.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour,
// with two changes besides the porting kit's renames (docs/TSURU_PORTING.md):
// the spray collider is initialised once and only resized each frame (Tsuru
// re-inits it every frame, which would reset the list links of a collider the
// game is holding), and it is never frozen (Tsuru's freeze() does nothing, so
// its Ice-state check is not needed).
//
// Settings: none. It waits 160 frames, rises for 100, then falls back.
//
// Model: Tsuru's Gushen is unfinished and draws a Star Coin (star_coin /
// star_coinA) as a placeholder; so does this port.

#include "actors/enemy.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

#define GUSHEN_IDLE_FRAMES  160
#define GUSHEN_UP_FRAMES    100
#define GUSHEN_RISE_SPEED   1.0f
#define GUSHEN_GRAVITY      -0.1875f

class Gushen : public Enemy
{
public:
    Gushen(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void updateSprayCollider();

    void freeze() override { }      // Tsuru: does not freeze

    static const ActiveCollider::Info collisionInfo;

    static void sprayCollisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther);

    DECLARE_STATE(Gushen, Idle);
    DECLARE_STATE(Gushen, Up);
    DECLARE_STATE(Gushen, Die);

    ModelWrapper* model;
    ActiveCollider::Info sprayCollisionInfo;
    ActiveCollider sprayCollider;
    f32 baseline;
    u8 timer;
};

CREATE_STATE(Gushen, Idle);
CREATE_STATE(Gushen, Up);
CREATE_STATE(Gushen, Die);

const Profile gushenProfile(&Gushen::build, ProfileId::Gushen, "Gushen", nullptr, 0);
PROFILE_RESOURCES(ProfileId::Gushen, "star_coin");

// Tsuru's info as is (kind 3 already).
const ActiveCollider::Info Gushen::collisionInfo = {
    {0.0f, 0.0f}, {16.0f, 16.0f}, 0, 3, 9, 0x24F, 0xE, 0x1000, &Enemy::collisionCallback
};

const CollisionMgr::Sensor cGushenBelow = { -8.0f, 8.0f, -16.0f };
const CollisionMgr::Sensor cGushenSides = { -8.0f, 8.0f,  16.0f };
const CollisionMgr::Sensor cGushenAbove = { -8.0f, 8.0f,  16.0f };

Gushen::Gushen(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , sprayCollisionInfo(collisionInfo)
    , sprayCollider()
    , baseline(buildInfo->position.y)
    , timer(0)
{ }

Actor* Gushen::build(const ActorBuildInfo* buildInfo)
{
    return new Gushen(buildInfo);
}

u32 Gushen::onCreate()
{
    model = tsuru::createModel("star_coin", "star_coinA");

    collisionMgr.init(this, &cGushenBelow, &cGushenAbove, &cGushenSides);
    tsuru::gravity(this) = GUSHEN_GRAVITY;

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    sprayCollisionInfo.callback = &Gushen::sprayCollisionCallback;
    sprayCollider.init(this, &sprayCollisionInfo, 0);

    doStateChange(&StateID_Idle);

    return onExecute();
}

u32 Gushen::onExecute()
{
    updateSprayCollider();

    tsuru::offscreenDelete(this);

    states.execute();
    handleGravity();
    handleSpeed();
    collisionMgr.process();

    if (collisionMgr.isOnGround())
        speed.y = 0.0f;

    tsuru::placeModel(model, this);

    return 1;
}

u32 Gushen::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

void Gushen::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);

    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else if (hitType == tsuru::HitType::NormalJump || hitType == tsuru::HitType::SpinJump)
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
}

void Gushen::sprayCollisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    Gushen* self = static_cast<Gushen*>(acSelf->owner);

    if (acOther->owner->type == 1)      // a player
        tsuru::enemyDamagePlayer(self, acSelf, acOther);
}

// The column from the spout down to where the rise began.
void Gushen::updateSprayCollider()
{
    const f32 distanceToBaseline = position.y - baseline;

    sprayCollider.info.distToCenter = Vec2(0.0f, -(distanceToBaseline / 2.0f + collisionInfo.distToEdge.y));
    sprayCollider.info.distToEdge = Vec2(8.0f, distanceToBaseline / 2.0f);
}

/** STATE: Idle */

void Gushen::beginState_Idle()
{
    timer = 0;
}

void Gushen::executeState_Idle()
{
    timer++;

    if (timer >= GUSHEN_IDLE_FRAMES)
        doStateChange(&StateID_Up);
}

void Gushen::endState_Idle() { }

/** STATE: Up */

void Gushen::beginState_Up()
{
    tsuru::playSound("SE_EMY_TOBIPUKU_JUMP", position);
    timer = 0;
    tsuru::gravity(this) = 0.0f;

    baseline = position.y;
    ActiveColliderMgr* mgr = ActiveColliderMgr::instance;
    if (!mgr->isInActiveList(&sprayCollider) && !mgr->isInCreateList(&sprayCollider))
        mgr->addToCreateList(&sprayCollider);
}

void Gushen::executeState_Up()
{
    timer++;

    speed.y = GUSHEN_RISE_SPEED;

    if (timer >= GUSHEN_UP_FRAMES)
        doStateChange(&StateID_Idle);
}

void Gushen::endState_Up()
{
    tsuru::gravity(this) = GUSHEN_GRAVITY;
    ActiveColliderMgr* mgr = ActiveColliderMgr::instance;
    if (mgr->isInCreateList(&sprayCollider))
        mgr->removeFromCreateList(&sprayCollider);
    mgr->removeFromActiveList(&sprayCollider);
}

/** STATE: Die */

void Gushen::beginState_Die()
{
    isDeleted = true;
}

void Gushen::executeState_Die() { }

void Gushen::endState_Die() { }
