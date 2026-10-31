// peepa.cpp -- the Peepa (sprite 751): a ghost that follows a movement
// controller, optionally carrying a platform you can stand on.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/peepa.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// besides the porting kit's renames (docs/TSURU_PORTING.md):
//   - the platform is the kit's tsuru::PlatformModel (the game's lift_han_*
//     segment models, drawn by the kit) and is drawn only when there is one --
//     Tsuru draws an unplaced wood platform for every platformless Peepa;
//   - Enemy's own death states (a POW ...) end it with modbase/tumble_death.h, as
//     the Biddybud's do: its position follows the movement controller every frame,
//     so DieFumi's fall would spin it in place forever.
//
// Settings:
//   nybble 3      1: carries a platform (and then never hurts)
//   nybble 4      platform: 0 wood, 1 stone, 3 bolt, 7 snowy wood, 8 cloud
//   nybbles 19-20 movement type (settings2 & 0xFF)
//   nybbles 21-22 movement ID
//
// Models: teren (anim "wait"); lift_han_sky (lift_han_sky_S, anim "move00_S")
// for the cloud; lift_han_wood / _stone / _spin for the other platforms.

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "collision/collider.h"
#include "actors/movementhandler.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"
#include "modbase/tumble_death.h"

// Tsuru ColliderBase::SurfaceType::Cloud (codedx lists 0-5 only).
constexpr u32 cSurfaceType_Cloud = 6;

using tsuru::PlatformModel;

class Peepa : public Enemy
{
public:
    Peepa(const ActorBuildInfo* buildInfo);
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

    void beginState_DieFumi() override;
    void executeState_DieFumi() override;
    void endState_DieFumi() override;
    void beginState_DieFall() override;
    void executeState_DieFall() override;
    void endState_DieFall() override;

    void hurt(ActiveCollider* acSelf, ActiveCollider* acOther);

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* peepaModel;
    ModelWrapper* cloudPlatformModel;
    MovementHandler movementHandler;
    PlatformModel platformModel;
    Vec2 points[2];
    SolidOnTopCollider polylineCollider;
    bool hasPlatform;
    u32 platformType;
    ModBase::TumbleDeath tumble;

    DECLARE_STATE(Peepa, Die);
};

CREATE_STATE(Peepa, Die);

