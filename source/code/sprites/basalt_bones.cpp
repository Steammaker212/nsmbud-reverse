// basalt_bones.cpp -- Basalt Bones (sprite 744): a lava Dry Bones mini-boss. Its
// bones fly out of the lava and assemble; it paces and throws fireballs, and a
// stomp scatters it into bones that fly back together. Three stomps defeat it.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/basaltbones.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). The fight is
// Tsuru's; what it leans on is not all in Deluxe, so:
//   - Tsuru builds it on its BossWrapper<18> (the game's Boss class and a boss
//     controller, Tsuru's universalbosscontroller). Here it is a plain Enemy that
//     keeps BossWrapper<18>'s count itself: 18 hit points, 6 a stomp. The
//     controller's "done spawning / done dying" signals have nothing to tell;
//     instead, its defeat turns on an event (nybbles 1-2), which can open a
//     door, end the fight's music, spawn the goal ...
//   - Tsuru stirs the zone's lava (EnvTerrain wave height and speed) while the
//     bones move, finding the lava in ActorMgr's list. Here the lava is the one
//     TerrainEffects_update last ran for (see "The lava's waves"), and only a
//     lava with Giant Waves on is stirred: a calm lava has no wave renderer
//     (obj_magmawave) to show it.
//   - Its effects are EffectWrappers made with new (EffectWrapper's complete
//     destructor is inlined in the game, with no address to link a member's to).
//
// Settings:
//   nybbles 1-2   event to turn on when defeated (1-based; 0 none)
//
// Models: laron (Tsuru's archive): "laron" (anims "walk", "big_stop") and the
// bone pieces "laron_partsB" / "_partsC" / "_partsD" / "_partsE" / "_partsF" /
// "laron_head".

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "level/eventmgr.h"
#include "level/arearumblemgr.h"
#include "nintendo/sead/random.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

// Tsuru effect IDs (effectid.h).
constexpr s32 cEffect_JrFireBall    = 0x43D;   // rp_Jr_FireBall
constexpr s32 cEffect_Firebar       = 0x456;   // RP_Firebar
constexpr s32 cEffect_FireballHit   = 0x004;   // RP_Cmn_FireballHit

#define BASALT_HIT_POINTS       18      // BossWrapper<18>
#define BASALT_STOMP_DAMAGE     (BASALT_HIT_POINTS / 3)
#define BASALT_PATROL_RANGE     (8.0f * 16.0f)
#define BASALT_SPAWN_WAIT       378     // frames before the lava shakes
#define BASALT_SHAKE_FRAMES     (60 * 2)
#define BASALT_THROW_AT         0.4f    // of "big_stop": the fireball leaves
#define BASALT_PROJECTILE_SPEED 2.0f
#define BASALT_PROJECTILE_LIFE  520

using tsuru::QuadraticBezier;
using tsuru::Easing;

static inline bool randomBool() { return randU32() & 1; }
static inline f32 randomF32() { return (randU32() >> 8) * (1.0f / 16777216.0f); }

// ---- The lava's waves -----------------------------------------------------------------
//
// Tsuru stirs the zone's lava while the bones rise: the wave height chases 28 and the wave
// speed half of 42472454, then both chase back. The wavy Lava (Giant Waves on) is noted by
// TerrainEffects_update (code/tweaks/wavy_liquids.cpp) each time it updates; gLavaSeen is
// cleared here every frame, so only a lava still alive is touched. Its TerrainEffects fields
// (TerrainEffects_setWaveValues, 0x60705E2C) sit where Tsuru's Wii U ones do: +0xC8 speed
// (an angle a frame), +0xD8 width (an angle), +0xE0 height.
namespace ModBase { namespace waves { extern void* gLavaEffects; extern bool gLavaSeen; } }

static f32 sDefaultLavaHeight;
static u32 sDefaultLavaSpeed;
static bool sLavaDefaultsSet;

static u8* liveLava() { return ModBase::waves::gLavaSeen ? (u8*)ModBase::waves::gLavaEffects : nullptr; }

// Tsuru's start of the shake: remember the lava's own waves and widen them.
static void startLavaWaves()
{
    u8* e = liveLava();
    sLavaDefaultsSet = e != nullptr;
    if (!e)
        return;
    sDefaultLavaHeight = *(f32*)(e + 0xE0);
    sDefaultLavaSpeed = *(u32*)(e + 0xC8);
    *(u32*)(e + 0xD8) = 70887560;
}

