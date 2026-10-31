// helical_bar.cpp -- the Helical Bar (sprite 768): a firebar whose 1-3 bars curve into a
// spiral, optionally breathing in and out.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/helicalbar.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour; besides the
// porting kit's renames (docs/TSURU_PORTING.md):
//   - the heat-shimmer effects are EffectWrappers made with new (no address for a member's
//     complete destructor: docs/TSURU_PORTING.md);
//   - the fireballs' models are updated in onExecute (Tsuru did it in onDraw);
//   - one code path for 1, 2 and 3 bars (Tsuru's three states), and the fire hitboxes follow
//     their fireballs from the first frame (Tsuru set the first offset with the wrong sign);
//   - a fireball between each two of Tsuru's: its bars had gaps where a retail firebar has none;
//   - all models but the first 7 live on an ActorAdditionalHeap, as the retail firebar's
//     (0x60601BC8): an actor's own heap is not meant for 34 models. With no such heap it falls
//     back to one bar of Tsuru's 6.
//
// Settings:
//   nybble 3      bars: 0 one, 1 two, 2 three
//   nybble 4      1: the spiral breathes in and out
//   nybble 2      spiral strength, 0-15 (+1)
//   nybble 1      1: does not turn
//
// Models: firebar_L (texture-SRT anim "firebar_L") and center_firebar: both retail.

#include "actors/multistateactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "graphics/effect.h"
#include "graphics/lightsource.h"
#include "modbase/game/nintendo/sead.h"
#include "modbase/log.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

// ActorMgr's "ActorAdditionalHeap", made and released through this field (0x60007BF0, 0x60007C5C).
namespace ModBase { namespace actorHeap {
void create(void* actorMgr, void** heap);
void release(void* actorMgr, void** heap);
} }

// Tsuru RP_Firebar (effectid.h).
constexpr s32 cEffect_Firebar = 0x456;

#define HELICAL_FIRES   11      // fireballs per bar
#define HELICAL_ON_HEAP 6       // the first bar's that fit on the actor's own heap, as well as the centre
#define HELICAL_BARS    3
#define HELICAL_FIRE_Z  4480.0f // the retail firebar's depths (0x6060193C): in front of the
#define HELICAL_CENTER_Z 3696.0f // scenery, where nothing cuts into the fire

