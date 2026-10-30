// scuttlebug.cpp -- the Scuttlebug (sprite 754): a spider that hangs on a
// thread, lowering and raising itself.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/scuttlebug.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Besides the
// porting kit's renames (docs/TSURU_PORTING.md), it starts and runs its state
// machine, which Tsuru's never did (it hung in place, and its stomp death never
// began).
//
// Settings:
//   nybble 5      how far it lowers, in tiles
//   nybble 6      how long it waits at each end, in half seconds
//
// Model: gasagoso (Tsuru's archive), models "gasagoso" (anim "walk") and
// "string".

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

// Tsuru RP_Jugemu_CloudDisapp (effectid.h).
constexpr s32 cEffect_CloudDisappear = 0x15B;

class Scuttlebug : public Enemy
{
public:
    Scuttlebug(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    ModelWrapper* string;
    u32 timerIdleLowered;
    u32 timerIdleRaised;
    u32 timerLowering;
    u32 timerRising;
    u16 moveDistance;
    u16 idleTime;

    DECLARE_STATE(Scuttlebug, Lowering);
    DECLARE_STATE(Scuttlebug, IdleLowered);
    DECLARE_STATE(Scuttlebug, Rising);
    DECLARE_STATE(Scuttlebug, IdleRaised);
    DECLARE_STATE(Scuttlebug, Die);
};

CREATE_STATE(Scuttlebug, Lowering);
CREATE_STATE(Scuttlebug, IdleLowered);
CREATE_STATE(Scuttlebug, Rising);
CREATE_STATE(Scuttlebug, IdleRaised);
CREATE_STATE(Scuttlebug, Die);

const Profile scuttlebugProfile(&Scuttlebug::build, ProfileId::Scuttlebug, "Scuttlebug", nullptr, 0);
PROFILE_RESOURCES(ProfileId::Scuttlebug, "gasagoso");

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info Scuttlebug::collisionInfo = {
    {0.0f, -4.0f}, {16.0f, 16.0f}, 0, 3, 0, 0xFFFFFFFF, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

Scuttlebug::Scuttlebug(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , string(nullptr)
    , timerIdleLowered(0)
    , timerIdleRaised(0)
    , timerLowering(0)
    , timerRising(0)
    , moveDistance(0)
    , idleTime(0)
{ }

Actor* Scuttlebug::build(const ActorBuildInfo* buildInfo)
{
    return new Scuttlebug(buildInfo);
}

u32 Scuttlebug::onCreate()
{
    rotation.x = tsuru::deg2idx(90.0f);
    rotation.y = 0;
    rotation.z = 0;

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    moveDistance = 30 * (settings1 >> 0x1C & 0xF);     // nybble 5: 30 = 1 tile
    idleTime = 30 * (settings1 >> 0x18 & 0xF);         // nybble 6: 30 = 0.5 seconds

    speed.y = 0.0f;
    tsuru::gravity(this) = 0.0f;
    maxSpeed.y = 0.0f;

    model = tsuru::createModel("gasagoso", "gasagoso", 1);
    string = tsuru::createModel("gasagoso", "string");
    if (!model) {
        isDeleted = true;
        return 1;
    }

    tsuru::playSklAnim(model, "walk");

    if (moveDistance != 0)
        doStateChange(&StateID_Lowering);

    return onExecute();
}

u32 Scuttlebug::onExecute()
{
    states.execute();

    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position);
    model->setMtx(mtx);
    model->setScale(scale * 2.5f);
    model->updateModel();
    model->updateAnimations();

    if (string) {
        string->setMtx(mtx);
        string->setScale(scale * 2.5f);
        string->updateModel();
    }

    handleGravity();
    handleSpeed();

    return 1;
}

u32 Scuttlebug::onDraw()
{
    tsuru::drawModel(model);
    tsuru::drawModel(string);
    return 1;
}

void Scuttlebug::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);

    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else if (hitType == tsuru::HitType::NormalJump || hitType == tsuru::HitType::SpinJump)
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
}

void Scuttlebug::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
}

bool Scuttlebug::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return collisionStar(acSelf, acOther);
}

bool Scuttlebug::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    Vec3 effectPos(position.x, position.y, 4500.0f);
    Effect::spawn(cEffect_CloudDisappear, &effectPos, nullptr, &scale);

    isDeleted = true;
    return true;
}

bool Scuttlebug::collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther)            { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther)     { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther)   { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther)  { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther)         { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)          { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)    { return collisionFireball(acSelf, acOther); }

/** STATE: Lowering */

void Scuttlebug::beginState_Lowering()
{
    timerLowering = 0;
    tsuru::gravity(this) = -1.0f;
    maxSpeed.y = -1.0f;
}

void Scuttlebug::executeState_Lowering()
{
    if (timerLowering >= moveDistance / 2u) {
        speed.y = 0.0f;
        doStateChange(&StateID_IdleLowered);
    } else {
        timerLowering++;
    }
}

void Scuttlebug::endState_Lowering() { }

/** STATE: IdleLowered */

void Scuttlebug::beginState_IdleLowered()
{
    timerIdleLowered = 0;
    tsuru::gravity(this) = 0.0f;
    maxSpeed.y = 0.0f;
}

void Scuttlebug::executeState_IdleLowered()
{
    if (timerIdleLowered >= idleTime)
        doStateChange(&StateID_Rising);
    else
        timerIdleLowered++;
}

void Scuttlebug::endState_IdleLowered() { }

/** STATE: Rising */

void Scuttlebug::beginState_Rising()
{
    timerRising = 0;
    tsuru::gravity(this) = 0.0875f;
    maxSpeed.y = 1.0f;
}

void Scuttlebug::executeState_Rising()
{
    if (timerRising >= moveDistance / 2u) {
        speed.y = 0.0f;
        doStateChange(&StateID_IdleRaised);
    } else {
        timerRising++;
    }
}

void Scuttlebug::endState_Rising() { }

/** STATE: IdleRaised */

void Scuttlebug::beginState_IdleRaised()
{
    timerIdleRaised = 0;
    tsuru::gravity(this) = 0.0f;
    maxSpeed.y = 0.0f;
}

void Scuttlebug::executeState_IdleRaised()
{
    if (timerIdleRaised >= idleTime)
        doStateChange(&StateID_Lowering);
    else
        timerIdleRaised++;
}

void Scuttlebug::endState_IdleRaised() { }

/** STATE: Die */

void Scuttlebug::beginState_Die()
{
    removeActiveColliders();
    isDeleted = true;
}

void Scuttlebug::executeState_Die() { }

void Scuttlebug::endState_Die() { }
