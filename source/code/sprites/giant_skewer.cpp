// giant_skewer.cpp -- the Giant Skewer (sprite 757): a huge spiked pillar that
// slams down from above, then pulls back up.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/giantskewer.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// the differences are the porting kit's renames (docs/TSURU_PORTING.md).
//
// Settings:
//   nybble 5      how far it slams down, in steps of 108 tiles (1728 units)
//
// Model: daikonbouBig (Tsuru's archive). Hurts on touch; a Star player is
// knocked back instead (PlayerBase::DamageType::SingleHitBounce).

#include "actors/enemy.h"
#include "level/arearumblemgr.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

#define SKEWER_IDLE_FRAMES      180     // three seconds
#define SKEWER_DELAY_FRAMES     60      // one second
#define SKEWER_END_FRAMES       120     // two seconds at the bottom
#define SKEWER_PREMOVE_SPEED    4.0f
#define SKEWER_SLAM_SPEED       9.5f
#define SKEWER_RETRACT_SPEED    3.0f
#define SKEWER_SPIN             0x3000000   // rotation.y a frame while moving
#define SKEWER_RUMBLE           6           // Tsuru: ZoneRumbleMgr::rumble(6)

class GiantSkewer : public Enemy
{
public:
    GiantSkewer(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 beforeExecute() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void damageFromUnder() override;
    void vf15C() override;

    bool collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionHammer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPipeCannon(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    static const ActiveCollider::Info collisionInfo;

    DECLARE_STATE(GiantSkewer, Idle);
    DECLARE_STATE(GiantSkewer, PreMove);
    DECLARE_STATE(GiantSkewer, Moving);
    DECLARE_STATE(GiantSkewer, MovingEnd);
    DECLARE_STATE(GiantSkewer, Retracting);
    DECLARE_STATE(GiantSkewer, PreMoveDelay);

    ModelWrapper* model;
    f32 targetDistance, targetPosition;
    f32 premoveDistance, premovePosition;
    f32 startPosition;
    u32 idleTimer, moveEndTimer, premoveDelayTimer;
};

CREATE_STATE(GiantSkewer, Idle);
CREATE_STATE(GiantSkewer, PreMove);
CREATE_STATE(GiantSkewer, Moving);
CREATE_STATE(GiantSkewer, MovingEnd);
CREATE_STATE(GiantSkewer, Retracting);
CREATE_STATE(GiantSkewer, PreMoveDelay);

// Tsuru's ActorInfo, field for field: drawn and kept alive 240 units around.
const ActorInfo giantSkewerActorInfo = { 0, 0, 0, 0, 240, 240, 0, 0, 0, 0, 0 };

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info GiantSkewer::collisionInfo = {
    {0.0f, 800.0f}, {96.0f, 1000.0f}, 0, 3, 0, 0x824F, 0x20208, 0, &Enemy::collisionCallback
};

const Profile giantSkewerProfile(&GiantSkewer::build, ProfileId::GiantSkewer, "GiantSkewer", &giantSkewerActorInfo, 0);
PROFILE_RESOURCES(ProfileId::GiantSkewer, "daikonbouBig");

GiantSkewer::GiantSkewer(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , targetDistance(-(1728.0f * (f32)(buildInfo->settings1 >> 0x1C & 0xF)))    // nybble 5
    , targetPosition(0.0f)
    , premoveDistance(0.0f)
    , premovePosition(0.0f)
    , startPosition(0.0f)
    , idleTimer(0)
    , moveEndTimer(0)
    , premoveDelayTimer(0)
{ }

Actor* GiantSkewer::build(const ActorBuildInfo* buildInfo)
{
    return new GiantSkewer(buildInfo);
}

u32 GiantSkewer::onCreate()
{
    startPosition = position.y;
    premovePosition = position.y - premoveDistance;

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    model = tsuru::createModel("daikonbouBig", "daikonbouBig");
    if (!model) {
        isDeleted = true;
        return 1;
    }

    doStateChange(&StateID_Idle);

    targetPosition = position.y + targetDistance;

    return onExecute();
}

u32 GiantSkewer::onExecute()
{
    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position);
    model->setMtx(mtx);
    model->setScale(scale);
    model->updateModel();

    states.execute();

    return 1;
}

u32 GiantSkewer::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

// Tsuru: player->vf8D4(this, DamageType::SingleHitBounce), the type-2 damage
// (tsuru::DamageType::HitKnock) through the player's setDamage.
bool GiantSkewer::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::damagePlayer(acOther->owner, acSelf->owner, tsuru::DamageType::HitKnock);
    return true;
}

// Nothing kills the skewer (bug F012). Enemy's deaths all set the pending flag _17F8 (the death
// record at +0x17D8, 0x602A852C), which Enemy::beforeExecute (0x602A1BC8) turns into the death
// state next frame; clearing it first cancels any of them, known or not. The overrides below
// only spare the kill's effects, sound and score.
u32 GiantSkewer::beforeExecute()
{
    _17F8 = 0;
    return Enemy::beforeExecute();
}

// The POW (Enemy::vf15C, 0x602A71D8) and a block hit from below.
void GiantSkewer::vf15C() { }
void GiantSkewer::damageFromUnder() { }

// Hammers and shells: attack 9, called with no damage-mask check (Enemy::vfE8, vf100).
bool GiantSkewer::collisionThrowableObject(ActiveCollider*, ActiveCollider*) { return true; }
// Yoshi's hammer, attack 19.
bool GiantSkewer::collisionHammer(ActiveCollider*, ActiveCollider*) { return true; }
// Attack 14 also reaches this with no mask check (Enemy::vf100).
bool GiantSkewer::collisionFireball(ActiveCollider*, ActiveCollider*) { return true; }
bool GiantSkewer::collisionPipeCannon(ActiveCollider*, ActiveCollider*) { return true; }

/** STATE: Idle */

void GiantSkewer::beginState_Idle()
{
    idleTimer = 0;
}

void GiantSkewer::executeState_Idle()
{
    if (idleTimer++ >= SKEWER_IDLE_FRAMES)
        doStateChange(&StateID_PreMove);
}

void GiantSkewer::endState_Idle() { }

/** STATE: PreMove */

void GiantSkewer::beginState_PreMove()
{
    tsuru::playSound("SE_OBJ_DAIKONBOU_L_SIGN", position);
}

void GiantSkewer::executeState_PreMove()
{
    rotation.y -= SKEWER_SPIN;

    if (tsuru::chase(&position.y, premovePosition, SKEWER_PREMOVE_SPEED))
        doStateChange(&StateID_Moving);
}

void GiantSkewer::endState_PreMove() { }

/** STATE: PreMoveDelay */

void GiantSkewer::beginState_PreMoveDelay()
{
    premoveDelayTimer = 0;
}

void GiantSkewer::executeState_PreMoveDelay()
{
    if (premoveDelayTimer++ >= SKEWER_DELAY_FRAMES)
        doStateChange(&StateID_Moving);
}

void GiantSkewer::endState_PreMoveDelay() { }

/** STATE: Moving */

void GiantSkewer::beginState_Moving() { }

void GiantSkewer::executeState_Moving()
{
    rotation.y += SKEWER_SPIN;

    if (tsuru::chase(&position.y, targetPosition, SKEWER_SLAM_SPEED))
        doStateChange(&StateID_MovingEnd);
}

void GiantSkewer::endState_Moving()
{
    AreaRumbleMgr::instance->rumble(SKEWER_RUMBLE, 1, 0, 0);
    tsuru::playSound("SE_OBJ_DAIKONBOU_L_LAND", position);
}

/** STATE: MovingEnd */

void GiantSkewer::beginState_MovingEnd()
{
    moveEndTimer = 0;
}

void GiantSkewer::executeState_MovingEnd()
{
    if (moveEndTimer++ >= SKEWER_END_FRAMES)
        doStateChange(&StateID_Retracting);
}

void GiantSkewer::endState_MovingEnd() { }

/** STATE: Retracting */

void GiantSkewer::beginState_Retracting() { }

void GiantSkewer::executeState_Retracting()
{
    rotation.y -= SKEWER_SPIN;

    if (tsuru::chase(&position.y, startPosition, SKEWER_RETRACT_SPEED))
        doStateChange(&StateID_Idle);
}

void GiantSkewer::endState_Retracting()
{
    tsuru::playSound("SE_OBJ_DAIKONBOU_L_REVERT_F", position);
}