const Profile peepaProfile(&Peepa::build, ProfileId::Peepa, "Peepa", nullptr, 0);
PROFILE_RESOURCES(ProfileId::Peepa, "teren",
    "lift_han_sky",     // cloud
    "lift_han_spin",    // bolt platform
    "lift_han_stone",   // stone
    "lift_han_wood");   // wood and snowy wood

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info Peepa::collisionInfo = {
    {0.0f, 0.0f}, {8.0f, 8.0f}, 0, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

Peepa::Peepa(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , peepaModel(nullptr)
    , cloudPlatformModel(nullptr)
    , movementHandler()
    , polylineCollider()
    , hasPlatform(false)
    , platformType(0)
{ }

Actor* Peepa::build(const ActorBuildInfo* buildInfo)
{
    return new Peepa(buildInfo);
}

u32 Peepa::onCreate()
{
    tumble.sound = "SE_EMY_TERESA_DEAD";
    hasPlatform = (eventId1 >> 0x04 & 0xF);    // nybble 3
    platformType = (eventId1 & 0xF);           // nybble 4

    if (platformType != PlatformModel::Wood && platformType != PlatformModel::Stone && platformType != PlatformModel::BoltPlatform
        && platformType != PlatformModel::Sky && platformType != PlatformModel::WoodSnow)
        hasPlatform = false;    // invalid platform types simply won't spawn one

    peepaModel = tsuru::createModel("teren", "teren", 6);
    if (!peepaModel) {
        isDeleted = true;
        return 1;
    }
    tsuru::playSklAnim(peepaModel, "wait");

    if (hasPlatform) {
        if (platformType == PlatformModel::Sky) {
            cloudPlatformModel = tsuru::createModel("lift_han_sky", "lift_han_sky_S", 2);
            tsuru::playSklAnim(cloudPlatformModel, "move00_S");
        } else {
            platformModel.create(PlatformModel::Wood + platformType, 4);
        }
    }

    position.y -= 8.0f;
    position.x += 8.0f;
    // Tsuru shrinks the model here (0.15). The Deluxe conversion has that scale baked in
    // (port_tsuru_models.py --bake-scale 0.15): drawn shrunk, the borrowed enemy program lit it
    // black (docs/WIIU_MODELS.md). So it is drawn at scale 1.
    scale = Vec3(1.0f, 1.0f, 1.0f);

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    if (hasPlatform) {
        f32 t = platformType == PlatformModel::Sky ? 2.0f : 1.0f;

        points[0] = Vec2(-32.0f / t, 12.0f);    // the cloud platform is always two tiles long
        points[1] = Vec2(32.0f / t, 12.0f);
        SolidOnTopCollider::Info info = { {0.0f, 0.0f}, 0.0f, 0.0f, points, 0 };
        polylineCollider.init(this, info, 2);
        polylineCollider.setType(ColliderBase::TypeSolid);

        if (platformType == PlatformModel::WoodSnow)
            polylineCollider.setSurfaceType(ColliderBase::SurfaceTypeSnow);
        else if (platformType == PlatformModel::Sky)
            polylineCollider.setSurfaceType(cSurfaceType_Cloud);

        ColliderMgr::instance->add(&polylineCollider);
    }

    u32 movementMask = movementHandler.getMaskForMovementType(settings2 & 0xFF);   // nybbles 19-20
    movementHandler.link(position, movementMask, movementId);                       // nybbles 21-22

    return onExecute();
}

u32 Peepa::onExecute()
{
    if (!tumble.execute(this)) {
        movementHandler.execute();
        position = movementHandler.position;
    }

    Mtx34 peepaMtx;
    Vec3 peepaModelPos = position;
    peepaModelPos.y -= hasPlatform ? 10.0f : 8.0f;
    peepaMtx.rotateAndTranslate(rotation, peepaModelPos);
    peepaModel->setMtx(peepaMtx);
    peepaModel->setScale(scale);
    peepaModel->updateAnimations();
    peepaModel->updateModel();

    if (cloudPlatformModel) {
        Mtx34 cloudPlatformMtx;
        Vec3 cloudPlatformPos = position;
        cloudPlatformPos.y += 2;
        cloudPlatformPos.z -= 1000;    // cloud platform model goes behind the peepa
        cloudPlatformMtx.rotateAndTranslate(rotation, cloudPlatformPos);
        cloudPlatformModel->setMtx(cloudPlatformMtx);
        cloudPlatformModel->setScale(Vec3(1.0f, 1.0f, 1.0f));
        cloudPlatformModel->updateAnimations();
        cloudPlatformModel->updateModel();
    }

    if (hasPlatform) {
        Vec3 platformPos = position;
        platformPos.y += 4;
        platformPos.x -= 32;
        platformPos.z -= 1000;     // platform goes behind the peepa
        polylineCollider.rotation = rotation.z;
        polylineCollider.execute();
        if (platformType != PlatformModel::Sky)
            platformModel.update(platformPos, platformModel.width * 16);
    }

    return 1;
}

u32 Peepa::onDraw()
{
    tsuru::drawModel(peepaModel);

    if (hasPlatform) {
        if (platformType == PlatformModel::Sky)
            tsuru::drawModel(cloudPlatformModel);
        else
            platformModel.draw();
    }

    return 1;
}

void Peepa::hurt(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (!hasPlatform)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
}

void Peepa::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) { hurt(acSelf, acOther); }
void Peepa::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)  { hurt(acSelf, acOther); }

bool Peepa::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (!hasPlatform)
        doStateChange(&StateID_Die);
    return true;
}

bool Peepa::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)      { hurt(acSelf, acOther); return true; }
bool Peepa::collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther)            { hurt(acSelf, acOther); return true; }
bool Peepa::collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther)     { hurt(acSelf, acOther); return true; }
bool Peepa::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) { hurt(acSelf, acOther); return true; }
bool Peepa::collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther)   { hurt(acSelf, acOther); return true; }

bool Peepa::collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) { return true; }
bool Peepa::collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther)        { return true; }
bool Peepa::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)         { return true; }

bool Peepa::collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (!hasPlatform)
        doStateChange(&StateID_Die);
    return true;
}

/** Enemy's death states */

void Peepa::beginState_DieFumi()
{
    Enemy::beginState_DieFumi();    // score, colliders off
    tumble.begin(this, 0.7f);
}
void Peepa::executeState_DieFumi() { }
void Peepa::endState_DieFumi() { }

void Peepa::beginState_DieFall() { beginState_DieFumi(); }
void Peepa::executeState_DieFall() { }
void Peepa::endState_DieFall() { }

/** STATE: Die */

void Peepa::beginState_Die()
{
    tumble.begin(this, 0.7f);
}

void Peepa::executeState_Die() { }

void Peepa::endState_Die() { }