class HelicalBar : public StageActor
{
public:
    HelicalBar(const ActorBuildInfo* buildInfo)
        : StageActor(buildInfo), centerModel(nullptr), extraHeap(nullptr), bars(1), fires(HELICAL_FIRES),
          fireStep(0.5f), fireRotate(0.0f), time(0.0f), helixMultiplier(1), animate(false) { }
    ~HelicalBar()
    {
        if (extraHeap && ActorMgr::instance)
            ModBase::actorHeap::release(ActorMgr::instance, &extraHeap);
    }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new HelicalBar(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;
    u32 onDelete() override;

    f32 helixDelta(u32 j);
    f32 fireRadius(u32 j);
    bool hasGlow(u32 j);
    static f32 ringRadius(u32 ring);
    static void fireCollision(ActiveCollider* acSelf, ActiveCollider* acOther);

    ModelWrapper* centerModel;
    ModelWrapper* fireModel[HELICAL_BARS][HELICAL_FIRES];
    Vec2 firePositions[HELICAL_BARS][HELICAL_FIRES];
    LightSource fireLights[HELICAL_BARS][HELICAL_FIRES];
    ActiveCollider fireHitboxes[HELICAL_BARS][HELICAL_FIRES];
    ActiveCollider::Info hcInfos[HELICAL_BARS][HELICAL_FIRES];
    EffectWrapper* heatDistorters[HELICAL_BARS][HELICAL_FIRES];
    RectCollider centerCollider;
    void* extraHeap;
    u32 bars;
    u32 fires;              // per bar
    f32 fireStep;           // of Tsuru's spacing, from one fireball to the next
    f32 fireRotate;
    f32 time;
    u32 helixMultiplier;
    bool animate;

    static const ShapedCollider::Info colliderInfo;
};

const Profile helicalBarProfile(&HelicalBar::build, ProfileId::HelicalBar, "HelicalBar", nullptr, 0);
PROFILE_RESOURCES(ProfileId::HelicalBar, "firebar_L", "center_firebar");

const ShapedCollider::Info HelicalBar::colliderInfo = {
    {0.0f, 0.0f}, 0.0f, 0.0f, {-8.0f, 8.0f}, {8.0f, -8.0f}, 0
};

// Tsuru's calcFireRadius: each fireball a little closer to the previous one.
f32 HelicalBar::ringRadius(u32 ring)
{
    f32 result = 0.0f;
    for (u32 i = 0; i <= ring; i++) {
        result += 16.0f - i;
        if (i > 2)
            result += 1.0f - (i - 2);
    }
    return result;
}

// Between Tsuru's fireballs, halfway.
f32 HelicalBar::fireRadius(u32 j)
{
    f32 at = j * fireStep;
    u32 ring = (u32)at;
    return ringRadius(ring) + (ringRadius(ring + 1) - ringRadius(ring)) * (at - ring);
}

f32 HelicalBar::helixDelta(u32 j)
{
    f32 at = j * fireStep;
    f32 delta = at * at * helixMultiplier;
    return animate ? delta * sin(deg_to_rad(time)) : delta;
}

// The heat shimmer and the light stay on Tsuru's fireballs: enough, and they are not free.
bool HelicalBar::hasGlow(u32 j)
{
    return fireStep == 1.0f || j % 2 == 0;
}

u32 HelicalBar::onCreate()
{
    centerModel = tsuru::createModel("center_firebar", "center_firebar");
    centerCollider.init(this, colliderInfo);
    centerCollider.setType(ColliderBase::TypeSolid);
    ColliderMgr::instance->add(&centerCollider);

    u32 count = eventId1 >> 0x4 & 0xF;          // nybble 3
    bars = count >= 2 ? 3 : count + 1;
    animate = eventId1 & 0x1;                   // nybble 4
    helixMultiplier = (eventId2 & 0xF) + 1;     // nybble 2

    ModBase::actorHeap::create(ActorMgr::instance, &extraHeap);
    if (!extraHeap) {
        ModBase::log("helical bar: no additional heap; one short bar only");
        bars = 1;
        fires = HELICAL_ON_HEAP;
        fireStep = 1.0f;
    }
    const s32 actorHeap = sead::HeapMgr::sInstance->getCurrentHeap();

    for (u32 i = 0; i < HELICAL_BARS; i++)
        for (u32 j = 0; j < HELICAL_FIRES; j++) {
            const bool used = i < bars && j < fires;
            if (used && (i > 0 || j >= HELICAL_ON_HEAP))
                sead::HeapMgr::sInstance->setCurrentHeap((s32)extraHeap);
            fireModel[i][j] = used ? tsuru::createModel("firebar_L", "firebar_L", 0, 0, 1) : nullptr;
            tsuru::playTexSrtAnim(fireModel[i][j], "firebar_L");
            heatDistorters[i][j] = used && hasGlow(j) ? new EffectWrapper() : nullptr;
            sead::HeapMgr::sInstance->setCurrentHeap(actorHeap);
            firePositions[i][j] = Vec2(position.x, position.y);
            if (used) {
                hcInfos[i][j] = {
                    {0.0f, 0.0f}, {8.0f, 8.0f}, 1, 3, 0, 0x824F, 0x20208, 0, &HelicalBar::fireCollision
                };
                fireHitboxes[i][j].init(this, &hcInfos[i][j], 0);
                ActiveColliderMgr::instance->addToCreateList(&fireHitboxes[i][j]);
            }
        }
    return onExecute();
}

// These are not aCollider, so nothing else takes them off the manager's lists.
u32 HelicalBar::onDelete()
{
    ActiveColliderMgr* mgr = ActiveColliderMgr::instance;
    for (u32 i = 0; i < bars; i++)
        for (u32 j = 0; j < fires; j++) {
            ActiveCollider* hitbox = &fireHitboxes[i][j];
            if (mgr->isInCreateList(hitbox))
                mgr->removeFromCreateList(hitbox);
            mgr->removeFromActiveList(hitbox);
        }
    return StageActor::onDelete();
}

u32 HelicalBar::onExecute()
{
    if (!(eventId2 >> 0x4 & 0xF))               // nybble 1: 0 turns
        fireRotate++;
    time++;

    static const f32 cBarAngle[HELICAL_BARS][HELICAL_BARS] = {
        { 0.0f }, { 0.0f, 180.0f }, { 0.0f, 120.0f, 240.0f },
    };
    for (u32 i = 0; i < bars; i++)
        for (u32 j = 0; j < fires; j++) {
            f32 a = deg_to_rad(fireRotate + helixDelta(j) + cBarAngle[bars - 1][i]);
            Vec2& fp = firePositions[i][j];
            fp.x = position.x + fireRadius(j) * cos(a);
            fp.y = position.y + fireRadius(j) * sin(a);
            fireHitboxes[i][j].info.distToCenter = Vec2(fp.x - position.x, fp.y - position.y);

            Vec3 efp(fp.x, fp.y, 4000.0f);
            if (heatDistorters[i][j])
                heatDistorters[i][j]->update(cEffect_Firebar, &efp, &rotation, &scale);

            if (ModelWrapper* fm = fireModel[i][j]) {
                Mtx34 mtx;
                Vec3i spin = { 0, 0, tsuru::deg2idx(-fireRotate * 4.0f) };
                mtx.rotateAndTranslate(spin, Vec3(fp.x, fp.y, HELICAL_FIRE_Z));
                fm->setMtx(mtx);
                fm->setScale(Vec3(0.78f, 0.78f, 0.78f));
                *(u32*)((u8*)fm->model + 0x24) = 24;    // as the retail firebar's, 0x60601EB4
                fm->updateModel();
                fm->updateAnimations();
            }
        }

    if (centerModel) {
        Mtx34 mtx;
        mtx.rotateAndTranslate(rotation, Vec3(position.x, position.y, HELICAL_CENTER_Z));
        centerModel->setMtx(mtx);
        centerModel->updateModel();
    }
    centerCollider.execute();
    return 1;
}

u32 HelicalBar::onDraw()
{
    static f32 lightRadius = 1.25f;
    static sead::Color4f lightColor = { 0.4f, 0.3f, 0.0f, 0.7f };

    tsuru::drawModel(centerModel);
    for (u32 i = 0; i < bars; i++)
        for (u32 j = 0; j < fires; j++) {
            if (hasGlow(j)) {
                Vec3 lfp(firePositions[i][j].x, firePositions[i][j].y, 0.0f);
                fireLights[i][j].update(0, &lfp, nullptr, &lightRadius, nullptr, &lightColor, nullptr, nullptr);
            }
            tsuru::drawModel(fireModel[i][j]);
        }
    return 1;
}

// Tsuru: trySpecialDamage(LavaNoInstaKill): fire damage (tsuru::DamageType::Fire).
void HelicalBar::fireCollision(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (acOther->owner->type == 1 || acOther->owner->type == 2)     // players; Yoshi, for his rider
        tsuru::damagePlayer(acOther->owner, acSelf->owner, tsuru::DamageType::Fire);
}
