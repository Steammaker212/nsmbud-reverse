// scuttlebug.cpp -- the Scuttlebug (sprite 754): a spider that hangs on a
// thread, lowering and raising itself.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/scuttlebug.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Besides the
// porting kit's renames (docs/TSURU_PORTING.md), it starts and runs its state
// machine, which Tsuru's never did (it hung in place, and its stomp death never
// began).
//
// It waits out of sight until a player comes near, then drops from above the screen on its
// thread and stops where it was placed with a bounce. From then on it sways gently from side to
// side, the thread moving with it, and goes down and back up, or up and back down, or both.
//
// Settings:
//   nybble 5      how far it lowers, in tiles
//   nybble 6      how long it waits at each end, in half seconds
//   nybble 7      how far it rises above its place, in tiles, before coming back to it
//
// Model: gasagoso (Tsuru's archive), models "gasagoso" (anim "walk") and
// "string".
//
// Every death is the Die state: modbase/tumble_death.h does the spider, and the thread, which
// would go with the actor, dissolves as an actor of its own. It is one model drawn several times:
// short pieces at the bottom, chained at angles so a wave runs up it, and the rest long.

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"
#include "modbase/yoshi.h"
#include "modbase/tumble_death.h"

#define SCUTTLEBUG_WAKE_RANGE_X (8.0f * 16.0f)      // a player this close: it drops
#define SCUTTLEBUG_WAKE_RANGE_Y (7.0f * 16.0f)
#define SCUTTLEBUG_DROP_MARGIN  32.0f               // starts this far above the screen's top edge
#define SCUTTLEBUG_DROP_GRAVITY 0.3f
#define SCUTTLEBUG_DROP_SPEED   7.0f
#define SCUTTLEBUG_SPRING       0.035f              // the thread pulling it back
#define SCUTTLEBUG_SPRING_DAMP  0.93f
#define SCUTTLEBUG_SETTLED      0.15f

#define SCUTTLEBUG_THREAD_PARTS 5
#define SCUTTLEBUG_THREAD_PIECE 28.0f               // units, the bottom pieces
#define SCUTTLEBUG_THREAD_START 2.9f                // the model: from here down its z...
#define SCUTTLEBUG_THREAD_END   217.1f              // ...to here, at scale 1
#define SCUTTLEBUG_THREAD_REST  (SCUTTLEBUG_THREAD_END * 2.5f)
#define SCUTTLEBUG_THREAD_JOIN  3.0f                // pieces overlap this much: no gaps at the bends
#define SCUTTLEBUG_THREAD_WIDTH 2.5f
#define SCUTTLEBUG_SWAY_REST    4.0f                // degrees of its wave: it is never still
#define SCUTTLEBUG_SWAY_FALL    6.0f                // ...dropping
#define SCUTTLEBUG_SWAY_STOP    18.0f               // ...when it reaches its place
#define SCUTTLEBUG_SWAY_DECAY   0.975f
#define SCUTTLEBUG_SWAY_SPEED   0.12f               // of the wave at rest; a bounce adds to it
#define SCUTTLEBUG_SWAY_BOUNCE  0.18f
#define SCUTTLEBUG_SWAY_RUN     0.9f                // the wave's phase, piece to piece

#define SCUTTLEBUG_WANDER       10.0f               // units either side of its place
#define SCUTTLEBUG_WANDER_SPEED 0.02f               // radians a frame
#define SCUTTLEBUG_MOVE_SPEED   1.0f
#define SCUTTLEBUG_DISSOLVE     30                  // frames for a cut thread to go

#define SCUTTLEBUG_SOUND_DROP   "SE_PLY_JUMPDAI"            // the spring, when a player jumps on it
#define SCUTTLEBUG_SOUND_BOUNCE "SE_OBJ_TRPLN_BOUND"

// The thread: from `bottom`, straight up unless its wave bends it.
struct ScuttlebugString
{
    ModelWrapper* parts[SCUTTLEBUG_THREAD_PARTS];

    void create()
    {
        for (ModelWrapper*& part : parts)
            part = tsuru::createModel("gasagoso", "string");
    }