// up: toward Tsuru's stirred waves; else back to the lava's own.
static void stirLava(bool up)
{
    u8* e = liveLava();
    if (!e || !sLavaDefaultsSet)
        return;
    tsuru::chase((f32*)(e + 0xE0), up ? 28.0f : sDefaultLavaHeight, 0.2f);
    tsuru::chase((u32*)(e + 0xC8), up ? 42472454u / 2 : sDefaultLavaSpeed, 42472454u / 40);
}

// ---- The fireball -----------------------------------------------------------------

class BasaltBoneProjectile : public Enemy
{
public:
    BasaltBoneProjectile(const ActorBuildInfo* buildInfo) : Enemy(buildInfo), effect(nullptr), timer(0) { }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new BasaltBoneProjectile(buildInfo); }

    u32 onCreate() override
    {
        aCollider.init(this, &collisionInfo, 0);
        addActiveColliders();

        tsuru::offscreenDelete(this, 1);

        effect = new EffectWrapper();
        timer = 0;

        return onExecute();
    }

    u32 onExecute() override
    {
        position.x += direction ? -BASALT_PROJECTILE_SPEED : BASALT_PROJECTILE_SPEED;

        if (effect)
            effect->update(cEffect_JrFireBall, &position, nullptr, &scale);

        if (++timer > BASALT_PROJECTILE_LIFE)
            isDeleted = true;

        return 1;
    }

    static const ActiveCollider::Info collisionInfo;

    EffectWrapper* effect;
    u32 timer;
};

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info BasaltBoneProjectile::collisionInfo = {
    {0.0f, 0.0f}, {8.0f, 8.0f}, 0, 3, 0, 0x824F, 0x20208, 0, &Enemy::collisionCallback
};

// ---- Basalt Bones -------------------------------------------------------------------

class BasaltBones : public Enemy
{
public:
    enum SpawnStage : u32 { Wait = 0, Shake, FlyOut, Assemble };

    class Bone
    {
    public:
        Bone() : model(nullptr), hitbox(), bezier(), easer(), position(0.0f, 0.0f, 0.0f), t(0.0f), render(false)
        {
            rotation.x = rotation.y = rotation.z = 0;
        }

        void draw()
        {
            if (render)
                tsuru::drawModel(model);
        }

        // Bones hurt only while flying together.
        static void collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
        {
            BasaltBones* self = (BasaltBones*)acSelf->owner;

            StateBase* state = self->states.currentState();
            if (state != &StateID_Assemble && state != &StateID_AssembleFinalize)
                return;

            if (acOther->owner->type == 1)      // a player
                tsuru::enemyDamagePlayer(self, acSelf, acOther);
        }

        static const ActiveCollider::Info collisionInfo;

        ModelWrapper* model;
        ActiveCollider hitbox;
        QuadraticBezier bezier;
        Easing easer;
        Vec3 position;
        Vec3i rotation;
        f32 t;
        bool render;
    };

public:
    BasaltBones(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override { collisionPlayer(acSelf, acOther); }

    // A boss: none of these hurt it (Tsuru's fireDamageAmount() is 0, and the
    // Boss class ignores the rest).
    bool collisionStar(ActiveCollider*, ActiveCollider*) override               { return true; }
    bool collisionSlide(ActiveCollider*, ActiveCollider*) override              { return true; }
    bool collisionPenguinSlide(ActiveCollider*, ActiveCollider*) override       { return true; }
    bool collisionPropellerDrill(ActiveCollider*, ActiveCollider*) override     { return true; }
    bool collisionGroundPoundYoshi(ActiveCollider*, ActiveCollider*) override   { return true; }
    bool collisionThrowableObject(ActiveCollider*, ActiveCollider*) override    { return true; }
    bool collisionHammer(ActiveCollider*, ActiveCollider*) override             { return true; }
    bool collisionFireballYoshi(ActiveCollider*, ActiveCollider*) override      { return true; }
    bool collisionFireball(ActiveCollider*, ActiveCollider* acOther) override   { acOther->owner->isDeleted = true; return true; }
    bool collisionIceball(ActiveCollider*, ActiveCollider* acOther) override    { acOther->owner->isDeleted = true; return true; }
    bool collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void freeze() override { }

    void updateModel();
    void stomp(StageActor* player);
    void defeated();
    void showBoneHitboxes(bool show);

    static const ActiveCollider::Info collisionInfo;

    static const Vec3 launchKeyframes[6][2][3];

    static void collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther);

