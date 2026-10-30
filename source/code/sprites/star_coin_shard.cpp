// star_coin_shard.cpp -- the Star Coin Shard (sprite 765) and its manager (sprite 766):
// collect every shard of a set and a Star Coin appears at the manager.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/starcoinshard.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour; besides the
// porting kit's renames (docs/TSURU_PORTING.md), shards find their manager through
// ModBase::ActorList (Tsuru walks every actor), and the red-coin sounds are looked up by
// label (SE_OBJ_GET_RED_COIN + n: ModBase::playSoundAt).
//
// Shard settings:
//   nybble 3      manager ID
// Manager settings:
//   nybble 3      ID (its shards use it)
//   nybble 4      shards to collect
//   nybbles 5-12  passed on to the Star Coin it spawns (as a Star Coin's settings: which coin)
//
// Models: star_shard (the shard); the Star Coin's own star_coin.

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "graphics/effect.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

// Tsuru RP_CoinNormalGet (effectid.h).
constexpr s32 cEffect_CoinGet = 0x04C;
// The Star Coin (its registration: 0x605F3A90).
constexpr u32 cProfile_StarCoin = 426;

class StarCoinShardMgr : public StageActor
{
public:
    StarCoinShardMgr(const ActorBuildInfo* buildInfo)
        : StageActor(buildInfo), collectedCount(0), mgrId(buildInfo->eventId1 >> 0x4 & 0xF) { }
    ~StarCoinShardMgr() { sMgrs.remove(this); }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new StarCoinShardMgr(buildInfo); }

    u32 onCreate() override { sMgrs.add(this); return 1; }
    u32 onExecute() override;

    u32 collectedCount;
    u32 mgrId;

    static ModBase::ActorList<StarCoinShardMgr> sMgrs;
};

class StarCoinShard : public StageActor
{
public:
    StarCoinShard(const ActorBuildInfo* buildInfo) : StageActor(buildInfo), model(nullptr), mgrID(0) { }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new StarCoinShard(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    static void collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther);
    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    u8 mgrID;
};

ModBase::ActorList<StarCoinShardMgr> StarCoinShardMgr::sMgrs;

// Tsuru's StarCoinShardMgrActorInfo: the manager stays active anywhere in the zone.
const ActorInfo starCoinShardMgrActorInfo = { 0, 0, 0, 0, 9000, 9000, 0, 0, 0, 0, 0 };

const Profile starCoinShardProfile(&StarCoinShard::build, ProfileId::StarCoinShard, "StarCoinShard", nullptr, 0);
const Profile starCoinShardMgrProfile(&StarCoinShardMgr::build, ProfileId::StarCoinShardMgr, "StarCoinShardMgr",
                                      &starCoinShardMgrActorInfo, 0);
PROFILE_RESOURCES(ProfileId::StarCoinShard, "star_shard");
PROFILE_RESOURCES(ProfileId::StarCoinShardMgr, "star_coin");

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info StarCoinShard::collisionInfo = {
    {0.0f, 0.0f}, {10.0f, 10.0f}, 0, 3, 0, 0x824F, 0x20208, 0, &StarCoinShard::collisionCallback
};

u32 StarCoinShard::onCreate()
{
    model = tsuru::createModel("star_shard", "star_shard");
    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();
    mgrID = eventId1 >> 0x4 & 0xF;      // nybble 3
    return onExecute();
}

u32 StarCoinShard::onExecute()
{
    if (model) {
        Mtx34 mtx;
        mtx.rotateAndTranslate(rotation, position);
        model->setMtx(mtx);
        model->updateModel();
    }
    rotation.y += tsuru::deg2idx(3.0f);
    return 1;
}

u32 StarCoinShard::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

void StarCoinShard::collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (acOther->owner->type != 1 && acOther->owner->type != 2)     // players, Yoshi
        return;
    StarCoinShard* self = static_cast<StarCoinShard*>(acSelf->owner);
    if (self->isDeleted)
        return;
    StarCoinShardMgr* mgr = StarCoinShardMgr::sMgrs.find([self](StarCoinShardMgr* m) { return m->mgrId == self->mgrID; });

    if (mgr) {
        if (mgr->collectedCount + 1 >= (u32)(mgr->eventId1 & 0xF))
            ModBase::playSoundAt("SE_OBJ_GET_RED_COIN_COMPLETE", 0, self->position);
        else
            ModBase::playSoundAt("SE_OBJ_GET_RED_COIN", mgr->collectedCount, self->position);
        mgr->collectedCount++;
    }
    Effect::spawn(cEffect_CoinGet, &self->position, nullptr, nullptr);
    self->removeActiveColliders();
    self->isDeleted = true;
}

u32 StarCoinShardMgr::onExecute()
{
    if (collectedCount >= (u32)(eventId1 & 0xF)) {      // nybble 4
        isDeleted = true;
        ActorBuildInfo buildInfo = { 0 };
        buildInfo.profile = Profile::get(cProfile_StarCoin);
        buildInfo.position = position;
        buildInfo.settings1 = settings1;
        ActorMgr::instance->create(&buildInfo, 0);
    }
    return 1;
}
