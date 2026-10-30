// floaty_goomba.cpp -- the Floaty Goomba (sprite 748): a Goomba riding a float
// that bobs in the air and drifts after the player.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/floatygoomba.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// besides the porting kit's renames (docs/TSURU_PORTING.md), onExecute runs the
// state machine, which Tsuru's never did (its stomp state never began).
//
// Settings:
//   nybble 3      1: only the float (a bouncy cloud you can jump on), no Goomba
//
// Models: ukibofloat (the float) and kuribo (the retail Goomba, anim "hikkuri").
// Stomping the Goomba leaves the float behind, which bounces players up; a
// ground pound pops it.

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

// Tsuru RP_Balloon_Burst_0 (effectid.h).
constexpr s32 cEffect_BalloonBurst = 0x1B8;

#define FLOATYGOOMBA_BOUNCE         4.0f    // a player's speed.y off the float
#define FLOATYGOOMBA_CHASE_RANGE    (6.0f * 16.0f)

class FloatyGoomba : public Enemy
{
public:
    FloatyGoomba(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    bool collisionIceball(ActiveCollider*, ActiveCollider*) override { return false; }

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    void bounce(StageActor* player);

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* floaty;
    ModelWrapper* model;
    f32 t;
    bool onlyFloaty;

    DECLARE_STATE(FloatyGoomba, Die);
};

CREATE_STATE(FloatyGoomba, Die);

const Profile floatyGoombaProfile(&FloatyGoomba::build, ProfileId::FloatyGoomba, "FloatyGoomba", nullptr, 0);
PROFILE_RESOURCES(ProfileId::FloatyGoomba, "ukibofloat", "kuribo");

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info FloatyGoomba::collisionInfo = {
    {0.0f, 0.0f}, {10.0f, 10.0f}, 0, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

FloatyGoomba::FloatyGoomba(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , floaty(nullptr)
    , model(nullptr)
    , t(0.0f)
    , onlyFloaty(buildInfo->eventId1 >> 0x4 & 0x1)     // nybble 3
{ }

Actor* FloatyGoomba::build(const ActorBuildInfo* buildInfo)
{
    return new FloatyGoomba(buildInfo);
}

u32 FloatyGoomba::onCreate()
{
    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    floaty = tsuru::createModel("ukibofloat", "ukibofloat");
    if (!floaty) {
        isDeleted = true;
        return 1;
    }

    if (!onlyFloaty) {
        model = tsuru::createModel("kuribo", "kuribo", 1);
        tsuru::playSklAnim(model, "hikkuri");
    }

    return onExecute();
}

u32 FloatyGoomba::onExecute()
{
    states.execute();

    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position);
    floaty->setMtx(mtx);
    floaty->setScale(Vec3(0.17f, 0.17f, 0.17f));
    floaty->updateModel();

    if (model) {
        mtx.rotateAndTranslate(rotation, position + Vec3(0.0f, -2.25f, 0.0f));
        model->setMtx(mtx);
        model->setScale(scale);
        model->updateModel();
        model->updateAnimations();
    }

    // Bob up and down
    position.y += sin(++t * 0.025f) * 0.07f;

    if (!onlyFloaty && model) {
        direction = directionToPlayerH(position);

        Vec2 d2p = tsuru::distanceToPlayer(this);
        if (d2p.mag() > FLOATYGOOMBA_CHASE_RANGE) {
            tsuru::chase(&rotation.y, 0, tsuru::deg2idx(1.25f));
        } else {
            tsuru::chase(&rotation.y, tsuru::Direction::toRotation[direction], tsuru::deg2idx(2.5f));
            tsuru::chase(&position.x, d2p.x + position.x, 0.25f);
        }
    }

    return 1;
}

u32 FloatyGoomba::onDraw()
{
    tsuru::drawModel(model);
    tsuru::drawModel(floaty);
    return 1;
}

void FloatyGoomba::bounce(StageActor* player)
{
    player->speed.y = FLOATYGOOMBA_BOUNCE;
    tsuru::playSound("SE_PLY_RIDE_CLOUD", position);
}

void FloatyGoomba::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (onlyFloaty || (model == nullptr && acOther->owner->position.y - position.y > 0.0f)) {
        bounce(acOther->owner);
        return;
    }

    u32 hit = processCollision(acSelf, acOther, 0);

    if (hit == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
}

// As a player: he stomps the Goomba and the float stays, and then he bounces on the float.
void FloatyGoomba::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
}

bool FloatyGoomba::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (onlyFloaty) {
        bounce(acOther->owner);
        return false;
    }

    if (model) {
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
        return false;
    }

    isDeleted = true;
    Effect::spawn(cEffect_BalloonBurst, &position, &rotation, &scale);
    return false;
}

/** STATE: Die */

// The Goomba is gone; the float stays, a little wider and flatter.
void FloatyGoomba::beginState_Die()
{
    if (eventId1 >> 0x4 & 0x1) {
        isDeleted = true;
        return;
    }

    model = nullptr;

    aCollider.info.distToEdge.y /= 1.5f;
    aCollider.info.distToEdge.x++;
}

void FloatyGoomba::executeState_Die() { }

void FloatyGoomba::endState_Die() { }
