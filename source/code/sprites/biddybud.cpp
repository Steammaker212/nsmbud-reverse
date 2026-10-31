// biddybud.cpp -- the Biddybud (sprite 742): a flying bug that follows a path.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/biddybud.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// the differences from the Tsuru file are only the porting kit's renames
// (docs/TSURU_PORTING.md).
//
// Settings:
//   nybble 5      colour: the frame of the "bud" texture-pattern anim (settings1 >> 28)
//   nybble 6      behaviour (settings1 >> 24): 0 flies (hovers, or follows the
//                 movement controller below), 1 walks along the ground like a
//                 Goombrat -- slower -- turning at walls and at ledges
//   nybbles 19-20 movement type (settings2 & 0xFF), flying only
//   nybbles 21-22 movement ID, flying only
//
// Model: tenten_w (Tsuru's archive), with the skeletal anims "FlyWait", "BlowDown"
// and "Walk" (scripts/models/biddybud_walk.py), the texture-pattern anim "bud" and
// the texture-SRT anim "FlyWait".

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/movementhandler.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"
#include "modbase/yoshi.h"
#include "modbase/tumble_death.h"

// Walking (nybble 6 = 1). The Goomba walks 0.5 a frame; this is slower.
#define BIDDYBUD_WALK_SPEED     0.35f
#define BIDDYBUD_GRAVITY        -0.1875f    // added to speed.y each frame (StageActor +0x64)
#define BIDDYBUD_FALL_SPEED     -4.0f
// The ledge check: a line from the centre to this far ahead and below. With no
// ground on it, the next step would walk off, so it turns (the Goombrat's rule).
#define BIDDYBUD_LEDGE_AHEAD    9.0f
#define BIDDYBUD_LEDGE_BELOW    14.0f

class Biddybud : public Enemy
{
public:
    Biddybud(const ActorBuildInfo* buildInfo);
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

    // Enemy's own death states (a POW, and the other kills the game handles
    // itself): DieFumi's execute spins the actor and lets it fall, but the
    // Biddybud's position follows its movement every frame, so it spun in place
    // forever. It goes the way its other deaths do.
    void beginState_DieFumi() override;
    void executeState_DieFumi() override;
    void endState_DieFumi() override;
    void beginState_DieFall() override;
    void executeState_DieFall() override;
    void endState_DieFall() override;
    void startWalking();
    void walk();
    void turnAround();

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    ::yoshi::EatData eatData;
    u32 counter;
    MovementHandler movementHandler;
    bool isDead;
    u32 color;
    ModBase::TumbleDeath tumble;
    bool walking;           // nybble 6 = 1

    DECLARE_STATE(Biddybud, Move);
    DECLARE_STATE(Biddybud, Die);
    DECLARE_STATE(Biddybud, DieSquish);
};

CREATE_STATE(Biddybud, Move);
CREATE_STATE(Biddybud, Die);
CREATE_STATE(Biddybud, DieSquish);

const Profile biddybudProfile(&Biddybud::build, ProfileId::Biddybud, "Biddybud", nullptr, 0);
PROFILE_RESOURCES(ProfileId::Biddybud, "tenten_w");

// Same fields as Tsuru's HitboxCollider::Info: centre, half size, shape
// (0 rectangle), kind, attack, vs-kind mask, damage mask, 0, callback. Tsuru's
// kind is 5; Deluxe's enemies are kind 3 (the Goomba's info 0x60BED0A4), and
// the player's hammer (kind 3, vs-kind 0x824F: info 0x60BD31F0) only meets
// kinds 0-3, 6, 9 and 15 -- as kind 5 the Biddybud never met a hammer.
const ActiveCollider::Info Biddybud::collisionInfo = {
    {0.0f, 0.0f}, {8.0f, 8.0f}, 0, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

Biddybud::Biddybud(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , counter(0)
    , movementHandler()
    , isDead(false)
    , color(0)
    , walking(false)
{ }

Actor* Biddybud::build(const ActorBuildInfo* buildInfo)
{
    return new Biddybud(buildInfo);
}

u32 Biddybud::onCreate()
{
    color = settings1 >> 0x1C & 0xF;    // nybble 5

    // 3 skeletal, 1 texture-pattern, 1 texture-SRT anim (Tsuru's create order).
    // Walking (nybble 6 = 1) uses "tenten_w_walk": the same model in the same
    // archive without its wing shape (Body__TentenWingWingMat00, emptied), and
    // the "Walk" animation.
    walking = (settings1 >> 24 & 0xF) == 1;     // nybble 6
    model = tsuru::createModel("tenten_w", walking ? "tenten_w_walk" : "tenten_w", 3, 1, 1);
    if (!model && walking)      // an archive from before the walking model: wings and all
        model = tsuru::createModel("tenten_w", "tenten_w", 3, 1, 1);
    if (!model) {               // romfs/Model/tenten_w missing: leave rather than crash
        isDeleted = true;
        return 1;
    }
    tsuru::playTexPatternAnim(model, "bud");
    tsuru::playTexSrtAnim(model, "FlyWait", true);
    tsuru::playSklAnim(model, walking ? "Walk" : "FlyWait", true);

    // The colour is a frozen frame of "bud": Animation::update clamps the frame
    // into [startFrame, endFrame] first (0x604183EC), as Tsuru's FrameCtrl does.
    if (model->texAnims.count > 0) {
        model->texAnims[0]->startFrame = (f32)color;
        model->texAnims[0]->speed = 0.0f;
    }

    scale = Vec3(0.17f, 0.17f, 0.17f);
    position.y -= 8;
    position.x += 8;

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();
    ModBase::yoshi::makeEdible(this, &eatData);     // bug F016

    if (walking) {
        startWalking();
    } else {
        u32 movementMask = movementHandler.getMaskForMovementType(settings2 & 0xFF);   // nybbles 19-20
        movementHandler.link(position, movementMask, movementId);                       // nybbles 21-22
    }

    doStateChange(&StateID_Move);

    return onExecute();
}

u32 Biddybud::onExecute()
{
    if (!tumble.execute(this) && !ModBase::yoshi::beingEaten(eatData)) {
        if (walking) {
            walk();
        } else {
            movementHandler.execute();
            position = movementHandler.position;
        }
    }

    states.execute();

    // tsuru::placeModel, with the model drawn 8 units below the actor as in Tsuru.
    Vec3 modelPos = position;
    modelPos.y -= 8;
    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, modelPos);
    model->setMtx(mtx);
    model->setScale(scale);
    model->updateAnimations();
    model->updateModel();

    return 1;
}

u32 Biddybud::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

void Biddybud::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);

    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else if (hitType == tsuru::HitType::NormalJump || hitType == tsuru::HitType::SpinJump)
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_DieSquish);
}

