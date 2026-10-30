// cataquack.cpp -- the Cataquack (sprite 746): a duck that walks back and forth,
// charges a player in front of it, and flings whoever it touches high up.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/cataquack.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// the differences are the porting kit's renames (docs/TSURU_PORTING.md). Tsuru
// also builds a bouncy RectCollider it never adds to the ColliderMgr (the line
// is commented out there), so it does nothing; this port leaves it out.
//
// Settings: none. It charges a player within 8 tiles ahead (6 tiles up or
// down) and launches a player or Yoshi 8 tiles up.
//
// Model: poihana (Tsuru's archive), with the skeletal anims "walk" and "throw".

#include "actors/enemy.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

#define CATAQUACK_WALK_SPEED    0.5f
#define CATAQUACK_CHASE_SPEED   1.0f
#define CATAQUACK_SIGHT_X       (8.0f * 16.0f)
#define CATAQUACK_SIGHT_Y       (6.0f * 16.0f)
#define CATAQUACK_LAUNCH_HEIGHT 128.0f
#define CATAQUACK_GRAVITY       -0.1875f
#define CATAQUACK_FALL_SPEED    -4.0f

class Cataquack : public Enemy
{
public:
    Cataquack(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void beginChase();
    void endChase();
    void move();

    static const ActiveCollider::Info collisionInfo;
    static void collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther);

    ModelWrapper* model;
    bool chasing;

    StageActor* target;
    f32 targetInitialY;
    f32 launchHeight;

    DECLARE_STATE(Cataquack, Walk);
    DECLARE_STATE(Cataquack, Turn);
    DECLARE_STATE(Cataquack, Launch);
};

CREATE_STATE(Cataquack, Walk);
CREATE_STATE(Cataquack, Turn);
CREATE_STATE(Cataquack, Launch);

// Tsuru's ActorInfo, field for field (codedx's ActorInfo has the same layout).
const ActorInfo cataquackActorInfo = { 8, -8, 8, -8, 32, 32, 0, 0, 0, 0, 0 };

// Tsuru's Profile::Flags::DontRenderOffScreen.
constexpr u32 cProfileFlag_DontRenderOffScreen = 1 << 1;

const Profile cataquackProfile(&Cataquack::build, ProfileId::Cataquack, "Cataquack", &cataquackActorInfo, cProfileFlag_DontRenderOffScreen);
PROFILE_RESOURCES(ProfileId::Cataquack, "poihana");

// Tsuru's info as is (kind 3 already). It never hurts: touching it only launches.
const ActiveCollider::Info Cataquack::collisionInfo = {
    {0.0f, 14.0f}, {11.0f, 14.0f}, 0, 3, 0, 0xFFFFFFFF, 0xFFFBFFFF, 0, &Cataquack::collisionCallback
};

const CollisionMgr::Sensor cCataquackBelow = { -6.0f,  6.0f,  0.0f };
const CollisionMgr::Sensor cCataquackAbove = { -6.0f,  6.0f, 28.0f };
const CollisionMgr::Sensor cCataquackSides = {  8.0f, 24.0f, 12.0f };

Cataquack::Cataquack(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , chasing(false)
    , target(nullptr)
    , targetInitialY(0.0f)
    , launchHeight(CATAQUACK_LAUNCH_HEIGHT)
{ }

Actor* Cataquack::build(const ActorBuildInfo* buildInfo)
{
    return new Cataquack(buildInfo);
}

u32 Cataquack::onCreate()
{
    model = tsuru::createModel("poihana", "poihana", 3);
    if (!model) {
        isDeleted = true;
        return 1;
    }
    // Tsuru shrinks the model here (0.1). The Deluxe conversion has that scale baked in
    // (port_tsuru_models.py --bake-scale 0.1): drawn shrunk, the borrowed enemy program lit it
    // black (docs/WIIU_MODELS.md). So it is drawn at scale 1.
    scale = Vec3(1.0f, 1.0f, 1.0f);
    tsuru::playSklAnim(model, "walk", true);

    collisionMgr.init(this, &cCataquackBelow, &cCataquackAbove, &cCataquackSides);
    tsuru::gravity(this) = CATAQUACK_GRAVITY;
    maxSpeed.y = CATAQUACK_FALL_SPEED;

    direction = directionToPlayerH(position);
    rotation.y = tsuru::Direction::toRotation[direction];

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    doStateChange(&StateID_Walk);

    return onExecute();
}

u32 Cataquack::onExecute()
{
    // Stop the flung player once it is high enough.
    if (target != nullptr) {
        if (target->position.y > targetInitialY + launchHeight) {
            target->speed.y *= 0.3f;
            target = nullptr;
        }
    }

    states.execute();

    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position + Vec3(0.0f, 20.0f, 0.0f));
    model->setMtx(mtx);
    model->setScale(scale);
    model->updateAnimations();
    model->updateModel();

    tsuru::offscreenDelete(this, 0);

    return 1;
}

