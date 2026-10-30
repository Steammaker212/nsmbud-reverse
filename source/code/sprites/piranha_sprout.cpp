// piranha_sprout.cpp -- the Piranha Sprout (sprite 752): a small plant that
// lobs seed bombs in an arc toward the player.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/piranhasprout.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// besides the porting kit's renames (docs/TSURU_PORTING.md), the model is a
// plain ModelWrapper: Tsuru's BlendingModel cross-fades between anims (and so
// reads its frames from anim slot 1); here they switch at once, in slot 0.
//
// Settings:
//   nybble 3      1: upside down (on a ceiling); the bombs arc downward
//
// Models: nukunuku (anims "Wait", "AttackSign", "PullOut"; bone "Crest" carries
// the hitbox) and nukubomb (the bomb).

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/costume.h"
#include "modbase/tsuru.h"

// Tsuru RP_Jugemu_CloudDisapp and RP_Block_break_chika (effectid.h).
constexpr s32 cEffect_CloudDisappear = 0x15B;
constexpr s32 cEffect_BlockBreak = 0x47B;

#define SPROUT_IDLE_FRAMES      360
#define SPROUT_THROW_FRAME      39.0f   // of "AttackSign": the bomb leaves
#define SPROUT_ATTACK_FRAMES    20

class PiranhaSproutProjectile : public Enemy
{
public:
    PiranhaSproutProjectile(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    bool collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    u32 die();

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    Vec2 baseline;
};

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why). Shape 1: circle.
const ActiveCollider::Info PiranhaSproutProjectile::collisionInfo = {
    {0.0f, 0.0f}, {5.0f, 5.0f}, 1, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

class PiranhaSprout : public Enemy
{
public:
    PiranhaSprout(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    ModelWrapper* model;
    u32 timer;

    static const ActiveCollider::Info collisionInfo;

    DECLARE_STATE(PiranhaSprout, Idle);
    DECLARE_STATE(PiranhaSprout, Attack);
    DECLARE_STATE(PiranhaSprout, Die);
};

CREATE_STATE(PiranhaSprout, Idle);
CREATE_STATE(PiranhaSprout, Attack);
CREATE_STATE(PiranhaSprout, Die);

const Profile piranhaSproutProfile(&PiranhaSprout::build, ProfileId::PiranhaSprout, "PiranhaSprout", nullptr, 0);
PROFILE_RESOURCES(ProfileId::PiranhaSprout, "nukunuku", "nukubomb");

const Profile piranhaSproutProjectileProfile(&PiranhaSproutProjectile::build, ProfileId::PiranhaSproutProjectile, "PiranhaSproutProjectile", nullptr, 0);

const ActiveCollider::Info PiranhaSprout::collisionInfo = {
    {0.0f, 0.0f}, {12.0f, 4.0f}, 0, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

PiranhaSprout::PiranhaSprout(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , timer(0)
{ }

Actor* PiranhaSprout::build(const ActorBuildInfo* buildInfo)
{
    return new PiranhaSprout(buildInfo);
}

u32 PiranhaSprout::onCreate()
{
    scale = Vec3(0.17f, 0.17f, 0.17f);
    position.x += 8.0f;
    position.z -= 4000.0f;
    direction = directionToPlayerH(position);

    if (eventId1 >> 0x4 & 0x1) {   // nybble 3: upside down
        rotation.z = tsuru::deg2idx(180.0f);
        rotation.y = tsuru::Direction::toRotation[!direction];
    } else {
        rotation.y = tsuru::Direction::toRotation[direction];
    }

    model = tsuru::createModel("nukunuku", "nukunuku", 2);
    if (!model) {
        isDeleted = true;
        return 1;
    }

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    doStateChange(&StateID_Idle);

    return onExecute();
}

u32 PiranhaSprout::onExecute()
{
    states.execute();

    tsuru::placeModel(model, this);

    // The hitbox follows the head ("Crest" bone).
    Mtx34 mtx;
    if (ModBase::costume::boneMatrix(model, "Crest", &mtx)) {
        Vec3 bonePos(mtx.rows[0][3], mtx.rows[1][3], mtx.rows[2][3]);
        const f32 sign = eventId1 >> 0x4 & 0x1 ? -1.0f : 1.0f;
        aCollider.info.distToCenter = Vec2(bonePos.x - position.x, bonePos.y - position.y - (6.5f * sign));
    }

    return 1;
}

u32 PiranhaSprout::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

void PiranhaSprout::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);

    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else if (hitType == tsuru::HitType::NormalJump || hitType == tsuru::HitType::SpinJump)
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
}

// Yoshi bounces off it.
void PiranhaSprout::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::yoshiBounce(this, acSelf, acOther);
}

bool PiranhaSprout::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return false;
}