    ModelWrapper* model;
    Vec3 startPosition;
    u32 spawnStage;
    Bone bones[6];
    u32 timer;          // Tsuru's union { timer, assembler }
    s32 hitPoints;
    f32 down;
    bool dead, draw, first, threw, thrown;
    EffectWrapper* heat;
    EffectWrapper* flames;
    Vec3 flamesScale;

    DECLARE_STATE(BasaltBones, Spawn);
    DECLARE_STATE(BasaltBones, Active);
    DECLARE_STATE(BasaltBones, Throw);
    DECLARE_STATE(BasaltBones, Disassemble);
    DECLARE_STATE(BasaltBones, Assemble);
    DECLARE_STATE(BasaltBones, AssembleFinalize);
};

CREATE_STATE(BasaltBones, Spawn);
CREATE_STATE(BasaltBones, Active);
CREATE_STATE(BasaltBones, Throw);
CREATE_STATE(BasaltBones, Disassemble);
CREATE_STATE(BasaltBones, Assemble);
CREATE_STATE(BasaltBones, AssembleFinalize);

const Profile basaltBonesProfile(&BasaltBones::build, ProfileId::BasaltBones, "BasaltBones", nullptr, 0);
PROFILE_RESOURCES(ProfileId::BasaltBones, "laron");

const Profile basaltBoneProjectileProfile(&BasaltBoneProjectile::build, ProfileId::BasaltBoneProjectile, "BasaltBoneProjectile", nullptr, 0);

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info BasaltBones::collisionInfo = {
    {0.0f, 6.0f}, {14.0f, 22.0f}, 0, 3, 0, 0x824F, 0x20208, 0, &BasaltBones::collisionCallback
};

const ActiveCollider::Info BasaltBones::Bone::collisionInfo = {
    {0.0f, 0.0f}, {8.0f, 8.0f}, 0, 3, 0, 0x824F, 0x20208, 0, &BasaltBones::Bone::collisionCallback
};

#define b(x) ((x) * 16.0f)

// 6 bones, 2 possible paths each containing 3 positions
const Vec3 BasaltBones::launchKeyframes[6][2][3] = {
    {
        { Vec3(b(-9), b(-3), 0.0f), Vec3(b(-9), b(3), 0.0f), Vec3(b(-9), b(8), 0.0f) },
        { Vec3(b(-9), b(-3), 0.0f), Vec3(b(-4), b(3), 0.0f), Vec3(b(-9), b(8), 0.0f) }
    },
    {
        { Vec3(b(-5), b(-3), 0.0f), Vec3(b(-2), b(3), 0.0f), Vec3(b(-5), b(8), 0.0f) },
        { Vec3(b(-9), b(-3), 0.0f), Vec3(b(-8), b(3), 0.0f), Vec3(b(-5), b(8), 0.0f) }
    },
    {
        { Vec3(b(-2), b(-3), 0.0f), Vec3(b(-2), b(6), 0.0f), Vec3(b(2),  b(8), 0.0f) },
        { Vec3(b(-2), b(-3), 0.0f), Vec3(b(2),  b(6), 0.0f), Vec3(b(2),  b(8), 0.0f) }
    },
    {
        { Vec3(b(2),  b(-3), 0.0f), Vec3(b(2),  b(6), 0.0f), Vec3(b(-2), b(8), 0.0f) },
        { Vec3(b(2),  b(-3), 0.0f), Vec3(b(-2), b(6), 0.0f), Vec3(b(-2), b(8), 0.0f) }
    },
    {
        { Vec3(b(5),  b(-3), 0.0f), Vec3(b(2),  b(3), 0.0f), Vec3(b(5),  b(8), 0.0f) },
        { Vec3(b(5),  b(-3), 0.0f), Vec3(b(8),  b(3), 0.0f), Vec3(b(5),  b(8), 0.0f) }
    },
    {
        { Vec3(b(9),  b(-3), 0.0f), Vec3(b(9),  b(3), 0.0f), Vec3(b(9),  b(8), 0.0f) },
        { Vec3(b(9),  b(-3), 0.0f), Vec3(b(4),  b(3), 0.0f), Vec3(b(9),  b(8), 0.0f) }
    }
};

