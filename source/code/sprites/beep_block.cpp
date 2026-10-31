// beep_block.cpp -- the Beep Block (sprite 758): a red or blue block that is solid only while
// its colour is on; the colours swap every 4 seconds.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/beepblock.cpp and
// beepblock.S (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// besides the porting kit's renames (docs/TSURU_PORTING.md):
//   - Tsuru's beepblock.S hooks the course's per-frame update to run the 240-frame timer.
//     Here the first Beep Block of the level runs it (ModBase::ActorList), and the colour
//     starts blue in every level. The blocks have a large active range, so the timer keeps
//     going while they are off screen.
//   - A disabled block's collider is parked out of the level (ModBase::parkCollider):
//     Deluxe's ColliderMgr::remove is not mapped.
//
// Settings:
//   nybble 3      colour: 0 red, 1 blue
//
// Models (each one model "block", scripts/models/make_block_models.py): beep_red / beep_blue while
// on, beep_red_hollow / beep_blue_hollow (an outline) while off.

#include "actors/multistateactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "graphics/lightsource.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

#define BEEP_PERIOD     240     // frames between colour swaps (Tsuru: 4 seconds)
#define BEEP_TICK       60      // frames between ticks, as the pulse in onDraw
#define BEEP_ON_SCREEN  16.0f   // this far past the screen's edge still counts
#define BEEP_TICK_SOUND "SE_EMY_PATAMET_STEP_8"     // a short high note, the music notes' highest

class BeepBlock : public MultiStateActor
{
public:
    enum Color : u32 { Red = 0, Blue = 1 };

    BeepBlock(const ActorBuildInfo* buildInfo) : MultiStateActor(buildInfo), model(nullptr), hollow(nullptr), color(Blue) { }
    ~BeepBlock() { sBlocks.remove(this); }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new BeepBlock(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    ModelWrapper* model;
    ModelWrapper* hollow;
    RectCollider rectCollider;
    u32 color;
    LightSource light;

    static u32 sCurrent;            // Tsuru: BeepBlock::CurrentBeepBlockState
    static u32 sTimer;              // Tsuru: BeepBlockStateTimer (beepblock.S)
    static ModBase::ActorList<BeepBlock> sBlocks;

    static const ShapedCollider::Info colliderInfo;

    DECLARE_STATE(BeepBlock, Enabled);
    DECLARE_STATE(BeepBlock, Disabled);
};

CREATE_STATE(BeepBlock, Enabled);
CREATE_STATE(BeepBlock, Disabled);

u32 BeepBlock::sCurrent = BeepBlock::Blue;
u32 BeepBlock::sTimer = 0;
ModBase::ActorList<BeepBlock> BeepBlock::sBlocks;

// Active far off screen, so the block running the timer keeps running it.
const ActorInfo beepBlockActorInfo = { 0, 0, 0, 0, 4800, 4800, 0, 0, 0, 0, 0 };

const Profile beepBlockProfile(&BeepBlock::build, ProfileId::BeepBlock, "BeepBlock", &beepBlockActorInfo, 0);
PROFILE_RESOURCES(ProfileId::BeepBlock, "beep_red", "beep_blue", "beep_red_hollow", "beep_blue_hollow");

const ShapedCollider::Info BeepBlock::colliderInfo = {
    {0.0f, 0.0f}, 0.0f, 0.0f, {-8.0f, 8.0f}, {8.0f, -8.0f}, 0
};

u32 BeepBlock::onCreate()
{
    rectCollider.init(this, colliderInfo);
    rectCollider.setType(ColliderBase::TypeSolid);
    ColliderMgr::instance->add(&rectCollider);

    position.y -= 8.0f;
    position.x += 8.0f;

    color = (eventId1 >> 0x4 & 0xF) ? Blue : Red;     // nybble 3
    model = tsuru::createModel(color == Blue ? "beep_blue" : "beep_red", "block");
    hollow = tsuru::createModel(color == Blue ? "beep_blue_hollow" : "beep_red_hollow", "block");

    if (!sBlocks.first()) {     // the level's first Beep Block: every level starts blue
        sCurrent = Blue;
        sTimer = 0;
    }
    sBlocks.add(this);

    doStateChange(sCurrent == color ? (StateBase*)&StateID_Enabled : (StateBase*)&StateID_Disabled);
    return onExecute();
}

u32 BeepBlock::onExecute()
{
    if (sBlocks.first() == this) {
        if (++sTimer >= BEEP_PERIOD) {
            sTimer = 0;
            sCurrent ^= 1;
        }

        // Only the first block counts, so a tick plays once however many there are, from one
        // that is on screen; with none there, it stays quiet.
        if (sTimer % BEEP_TICK == 0) {
            f32 left = ModBase::camera::left() - BEEP_ON_SCREEN, right = ModBase::camera::right() + BEEP_ON_SCREEN;
            BeepBlock* seen = sBlocks.find([left, right](BeepBlock* b) { return b->position.x >= left && b->position.x <= right; });
            if (seen) {
                tsuru::playSound(sTimer == 0 ? "SE_OBJ_STEP_ON_SWITCH" : BEEP_TICK_SOUND, seen->position);
            }
        }
    }

    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position + Vec3(0.0f, 0.0f, 240.0f));
    ModelWrapper* models[] = { model, hollow };
    for (ModelWrapper* m : models) {
        if (!m)
            continue;
        m->setScale(scale);
        m->setMtx(mtx);
        m->updateModel();
    }

