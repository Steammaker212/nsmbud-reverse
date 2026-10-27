/*
    TODO:
        - Proper model
        - Correct collisions
        - Polish movement
        - Effects/Sfx
        - Location association
        - Kill with event id
        - Add new states?
*/

// =====================================================================
//  CONFIGURATION
// =====================================================================
//
// The models (romfs/Model/mrsun.Nin_NX_NVN.szs: "MrSun" and "Glow";
// mrmoon.Nin_NX_NVN.szs: "MrMoon") are flat, alpha-tested sprite quads facing
// the camera: the face 32 x 32 (the Star Coin's size), the sun's rays 48 x 48
// and 1 unit behind it, sized so the face covers the rays' orange core. Both
// spin about the axis toward the camera (Z).

// The sun's rays turn this many degrees a frame, and this many while it
// attacks (spits or dives); the speed eases between the two.
#define MRSUN_RAYS_SPEED            0.6f
#define MRSUN_RAYS_ATTACK_SPEED     12.0f
#define MRSUN_RAYS_EASE             0.08f

// The face sways side to side, this far each way, once every this many frames.
#define MRSUN_SWAY_DEGREES          12.0f
#define MRSUN_SWAY_FRAMES           150

// When an attack starts, the face spins MRSUN_SPIN_TURNS full turns in this
// many frames (the spit fires at frame 32, so this finishes just before).
#define MRSUN_SPIN_TURNS            2
#define MRSUN_SPIN_FRAMES           30

// Killed (by a star, a shell, a fireball, anything): it shrinks to nothing in
// this many frames while spinning faster and faster, instead of falling.
#define MRSUN_DIE_FRAMES            45
#define MRSUN_DIE_SPIN              0.6f    // degrees per frame, times the frame number

// The light each casts: the colour (red, green, blue, 0..1) and how far it
// reaches. The Mad Moon's blue is kept faint.
#define MRSUN_LIGHT_COLOR           { 1.0f, 0.55f, 0.0f, 1.0f }
#define MRSUN_LIGHT_RADIUS          12.0f
#define MRMOON_LIGHT_COLOR          { 0.0f, 0.16f, 0.30f, 1.0f }
#define MRMOON_LIGHT_RADIUS         8.0f

// The Mad Moon is drawn this much bigger than its 32 x 32 model; its hit box
// stays the same.
#define MRMOON_MODEL_SCALE          1.15f

// What kills them: only a Star (the collider's damage mask), a POW block's
// quake while they are on screen, a checkpoint being reached, and the goal
// (which removes them as it removes every enemy, with its points). Fireballs,
// iceballs, hammers, shells, slides, ground pounds and stomps do nothing.

// =====================================================================

// =====================================================================

#include "actors/enemy.h"
#include "actors/actormgr.h"
#include "level/eventmgr.h"

#include "graphics/lightsource.h"
#include "graphics/mask.h"
#include "graphics/model.h"
#include "graphics/drawmgr.h"

