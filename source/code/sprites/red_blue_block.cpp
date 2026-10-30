// red_blue_block.cpp -- the Red-Blue Block (sprite 759): a block that is solid and visible
// only while the Switch Block state matches its colour.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/redblueblock.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour; besides the
// porting kit's renames (docs/TSURU_PORTING.md), the switch state is ModBase::gSwitchBlockBlue
// (it lasts while the game runs) and an "off" block's collider is parked out of the level
// (ModBase::parkCollider).
//
// Settings:
//   nybble 3      colour: 0 red, 1 blue
//
// Models (each one model "block", scripts/models/make_block_models.py): block_red / block_blue while
// on, block_red_hollow / block_blue_hollow (an outline) while off.

#include "actors/multistateactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

class RedBlueBlock : public MultiStateActor
{
public:
    RedBlueBlock(const ActorBuildInfo* buildInfo) : MultiStateActor(buildInfo), model(nullptr), hollow(nullptr), blue(false) { }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new RedBlueBlock(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    DECLARE_STATE(RedBlueBlock, Off);
    DECLARE_STATE(RedBlueBlock, On);

    static const ShapedCollider::Info colliderInfo;

    ModelWrapper* model;
    ModelWrapper* hollow;
    RectCollider collider;
    bool blue;          // Tsuru: redBlueState (true for blue)
};

CREATE_STATE(RedBlueBlock, Off);
CREATE_STATE(RedBlueBlock, On);

const Profile redBlueBlockProfile(&RedBlueBlock::build, ProfileId::RedBlueBlock, "RedBlueBlock", nullptr, 0);
PROFILE_RESOURCES(ProfileId::RedBlueBlock, "block_red", "block_blue", "block_red_hollow", "block_blue_hollow");

const ShapedCollider::Info RedBlueBlock::colliderInfo = {
    {0.0f, 0.0f}, 0.0f, 0.0f, {-8.0f, 8.0f}, {8.0f, -8.0f}, 0
};

u32 RedBlueBlock::onCreate()
{
    position.y -= 8.0f;
    position.x += 8.0f;

    blue = eventId1 >> 0x4 & 0xF;      // nybble 3
    model = tsuru::createModel(blue ? "block_blue" : "block_red", "block");
    hollow = tsuru::createModel(blue ? "block_blue_hollow" : "block_red_hollow", "block");

    collider.init(this, colliderInfo);
    collider.setType(ColliderBase::TypeSolid);
    ColliderMgr::instance->add(&collider);

    doStateChange(blue == ModBase::gSwitchBlockBlue ? (StateBase*)&StateID_On : (StateBase*)&StateID_Off);
    return onExecute();
}

u32 RedBlueBlock::onExecute()
{
    tsuru::placeModel(model, this);
    tsuru::placeModel(hollow, this);
    states.execute();
    return 1;
}

u32 RedBlueBlock::onDraw()
{
    tsuru::drawModel(states.currentState() == &StateID_On ? model : hollow);
    return 1;
}

/** STATE: Off */

void RedBlueBlock::beginState_Off()
{
    ModBase::parkCollider(&collider, true);
}

void RedBlueBlock::executeState_Off()
{
    collider.execute();
    if (ModBase::gSwitchBlockBlue == blue)
        doStateChange(&StateID_On);
}

void RedBlueBlock::endState_Off() { }

/** STATE: On */

void RedBlueBlock::beginState_On()
{
    ModBase::parkCollider(&collider, false);
}

void RedBlueBlock::executeState_On()
{
    collider.execute();
    if (ModBase::gSwitchBlockBlue != blue)
        doStateChange(&StateID_Off);
}

void RedBlueBlock::endState_On() { }
