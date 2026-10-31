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
#include "modbase/yoshi.h"
#include "modbase/tumble_death.h"

// Tsuru RP_Block_break_chika (effectid.h).
constexpr s32 cEffect_BlockBreak = 0x47B;

#define SPROUT_IDLE_FRAMES      150     // between throws, once a player is in range
#define SPROUT_ATTACK_RANGE     (24.0f * 16.0f)
#define SPROUT_SCAN_DEGREES     24.0f   // how far it looks either way
#define SPROUT_SCAN_SPEED       0.035f  // radians a frame
#define SPROUT_TURN_DEGREES     3.0f    // a frame, toward the player
#define SPROUT_THROW_FRAME      39.0f   // of "AttackSign": the bomb leaves
#define SPROUT_ATTACK_FRAMES    20

// The bomb's arc always takes this long to come back to its height, so it reaches a far
// player by flying faster, up to the top speed (21 tiles).
#define SPROUT_BOMB_FRAMES      105.0f
#define SPROUT_BOMB_MIN_SPEED   1.0f
#define SPROUT_BOMB_MAX_SPEED   3.0f
#define SPROUT_BOMB_START_RISE  60.0f   // 2 x 48 up, less the 36 of the arc at travel 8

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
    f32 travel;     // frames along the arc
    f32 reach;      // units a frame
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

    void vf228() override;      // Enemy's EatOut: Yoshi spat it out

    void scan();

    ModelWrapper* model;
    u32 timer;
    ::yoshi::EatData eatData;
    f32 modelOffsetY;           // keeps the head from jumping when the anim changes
    f32 lastCrestY;             // the "Crest" bone as drawn last frame
    bool crestKnown;
    bool animChanged;
    ModBase::TumbleDeath tumble;
    u32 facing;                 // the yaw it faces; the scan swings around it
    f32 scanPhase;
    f32 scanAmount;             // 1 scanning, 0 looking straight (throwing)

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
    , modelOffsetY(0.0f)
    , lastCrestY(0.0f)
    , crestKnown(false)
    , animChanged(false)
    , facing(0)
    , scanPhase(0.0f)
    , scanAmount(1.0f)
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

    facing = rotation.y;

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();
    ModBase::yoshi::makeEdible(this, &eatData);

    tumble.sound = "SE_EMY_PAKKUN_DOWN";
    doStateChange(&StateID_Idle);

    return onExecute();
}

// The model is drawn modelOffsetY above the actor, which stays where it is.
static void placeSprout(ModelWrapper* model, StageActor* actor, f32 offsetY)
{
    const f32 y = actor->position.y;
    actor->position.y += offsetY;
    tsuru::placeModel(model, actor);
    actor->position.y = y;
}

u32 PiranhaSprout::onExecute()
{
    if (tumble.execute(this)) {
        placeSprout(model, this, modelOffsetY);
        return 1;
    }

    states.execute();
    scan();

    placeSprout(model, this, modelOffsetY);

    // The hitbox follows the head ("Crest" bone).
    Mtx34 mtx;
    if (ModBase::costume::boneMatrix(model, "Crest", &mtx)) {
        Vec3 bonePos(mtx.rows[0][3], mtx.rows[1][3], mtx.rows[2][3]);

        // Tsuru cross-fades between anims. They switch at once here, and "AttackSign" starts with
        // the head about a tile higher than "Wait" leaves it: the offset cancels that jump for the
        // whole throw, and Idle lets it go gradually.
        if (animChanged && crestKnown) {
            f32 jump = lastCrestY - bonePos.y;
            modelOffsetY += jump;
            bonePos.y += jump;
            placeSprout(model, this, modelOffsetY);
        }
        animChanged = false;
        lastCrestY = bonePos.y;
        crestKnown = true;

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

// It stays where it is and looks from side to side around where it faces, which turns toward
// the nearest player. The throw looks straight at them.
void PiranhaSprout::scan()
{
    bool upsideDown = eventId1 >> 0x4 & 0x1;
    u8 toPlayer = directionToPlayerH(position);
    tsuru::chase(&facing, tsuru::Direction::toRotation[upsideDown ? !toPlayer : toPlayer], tsuru::deg2idx(SPROUT_TURN_DEGREES));

    bool throwing = states.currentState() == &StateID_Attack;
    tsuru::chase(&scanAmount, throwing ? 0.0f : 1.0f, 0.04f);
    if (!ModBase::yoshi::beingEaten(eatData)) {
        scanPhase += SPROUT_SCAN_SPEED;
        rotation.y = facing + tsuru::deg2idx(SPROUT_SCAN_DEGREES * scanAmount * sin(scanPhase));
    }
}

// As a player: Yoshi's stomp kills it.
void PiranhaSprout::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
}

// Falls through to collisionYoshi.
bool PiranhaSprout::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return false;
}

