// triple_block.cpp -- the Triple Block (sprite 762): a 3-tile ?-block. Hit it from below for
// its contents plus a coin out of each side.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/tripleblock.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Differences:
//   - Tsuru builds it on its BlockWrapper (the game's BlockBase, only partly mapped on
//     Deluxe). Here it is a solid block of its own that notices a hit from below
//     (ModBase::BumpSensor) and bumps like a ?-block.
//   - Its contents are a ?-block's, in the same settings (settings2 low nybble plus bit 28,
//     "Extended contents"), so the custom power-ups 21-24 come out of it too:
//     ModBase::blockItems::spawnContents. Tsuru had its own list. Vines, springs and Yoshi
//     eggs are BlockBase code and are not spawned.
//   - It is placed by its left tile and covers that tile and the two to its right.
//
// Settings:
//   nybble 4      look: 0 standard, 1 underground, 2 lava, 3 lava (second pattern)
//   nybble 20     contents (as a ?-block), with checkbox "Extended contents (+16)"
//
// Models: blocktripa / blocktripb / blocktripc (texture-pattern anims "standard" / "chika" /
// "yougan" / "yougan2": frames 0-50 loop, 51 is the used block).

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/block_items.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

#define TRIPLE_LOOP_END     50.0f   // pattern frames 0-50 loop
#define TRIPLE_USED_FRAME   51.0f   // the used block

class TripleBlock : public StageActor
{
public:
    TripleBlock(const ActorBuildInfo* buildInfo) : StageActor(buildInfo), model(nullptr), used(false) { }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new TripleBlock(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void spawnContents(bool down);
    static void bumpCallback(ActiveCollider* acSelf, ActiveCollider* acOther);
    static void bottomCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32 unk);
    static void topCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32 unk);
    static void sideCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32 unk);
    void onHit(bool fromAbove = false);

    ModelWrapper* model;
    RectCollider rectCollider;
    ModBase::BumpSensor bump;
    ActiveCollider::Info sensorInfo;
    bool used;

    static const ShapedCollider::Info colliderInfo;
};

const Profile tripleBlockProfile(&TripleBlock::build, ProfileId::TripleBlock, "TripleBlock", nullptr, 0);
PROFILE_RESOURCES(ProfileId::TripleBlock, "blocktripa", "blocktripb", "blocktripc");

const ShapedCollider::Info TripleBlock::colliderInfo = {
    {0.0f, 0.0f}, 0.0f, 0.0f, {-24.0f, 8.0f}, {24.0f, -8.0f}, 0
};

u32 TripleBlock::onCreate()
{
    position.x += 24.0f;        // the middle tile's centre
    position.y -= 8.0f;

    switch (eventId1 & 0xF) {   // nybble 4
        case 1:
            model = tsuru::createModel("blocktripb", "blocktripb", 0, 1);
            tsuru::playTexPatternAnim(model, "chika");
            break;
        case 2:
        case 3:
            model = tsuru::createModel("blocktripc", "blocktripc", 0, 2);
            tsuru::playTexPatternAnim(model, (eventId1 & 0xF) == 2 ? "yougan" : "yougan2");
            break;
        default:
            model = tsuru::createModel("blocktripa", "blocktripa", 0, 1);
            tsuru::playTexPatternAnim(model, "standard");
            break;
    }

    rectCollider.init(this, colliderInfo);
    rectCollider.setType(ColliderBase::TypeSolid);
    ModBase::blockHit::setCallbacks(&rectCollider, &TripleBlock::topCallback, &TripleBlock::sideCallback,
                                    &TripleBlock::bottomCallback);
    ColliderMgr::instance->add(&rectCollider);

    sensorInfo = ModBase::BumpSensor::sensorInfo(24.0f, 8.0f, &TripleBlock::bumpCallback);
    aCollider.init(this, &sensorInfo, 0);
    addActiveColliders();

    return onExecute();
}

void TripleBlock::bumpCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    TripleBlock* self = static_cast<TripleBlock*>(acSelf->owner);
    if (!self->used && self->bump.hit(acOther))
        self->onHit();
}

// A head bump against the solid collider's underside (the reliable path; the sensor above is a
// second chance).
void TripleBlock::bottomCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32)
{
    TripleBlock* self = static_cast<TripleBlock*>(cSelf->owner);
    if (!self->used && ModBase::blockHit::isHeadHit(otherMgr) && self->bump.hitBy(otherMgr->owner->playerId))
        self->onHit();
}

// A ground pound on top: the contents come out of the bottom, as from a ?-block.
void TripleBlock::topCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32)
{
    TripleBlock* self = static_cast<TripleBlock*>(cSelf->owner);
    if (!self->used && ModBase::blockHit::isGroundPound(otherMgr) && self->bump.hitBy(otherMgr->owner->playerId))
        self->onHit(true);
}

// A sliding shell against a side.
void TripleBlock::sideCallback(ColliderBase* cSelf, CollisionMgr* otherMgr, u32)
{
    TripleBlock* self = static_cast<TripleBlock*>(cSelf->owner);
    if (!self->used && ModBase::blockHit::isSlidingShell(otherMgr) && self->bump.hitBy(otherMgr->owner->playerId))
        self->onHit(false);
}

void TripleBlock::onHit(bool fromAbove)
{
    bump.bumpAnimation(fromAbove);
    spawnContents(fromAbove);
}

void TripleBlock::spawnContents(bool down)
{
    used = true;
    s32 player = bump.hitPlayer < 0 ? 0 : bump.hitPlayer;
    u32 contents = (settings2 & 0xF) | ((settings2 >> 24) & 0x10);

    // From inside the block (the item's origin at the block's underside, so it covers the
    // block), rising out of the top -- or, ground-pounded, dropping out of the bottom. Starting
    // a dropping item at the top left it stuck inside the block, where it was destroyed.
    Vec3 from = position + Vec3(0.0f, -8.0f, 0.0f);
    ModBase::blockItems::spawnContents(this, contents ? contents : 1, from, down, player);

    // Tsuru: spawnSideCoins (direction 2 up, 3 down)
    ModBase::spawnBlockCoin(from + Vec3(-16.0f, 0.0f, 0.0f), down ? 3 : 2, player);
    ModBase::spawnBlockCoin(from + Vec3(16.0f, 0.0f, 0.0f), down ? 3 : 2, player);

    if (model && model->texAnims.count > 0) {
        model->texAnims[0]->startFrame = TRIPLE_USED_FRAME;
        model->texAnims[0]->frame = TRIPLE_USED_FRAME;
        model->texAnims[0]->speed = 0.0f;
    }
}

u32 TripleBlock::onExecute()
{
    bump.tick();
    rectCollider.execute();

    if (model) {
        Mtx34 mtx;
        mtx.rotateAndTranslate(rotation, position + Vec3(0.0f, bump.offset, 0.0f));
        model->setMtx(mtx);
        model->setScale(scale);
        model->updateModel();
        model->updateAnimations();

        if (!used && model->texAnims.count > 0 && model->texAnims[0]->frame >= TRIPLE_LOOP_END)
            model->texAnims[0]->frame = 0.0f;
    }
    return 1;
}

u32 TripleBlock::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}
