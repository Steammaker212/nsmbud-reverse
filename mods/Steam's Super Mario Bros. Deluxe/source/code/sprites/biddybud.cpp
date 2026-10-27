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
//   nybbles 19-20 movement type (settings2 & 0xFF)
//   nybbles 21-22 movement ID
//
// Model: tenten_w (Tsuru's archive), with the skeletal anims "FlyWait" and
// "BlowDown", the texture-pattern anim "bud" and the texture-SRT anim "FlyWait".

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/movementhandler.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

// Tsuru RP_Jugemu_CloudDisapp (effectid.h): the Wii U number is the Deluxe one
// (ledger F0254).
constexpr s32 cEffect_CloudDisappear = 0x15B;

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

    void spawnDeathEffect();

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    u32 counter;
    MovementHandler movementHandler;
    bool isDead;
    u32 color;
    Vec3 effectScale;
    Vec3 effectOffset;      // Tsuru's own field; hides StageActor::effectOffset (+0x23C), as in Tsuru

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
// (0 rectangle), then 5, 0, 0x824F, 0xFFFBFFFF, 0, callback.
const ActiveCollider::Info Biddybud::collisionInfo = {
    {0.0f, 0.0f}, {8.0f, 8.0f}, 0, 5, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

Biddybud::Biddybud(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , counter(0)
    , movementHandler()
    , isDead(false)
    , color(0)
    , effectScale(0.5f, 0.5f, 0.5f)
    , effectOffset(0.0f, 0.0f, 0.0f)
{ }

Actor* Biddybud::build(const ActorBuildInfo* buildInfo)
{
    return new Biddybud(buildInfo);
}

u32 Biddybud::onCreate()
{
    color = settings1 >> 0x1C & 0xF;    // nybble 5

    // 3 skeletal, 1 texture-pattern, 1 texture-SRT anim (Tsuru's create order).
    model = tsuru::createModel("tenten_w", "tenten_w", 3, 1, 1);
    if (!model) {               // romfs/Model/tenten_w missing: leave rather than crash
        isDeleted = true;
        return 1;
    }
    tsuru::playTexPatternAnim(model, "bud");
    tsuru::playTexSrtAnim(model, "FlyWait", true);
    tsuru::playSklAnim(model, "FlyWait", true);

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

    u32 movementMask = movementHandler.getMaskForMovementType(settings2 & 0xFF);   // nybbles 19-20
    movementHandler.link(position, movementMask, movementId);                       // nybbles 21-22

    doStateChange(&StateID_Move);

    return onExecute();
}

u32 Biddybud::onExecute()
{
    if (!isDead) {
        movementHandler.execute();
        position = movementHandler.position;
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

void Biddybud::spawnDeathEffect()
{
    Vec3 effectOrigin(position.x, position.y, 4500.0f);
    Vec3 effectPos = effectOrigin + effectOffset;
    Effect::spawn(cEffect_CloudDisappear, &effectPos, nullptr, &effectScale);
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
    spawnDeathEffect();
    isDeleted = true;
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
    spawnDeathEffect();
    isDeleted = true;
    return true;
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
    removeActiveColliders();
}

void Biddybud::executeState_Die()
{
    counter++;
    if (counter == 32) {    // Tsuru waits 32 frames instead of checking the anim
        spawnDeathEffect();
        isDeleted = true;
    }
}

void Biddybud::endState_Die() { }

/** STATE: DieSquish */

void Biddybud::beginState_DieSquish()
{
    // Tsuru: "PressDown" is commented out there too.
    tsuru::playSklAnim(model, "BlowDown", false);
    isDead = true;
    removeActiveColliders();
}

void Biddybud::executeState_DieSquish()
{
    counter++;
    if (counter == 32) {
        spawnDeathEffect();
        isDeleted = true;
    }
}

void Biddybud::endState_DieSquish() { }
