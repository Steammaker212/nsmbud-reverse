// para_bones.cpp -- the Para-Bones (sprite 745): a winged Dry Bones that flies
// up and down; knocked out of the air, it lands as a normal Dry Bones.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/parabones.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// the differences are the porting kit's renames (docs/TSURU_PORTING.md).
//
// Settings:
//   nybble 5      flight distance, in tiles (0: hovers)
//   nybble 6      wait at each end, in half seconds
//   nybble 7      1: starts by rising instead of lowering
//   nybble 8      horizontal (read, unused -- as in Tsuru)
//
// Models: nokonokoB (anim "flyA") and wing (anim "wing_kuri"); the Dry Bones it
// turns into needs karon, both Tsuru's archive list and the retail actor's.

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

// Tsuru RP_Jugemu_CloudDisapp (effectid.h).
constexpr s32 cEffect_CloudDisappear = 0x15B;

// The retail Dry Bones: Deluxe's sprite 137 builds profile 649 (the
// spriteToProfileList entry; Tsuru's Wii U ProfileID::DryBones is 648).
constexpr u32 cProfile_DryBones = 649;

class ParaBones : public Enemy
{
public:
    ParaBones(const ActorBuildInfo* buildInfo);
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

    ModelWrapper* model;
    ModelWrapper* wings;
    u32 timerIdleLowered;
    u32 timerIdleRaised;
    u32 timerLowering;
    u32 timerRising;
    u16 flyDistance;
    u16 idleTime;
    bool startRising;
    bool horizontal;

    static const ActiveCollider::Info sCollisionInfo;

    DECLARE_STATE(ParaBones, Lowering);
    DECLARE_STATE(ParaBones, IdleLowered);
    DECLARE_STATE(ParaBones, Rising);
    DECLARE_STATE(ParaBones, IdleRaised);
    DECLARE_STATE(ParaBones, Die);
};

CREATE_STATE(ParaBones, Lowering);
CREATE_STATE(ParaBones, IdleLowered);
CREATE_STATE(ParaBones, Rising);
CREATE_STATE(ParaBones, IdleRaised);
CREATE_STATE(ParaBones, Die);

// Tsuru's ActorInfo, field for field.
const ActorInfo paraBonesActorInfo = { 8, -16, 0, 16, 8, 16, 0, 0, 0, 0, 0 };

const Profile paraBonesProfile(&ParaBones::build, ProfileId::ParaBones, "ParaBones", &paraBonesActorInfo, 0);
PROFILE_RESOURCES(ProfileId::ParaBones, "nokonokoB", "karon", "wing");

// Tsuru's info as is (kind 3 already).
const ActiveCollider::Info ParaBones::sCollisionInfo = {
    {0.0f, 8.0f}, {8.0f, 12.0f}, 0, 3, 0, 0xFFFFFFFF, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

ParaBones::ParaBones(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , wings(nullptr)
    , timerIdleLowered(0)
    , timerIdleRaised(0)
    , timerLowering(0)
    , timerRising(0)
    , flyDistance(0)
    , idleTime(0)
    , startRising(buildInfo->settings1 >> 0x14 & 0xF)  // nybble 7
    , horizontal(buildInfo->settings1 >> 0x10 & 0xF)   // nybble 8
{ }

Actor* ParaBones::build(const ActorBuildInfo* buildInfo)
{
    return new ParaBones(buildInfo);
}

u32 ParaBones::onCreate()
{
    rotation.y = tsuru::Direction::toRotation[tsuru::Direction::Left] + 1000;

    model = tsuru::createModel("nokonokoB", "nokonokoB", 10);
    wings = tsuru::createModel("wing", "wing", 10);
    if (!model) {
        isDeleted = true;
        return 1;
    }
    tsuru::playSklAnim(model, "flyA");
    tsuru::playSklAnim(wings, "wing_kuri");     // Tsuru: or "wing_pata"

    aCollider.init(this, &sCollisionInfo, 0);
    addActiveColliders();

    flyDistance = 30 * (settings1 >> 0x1C & 0xF);  // nybble 5: 30 = 1 tile
    idleTime = 30 * (settings1 >> 0x18 & 0xF);     // nybble 6: 30 = 0.5 seconds

    speed.y = 0.0f;
    tsuru::gravity(this) = 0.0f;
    maxSpeed.y = 0.0f;

    if (flyDistance != 0)
        doStateChange(startRising ? &StateID_Rising : &StateID_Lowering);

    return onExecute();
}

u32 ParaBones::onExecute()
{
    handleGravity();
    handleSpeed();

    if (startRising) {
        if (timerRising >= flyDistance)
            speed.y = 0.0f;
        else
            timerRising += 1;
    } else {
        if (timerLowering >= flyDistance)
            speed.y = 0.0f;
        else
            timerLowering += 1;
    }

    states.execute();

    tsuru::placeModel(model, this);

    if (wings) {
        Mtx34 mtxWings;
        mtxWings.rotateAndTranslate(rotation, position + Vec3(0.0f, 8.0f, 0.0f));
        wings->setMtx(mtxWings);
        wings->setScale(scale);
        wings->updateModel();
        wings->updateAnimations();
    }

    return 1;
}

u32 ParaBones::onDraw()
{
    tsuru::drawModel(model);
    tsuru::drawModel(wings);
    return 1;
}

void ParaBones::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);

    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else if (hitType == tsuru::HitType::NormalJump || hitType == tsuru::HitType::SpinJump)
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
}