    // lean: radians the whole thread tilts, as a spider off to one side pulls it.
    void place(const Vec3& bottom, f32 sway, f32 phase, f32 lean, f32 width)
    {
        const f32 span = SCUTTLEBUG_THREAD_END - SCUTTLEBUG_THREAD_START;
        Vec3 at = bottom;
        for (u32 i = 0; i < SCUTTLEBUG_THREAD_PARTS; i++) {
            bool last = i == SCUTTLEBUG_THREAD_PARTS - 1;
            f32 length = last ? SCUTTLEBUG_THREAD_REST : SCUTTLEBUG_THREAD_PIECE;
            f32 angle = lean + deg_to_rad(last ? 0.0f : sway * sin(phase - i * SCUTTLEBUG_SWAY_RUN));
            f32 c = cos(angle), s = sin(angle);

            if (parts[i]) {
                // The model runs down its z, from a little off its origin. x across, z down the
                // thread, y out of the screen. Each piece starts a little below the last one's end.
                f32 stretch = (length + SCUTTLEBUG_THREAD_JOIN) / span;
                f32 back = SCUTTLEBUG_THREAD_START * stretch - SCUTTLEBUG_THREAD_JOIN;
                Mtx34 mtx;
                mtx.rows[0][0] = c; mtx.rows[0][1] = 0.0f; mtx.rows[0][2] = s;  mtx.rows[0][3] = at.x + s * back;
                mtx.rows[1][0] = s; mtx.rows[1][1] = 0.0f; mtx.rows[1][2] = -c; mtx.rows[1][3] = at.y - c * back;
                mtx.rows[2][0] = 0.0f; mtx.rows[2][1] = 1.0f; mtx.rows[2][2] = 0.0f; mtx.rows[2][3] = at.z;
                parts[i]->setMtx(mtx);
                parts[i]->setScale(Vec3(width, width, stretch));
                parts[i]->updateModel();
            }

            at.x -= s * length;
            at.y += c * length;
        }
    }

    void draw()
    {
        for (ModelWrapper* part : parts)
            tsuru::drawModel(part);
    }
};

// The thread of a dead Scuttlebug: it stays where it was and thins away.
class ScuttlebugThread : public StageActor
{
public:
    ScuttlebugThread(const ActorBuildInfo* buildInfo)
        : StageActor(buildInfo), phase(0.0f), sway(SCUTTLEBUG_SWAY_REST), lean(0.0f), timer(SCUTTLEBUG_DISSOLVE) { }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new ScuttlebugThread(buildInfo); }

    u32 onCreate() override
    {
        string.create();
        return onExecute();
    }

    u32 onExecute() override
    {
        phase += SCUTTLEBUG_SWAY_SPEED;
        string.place(position, sway, phase, lean, SCUTTLEBUG_THREAD_WIDTH * timer / SCUTTLEBUG_DISSOLVE);
        if (timer-- == 0)
            isDeleted = true;
        return 1;
    }

    u32 onDraw() override
    {
        string.draw();
        return 1;
    }

    ScuttlebugString string;
    f32 phase;
    f32 sway;
    f32 lean;
    u32 timer;
};

const Profile scuttlebugThreadProfile(&ScuttlebugThread::build, ProfileId::ScuttlebugThread, "ScuttlebugThread", nullptr, 0);