#undef b

BasaltBones::BasaltBones(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , startPosition()
    , spawnStage(Wait)
    , timer(0)
    , hitPoints(BASALT_HIT_POINTS)
    , down(0.0f)
    , dead(false)
    , draw(false)
    , first(false)
    , threw(false)
    , thrown(false)
    , heat(nullptr)
    , flames(nullptr)
    , flamesScale(0.0f, 0.0f, 0.0f)
{ }

Actor* BasaltBones::build(const ActorBuildInfo* buildInfo)
{
    return new BasaltBones(buildInfo);
}

u32 BasaltBones::onCreate()
{
    static const char* const boneModels[6] = {
        "laron_partsB",
        "laron_partsE",
        "laron_partsC",
        "laron_partsD",
        "laron_partsF",
        "laron_head",
    };

    model = tsuru::createModel("laron", "laron", 2);
    if (!model) {
        isDeleted = true;
        return 1;
    }
    for (u32 i = 0; i < 6; i++)
        bones[i].model = tsuru::createModel("laron", boneModels[i]);

    heat = new EffectWrapper();
    flames = new EffectWrapper();

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    startPosition = position;

    doStateChange(&StateID_Spawn);

    return onExecute();
}

u32 BasaltBones::onExecute()
{
    states.execute();
    ModBase::waves::gLavaSeen = false;     // set again by the lava's next update
    updateModel();

    for (u32 i = 0; i < 6; i++) {
        bones[i].rotation.x += tsuru::deg2idx(1.0f);
        bones[i].rotation.y += tsuru::deg2idx(1.25f);
        bones[i].rotation.z += tsuru::deg2idx(0.4f);
    }

    if (draw) {
        Vec3 effectPos = position + Vec3(0.0f, 8.0f, 0.0f);
        Vec3 effectScale(1.75f, 1.75f, 1.75f);
        heat->update(cEffect_Firebar, &effectPos, nullptr, &effectScale);

        for (u32 i = 0; i < 6; i++)
            bones[i].hitbox.info.distToCenter = Vec2(9999.0f, 9999.0f);
    } else {
        Vec3 zero(0.0f, 0.0f, 0.0f);
        heat->update(cEffect_Firebar, &zero, nullptr, &zero);
    }

    return 1;
}

u32 BasaltBones::onDraw()
{
    if (draw)
        tsuru::drawModel(model);

    for (u32 i = 0; i < 6; i++)
        bones[i].draw();

    return 1;
}

void BasaltBones::updateModel()
{
    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position + Vec3(0.0f, -16.0f, 0.0f));
    model->setScale(Vec3(2.0f, 2.0f, 2.0f));
    model->updateAnimations();
    model->setMtx(mtx);
    model->updateModel();

    for (u32 i = 0; i < 6; i++) {
        Bone& bone = bones[i];
        if (!bone.model)
            continue;

        mtx.rotateAndTranslate(bone.rotation, bone.position);
        bone.model->setMtx(mtx);
        bone.model->setScale(Vec3(2.0f, 2.0f, 2.0f));
        bone.model->updateModel();
    }
}

void BasaltBones::showBoneHitboxes(bool show)
{
    ActiveColliderMgr* mgr = ActiveColliderMgr::instance;
    for (u32 i = 0; i < 6; i++) {
        ActiveCollider* hitbox = &bones[i].hitbox;
        bool listed = mgr->isInActiveList(hitbox) || mgr->isInCreateList(hitbox);
        if (show && !listed) {
            mgr->addToCreateList(hitbox);
        } else if (!show && listed) {
            if (mgr->isInCreateList(hitbox))
                mgr->removeFromCreateList(hitbox);
            mgr->removeFromActiveList(hitbox);
        }
    }
}

// BossWrapper::collisionPlayer: touch hurts, a stomp (or spin jump) damages.
void BasaltBones::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);

    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else if (hitType == tsuru::HitType::NormalJump || hitType == tsuru::HitType::SpinJump)
        stomp(acOther->owner);
}

bool BasaltBones::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    stomp(acOther->owner);
    return true;
}

// onStompDamage / onStompKill: the player bounces off and it falls apart.
void BasaltBones::stomp(StageActor* player)
{
    hitPoints -= BASALT_STOMP_DAMAGE;
    if (hitPoints <= 0) {
        hitPoints = 0;
        dead = true;
    }

    for (u32 i = 0; i < 6; i++)
        bones[i].position = Vec3(0.0f, 0.0f, 0.0f);

    killPlayerJump(player, Vec2(0.0f, 0.0f), &StateID_Disassemble);
}