class MrSun : public Enemy
{
public:
    MrSun(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void freeze() override;

    // Enemy's death states (DieFall's begin is DieFumi's: 0x602A7FF0); both
    // shrink it away here instead of letting it fall.
    void beginState_DieFumi() override;
    void executeState_DieFumi() override;
    void endState_DieFumi() override;
    void beginState_DieFall() override;
    void executeState_DieFall() override;
    void endState_DieFall() override;

    // Attacks that skip the damage mask (Enemy::vfE8 / vfF0 / vf100: thrown
    // objects such as kicked shells, category 9; category 27; fireballs,
    // category 14) and Yoshi stomping: ignored.
    bool collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool vf158(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool vfF8(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    void updateModel();
    void startAttack();
    void beginDie();
    void executeDie();
    bool isDying();
    void checkKillers();
    void claimShot(StageActor* shot);

    u32 seenPowQuakes;      // the counts when last looked at (killers below)
    u32 seenCheckpoints;

    ModelWrapper* model;
    ModelWrapper* glowModel;

    LightSource lightSource;
    sead::Color4f lightColor;
    f32 lightRadius;
    LightMask lightMask;

    bool isMoon;

    bool attacking;     // spitting or diving: the rays spin fast
    u32 swayTimer;
    u32 spinTimer;      // frames left of the attack spin
    u32 raysAngle;      // full turn = 2^32
    f32 raysSpeed;      // degrees per frame
    u32 dieTimer;
    u32 dieSpin;
    f32 dieScale;

    u32 timer;

    f32 baseline;

    Vec2 swoopTarget;
    f32 swoopA;
	f32 swoopB;
    f32 swoopC;

    f32 wiggleX;

    Vec2 spinCenter;

    static const ActiveCollider::Info colliderInfo;

    DECLARE_STATE(MrSun, Stationary);
    DECLARE_STATE(MrSun, Follow);
    DECLARE_STATE(MrSun, Swoop);
    DECLARE_STATE(MrSun, AttackSpin);
    DECLARE_STATE(MrSun, Spit);
};

CREATE_STATE(MrSun, Stationary);
CREATE_STATE(MrSun, Follow);
CREATE_STATE(MrSun, Swoop);
CREATE_STATE(MrSun, AttackSpin);
CREATE_STATE(MrSun, Spit);

// Profile flags 0x10: the goal removes it with the other enemies (with their
// points): the goal's sweep (0x60614478) takes every stage actor whose
// profile flags (StageActor +0x238) have 0x10 or 0x20.
const Profile mrSunProfile(&MrSun::build, ProfileId::MrSun, "MrSun", nullptr, 0x10);
PROFILE_RESOURCES(ProfileId::MrSun, "mrsun");

const Profile mrMoonProfile(&MrSun::build, 915, "MrMoon", nullptr, 0x10);
PROFILE_RESOURCES(ProfileId::MrMoon, "mrmoon");

// Damage mask 1 << 3: of the attacks Enemy's collision checks gate by the mask
// (bit n = attack category n: 1 fireball, 2 iceball, 3 star, 5 slide, 7 ground
// pound, 10 penguin slide, 13 propeller drill, 19 hammer, ...), only the Star.
const ActiveCollider::Info MrSun::colliderInfo = { {0.0f, 0.0f}, {16.0f, 16.0f}, 1, 3, 0, 0xFFFFFFFF, 1u << 3, 0, &Enemy::collisionCallback };

// ---- POW blocks and checkpoints ----------------------------------------------
//
// Counted where the game starts them: the POW block's quake state begin
// (0x606BC2D4; hit from below, 0x606BE3E4, or thrown and landed, 0x606BC598)
// and the checkpoint's "reached" (0x605D1F54: rumble, SE_SYS_MID_POINT, the
// checkpoint is saved). Each Sun and Moon compares the counts every frame.
namespace {
u32 sPowQuakes;
u32 sCheckpoints;
}

namespace ModBase { namespace mrSun { int powQuake_orig(void* pow); } }
namespace ModBase { namespace mrSun { int powQuake(void* pow); } }
int ModBase::mrSun::powQuake(void* pow)
{
    sPowQuakes++;
    return ModBase::mrSun::powQuake_orig(pow);
}

namespace ModBase { namespace mrSun { int checkpoint_orig(void* flag, int player, int unk); } }
namespace ModBase { namespace mrSun { int checkpoint(void* flag, int player, int unk); } }
int ModBase::mrSun::checkpoint(void* flag, int player, int unk)
{
    sCheckpoints++;
    return ModBase::mrSun::checkpoint_orig(flag, player, unk);
}


MrSun::MrSun(const ActorBuildInfo* buildInfo) : Enemy(buildInfo) { }

Actor* MrSun::build(const ActorBuildInfo* buildInfo)
{
    return new MrSun(buildInfo);
}


u32 MrSun::onCreate()
{
    EnemyFreezeMgr::Flags flags = { 1, 1, 1 };
    freezeMgr.setFlags(flags);

    isMoon = profile->id == 915;
    attacking = false;
    swayTimer = spinTimer = raysAngle = dieTimer = dieSpin = 0;
    raysSpeed = MRSUN_RAYS_SPEED;
    seenPowQuakes = sPowQuakes;
    seenCheckpoints = sCheckpoints;

    if (!isMoon)
    {
        model = ModelWrapper::create("mrsun", "MrSun");
        glowModel = ModelWrapper::create("mrsun", "Glow");
        lightColor = MRSUN_LIGHT_COLOR;
        lightRadius = MRSUN_LIGHT_RADIUS;
    }
    else
    {
        model = ModelWrapper::create("mrmoon", "MrMoon");
        glowModel = nullptr;
        lightColor = MRMOON_LIGHT_COLOR;
        lightRadius = MRMOON_LIGHT_RADIUS;
    }

    f32 lightAttenuationRadius = lightRadius;
    lightSource.update(0, &position, nullptr, &lightAttenuationRadius, nullptr, &lightColor, nullptr, nullptr);

    lightMask.init(nullptr, 2);
    lightMask.position = position;
    lightMask.radius = 350.0f;
    lightMask.update();


    baseline = position.y;

    aCollider.init(this, &colliderInfo, 0);
    addActiveColliders();

    if (settings1 & 1)
        doStateChange(&StateID_Stationary);
    else
        doStateChange(&StateID_Follow);

    updateModel();

    return 1;
}

u32 MrSun::onExecute()
{
    checkKillers();
    states.execute();

    f32 lightAttenuationRadius = lightRadius;
    lightSource.update(0, &position, nullptr, &lightAttenuationRadius, nullptr, &lightColor, nullptr, nullptr);

    lightMask.position = position;
    lightMask.update();

    updateModel();

    return 1;
}

u32 MrSun::onDraw()
{
    DrawMgr::instance->drawModel(model);
    if (glowModel)
        DrawMgr::instance->drawModel(glowModel);
    lightMask.draw();

    return 1;
}

void MrSun::freeze()
{
    EnemyFreezeMgr::Info info = { 0 };
    info.position = position;
    info.position.y -= 24;
    info.scale.set(0.75f);
    info.settings = 0x00000003;

    freezeMgr.freeze(info, 1);
}


// Every frame: the rays turn (fast while attacking), the face sways and, after
// startAttack, spins; both are drawn at the actor's scale (the death shrink).
void MrSun::updateModel()
{
    f32 raysTarget = attacking ? MRSUN_RAYS_ATTACK_SPEED : MRSUN_RAYS_SPEED;
    raysSpeed += (raysTarget - raysSpeed) * MRSUN_RAYS_EASE;
    raysAngle += fix_deg(raysSpeed);

    swayTimer++;
    f32 faceDegrees = sin(swayTimer * 2.0f * M_PI / MRSUN_SWAY_FRAMES) * MRSUN_SWAY_DEGREES;
    if (spinTimer)
    {
        spinTimer--;
        f32 t = 1.0f - (f32)spinTimer / MRSUN_SPIN_FRAMES;
        t = t * t * (3.0f - 2.0f * t);                  // eased in and out
        faceDegrees += t * 360.0f * MRSUN_SPIN_TURNS;
    }

    Vec3 modelScale = scale;
    if (isMoon)
        modelScale = Vec3(scale.x * MRMOON_MODEL_SCALE, scale.y * MRMOON_MODEL_SCALE, scale.z * MRMOON_MODEL_SCALE);
    Mtx34 mtx;

    Vec3i faceRotation = rotation;
    faceRotation.z += fix_deg(faceDegrees) + dieSpin;
    mtx.rotateAndTranslate(faceRotation, position);

    model->setMtx(mtx);
    model->setScale(modelScale);
    model->updateModel();

    if (glowModel)
    {
        Vec3i glowRotation = rotation;
        glowRotation.z += raysAngle + dieSpin;

        mtx.rotateAndTranslate(glowRotation, position);

        glowModel->setMtx(mtx);
        glowModel->setScale(modelScale);
        glowModel->updateModel();
    }
}

// An attack starts (a spit, or the spin before a dive): the face spins and the
// rays speed up until the attack is over.
void MrSun::startAttack()
{
    attacking = true;
    spinTimer = MRSUN_SPIN_FRAMES;
}


// ---- Dying ------------------------------------------------------------------
//
// Every kill (star, shell, fireball, ...) ends in Enemy's DieFumi or DieFall
// state; Enemy::beginState_DieFumi (0x602A7D9C) takes the colliders away and
// loads the fall speed, and its execute (0x602A7F8C) spins it about X and lets
// it fall. Here it keeps the begin, stays where it is, and shrinks away.
void MrSun::beginDie()
{
    // The begin also turns the actor to face its direction (rotation.y) and
    // moves it to a fixed depth (position.z): a flat sprite keeps both.
    Vec3i keepRotation = rotation;
    f32 keepZ = position.z;
    Enemy::beginState_DieFumi();
    rotation = keepRotation;
    position.z = keepZ;
    speed = Vec3(0.0f, 0.0f, 0.0f);
    attacking = true;
    spinTimer = 0;
    dieTimer = 0;
    dieScale = scale.x;
}

void MrSun::executeDie()
{
    dieTimer++;
    dieSpin += fix_deg(dieTimer * MRSUN_DIE_SPIN);

    f32 left = 1.0f - (f32)dieTimer / MRSUN_DIE_FRAMES;
    if (left <= 0.0f)
    {
        isDeleted = true;
        return;
    }
    scale = Vec3(dieScale * left, dieScale * left, dieScale * left);
    lightMask.radius = 350.0f * left;
}

bool MrSun::isDying()
{
    StateBase* current = states.currentState();
    return current == &StateID_DieFumi || current == &StateID_DieFall;
}

// A POW quake since the last frame kills it while it is on screen; a checkpoint
// reached kills it wherever it is.
void MrSun::checkKillers()
{
    bool pow = sPowQuakes != seenPowQuakes;
    bool checkpoint = sCheckpoints != seenCheckpoints;
    seenPowQuakes = sPowQuakes;
    seenCheckpoints = sCheckpoints;
    if (isDying())
        return;
    if ((pow && !isOffScreen()) || checkpoint)
        doStateChange(&StateID_DieFumi);
}

// The plant iceball skips, of the enemies it touches, the actor whose id it
// holds at +0x1A54 (its collider callback 0x60143990) -- and its constructor
// (0x60143930) leaves that at 0, so the Moon's own shot froze it as it left.
void MrSun::claimShot(StageActor* shot)
{
    if (shot && isMoon)
        *(u32*)((u8*)shot + 0x1A54) = id;
}

bool MrSun::collisionThrowableObject(ActiveCollider*, ActiveCollider*) { return false; }
bool MrSun::collisionFireball(ActiveCollider*, ActiveCollider*)        { return false; }
bool MrSun::vf158(ActiveCollider*, ActiveCollider*)                    { return false; }
bool MrSun::vfF8(ActiveCollider*, ActiveCollider*)                     { return false; }

void MrSun::beginState_DieFumi()   { beginDie(); }
void MrSun::executeState_DieFumi() { executeDie(); }
void MrSun::endState_DieFumi()     { }

void MrSun::beginState_DieFall()   { beginDie(); }
void MrSun::executeState_DieFall() { executeDie(); }
void MrSun::endState_DieFall()     { }


void MrSun::beginState_Stationary()
{
    attacking = false;
}

void MrSun::executeState_Stationary() { }

void MrSun::endState_Stationary() { }


void MrSun::beginState_Follow()
{
    attacking = false;
    timer = 0;
    speed.x = 0.0f;
    position.y = baseline;
}

void MrSun::executeState_Follow()
{
    direction = directionToPlayerH(position);

    const f32 speedDelta = 0.1f;

    if (direction == RIGHT)
    {
        speed.x += speedDelta;
        if (speed.x <  0.0f) speed.x += speedDelta / 2.0f;
        if (speed.x < -6.0f) speed.x += speedDelta;
    }
    else
    {
        speed.x -= speedDelta;
        if (speed.x >  0.0f) speed.x -= speedDelta / 2.0f;
        if (speed.x >  6.0f) speed.x -= speedDelta;
    }

    position.x += speed.x;

    timer++;

    if (timer > 200)
    {
        Vec2 dist;
        if (distanceToPlayer(dist) < 0)
        {
            timer = 0;
            return;
        }

        if (fabs(dist.x) > 250.0f)
            timer -= 100;

        else
        {
            if (randBool())
            {
                if (dist.y > -48.0f)
                    doStateChange(&StateID_Spit);
                else
                    doStateChange(&StateID_AttackSpin);
            }

            else
                doStateChange(&StateID_Spit);
        }
    }
}

void MrSun::endState_Follow() { }


void MrSun::beginState_Swoop()
{
    attacking = true;      // the dive that follows AttackSpin

    Vec2 targetOffset;
    if (distanceToPlayer(targetOffset) < 0)
    {
        doStateChange(&StateID_Follow);
        return;
    }

    swoopTarget = Vec2(position.x, position.y) + targetOffset;

    f32 x1, x2, x3, y1, y2, y3;

    x1 = -targetOffset.x;
	x2 = 0.0f;
	x3 = -x1;

	y1 = -targetOffset.y;
	y2 = 0.0f;
    y3 = y1;

    f32 denom = (x1 - x2) * (x1 - x3) * (x2 - x3);
    swoopA    = (x3 * (y2 - y1) + x2 * (y1 - y3) + x1 * (y3 - y2)) / denom;
	swoopB    = (x3*x3 * (y1 - y2) + x2*x2 * (y3 - y1) + x1*x1 * (y2 - y3)) / denom;
    swoopC    = (x2 * x3 * (x2 - x3) * y1 + x3 * x1 * (x3 - x1) * y2 + x1 * x2 * (x1 - x2) * y3) / denom;

    speed.x = x3 * 0.025f;
}

void MrSun::executeState_Swoop()
{
    position.x += speed.x;

    position.y = ( swoopA*(position.x - swoopTarget.x)*(position.x - swoopTarget.x) + swoopB*(position.x - swoopTarget.x) + swoopC ) + swoopTarget.y;

    if (position.y > baseline)
    {
        position.y = baseline;
        doStateChange(&StateID_Follow);
    }
}

void MrSun::endState_Swoop() { }


void MrSun::beginState_AttackSpin()
{
    startAttack();
    timer = 0;
    spinCenter = Vec2(position.x, position.y);
    direction = directionToPlayerH(position);
}

void MrSun::executeState_AttackSpin()
{
    f32 dist = (cos((timer*M_PI)/40.0f + M_PI) + 1.0f) * 7.0f;

    f32 theta = (timer/6.0f) * (direction ? 1.0f : -1.0f);
    position.x = spinCenter.x + dist*cos(theta);
    position.y = spinCenter.y + dist*sin(theta);

    if (timer++ >= 80)
        doStateChange(&StateID_Swoop);
}

void MrSun::endState_AttackSpin() { }


void MrSun::beginState_Spit()
{
    startAttack();
    timer = 0;
    wiggleX = position.x;
}

void MrSun::executeState_Spit()
{
    if (timer <= 32)
        position.x = wiggleX + sin(timer*M_PI_4) * 1.5f;

    if (timer == 32)
    {
        ActorBuildInfo buildInfo = { 0 };
        buildInfo.profile = Profile::get(!isMoon ? ProfileId::PlantFireBall : ProfileId::PlantIceBall);
        buildInfo.position = position;
        buildInfo.parentId = id;

        StageActor* fireball;

        Vec2 target;
        distanceToPlayer(target);

        f32 angle = atan2(target.y, target.x);

        if (randBool())
        {
            const f32 shootSpeedSingle = 3.0f;

            buildInfo.rotation = fix_rad(angle);
            fireball = reinterpret_cast<StageActor*>(ActorMgr::instance->create(&buildInfo, 0));
            claimShot(fireball);
            fireball->speed.x = cos(angle) * shootSpeedSingle;
            fireball->speed.y = sin(angle) * shootSpeedSingle;
        }

        else
        {
            const f32 shootSpeedTriple = 2.5f;

            buildInfo.rotation = fix_rad(angle);
            fireball = reinterpret_cast<StageActor*>(ActorMgr::instance->create(&buildInfo, 0));
            claimShot(fireball);
            fireball->speed.x = cos(angle) * shootSpeedTriple;
            fireball->speed.y = sin(angle) * shootSpeedTriple;

            buildInfo.rotation = fix_rad(angle + 0.4f);
            fireball = reinterpret_cast<StageActor*>(ActorMgr::instance->create(&buildInfo, 0));
            claimShot(fireball);
            fireball->speed.x = cos(angle + 0.4f) * shootSpeedTriple;
            fireball->speed.y = sin(angle + 0.4f) * shootSpeedTriple;

            buildInfo.rotation = fix_rad(angle - 0.4f);
            fireball = reinterpret_cast<StageActor*>(ActorMgr::instance->create(&buildInfo, 0));
            claimShot(fireball);
            fireball->speed.x = cos(angle - 0.4f) * shootSpeedTriple;
            fireball->speed.y = sin(angle - 0.4f) * shootSpeedTriple;
        }
    }

    timer++;

    if (timer > 80)
        doStateChange(&StateID_Follow);
}

void MrSun::endState_Spit() { }
