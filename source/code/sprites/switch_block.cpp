// switch_block.cpp -- the Switch Block (sprite 760): hit it from below, ground-pound it or
// slide a shell into it to flip every Red-Blue Block between red and blue.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/switchblock.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Differences:
//   - Tsuru builds it on its BlockWrapper (the game's BlockBase). Deluxe's BlockBase is only
//     partly mapped, so this is a solid block of its own. A hit from below comes through
//     ModBase::BumpSensor; a ground pound (from above) and a sliding shell (from the side)
//     come through its collider's callbacks, with the retail blocks' own tests
//     (ModBase::blockHit). It bumps like a ?-block and can be hit any number of times.
//   - The red/blue state lasts while the game runs (Tsuru saves it per save slot):
//     ModBase::gSwitchBlockBlue, defined here.
//
// Settings: none.
//
// Models (each one model "block", scripts/models/make_block_models.py): block_on (red) and
// block_off (blue), drawn by the shared state.

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

namespace ModBase { bool gSwitchBlockBlue = false; }

class SwitchBlock : public StageActor
{
public:
    SwitchBlock(const ActorBuildInfo* buildInfo) : StageActor(buildInfo), modelOn(nullptr), modelOff(nullptr) { }
    ~SwitchBlock() { sBlocks.remove(this); }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new SwitchBlock(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void onHit(bool fromAbove);
    static void bumpCallback(ActiveCollider* acSelf, ActiveCollider* acOther);
    static void topCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32 unk);
    static void sideCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32 unk);
    static void bottomCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32 unk);

    ModelWrapper* modelOn;
    ModelWrapper* modelOff;
    RectCollider rectCollider;
    ModBase::BumpSensor bump;
    ActiveCollider::Info sensorInfo;

    static ModBase::ActorList<SwitchBlock> sBlocks;
    static const ShapedCollider::Info colliderInfo;
};

ModBase::ActorList<SwitchBlock> SwitchBlock::sBlocks;

const Profile switchBlockProfile(&SwitchBlock::build, ProfileId::SwitchBlock, "SwitchBlock", nullptr, 0);
PROFILE_RESOURCES(ProfileId::SwitchBlock, "block_on", "block_off");

const ShapedCollider::Info SwitchBlock::colliderInfo = {
    {0.0f, 0.0f}, 0.0f, 0.0f, {-8.0f, 8.0f}, {8.0f, -8.0f}, 0
};

u32 SwitchBlock::onCreate()
{
    position.y -= 8.0f;
    position.x += 8.0f;

    rectCollider.init(this, colliderInfo);
    rectCollider.setType(ColliderBase::TypeSolid);
    ModBase::blockHit::setCallbacks(&rectCollider, &SwitchBlock::topCallback, &SwitchBlock::sideCallback,
                                    &SwitchBlock::bottomCallback);
    ColliderMgr::instance->add(&rectCollider);

    sensorInfo = ModBase::BumpSensor::sensorInfo(8.0f, 8.0f, &SwitchBlock::bumpCallback);
    aCollider.init(this, &sensorInfo, 0);
    addActiveColliders();

    modelOn = tsuru::createModel("block_on", "block");
    modelOff = tsuru::createModel("block_off", "block");
    sBlocks.add(this);

    return onExecute();
}

void SwitchBlock::onHit(bool fromAbove)
{
    bump.bumpAnimation(fromAbove);
    ModBase::gSwitchBlockBlue = !ModBase::gSwitchBlockBlue;

    tsuru::playSound(ModBase::gSwitchBlockBlue ? "SE_SYS_CE_DEL_STARCOIN" : "SE_SYS_CE_PUT_STARCOIN", position);
}

void SwitchBlock::bumpCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    SwitchBlock* self = static_cast<SwitchBlock*>(acSelf->owner);
    if (self->bump.hit(acOther))
        self->onHit(false);
}

// A ground pound on top.
void SwitchBlock::topCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32)
{
    SwitchBlock* self = static_cast<SwitchBlock*>(cSelf->owner);
    if (ModBase::blockHit::isGroundPound(otherMgr) && self->bump.hitBy(otherMgr->owner->playerId))
        self->onHit(true);
}

// A head bump from below.
void SwitchBlock::bottomCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32)
{
    SwitchBlock* self = static_cast<SwitchBlock*>(cSelf->owner);
    if (ModBase::blockHit::isHeadHit(otherMgr) && self->bump.hitBy(otherMgr->owner->playerId))
        self->onHit(false);
}

// A sliding shell against a side.
void SwitchBlock::sideCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32)
{
    SwitchBlock* self = static_cast<SwitchBlock*>(cSelf->owner);
    if (ModBase::blockHit::isSlidingShell(otherMgr) && self->bump.hitBy(otherMgr->owner->playerId))
        self->onHit(false);
}

u32 SwitchBlock::onExecute()
{
    bump.tick();
    rectCollider.execute();

    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position + Vec3(0.0f, bump.offset, 0.0f));
    ModelWrapper* models[] = { modelOn, modelOff };
    for (ModelWrapper* m : models) {
        if (m) {
            m->setMtx(mtx);
            m->updateModel();
        }
    }
    return 1;
}

u32 SwitchBlock::onDraw()
{
    tsuru::drawModel(ModBase::gSwitchBlockBlue ? modelOff : modelOn);
    return 1;
}
