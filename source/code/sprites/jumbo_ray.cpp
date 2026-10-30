// jumbo_ray.cpp -- the Jumbo Ray (sprite 750): a giant ray that glides right
// in long waves; you can ride on its back.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/jumboray.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// the differences are the porting kit's renames (docs/TSURU_PORTING.md).
//
// Settings: none.
//
// Model: Tsuru's Jumbo Ray is unfinished and draws a Star Coin (star_coin /
// star_coinA) as a placeholder; so does this port. The solid part is a 4-tile
// line across its back (codedx's SolidOnTopCollider is Tsuru's
// PolylineCollider: same Info, same init).

#include "actors/stageactor.h"
#include "collision/collider.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

#define JUMBORAY_SPEED      1.1f    // units a frame, to the right
#define JUMBORAY_WAVE       5.0f    // wave height in tiles

class JumboRay : public StageActor
{
public:
    JumboRay(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    ModelWrapper* model;
    f32 baseline;
    Vec2 points[2];
    SolidOnTopCollider collider;
};

const Profile jumboRayProfile(&JumboRay::build, ProfileId::JumboRay, "JumboRay", nullptr, 0);
PROFILE_RESOURCES(ProfileId::JumboRay, "star_coin");

JumboRay::JumboRay(const ActorBuildInfo* buildInfo)
    : StageActor(buildInfo)
    , model(nullptr)
    , baseline(0.0f)
{ }

Actor* JumboRay::build(const ActorBuildInfo* buildInfo)
{
    return new JumboRay(buildInfo);
}

u32 JumboRay::onCreate()
{
    model = tsuru::createModel("star_coin", "star_coinA");
    baseline = position.y;

    // Tsuru keeps the points on the stack; the collider may read them later, so
    // here they live in the actor.
    points[0] = Vec2(-32.0f, 0.0f);
    points[1] = Vec2(32.0f, 0.0f);
    SolidOnTopCollider::Info collisionInfo = { {0.0f, 0.0f}, 0.0f, 0.0f, points, 0 };

    collider.init(this, collisionInfo, 2);
    collider.setType(ColliderBase::TypeSolid);
    ColliderMgr::instance->add(&collider);

    return onExecute();
}

u32 JumboRay::onExecute()
{
    f32 s = sin(deg_to_rad(position.x / 6.0f));

    position.x += JUMBORAY_SPEED;
    position.y = baseline + JUMBORAY_WAVE * s * s * 16.0f;

    // Tilt along the wave's slope.
    s = sin(deg_to_rad(position.x / 3.0f));
    rotation.z = tsuru::rad2idx(acos(1.0f / sqrt(1.0f + 25.0f / 36.0f * (s * s))) * (s < 0.0f ? -1.0f : 1.0f));

    if (model) {
        Mtx34 mtx;
        mtx.rotateAndTranslate(rotation, position);
        model->setMtx(mtx);
        model->updateModel();
    }

    collider.rotation = rotation.z;
    collider.execute();

    return 1;
}

u32 JumboRay::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}