// Tsuru: finishedDying() tells the boss controller. Here: the defeat event, a
// burst, gone.
void BasaltBones::defeated()
{
    if (eventId2)
        EventMgr::instance->set(eventId2 - 1, 0, true);

    Vec3 burstScale(2.7f, 2.7f, 2.7f);
    Effect::spawn(cEffect_FireballHit, &position, nullptr, &burstScale);

    showBoneHitboxes(false);
    removeActiveColliders();
    isDeleted = true;
}

void BasaltBones::collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    BasaltBones* self = (BasaltBones*)acSelf->owner;
    StateBase* state = self->states.currentState();

    if (state == &StateID_Throw && acOther->owner->type == 1) {
        tsuru::enemyDamagePlayer(self, acSelf, acOther);
        return;
    }

    if (state != &StateID_Active)
        return;

    u32 profile = acOther->owner->getProfileId();
    if (profile == ProfileId::PlayerFireBall || profile == ProfileId::PlayerIceBall) {
        acOther->owner->isDeleted = true;
        return;
    }

    Enemy::collisionCallback(acSelf, acOther);
}

/** STATE: Spawn */

void BasaltBones::beginState_Spawn()
{
    bones[0].bezier.set(position + Vec3( 0,      -3 * 16, 0), position + Vec3( 0,      0,      0), position + Vec3(-19.6f, 82.3f, 0));
    bones[1].bezier.set(position + Vec3( 0,      -3 * 16, 0), position + Vec3( 0,      0,      0), position + Vec3(0.3f, 70.8f, 0));
    bones[2].bezier.set(position + Vec3( 5 * 16, -3 * 16, 0), position + Vec3( 5 * 16, 7 * 16, 0), position + Vec3(19.3f, 81.8f, 0));
    bones[3].bezier.set(position + Vec3(-5 * 16, -3 * 16, 0), position + Vec3(-5 * 16, 7 * 16, 0), position + Vec3(19.6f, 104.3f, 0));
    bones[4].bezier.set(position + Vec3( 8 * 16, -3 * 16, 0), position + Vec3( 8 * 16, 5 * 16, 0), position + Vec3(0.3f, 115.8f, 0));
    bones[5].bezier.set(position + Vec3(-8 * 16, -3 * 16, 0), position + Vec3(-8 * 16, 5 * 16, 0), position + Vec3(-19.3f, 104.8f, 0));

    for (u32 i = 0; i < 6; i++)
        bones[i].easer.set(Easing::quadInOut, 0.0f, 1.0f, 0.0075f);

    timer = BASALT_SPAWN_WAIT;
    rotation.y = tsuru::Direction::toRotation[tsuru::Direction::Left];
}

void BasaltBones::executeState_Spawn()
{
    switch (spawnStage) {
        case Wait: {
            if (--timer == 0) {
                spawnStage = Shake;
                timer = BASALT_SHAKE_FRAMES;
                startLavaWaves();
            }
            break;
        }

        case Shake: {
            AreaRumbleMgr::instance->rumble(1, 1, 0, 0);

            if (--timer == 0) {
                spawnStage = FlyOut;
                timer = 63 * 5;
            }
            stirLava(true);
            break;
        }

        case FlyOut: {
            for (u32 i = 0; i < 6; i++) {
                Bone& bone = bones[i];

                bone.render = true;
                bool done = bone.easer.ease(bone.t);
                bone.bezier.execute(&bone.position, bone.t);

                if (done) {
                    spawnStage = Assemble;
                    bone.easer.set(Easing::cubicIn, 360.0f, 0.0f, 0.004f);
                }
            }
            break;
        }

        case Assemble: {
            stirLava(false);

            Vec3 centerPoint = bones[0].bezier.keyframes[2];
            for (u32 i = 1; i < 6; i++)
                centerPoint += bones[i].bezier.keyframes[2];
            centerPoint = centerPoint / 6.0f;
            down += 0.0012f * bones[0].t;
            centerPoint.y -= down;

            bool change = false;

            for (u32 i = 0; i < 6; i++) {
                Bone& bone = bones[i];

                bool done = bone.easer.ease(bone.t);
                bone.position.x = centerPoint.x + (bone.t / 16) * cos(bone.t / 16 + i * M_PI / 3.0f);
                bone.position.y = centerPoint.y + (bone.t / 16) * sin(bone.t / 16 + i * M_PI / 3.0f);

                if (done)
                    change = true;
            }

            if (change) {
                draw = true;
                for (u32 i = 0; i < 6; i++) {
                    Bone& bone = bones[i];

                    bone.render = false;
                    bone.position = Vec3(0, 0, 0);

                    bone.hitbox.init(this, &Bone::collisionInfo, 0);
                }
                showBoneHitboxes(true);

                Vec3 burstScale(2.7f, 2.7f, 2.7f);
                Effect::spawn(cEffect_FireballHit, &position, nullptr, &burstScale);
                first = true;
                doStateChange(&StateID_Throw);
            }
            break;
        }
    }
}

