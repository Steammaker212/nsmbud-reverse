// one_way_platform.cpp -- the One-Way Platform (sprite 769): a platform solid from one side
// only (up, down, left or right), which turns around while an event is on.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/onewayplatform.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour; besides the
// porting kit's renames (docs/TSURU_PORTING.md), the platform is the kit's
// tsuru::PlatformModel: wood, stone, bolt and snowy wood; the other types draw as wood.
//
// Settings:
//   nybble 5      width in tiles (2 minimum)
//   nybble 6      look: 0 wood, 1 stone, 3 bolt, 7 snowy wood
//   nybble 7      solid side: 0 up, 1 down, 2 right, 3 left
//   nybbles 3-4   event that turns it around (1-based; 0 none)
//   nybbles 19-20 movement type; 21-22 movement ID

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "actors/movementhandler.h"
#include "collision/collider.h"
#include "level/eventmgr.h"
#include "modbase/tsuru.h"

class OneWayPlatform : public StageActor
{
public:
    OneWayPlatform(const ActorBuildInfo* buildInfo)
        : StageActor(buildInfo), startRotation(0.0f), endRotation(0.0f), direction(0) { }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new OneWayPlatform(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    f32 startRotation;
    f32 endRotation;
    u32 direction;
    Vec2 points[2];
    Vec3i platformRotation;

    tsuru::PlatformModel platform;
    SolidOnTopCollider collider;
    MovementHandler movementHandler;
};

const Profile oneWayPlatformProfile(&OneWayPlatform::build, ProfileId::OneWayPlatform, "OneWayPlatform", nullptr, 0);
PROFILE_RESOURCES(ProfileId::OneWayPlatform, "lift_han_wood", "lift_han_stone", "lift_han_spin");

u32 OneWayPlatform::onCreate()
{
    u32 tiles = settings1 >> 0x1C & 0xF;                        // nybble 5
    platform.create(settings1 >> 0x18 & 0xF, tiles < 2 ? 2 : tiles, true);   // nybble 6

    // Tsuru's points: the platform's top edge, 4 units in from each end.
    points[0] = Vec2(4.0f - platform.count * 8.0f, 8.0f);
    points[1] = Vec2(-4.0f + platform.count * 8.0f, 8.0f);
    SolidOnTopCollider::Info info = { {0.0f, 0.0f}, 0.0f, 0.0f, points, 0 };
    collider.init(this, info, 2);
    collider.setType(ColliderBase::TypeSolid);
    ColliderMgr::instance->add(&collider);

    direction = settings1 >> 0x14 & 0xF;                         // nybble 7
    switch (direction) {
        case 0: startRotation = 0.0f;   endRotation = 180.0f; break;   // up
        case 1: startRotation = 180.0f; endRotation = 0.0f;   break;   // down
        case 2: startRotation = 90.0f;  endRotation = 270.0f; break;   // right
        default: startRotation = 270.0f; endRotation = 90.0f; break;   // left
    }

    u32 movementMask = movementHandler.getMaskForMovementType(settings2 & 0xFF);
    movementHandler.link(position, movementMask, movementId);
    return onExecute();
}

u32 OneWayPlatform::onExecute()
{
    movementHandler.execute();
    position = movementHandler.position;

    bool turned = eventId1 && EventMgr::instance->isActive(eventId1 - 1);
    u32 angle = tsuru::deg2idx(turned ? endRotation : startRotation);

    // The collider turns in the level's plane; the model flips over (x) for up/down and
    // turns (z) for left/right, as in Tsuru.
    collider.rotation = angle;
    platformRotation.x = (direction <= 1) ? angle : 0;
    platformRotation.y = 0;
    platformRotation.z = (direction <= 1) ? 0 : angle;
    collider.execute();

    Vec3 left(position.x - platform.count * 8.0f, position.y, position.z);
    platform.update(left, platform.count * 16.0f, platformRotation);
    return 1;
}

u32 OneWayPlatform::onDraw()
{
    platform.draw();
    return 1;
}