void Biddybud::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);

    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);

    if (hitType == tsuru::HitType::NormalJump)
        collisionStar(acSelf, acOther);
}

bool Biddybud::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return collisionStar(acSelf, acOther);
}

bool Biddybud::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    isDead = true;
    tumble.begin(this, 0.5f);
    return true;
}

bool Biddybud::collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    doStateChange(&StateID_Die);
    return true;
}

bool Biddybud::collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    doStateChange(&StateID_Die);
    return true;
}

bool Biddybud::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionStar(acSelf, acOther);
    return true;
}

bool Biddybud::collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionStar(acSelf, acOther);
    return true;
}

bool Biddybud::collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return collisionStar(acSelf, acOther);
}

bool Biddybud::collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    Enemy::collisionFireball(acSelf, acOther);
    if (counter < 32)
        counter = 32;   // Tsuru: while (counter < 32) counter++;

    return collisionStar(acSelf, acOther);
}

bool Biddybud::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionStar(acSelf, acOther);
    return true;
}

bool Biddybud::collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionFireball(acSelf, acOther);
    return true;
}

// ---- Walking ------------------------------------------------------------------
//
// The tile collision every Enemy carries (CollisionActor::collisionMgr, as
// Tsuru's walkers use it): sensors around the 16 x 16 box the actor's position
// is the centre of -- below at the feet, above at the head, on the sides at the
// flanks. Each frame: gravity, the step, the collision pass; then it turns at a
// wall it walks into, or at a ledge ahead while standing.
const CollisionMgr::Sensor cWalkBelow  = { -5.0f, 5.0f, -8.0f };
const CollisionMgr::Sensor cWalkAbove  = { -5.0f, 5.0f,  8.0f };
const CollisionMgr::Sensor cWalkSides  = { -4.0f, 4.0f,  8.0f };

// Facing: the turn the game gives walking enemies (Enemy_CommonRotations
// 0x60AFE3E4: right 0x20000000, left 0xE0000000).
constexpr u32 cFacing[2] = { 0x20000000, 0xE0000000 };

void Biddybud::startWalking()
{
    collisionMgr.init(this, &cWalkBelow, &cWalkAbove, &cWalkSides);
    *(f32*)&_64 = BIDDYBUD_GRAVITY;      // StageActor +0x64: the gravity handleGravity adds
    maxSpeed.y = BIDDYBUD_FALL_SPEED;
    direction = directionToPlayerH(position);
    turnAround();
    turnAround();       // twice: faces the player, with the speed set
}

void Biddybud::turnAround()
{
    direction ^= 1;
    speed.x = direction == LEFT ? -BIDDYBUD_WALK_SPEED : BIDDYBUD_WALK_SPEED;
    rotation.y = cFacing[direction];
}

void Biddybud::walk()
{
    handleGravity();
    handleSpeed();
    collisionMgr.process();

    if (collisionMgr.isOnGround()) {
        speed.y = 0.0f;
        f32 ahead = direction == LEFT ? -BIDDYBUD_LEDGE_AHEAD : BIDDYBUD_LEDGE_AHEAD;
        if (!checkForSuitableGround(ahead, -BIDDYBUD_LEDGE_BELOW)) {
            turnAround();
            return;
        }
    }
    if (collisionMgr.isCollided(direction))
        turnAround();
}

/** Enemy's death states */

void Biddybud::beginState_DieFumi()
{
    Enemy::beginState_DieFumi();    // score, colliders off
    isDead = true;
    tumble.begin(this, 0.5f);
}
void Biddybud::executeState_DieFumi() { }
void Biddybud::endState_DieFumi() { }

void Biddybud::beginState_DieFall() { beginState_DieFumi(); }
void Biddybud::executeState_DieFall() { }
void Biddybud::endState_DieFall() { }

/** STATE: Move */

void Biddybud::beginState_Move()
{
    counter = 0;
}

void Biddybud::executeState_Move() { }

void Biddybud::endState_Move() { }

/** STATE: Die */

void Biddybud::beginState_Die()
{
    tsuru::playSklAnim(model, "BlowDown", false);
    isDead = true;
    tumble.begin(this, 0.5f);
}

void Biddybud::executeState_Die() { }

void Biddybud::endState_Die() { }

/** STATE: DieSquish */

void Biddybud::beginState_DieSquish()
{
    // Tsuru: "PressDown" is commented out there too.
    tsuru::playSklAnim(model, "BlowDown", false);
    isDead = true;
    tumble.begin(this, 0.5f);
}

void Biddybud::executeState_DieSquish() { }

void Biddybud::endState_DieSquish() { }
