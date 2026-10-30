// stingby.cpp -- the Sting Bee (Stingby, sprite 755): a bee that patrols back and forth,
// notices a nearby player and charges after them.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/stingby.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// besides the porting kit's renames (docs/TSURU_PORTING.md), the model is a
// plain ModelWrapper: Tsuru's BlendingModel cross-fades between anims, here
// they switch at once (tsuru::setSklAnim).
//
// It patrols 4 tiles either side of where it starts, and chases a player who comes within 5.5
// tiles until they are 6 tiles away.
//
// Settings (new here; Tsuru's has none):
//   nybble 13  1: follow the player as the Deep Cheep does (Pukupuku Chase, 0x60371E0C): once it
//              notices them it flies straight at them, up and down too, at 0.75 units a frame,
//              and does not give up.
//   nybble 14  speed: 0 the default, otherwise value x 0.25 of it (4 = the same, 8 = twice).
//
// Model: hacchin000 (Tsuru's archive), with the skeletal anims "fly_idle",
// "notice", "fly_dash" and "die_squish".

#include "actors/enemy.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"
#include "modbase/yoshi.h"

#define STINGBY_PATROL_RANGE    (4.0f * 16.0f)
#define STINGBY_NOTICE_RANGE    (5.5f * 16.0f)
#define STINGBY_GIVE_UP_RANGE   (6.0f * 16.0f)
#define STINGBY_SPEED           0.5f
#define STINGBY_FOLLOW_SPEED    0.75f       // the Deep Cheep's chase speed
#define STINGBY_FOLLOW_REACHED  2.0f        // closer than this it stops, as the Deep Cheep
#define STINGBY_FOLLOW_TURN     13.0f       // ...and it only turns when further than this
#define STINGBY_TURN_STEP       0x11FFFFF   // rotation.y a frame

class Stingby : public Enemy
{
public:
    Stingby(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    ::yoshi::EatData eatData;
    Vec3 idleCenter;
    bool follow;
    f32 speedScale;

    DECLARE_STATE(Stingby, Idle);
    DECLARE_STATE(Stingby, Notice);
    DECLARE_STATE(Stingby, Chase);
    DECLARE_STATE(Stingby, Die);
};

CREATE_STATE(Stingby, Idle);
CREATE_STATE(Stingby, Notice);
CREATE_STATE(Stingby, Chase);
CREATE_STATE(Stingby, Die);

const Profile stingbyProfile(&Stingby::build, ProfileId::Stingby, "Stingby", nullptr, 0);
PROFILE_RESOURCES(ProfileId::Stingby, "hacchin000");

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info Stingby::collisionInfo = {
    {0.0f, 0.0f}, {8.5f, 8.5f}, 0, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

Stingby::Stingby(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , idleCenter(buildInfo->position)
{ }

Actor* Stingby::build(const ActorBuildInfo* buildInfo)
{
    return new Stingby(buildInfo);
}

u32 Stingby::onCreate()
{
    model = tsuru::createModel("hacchin000", "hacchin000", 2);
    if (!model) {
        isDeleted = true;
        return 1;
    }

    follow = settings2 >> 28 & 1;                       // nybble 13
    u32 speedSetting = settings2 >> 24 & 0xF;           // nybble 14
    speedScale = speedSetting ? speedSetting * 0.25f : 1.0f;

    direction = tsuru::Direction::Right;
    // Tsuru shrinks the model here (0.17). The Deluxe conversion has that scale baked in
    // (port_tsuru_models.py --bake-scale 0.17): drawn shrunk, the borrowed enemy program lit it
    // black (docs/WIIU_MODELS.md). So it is drawn at scale 1.
    scale = Vec3(1.0f, 1.0f, 1.0f);

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();
    ModBase::yoshi::makeEdible(this, &eatData);     // bug F016

    doStateChange(&StateID_Idle);

    return onExecute();
}

u32 Stingby::onExecute()
{
    states.execute();

    if (states.currentState() != &StateID_Die)
        tsuru::chase(&rotation.y, tsuru::Direction::toRotation[direction], STINGBY_TURN_STEP);

    tsuru::placeModel(model, this);

    return 1;
}

u32 Stingby::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

void Stingby::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);

    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else if (hitType == tsuru::HitType::NormalJump || hitType == tsuru::HitType::SpinJump)
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
}

void Stingby::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
}

/** STATE: Idle */

void Stingby::beginState_Idle()
{
    idleCenter = position;
    direction = tsuru::Direction::Right;

    tsuru::setSklAnim(model, "fly_idle", 10.0f);
}

void Stingby::executeState_Idle()
{
    Vec2 d2p = tsuru::distanceToPlayer(this);
    bool noticed = follow ? sqrt(d2p.x * d2p.x + d2p.y * d2p.y) < STINGBY_NOTICE_RANGE
                          : fabs(d2p.x) < STINGBY_NOTICE_RANGE;
    if (noticed)
        doStateChange(&StateID_Notice);

    f32 step = STINGBY_SPEED * speedScale;
    if (direction == tsuru::Direction::Right) {
        position.x += step;
        if (position.x > idleCenter.x + STINGBY_PATROL_RANGE)
            direction = tsuru::Direction::Left;
    } else {
        position.x -= step;
        if (position.x < idleCenter.x - STINGBY_PATROL_RANGE)
            direction = tsuru::Direction::Right;
    }
}

void Stingby::endState_Idle() { }

/** STATE: Notice */

void Stingby::beginState_Notice()
{
    tsuru::setSklAnim(model, "notice", 3.0f, false);
}

void Stingby::executeState_Notice()
{
    if (tsuru::sklAnimDone(model))
        doStateChange(&StateID_Chase);
}

void Stingby::endState_Notice() { }

/** STATE: Chase */

void Stingby::beginState_Chase()
{
    tsuru::setSklAnim(model, "fly_dash", 10.0f);
}

void Stingby::executeState_Chase()
{
    Vec2 d2p = tsuru::distanceToPlayer(this);

    if (follow) {
        f32 distance = sqrt(d2p.x * d2p.x + d2p.y * d2p.y);
        if (distance < STINGBY_FOLLOW_REACHED)
            return;
        f32 step = STINGBY_FOLLOW_SPEED * speedScale / distance;
        position.x += d2p.x * step;
        position.y += d2p.y * step;
        if (fabs(d2p.x) >= STINGBY_FOLLOW_TURN)
            direction = !(d2p.x > 0);
        return;
    }

    if (fabs(d2p.x) > STINGBY_GIVE_UP_RANGE)
        doStateChange(&StateID_Idle);

    f32 step = STINGBY_SPEED * speedScale;
    position.x += (d2p.x > 0) ? step : -step;
    direction = !(d2p.x > 0);
}

void Stingby::endState_Chase() { }

/** STATE: Die */

void Stingby::beginState_Die()
{
    tsuru::setSklAnim(model, "die_squish", 0.0f, false);
    removeActiveColliders();
}

void Stingby::executeState_Die()
{
    if (tsuru::sklAnimDone(model))
        isDeleted = true;
}

void Stingby::endState_Die() { }