u32 Cataquack::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

void Cataquack::beginChase()
{
    chasing    = true;
    speed.x    = direction == tsuru::Direction::Left ? -CATAQUACK_CHASE_SPEED : CATAQUACK_CHASE_SPEED;
    maxSpeed.x = speed.x;
    if (model->sklAnims.count > 0)
        model->sklAnims[0]->speed = 2.0f;
}

void Cataquack::endChase()
{
    chasing    = false;
    speed.x    = direction == tsuru::Direction::Left ? -CATAQUACK_WALK_SPEED : CATAQUACK_WALK_SPEED;
    maxSpeed.x = speed.x;
    if (model->sklAnims.count > 0)
        model->sklAnims[0]->speed = 1.0f;
}

// Tsuru's handleGravity, handleSpeed, processCollisions, ground check.
void Cataquack::move()
{
    handleGravity();
    handleSpeed();
    collisionMgr.process();
    if (collisionMgr.isOnGround())
        speed.y = 0.0f;
}

/** STATE: Walk */

void Cataquack::beginState_Walk()
{
    f32 walkSpeed = chasing ? CATAQUACK_CHASE_SPEED : CATAQUACK_WALK_SPEED;
    speed.x    = direction == tsuru::Direction::Left ? -walkSpeed : walkSpeed;
    maxSpeed.x = speed.x;
}

void Cataquack::executeState_Walk()
{
    move();

    Vec2 distToPlayer;
    if (distanceToPlayer(distToPlayer) > -1 && fabs(distToPlayer.x) < CATAQUACK_SIGHT_X && fabs(distToPlayer.y) < CATAQUACK_SIGHT_Y) {
        if ((direction == tsuru::Direction::Left && distToPlayer.x < 0) || (direction == tsuru::Direction::Right && distToPlayer.x > 0))
            beginChase();

        if (chasing) {
            if ((direction == tsuru::Direction::Left && distToPlayer.x > 0) || (direction == tsuru::Direction::Right && distToPlayer.x < 0))
                doStateChange(&StateID_Turn);
        }
    } else {
        endChase();
    }

    if (collisionMgr.isCollided(direction) && !chasing)
        doStateChange(&StateID_Turn);
}

void Cataquack::endState_Walk() { }

/** STATE: Turn */

void Cataquack::beginState_Turn()
{
    direction ^= 1;
    speed.x    = 0.0f;
    maxSpeed.x = 0.0f;
}

void Cataquack::executeState_Turn()
{
    move();

    u32 step = chasing ? tsuru::deg2idx(6.0f) : tsuru::deg2idx(3.0f);
    if (tsuru::moveValueWithOverflowTo(rotation.y, tsuru::Direction::toRotation[direction], step, direction))
        doStateChange(&StateID_Walk);
}

void Cataquack::endState_Turn()
{
    rotation.y = tsuru::Direction::toRotation[direction];
}

/** STATE: Launch */

void Cataquack::beginState_Launch()
{
    direction = directionToPlayerH(position);
    rotation.y = tsuru::Direction::toRotation[direction];

    tsuru::playSklAnim(model, "throw", false);
    speed.x = 0.0f;
    target->speed.y = 1.0f + launchHeight / 14.0f;

    tsuru::playSound("SE_PLY_RIDE_CLOUD", position);
}

void Cataquack::executeState_Launch()
{
    move();

    if (tsuru::sklAnimDone(model))
        doStateChange(&StateID_Walk);
}

void Cataquack::endState_Launch()
{
    tsuru::playSklAnim(model, "walk", true);
}

void Cataquack::collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (acOther->owner->type != 1 && acOther->owner->type != 2)    // player, Yoshi
        return;

    Cataquack* self = static_cast<Cataquack*>(acSelf->owner);

    self->target = acOther->owner;
    self->targetInitialY = self->target->position.y;
    self->doStateChange(&StateID_Launch);
}