void BasaltBones::endState_Spawn() { }

/** STATE: Active */

void BasaltBones::beginState_Active()
{
    tsuru::playSklAnim(model, "walk");

    if (!first && !threw) {
        Vec3 burstScale(2.3f, 2.3f, 2.3f);
        Vec3 pos = position + Vec3(0, 0, 4500.0f);
        Effect::spawn(cEffect_FireballHit, &pos, nullptr, &burstScale);
    }

    direction = randomBool();

    draw = true;
    first = false;

    timer = 0;
}

void BasaltBones::executeState_Active()
{
    using tsuru::Direction::toRotation;

    stirLava(false);
    tsuru::chase(&rotation.y, toRotation[tsuru::Direction::opposite(direction)], tsuru::deg2idx(6.0f));

    timer++;

    bool facingSide = rotation.y == toRotation[tsuru::Direction::Left] || rotation.y == toRotation[tsuru::Direction::Right];
    if (timer > 60 && randU32() % 100 == 0 && facingSide)
        doStateChange(&StateID_Throw);

    if (position.x - startPosition.x < -BASALT_PATROL_RANGE)
        direction = tsuru::Direction::Left;
    else if (position.x - startPosition.x > BASALT_PATROL_RANGE)
        direction = tsuru::Direction::Right;

    if (direction == tsuru::Direction::Left)
        position.x++;
    else
        position.x--;
}

void BasaltBones::endState_Active()
{
    draw = false;
}

/** STATE: Throw */

void BasaltBones::beginState_Throw()
{
    draw = true;
    thrown = false;
    tsuru::playSklAnim(model, "big_stop", false);
    if (model->sklAnims.count > 0)
        model->sklAnims[0]->speed = 1.0f;
    flamesScale = Vec3(0.0f, 0.0f, 0.0f);
}

void BasaltBones::executeState_Throw()
{
    tsuru::chase(&flamesScale.x, 1.7f, 0.1367f);
    tsuru::chase(&flamesScale.y, 2.5f, 0.1367f);
    tsuru::chase(&flamesScale.z, 2.5f, 0.1367f);

    Vec3 pos = position + Vec3(0, 9, 0);
    flames->update(cEffect_JrFireBall, &pos, nullptr, &flamesScale);

    // Tsuru: currentFrame / frameMax == 0.4f, an exact float compare; here the
    // first frame at or past it.
    if (!thrown && tsuru::sklAnimFrame(model) / tsuru::sklAnimEnd(model) >= BASALT_THROW_AT) {
        thrown = true;
        StageActor* fireball = tsuru::spawnActor(ProfileId::BasaltBoneProjectile, position + Vec3(0, 20, 0));
        if (fireball)
            fireball->direction = !direction;
        tsuru::playSound("SE_BOSS_KOOPA_ATTACK", position);
    } else if (tsuru::sklAnimDone(model)) {
        doStateChange(&StateID_Active);
    }
}

void BasaltBones::endState_Throw()
{
    threw = true;
    flamesScale = Vec3(0.0f, 0.0f, 0.0f);
}

/** STATE: Disassemble */