    states.execute();
    return 1;
}

u32 BeepBlock::onDraw()
{
    static f32 radius = 1.0f;      // tiles; Tsuru's 3 lit the blocks around it
    static sead::Color4f red = { 0.8f, 0.0f, 0.0f, 8.0f / 15.0f };
    static sead::Color4f blue = { 0.0f, 0.6f, 0.6f, 1.0f / 3.0f };
    static Vec3 zero(0.0f, 0.0f, 0.0f);

    // A pulse each second (BEEP_PERIOD is 4): bright at the beat, fading over 20 frames.
    u32 phase = sTimer % 60;
    f32 k = phase < 20 ? 1.0f - phase / 20.0f : 0.0f;
    // The light's origin is its area's bottom-left: half a tile up and right is the block's centre.
    Vec3 lightPos = position + Vec3(8.0f, 8.0f, 240.0f);
    const sead::Color4f& base = color == Red ? red : blue;
    sead::Color4f pulse = { base.r + (1.0f - base.r) * 0.6f * k, base.g + (1.0f - base.g) * 0.6f * k,
                            base.b + (1.0f - base.b) * 0.6f * k, base.a + (1.0f - base.a) * k };

    if (states.currentState() == &StateID_Disabled) {
        light.update(0, &zero, nullptr, &radius, nullptr, &red, nullptr, nullptr);
        tsuru::drawModel(hollow);
    } else {
        light.update(0, &lightPos, nullptr, &radius, nullptr, &pulse, nullptr, nullptr);
        tsuru::drawModel(model);
    }
    return 1;
}

/** STATE: Enabled */

void BeepBlock::beginState_Enabled()
{
    ModBase::parkCollider(&rectCollider, false);
}

void BeepBlock::executeState_Enabled()
{
    if (sCurrent != color)
        doStateChange(&StateID_Disabled);
    rectCollider.execute();
}

void BeepBlock::endState_Enabled() { }

/** STATE: Disabled */

void BeepBlock::beginState_Disabled()
{
    ModBase::parkCollider(&rectCollider, true);
}

void BeepBlock::executeState_Disabled()
{
    if (sCurrent == color)
        doStateChange(&StateID_Enabled);
    rectCollider.execute();
}

void BeepBlock::endState_Disabled() { }