class Scuttlebug : public Enemy
{
public:
    Scuttlebug(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    void vf228() override;      // Enemy's EatOut: Yoshi spat it out

    void cutThread();
    f32 threadLean() const;
    void nextStop();

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    ScuttlebugString string;
    ::yoshi::EatData eatData;
    u32 timer;
    ModBase::TumbleDeath tumble;
    u32 stop;               // of cStops: where it is headed
    u16 idleTime;
    f32 lowerBy;
    f32 riseBy;
    f32 targetY;
    f32 homeX;
    f32 homeY;
    f32 dropSpeed;
    f32 sway;
    f32 swayPhase;
    f32 wander;
    bool hidden;
    bool bouncing;
    bool threadGone;

    DECLARE_STATE(Scuttlebug, Hidden);
    DECLARE_STATE(Scuttlebug, Drop);
    DECLARE_STATE(Scuttlebug, Move);
    DECLARE_STATE(Scuttlebug, Wait);
    DECLARE_STATE(Scuttlebug, Die);
};

CREATE_STATE(Scuttlebug, Hidden);
CREATE_STATE(Scuttlebug, Drop);
CREATE_STATE(Scuttlebug, Move);
CREATE_STATE(Scuttlebug, Wait);
CREATE_STATE(Scuttlebug, Die);

const Profile scuttlebugProfile(&Scuttlebug::build, ProfileId::Scuttlebug, "Scuttlebug", nullptr, 0);
PROFILE_RESOURCES(ProfileId::Scuttlebug, "gasagoso");

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info Scuttlebug::collisionInfo = {
    {0.0f, -4.0f}, {16.0f, 16.0f}, 0, 3, 0, 0xFFFFFFFF, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

Scuttlebug::Scuttlebug(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , timer(0)
    , stop(0)
    , idleTime(0)
    , lowerBy(0.0f)
    , riseBy(0.0f)
    , targetY(0.0f)
    , homeX(0.0f)
    , homeY(0.0f)
    , dropSpeed(0.0f)
    , sway(SCUTTLEBUG_SWAY_REST)
    , swayPhase(0.0f)
    , wander(0.0f)
    , hidden(true)
    , bouncing(false)
    , threadGone(false)
{ }

Actor* Scuttlebug::build(const ActorBuildInfo* buildInfo)
{
    return new Scuttlebug(buildInfo);
}

u32 Scuttlebug::onCreate()
{
    rotation.x = tsuru::deg2idx(90.0f);
    rotation.y = 0;
    rotation.z = 0;

    aCollider.init(this, &collisionInfo, 0);    // added when it drops

    lowerBy = 16.0f * (settings1 >> 0x1C & 0xF);        // nybble 5, tiles
    idleTime = 30 * (settings1 >> 0x18 & 0xF);          // nybble 6: 30 = 0.5 seconds
    riseBy = 16.0f * (settings1 >> 0x14 & 0xF);         // nybble 7, tiles

    model = tsuru::createModel("gasagoso", "gasagoso", 1);
    string.create();
    if (!model) {
        isDeleted = true;
        return 1;
    }

    tsuru::playSklAnim(model, "walk");
    ModBase::yoshi::makeEdible(this, &eatData);

    homeX = position.x;
    homeY = position.y;
    doStateChange(&StateID_Hidden);

    return onExecute();
}

u32 Scuttlebug::onExecute()
{
    states.execute();

    bool eaten = ModBase::yoshi::beingEaten(eatData);
    if (eaten)
        cutThread();

    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, position);
    model->setMtx(mtx);
    model->setScale(scale * 2.5f);
    model->updateModel();
    model->updateAnimations();

    if (!threadGone) {
        f32 excited = (sway - SCUTTLEBUG_SWAY_REST) / (SCUTTLEBUG_SWAY_STOP - SCUTTLEBUG_SWAY_REST);
        swayPhase += SCUTTLEBUG_SWAY_SPEED + SCUTTLEBUG_SWAY_BOUNCE * excited;
        sway = SCUTTLEBUG_SWAY_REST + (sway - SCUTTLEBUG_SWAY_REST) * SCUTTLEBUG_SWAY_DECAY;
        string.place(position, sway, swayPhase, threadLean(), SCUTTLEBUG_THREAD_WIDTH);
    }

    if (tumble.execute(this))
        return 1;

    // Yoshi moves it while it is being eaten.
    if (!eaten && !hidden) {
        wander += SCUTTLEBUG_WANDER_SPEED;
        position.x = homeX + SCUTTLEBUG_WANDER * sin(wander);
    }

    return 1;
}

u32 Scuttlebug::onDraw()
{
    if (hidden)
        return 1;
    tsuru::drawModel(model);
    if (!threadGone)
        string.draw();
    return 1;
}

// The thread goes on as an actor of its own, wave and all.
void Scuttlebug::cutThread()
{
    if (threadGone)
        return;
    threadGone = true;
    if (ScuttlebugThread* thread = static_cast<ScuttlebugThread*>(tsuru::spawnActor(ProfileId::ScuttlebugThread, position))) {
        thread->phase = swayPhase;
        thread->sway = sway;
        thread->lean = threadLean();
    }
}

// The top of the thread stays over its place.
f32 Scuttlebug::threadLean() const
{
    return (position.x - homeX) / SCUTTLEBUG_THREAD_REST;
}

void Scuttlebug::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    u32 hitType = processCollision(acSelf, acOther, 0);

    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else if (hitType == tsuru::HitType::NormalJump || hitType == tsuru::HitType::SpinJump)
        killPlayerJump(acOther->owner, Vec2(0.0f, 0.0f), &StateID_Die);
}

void Scuttlebug::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
}