// Stomped from above; any other touch used to kill it too.
void ParaBones::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
}

bool ParaBones::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
    return true;
}

bool ParaBones::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    doStateChange(&StateID_Die);
    return true;
}

bool ParaBones::collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    Vec3 effectOrigin(position.x, position.y, 4500.0f);
    Vec3 effectScale(0.5f, 0.5f, 0.5f);
    Effect::spawn(cEffect_CloudDisappear, &effectOrigin, nullptr, &effectScale);
    isDeleted = true;
    return true;
}

bool ParaBones::collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return collisionSlide(acSelf, acOther);
}

bool ParaBones::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
    return true;
}

bool ParaBones::collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
    return true;
}

bool ParaBones::collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return collisionSlide(acSelf, acOther);
}

bool ParaBones::collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    acOther->owner->isDeleted = true;
    return true;
}

bool ParaBones::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    doStateChange(&StateID_Die);
    return true;
}

bool ParaBones::collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    acOther->owner->isDeleted = true;
    return true;
}

/** STATE: Lowering */

void ParaBones::beginState_Lowering()
{
    timerLowering = 0;
    tsuru::gravity(this) = -1.0f;
    maxSpeed.y = -1.0f;
}

void ParaBones::executeState_Lowering()
{
    if (timerLowering >= flyDistance / (startRising + 1u)) {
        speed.y = 0.0f;
        doStateChange(&StateID_IdleLowered);
    } else {
        timerLowering++;
    }
}

void ParaBones::endState_Lowering() { }

/** STATE: IdleLowered */

void ParaBones::beginState_IdleLowered()
{
    timerIdleLowered = 0;
    tsuru::gravity(this) = 0.0f;
    maxSpeed.y = 0.0f;
}

void ParaBones::executeState_IdleLowered()
{
    if (timerIdleLowered >= idleTime)
        doStateChange(&StateID_Rising);
    else
        timerIdleLowered++;
}

void ParaBones::endState_IdleLowered() { }

/** STATE: Rising */

void ParaBones::beginState_Rising()
{
    timerRising = 0;
    tsuru::gravity(this) = 0.0875f;
    maxSpeed.y = 1.0f;
}

void ParaBones::executeState_Rising()
{
    if (timerRising >= flyDistance / (!startRising + 1u)) {
        speed.y = 0.0f;
        doStateChange(&StateID_IdleRaised);
    } else {
        timerRising++;
    }
}

void ParaBones::endState_Rising() { }

/** STATE: IdleRaised */

void ParaBones::beginState_IdleRaised()
{
    timerIdleRaised = 0;
    tsuru::gravity(this) = 0.0f;
    maxSpeed.y = 0.0f;
}

void ParaBones::executeState_IdleRaised()
{
    if (timerIdleRaised >= idleTime)
        doStateChange(&StateID_Lowering);
    else
        timerIdleRaised++;
}

void ParaBones::endState_IdleRaised() { }

/** STATE: Die */

// Loses its wings: a retail Dry Bones takes its place.
void ParaBones::beginState_Die()
{
    removeActiveColliders();

    tsuru::spawnActor(cProfile_DryBones, position + Vec3(0.0f, -8.0f, 0.0f));
    isDeleted = true;
}

void ParaBones::executeState_Die() { }

void ParaBones::endState_Die() { }
