// minecart.cpp -- the Minecart (sprite 767): rides a level path from node to node, carrying
// player 1 along.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/minecart.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour, an early one
// in Tsuru too: the cart starts riding at once and holds player 1 on top of it until the
// last node. Besides the porting kit's renames (docs/TSURU_PORTING.md), the path comes from
// ModBase::levelPath (Tsuru's Level::Area::getPath / getPathNodes).
//
// Settings:
//   nybble 3      path ID
//
// Model: truck (skeletal anim "Wait").

#include "actors/multistateactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/game/player/player.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

class Minecart : public MultiStateActor
{
public:
    Minecart(const ActorBuildInfo* buildInfo)
        : MultiStateActor(buildInfo), model(nullptr), path(nullptr), nodeCount(0), currentNode(0) { }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new Minecart(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    StageActor* player1();

    ModelWrapper* model;
    const ModBase::LevelPathNode* path;
    u32 nodeCount;
    u32 currentNode;

    DECLARE_STATE(Minecart, Idle);
    DECLARE_STATE(Minecart, Ride);
};

CREATE_STATE(Minecart, Idle);
CREATE_STATE(Minecart, Ride);

const Profile minecartProfile(&Minecart::build, ProfileId::Minecart, "Minecart", nullptr, 0);
PROFILE_RESOURCES(ProfileId::Minecart, "truck");

// PlayerMgr::instance +0x30: the four players (game/player.h).
StageActor* Minecart::player1()
{
    return PlayerMgr::instance ? ((StageActor**)((u8*)PlayerMgr::instance + 0x30))[0] : nullptr;
}

u32 Minecart::onCreate()
{
    model = tsuru::createModel("truck", "truck", 4);
    if (!model) {
        isDeleted = true;
        return 1;
    }

    scale = Vec3(0.2f, 0.2f, 0.2f);
    position.y -= 16.0f;
    position.z = 4500.0f;
    rotation.y = tsuru::deg2idx(90.0f);
    tsuru::playSklAnim(model, "Wait");

    path = ModBase::levelPath(eventId1 >> 0x4 & 0xF, &nodeCount);     // nybble 3
    if (!path)
        ModBase::log("Minecart: path ", (u32)(eventId1 >> 0x4 & 0xF), " not found in this area");

    doStateChange(path ? (StateBase*)&StateID_Ride : (StateBase*)&StateID_Idle);
    return onExecute();
}

u32 Minecart::onExecute()
{
    states.execute();

    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position + Vec3(0.0f, 21.0f, 0.0f));
    model->setMtx(mtx);
    model->setScale(scale);
    model->updateModel();
    model->updateAnimations();
    return 1;
}

u32 Minecart::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

/** STATE: Idle */

void Minecart::beginState_Idle() { }
void Minecart::executeState_Idle() { }
void Minecart::endState_Idle() { }

/** STATE: Ride */

void Minecart::beginState_Ride() { }

void Minecart::executeState_Ride()
{
    if (currentNode >= nodeCount)
        return;

    const ModBase::LevelPathNode& node = path[currentNode];
    Vec3 target((f32)node.x, -((f32)node.y + 16.0f), position.z);

    Vec3 diff = target - position;
    f32 len = sqrt(diff.x * diff.x + diff.y * diff.y);
    if (len > 0.0f)
        position += diff * (node.speed / len);

    tsuru::chase(&rotation.z, tsuru::rad2idx(atan2(target.y - position.y, target.x - position.x)), tsuru::deg2idx(3.0f));

    if (len < 2.0f)
        currentNode++;

    if (StageActor* player = player1())
        player->position = position + Vec3(0.0f, 24.0f, 0.0f);
}

void Minecart::endState_Ride() { }
