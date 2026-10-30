// flaptor.cpp -- the Flaptor (sprite 747): a bird that hovers or patrols, then
// dives at a player who comes close.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/flaptor.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// the differences are the porting kit's renames (docs/TSURU_PORTING.md), plus
// its fall speed is reset on landing so the next dive starts from rest.
//
// Settings:
//   nybble 3      patrol distance either side of its start, in tiles
//   nybble 4      movement: 0 stationary, 1 horizontal, 2 vertical
//
// Model: mokinger (Tsuru's archive), with the skeletal anims "Fly", "Attack",
// "AttackLand" and "PressDown".

#include "actors/enemy.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

#define FLAPTOR_DIVE_RANGE      (5.0f * 16.0f)
#define FLAPTOR_GRAVITY         -0.1875f
#define FLAPTOR_FALL_SPEED      -4.0f

class Flaptor : public Enemy
{
public:
    enum MoveType : u8 { Stationary = 0, Horizontal, Vertical };

    Flaptor(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    Vec3 startPosition;
    f32 threshold;
    f32 timer;
    u8 moveType;

    DECLARE_STATE(Flaptor, Idle);
    DECLARE_STATE(Flaptor, Dive);
    DECLARE_STATE(Flaptor, DieSquish);
    DECLARE_STATE(Flaptor, Die);
    DECLARE_STATE(Flaptor, Land);
};

CREATE_STATE(Flaptor, Idle);
CREATE_STATE(Flaptor, Dive);
CREATE_STATE(Flaptor, DieSquish);
CREATE_STATE(Flaptor, Die);
CREATE_STATE(Flaptor, Land);

const Profile flaptorProfile(&Flaptor::build, ProfileId::Flaptor, "Flaptor", nullptr, 0);
PROFILE_RESOURCES(ProfileId::Flaptor, "mokinger");

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info Flaptor::collisionInfo = {
    {0.0f, 0.0f}, {10.0f, 10.0f}, 0, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

const CollisionMgr::Sensor cFlaptorBelow = { -8.0f, 8.0f, -8.0f };

Flaptor::Flaptor(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , startPosition()
    , threshold(0.0f)
    , timer(0.0f)
    , moveType(0)
{ }

Actor* Flaptor::build(const ActorBuildInfo* buildInfo)
{
    return new Flaptor(buildInfo);
}

u32 Flaptor::onCreate()
{
    model = tsuru::createModel("mokinger", "mokinger", 1);
    if (!model) {
        isDeleted = true;
        return 1;
    }

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    collisionMgr.init(this, &cFlaptorBelow, nullptr, nullptr);

    startPosition = position;
    threshold = (eventId1 >> 0x4 & 0xF) * 16.0f;   // nybble 3
    moveType = eventId1 & 0xF;                      // nybble 4

    direction = tsuru::Direction::Right;
    scale = Vec3(0.175f, 0.175f, 0.175f);

    if (moveType > Vertical) {
        ModBase::log("Flaptor: invalid move type ", (u32)moveType);
        isDeleted = true;
        return 1;
    }

    doStateChange(&StateID_Idle);

    return onExecute();
}

u32 Flaptor::onExecute()
{
    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position + Vec3(0.0f, -8.0f, 0.0f));
    model->setMtx(mtx);
    model->setScale(scale);
    model->updateModel();
    model->updateAnimations();

    timer++;

    states.execute();

    return 1;
}

u32 Flaptor::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

void Flaptor::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);
    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_DieSquish);
}

void Flaptor::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
}

/** STATE: Idle */

void Flaptor::beginState_Idle()
{
    tsuru::playSklAnim(model, "Fly");
}

void Flaptor::executeState_Idle()
{
    switch (moveType) {
        case Stationary: {
            tsuru::chase(&rotation.y, tsuru::Direction::toRotation[directionToPlayerH(position)], tsuru::deg2idx(4.0f));

            tsuru::chase(&position.x, startPosition.x, 1.0f);
            tsuru::chase(&position.y, startPosition.y, 1.0f);
            break;
        }

        case Horizontal: {
            tsuru::chase(&rotation.y, tsuru::Direction::toRotation[direction], tsuru::deg2idx(4.0f));

            if (position.x - startPosition.x < -threshold)
                direction = tsuru::Direction::Right;
            else if (position.x - startPosition.x > threshold)
                direction = tsuru::Direction::Left;

            if (direction == tsuru::Direction::Right)
                position.x++;
            else
                position.x--;

            if (!tsuru::chase(&position.y, startPosition.y, 1.0f))
                return;
            break;
        }

        case Vertical: {
            tsuru::chase(&rotation.x, tsuru::Direction::toRotation[direction], tsuru::deg2idx(4.0f));

            if (position.y - startPosition.y < -threshold)
                direction = tsuru::Direction::Up;
            else if (position.y - startPosition.y > threshold)
                direction = tsuru::Direction::Down;

            if (direction == tsuru::Direction::Up)
                position.y++;
            else
                position.y--;

            if (!tsuru::chase(&position.x, startPosition.x, 1.0f))
                return;
            break;
        }
    }

    Vec2 d2p = tsuru::distanceToPlayer(this);
    if (d2p.mag() <= FLAPTOR_DIVE_RANGE && d2p.y < 4.0f)
        doStateChange(&StateID_Dive);
}

void Flaptor::endState_Idle() { }

/** STATE: Dive */

void Flaptor::beginState_Dive()
{
    tsuru::gravity(this) = FLAPTOR_GRAVITY;
    maxSpeed.y = FLAPTOR_FALL_SPEED;

    tsuru::playSklAnim(model, "Attack");
}

void Flaptor::executeState_Dive()
{
    handleGravity();
    handleSpeed();
    collisionMgr.process();

    if (collisionMgr.isOnGround())
        doStateChange(&StateID_Land);
}

void Flaptor::endState_Dive() { }

/** STATE: Land */

void Flaptor::beginState_Land()
{
    speed.y = 0.0f;
    tsuru::playSklAnim(model, "AttackLand", false);
}

void Flaptor::executeState_Land()
{
    if (tsuru::sklAnimDone(model))
        doStateChange(&StateID_Idle);
}

void Flaptor::endState_Land() { }

/** STATE: DieSquish */

void Flaptor::beginState_DieSquish()
{
    tsuru::playSklAnim(model, "PressDown", false);
    removeActiveColliders();
}

void Flaptor::executeState_DieSquish()
{
    if (tsuru::sklAnimDone(model))
        isDeleted = true;
}

void Flaptor::endState_DieSquish() { }

/** STATE: Die */

void Flaptor::beginState_Die() { }

void Flaptor::executeState_Die()
{
    isDeleted = true;
}

void Flaptor::endState_Die() { }