void BasaltBones::beginState_Disassemble()
{
    threw = false;

    bones[0].bezier.set(position, position + Vec3(0, 0, 0),             position + Vec3( 0,      -3 * 16, 0));
    bones[1].bezier.set(position, position + Vec3(0, 0, 0),             position + Vec3( 0,      -3 * 16, 0));
    bones[2].bezier.set(position, position + Vec3( 3 * 16, 3 * 16, 0),  position + Vec3( 3 * 16, -7 * 16, 0));
    bones[3].bezier.set(position, position + Vec3(-3 * 16, 3 * 16, 0),  position + Vec3(-3 * 16, -7 * 16, 0));
    bones[4].bezier.set(position, position + Vec3( 5 * 16, 1 * 16, 0),  position + Vec3( 5 * 16, -7 * 16, 0));
    bones[5].bezier.set(position, position + Vec3(-5 * 16, 1 * 16, 0),  position + Vec3(-5 * 16, -7 * 16, 0));

    for (u32 i = 0; i < 6; i++)
        bones[i].easer.set(Easing::quadIn, 0.0f, 1.0f, 0.03f);
}

void BasaltBones::executeState_Disassemble()
{
    bool change = false;

    for (u32 i = 0; i < 6; i++) {
        Bone& bone = bones[i];
        bone.render = true;

        bool done = bone.easer.ease(bone.t);
        bone.bezier.execute(&bone.position, bone.t);

        if (done) {
            bone.render = false;
            change = true;
        }
    }

    if (change) {
        if (dead)
            defeated();
        else
            doStateChange(&StateID_Assemble);
    }
}

void BasaltBones::endState_Disassemble() { }

/** STATE: Assemble */

void BasaltBones::beginState_Assemble()
{
    timer = 0;      // Tsuru's assembler: the bone being launched

    position = startPosition;

    const Vec3* keyframes = launchKeyframes[timer][randomBool()];

    Bone& bone = bones[0];

    bone.bezier.set(position + keyframes[0], position + keyframes[1], position + keyframes[2]);
    bone.render = true;
    bone.easer.set(Easing::quadInOut, 0.0f, 1.0f, 0.008f);
}

// Tsuru's xrb: a random offset in [-3, 3).
static inline f32 xrb() { return (randomF32() * 2.0f - 1.0f) * 3.0f; }

void BasaltBones::executeState_Assemble()
{
    // Launch
    if (timer < 6) {
        Bone& bone1 = bones[timer];
        bool bone1done = bone1.easer.ease(bone1.t);
        bone1.bezier.execute(&bone1.position, bone1.t);
        if (bone1done) {
            timer++;

            if (timer < 6) {
                const Vec3* keyframes = launchKeyframes[timer][randomBool()];

                Bone& bone1next = bones[timer];
                bone1next.render = true;
                bone1next.easer.set(Easing::quadInOut, 0.0f, 1.0f, 0.008f);
                bone1next.bezier.set(position + keyframes[0], position + keyframes[1], position + keyframes[2]);

                bone1.bezier.set(bone1.position, position + Vec3(0, 2 * 16, 0), position + Vec3(xrb(), xrb(), 0.0f));
                bone1.easer.set(Easing::quadInOut, 0.0f, 1.0f, 0.008f);
            }
        }
    }

    bool change = false;

    // Assemble
    if (timer > 0) {
        Bone& bone2 = bones[timer - 1];

        bool done = bone2.easer.ease(bone2.t);
        bone2.bezier.execute(&bone2.position, bone2.t);

        if (timer == 6 && done)
            change = true;
    }

    for (u32 i = 0; i < 6; i++) {
        Bone& bone = bones[i];
        bone.hitbox.info.distToCenter = Vec2(bone.position.x - position.x, bone.position.y - position.y);
    }

    if (change)
        doStateChange(&StateID_AssembleFinalize);
}

void BasaltBones::endState_Assemble() { }

/** STATE: AssembleFinalize */

void BasaltBones::beginState_AssembleFinalize()
{
    Bone& bone = bones[5];

    bone.bezier.set(bone.position, position + Vec3(0, 2 * 16, 0), position);
    bone.easer.set(Easing::quadInOut, 0.0f, 1.0f, 0.006f);
}

void BasaltBones::executeState_AssembleFinalize()
{
    Bone& bone = bones[5];

    bool done = bone.easer.ease(bone.t);
    bone.bezier.execute(&bone.position, bone.t);

    bone.hitbox.info.distToCenter = Vec2(bone.position.x - position.x, bone.position.y - position.y);

    if (done) {
        for (u32 i = 0; i < 6; i++)
            bones[i].render = false;

        doStateChange(&StateID_Throw);
    }
}

void BasaltBones::endState_AssembleFinalize() { }