/** STATE: Idle */

void PiranhaSprout::beginState_Idle()
{
    timer = SPROUT_IDLE_FRAMES;
    tsuru::setSklAnim(model, "Wait", 10.0f, true);
}

void PiranhaSprout::executeState_Idle()
{
    if (timer > 0)
        timer--;
    else
        doStateChange(&StateID_Attack);
}

void PiranhaSprout::endState_Idle() { }

/** STATE: Attack */

void PiranhaSprout::beginState_Attack()
{
    tsuru::setSklAnim(model, "AttackSign", 10.0f, false);
    timer = SPROUT_ATTACK_FRAMES;
}

void PiranhaSprout::executeState_Attack()
{
    if (tsuru::sklAnimFrame(model) >= SPROUT_THROW_FRAME && timer == SPROUT_ATTACK_FRAMES) {
        bool upsideDown = eventId1 >> 0x4 & 0x1;
        Vec3 spawnPos = position + Vec3(direction == tsuru::Direction::Right ? 14.0f : -14.0f, upsideDown ? 16.0f : -16.0f, 4000.0f);

        StageActor* bomb = tsuru::spawnActor(ProfileId::PiranhaSproutProjectile, spawnPos, 0, eventId1);
        if (bomb)
            bomb->direction = direction;

        timer--;
    }

    if (timer < SPROUT_ATTACK_FRAMES)
        timer--;

    if (timer == 0)
        doStateChange(&StateID_Idle);
}

void PiranhaSprout::endState_Attack() { }

/** STATE: Die */

void PiranhaSprout::beginState_Die()
{
    tsuru::setSklAnim(model, "PullOut", 4.0f, false);
    removeActiveColliders();
}

void PiranhaSprout::executeState_Die()
{
    if (tsuru::sklAnimFrame(model) / tsuru::sklAnimEnd(model) >= 0.5f) {
        Vec3 effectPos(position.x, position.y, 4500.0f);
        Vec3 effectScale(0.5f, 0.5f, 0.5f);
        Effect::spawn(cEffect_CloudDisappear, &effectPos, nullptr, &effectScale);
        isDeleted = true;
    }
}

void PiranhaSprout::endState_Die() { }

/** PROJECTILE: */

const CollisionMgr::Sensor cBombBelow = { -4.0f, 4.0f, -7.0f };
const CollisionMgr::Sensor cBombSides = { -4.0f, 4.0f,  7.0f };
const CollisionMgr::Sensor cBombAbove = { -4.0f, 4.0f,  7.0f };

PiranhaSproutProjectile::PiranhaSproutProjectile(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , baseline(buildInfo->position.x, buildInfo->position.y)
{ }

Actor* PiranhaSproutProjectile::build(const ActorBuildInfo* buildInfo)
{
    return new PiranhaSproutProjectile(buildInfo);
}

u32 PiranhaSproutProjectile::onCreate()
{
    scale = Vec3(0.17f, 0.17f, 0.17f);
    position.x += 8.0f;
    position.z -= 4000.0f;

    model = tsuru::createModel("nukubomb", "nukubomb");

    collisionMgr.init(this, &cBombBelow, &cBombAbove, &cBombSides);

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    return onExecute();
}

u32 PiranhaSproutProjectile::onExecute()
{
    rotation.z += tsuru::deg2idx((1.0f / (fabs(position.y - baseline.y) / 10.0f)) * 16.0f);

    const f32 widthFraction = 3.0f / 20.0f;
    const f32 arcHeight = 16.0f * 3;
    const f32 sign = direction == tsuru::Direction::Right ? 1.0f : -1.0f;

    // Parabola arc
    position.x += sign;
    f32 arc = pow(widthFraction * ((position.x - baseline.x) + (arcHeight * -sign)), 2.0f);
    if (eventId1 >> 0x4 & 0x1)
        position.y = arc + baseline.y - 2.0f * arcHeight;
    else
        position.y = -arc + baseline.y + 2.0f * arcHeight;

    collisionMgr.process();
    if (collisionMgr.isCollidedLeft() || collisionMgr.isCollidedRight() || collisionMgr.isOnGround())
        return die();

    if (model) {
        Mtx34 mtx;
        mtx.rotateAndTranslate(rotation, position);
        model->setMtx(mtx);
        model->setScale(scale);
        model->updateModel();
    }

    return 1;
}

u32 PiranhaSproutProjectile::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

bool PiranhaSproutProjectile::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    acOther->owner->isDeleted = true;
    return false;
}

u32 PiranhaSproutProjectile::die()
{
    Effect::spawn(cEffect_BlockBreak, &position, nullptr, nullptr);
    isDeleted = true;
    return 1;
}