bool Scuttlebug::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return collisionStar(acSelf, acOther);
}

bool Scuttlebug::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    doStateChange(&StateID_Die);
    return true;
}

// Enemy's EatOut does nothing (0x602A972C), and its thread is gone.
void Scuttlebug::vf228()
{
    tumble.begin(this);
}

bool Scuttlebug::collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther)            { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther)     { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther)   { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther)  { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther)         { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)          { return collisionStar(acSelf, acOther); }
bool Scuttlebug::collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)    { return collisionFireball(acSelf, acOther); }

/** STATE: Hidden */

void Scuttlebug::beginState_Hidden() { }

void Scuttlebug::executeState_Hidden()
{
    Vec2 toPlayer = tsuru::distanceToPlayer(this);
    if (fabs(toPlayer.x) < SCUTTLEBUG_WAKE_RANGE_X && fabs(toPlayer.y) < SCUTTLEBUG_WAKE_RANGE_Y)
        doStateChange(&StateID_Drop);
}

void Scuttlebug::endState_Hidden() { }

/** STATE: Drop */

void Scuttlebug::beginState_Drop()
{
    // Always from out of sight, however the camera sits, and from above its place even if that
    // is off the top of the screen too.
    f32 top = ModBase::camera::top();
    hidden = false;
    position.y = (top > homeY ? top : homeY) + SCUTTLEBUG_DROP_MARGIN;
    dropSpeed = 0.0f;
    sway = SCUTTLEBUG_SWAY_FALL;
    addActiveColliders();
    tsuru::playSound(SCUTTLEBUG_SOUND_DROP, position);
}

void Scuttlebug::executeState_Drop()
{
    if (!bouncing) {
        dropSpeed -= SCUTTLEBUG_DROP_GRAVITY;
        if (dropSpeed < -SCUTTLEBUG_DROP_SPEED)
            dropSpeed = -SCUTTLEBUG_DROP_SPEED;
        position.y += dropSpeed;
        if (position.y <= homeY) {
            bouncing = true;
            sway = SCUTTLEBUG_SWAY_STOP;
            tsuru::playSound(SCUTTLEBUG_SOUND_BOUNCE, position);
        }
        return;
    }

    // Its place reached, the thread goes taut: it stretches, pulls back, and settles.
    dropSpeed += (homeY - position.y) * SCUTTLEBUG_SPRING;
    dropSpeed *= SCUTTLEBUG_SPRING_DAMP;
    position.y += dropSpeed;
    if (fabs(homeY - position.y) < SCUTTLEBUG_SETTLED && fabs(dropSpeed) < SCUTTLEBUG_SETTLED) {
        position.y = homeY;
        dropSpeed = 0.0f;
        if (lowerBy != 0.0f || riseBy != 0.0f) {
            stop = 3;
            nextStop();
        }
    }
}

void Scuttlebug::endState_Drop() { }

/** STATE: Move */

// Down and back to its place, then up and back, each only if it has that distance.
void Scuttlebug::nextStop()
{
    do {
        stop = (stop + 1) % 4;
    } while (stop < 2 ? lowerBy == 0.0f : riseBy == 0.0f);

    targetY = stop == 0 ? homeY - lowerBy : stop == 2 ? homeY + riseBy : homeY;
    doStateChange(&StateID_Move);
}

void Scuttlebug::beginState_Move() { }

void Scuttlebug::executeState_Move()
{
    if (tsuru::chase(&position.y, targetY, SCUTTLEBUG_MOVE_SPEED))
        doStateChange(&StateID_Wait);
}

void Scuttlebug::endState_Move() { }

/** STATE: Wait */

void Scuttlebug::beginState_Wait()
{
    timer = 0;
}

void Scuttlebug::executeState_Wait()
{
    if (timer++ >= idleTime)
        nextStop();
}

void Scuttlebug::endState_Wait() { }

/** STATE: Die */

void Scuttlebug::beginState_Die()
{
    cutThread();
    tumble.begin(this);
}

void Scuttlebug::executeState_Die() { }

void Scuttlebug::endState_Die() { }