// Enemy's EatOut does nothing (0x602A972C), and a plant has nowhere to go back to.
void PiranhaSprout::vf228()
{
    tumble.begin(this, 0.5f);
}

/** STATE: Idle */

void PiranhaSprout::beginState_Idle()
{
    timer = SPROUT_IDLE_FRAMES;
    tsuru::setSklAnim(model, "Wait", 10.0f, true);
    animChanged = true;
}

void PiranhaSprout::executeState_Idle()
{
    tsuru::chase(&modelOffsetY, 0.0f, 0.5f);

    if (timer > 0)
        timer--;
    else if (tsuru::distanceToPlayer(this).mag() <= SPROUT_ATTACK_RANGE)
        doStateChange(&StateID_Attack);
}

void PiranhaSprout::endState_Idle() { }

/** STATE: Attack */

void PiranhaSprout::beginState_Attack()
{
    tsuru::setSklAnim(model, "AttackSign", 10.0f, false);
    timer = SPROUT_ATTACK_FRAMES;
    direction = directionToPlayerH(position);
    animChanged = true;
}

void PiranhaSprout::executeState_Attack()
{
    if (tsuru::sklAnimFrame(model) >= SPROUT_THROW_FRAME && timer == SPROUT_ATTACK_FRAMES) {
        // It leaves from the mouth, which is where the hitbox is, under the "Crest" bone.
        bool upsideDown = eventId1 >> 0x4 & 0x1;
        const f32 ahead = direction == tsuru::Direction::Right ? 6.0f : -6.0f;
        Vec3 mouth = position + Vec3(ahead, upsideDown ? -20.0f : 20.0f, 0.0f);
        Mtx34 crest;
        if (ModBase::costume::boneMatrix(model, "Crest", &crest)) {
            mouth.x = crest.rows[0][3] + ahead;
            mouth.y = crest.rows[1][3] + (upsideDown ? 6.5f : -6.5f);
        }
        Vec3 spawnPos(mouth.x, mouth.y, position.z + 4000.0f);
        tsuru::playSound("SE_EMY_KANIBO_THROW", position);

        StageActor* bomb = tsuru::spawnActor(ProfileId::PiranhaSproutProjectile, spawnPos, 0, eventId1);
        if (bomb) {
            bomb->direction = direction;
            f32 distance = fabs(tsuru::distanceToPlayer(this).x);
            f32 reach = distance / SPROUT_BOMB_FRAMES;
            static_cast<PiranhaSproutProjectile*>(bomb)->reach =
                reach < SPROUT_BOMB_MIN_SPEED ? SPROUT_BOMB_MIN_SPEED : reach > SPROUT_BOMB_MAX_SPEED ? SPROUT_BOMB_MAX_SPEED : reach;
        }

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
    tumble.begin(this, 0.5f);
}

void PiranhaSprout::executeState_Die() { }

void PiranhaSprout::endState_Die() { }

/** PROJECTILE: */

const CollisionMgr::Sensor cBombBelow = { -4.0f, 4.0f, -7.0f };
const CollisionMgr::Sensor cBombSides = { -4.0f, 4.0f,  7.0f };
const CollisionMgr::Sensor cBombAbove = { -4.0f, 4.0f,  7.0f };

PiranhaSproutProjectile::PiranhaSproutProjectile(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    // The arc is its height over this, which it starts SPROUT_BOMB_START_RISE above. It must not
    // be spawned there: the line from there to the mouth runs through the ground.
    , baseline(buildInfo->position.x, buildInfo->position.y + (buildInfo->eventId1 >> 0x4 & 0x1 ? SPROUT_BOMB_START_RISE : -SPROUT_BOMB_START_RISE))
    , travel(8.0f)
    , reach(SPROUT_BOMB_MIN_SPEED)
{ }

Actor* PiranhaSproutProjectile::build(const ActorBuildInfo* buildInfo)
{
    return new PiranhaSproutProjectile(buildInfo);
}

u32 PiranhaSproutProjectile::onCreate()
{
    scale = Vec3(0.17f, 0.17f, 0.17f);
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

    // Parabola arc: its shape comes from the time flown, so it stays the same at any reach.
    travel += 1.0f;
    position.x += sign * reach;
    f32 arc = pow(widthFraction * (travel - arcHeight), 2.0f);
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
