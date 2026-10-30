// wave_platform.cpp -- the Wave Platform (sprite 779): a platform that floats on the surface of
// wavy liquid, rising, falling and tilting with the waves.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/waveplatform.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour; besides the
// porting kit's renames (docs/TSURU_PORTING.md):
//   - the wave surface is TileMgr's (instance 0x60CBD254) wave height table, +0x1420 on Deluxe
//     (the Wii U layout plus 4), sampled from the camera's left edge (ModBase::camera, found
//     live with GDB) as Tsuru does: one entry every 2 units, -8192 where there is no wave;
//   - the platform is the kit's tsuru::PlatformModel: wood, stone, bolt and snowy wood.
//
// Settings:
//   nybble 12     width in tiles (2 minimum)
//   nybble 6      look: 0 wood, 1 stone, 3 bolt, 7 snowy wood
//
// It only moves where the level has waves (wavy lava, or the Wavy Water / Poison / Quicksand
// sprites); elsewhere it stays where it was placed.

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "collision/collider.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

namespace ModBase { namespace waves { extern u8* tileMgr; } }

class WavePlatform : public StageActor
{
public:
    WavePlatform(const ActorBuildInfo* b)
        : StageActor(b), targetPos(0.0f), targetRot(0), offscreen(true), width(2) { }
    static Actor* build(const ActorBuildInfo* b) { return new WavePlatform(b); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;
    bool updateWaveTargets();

    f32 targetPos;
    u32 targetRot;
    bool offscreen;
    u32 width;
    Vec2 points[2];
    Vec3i platformRotation;

    tsuru::PlatformModel platform;
    SolidOnTopCollider collider;
};

const Profile wavePlatformProfile(&WavePlatform::build, ProfileId::WavePlatform, "WavePlatform", nullptr, 0);
PROFILE_RESOURCES(ProfileId::WavePlatform, "lift_han_wood", "lift_han_stone", "lift_han_spin");

u32 WavePlatform::onCreate()
{
    width = settings1 & 0xF;                                    // nybble 12
    if (width < 2)
        width = 2;
    platform.create(settings1 >> 0x18 & 0xF, width, true);      // nybble 6

    points[0] = Vec2(4.0f - platform.count * 8.0f, 8.0f);
    points[1] = Vec2(-4.0f + platform.count * 8.0f, 8.0f);
    SolidOnTopCollider::Info info = { {0.0f, 0.0f}, 0.0f, 0.0f, points, 0 };
    collider.init(this, info, 2);
    collider.setType(ColliderBase::TypeSolid);
    ColliderMgr::instance->add(&collider);

    onExecute();
    return 1;
}

// Tsuru's updateWaveTargets: the surface under the platform's middle and 20 units either side.
bool WavePlatform::updateWaveTargets()
{
    u8* tm = ModBase::waves::tileMgr;
    if (!tm || !ModBase::camera::instance)
        return false;
    const f32* wave = (const f32*)(tm + 0x1420);

    s32 index = (s32)((position.x - ModBase::camera::left()) * 0.5f + 0.5f);
    if (index < 10 - 144 || index >= 1190 + 1140)
        return false;
    if (index < 10)
        index += 144;
    if (index >= 1190)
        index -= 144;
    if (wave[index + 10] == -8192.0f)
        index -= 144;
    if (index < 10 || index + 10 >= 1280)
        return false;

    f32 l = wave[index - 10], m = wave[index], r = wave[index + 10];
    targetPos = (l + m + r) / 3.0f + 4.0f;
    if (m == -8192.0f || l == -8192.0f || r == -8192.0f || m == 0.0f || l == 0.0f || r == 0.0f)
        return false;

    f32 slope = ((m - l) + (r - m)) / 2.0f;
    // Through a signed angle: a downhill tilt is negative, and converted straight to the
    // unsigned angle it came out as nearly a full turn (the platform flipped over).
    targetRot = (u32)(s32)(atan2(slope, 20.0f) * (2147483648.0f / 3.14159265f));
    return true;
}

u32 WavePlatform::onExecute()
{
    if (!updateWaveTargets()) {
        offscreen = true;
    } else if (offscreen) {
        position.y = targetPos;
        rotation.z = targetRot;
        offscreen = false;
    } else {
        tsuru::chase(&position.y, targetPos, 2.0f);
        // As a signed difference: the kit's u32 chase went from a small uphill tilt to a small
        // downhill one (0x00100000 -> 0xFFF00000) the long way round, through 180 degrees.
        s32 diff = (s32)(targetRot - rotation.z);
        const s32 step = 0x01800000;
        rotation.z += (u32)(diff > step ? step : diff < -step ? -step : diff);
    }

    collider.rotation = rotation.z;
    collider.execute();

    platformRotation.x = 0;
    platformRotation.y = 0;
    platformRotation.z = rotation.z;
    Vec3 left(position.x - platform.count * 8.0f, position.y, position.z);
    platform.update(left, platform.count * 16.0f, platformRotation);
    return 1;
}

u32 WavePlatform::onDraw()
{
    platform.draw();
    return 1;
}
