// shy_guy_behaviours.cpp -- the Shy Guy (sprite 737): nine behaviours, each with its colour.
//
// Settings (nybbles; "half" = half a second, 0 in a number takes the default):
//
//   nybble 5      behaviour, which is also the colour:
//                   0 red         sits when stomped; a second stomp kills it
//                   1 orange      the original: shrinks when stomped (code/sprites/shy_guy.cpp)
//                   2 yellow      jumps on the spot, twisting in the air
//                   3 white       spins around, a spike ball appears, and it throws it
//                   4 green       leaps, falls flat, gets up and tries again
//                   5 blue        slides after the player, as if on ice; now and then
//                                 it hops and spins, like a skater
//                   6 black       sad: hands over its eyes, looks slowly from side to side
//                   7 light blue  sits and blows bubbles, facing the player
//                   8 pink        happy: always skipping
//   nybble 6      checkboxes:
//                   1 Big: the same for every behaviour. 10 tiles tall, walks very slowly,
//                     never falls off an edge. It cannot be hurt and hurts nobody: it bumps
//                     you from the sides, and you bounce high off the top.
//                   2 falls off edges (behaviours 0, 1, 6, 8; else it turns at them)
//                   4 stationary (6, 8): the sad one sits, shaking its head "no";
//                     changes direction after every leap (4)
//                   8 leaps toward the player (4, and overrides the 4 box); keeps off
//                     edges while chasing (5)
//   nybble 7      0 seconds sitting, in halves (default 10)
//                 2 jump height, in half tiles (default 4)
//                 3 throw direction: 0 at the player, 1 left, 2 right
//                 4 leap distance, in tiles (default 4)
//                 7 bubbles a burst (default 1)
//   nybble 8      2 jump wait, in tenths of a second (default 5)
//                 3 time between throws, in halves (default 6)
//                 4 time on the ground, in halves (default 3)
//                 7 time between bursts, in halves (default 3)
//   nybbles 11-12 behaviour 1 only: the Goomba class's own settings, as before
//
// Anything not listed dies in one stomp, and Yoshi can eat every one that is not Big.
//
// Model: shyguy (scripts/models/shyguy_model.py): the texture-pattern anim "color" has one
// frame per behaviour, frozen as the Biddybud's "bud". Skeletal anims "walk", "walk0", "walk1",
// "hikkuri", "idle", "sitdown", "sit", "standup", "sit_idle", "sit_blow", "happy", "sad_idle",
// "sad_walk", "sad_sit": the arms flap in all but the sad ones. The spike ball is
// "ball" of the retail gabon; the bubble is balloon_awachibiyoshi, the Baby Yoshi's.
//
// Sounds: a label plays only if a group the stage has loaded holds its file (Sound.bfsar):
// these are all in GROUP_BOOT, which SE_PLY_CH_YOSHI_BBL needs loaded in a stage to work at all.
// BasicSoundActor::playSound (0x60810BBC) itself drops a positioned sound far off-screen.

#include "actors/enemy.h"
#include "actors/actormgr.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/game.h"
#include "modbase/tsuru.h"
#include "modbase/yoshi.h"
#include "modbase/tumble_death.h"
#include "nintendo/sead/random.h"

// =====================================================================
//  CONFIGURATION
// =====================================================================

#define SHYGUY_GRAVITY          -0.1875f    // added to speed.y each frame, as the Goomba's
#define SHYGUY_FALL_SPEED       -4.0f
#define SHYGUY_WALK_SPEED       0.5f        // the Goomba's
#define SHYGUY_PIT_FRAMES       300         // falling this long, it is gone

#define SHYGUY_SIT_HALVES       10          // 5 seconds
#define SHYGUY_SIT_HEIGHT       0.65f       // of its collider, while sitting

#define SHYGUY_JUMP_HALF_TILES  4
#define SHYGUY_JUMP_WAIT        5           // tenths of a second
#define SHYGUY_JUMP_TWISTS      1.0f        // turns in the air

#define SHYGUY_THROW_HALVES     6
#define SHYGUY_TURN_FRAMES      10          // half a spin; the ball appears over the second half
#define SHYGUY_TURN_PAUSE       6           // frames with its back to you
#define SHYGUY_BALL_SIZE        0.75f       // the retail ball is 23 units wide at 1
#define SHYGUY_BALL_SPEED       1.75f
#define SHYGUY_BALL_LOB         2.5f        // speed.y of the throw
#define SHYGUY_BALL_OUT         13.0f       // where it appears: this far in front of the Shy Guy
#define SHYGUY_BALL_ABOVE       12.0f

#define SHYGUY_LEAP_TILES       4
#define SHYGUY_LEAP_SPEED_Y     3.75f
#define SHYGUY_LEAP_WINDUP      30          // frames
#define SHYGUY_DOWN_HALVES      3
#define SHYGUY_FALL_FLAT        85.0f       // degrees
#define SHYGUY_FALL_TURN        9.0f        // degrees a frame
#define SHYGUY_FLAT_LIFT        6.0f        // half its thickness, lying down

#define SHYGUY_CHASE_ACCEL      0.025f      // the slide: speeds up and slows down this slowly
#define SHYGUY_CHASE_SPEED      1.4f
#define SHYGUY_SKATE_WAIT       120         // frames to the next hop: this, and up to
#define SHYGUY_SKATE_WAIT_MORE  240         // this many more
#define SHYGUY_SKATE_HOP        2.4f        // speed.y of the hop
#define SHYGUY_SKATE_TURNS      2.0f        // turns in the air

#define SHYGUY_SAD_SPEED        0.12f
#define SHYGUY_SAD_ANIM         0.45f       // the animation's rate

#define SHYGUY_BUBBLE_HALVES    3
#define SHYGUY_BUBBLE_GAP       24          // frames between the bubbles of a burst: "sit_blow"
#define SHYGUY_BUBBLE_BLOW      10          // frame of "sit_blow" the bubble comes out
#define SHYGUY_BUBBLE_SPEED     1.2f        // leaving the mouth; it slows as it grows
#define SHYGUY_BUBBLE_SLOW      0.3f        // once grown
#define SHYGUY_BUBBLE_RISE      0.15f
#define SHYGUY_BUBBLE_LIFE      240         // frames, then it pops
#define SHYGUY_BUBBLE_GROW      45          // frames from the mouth to full size
#define SHYGUY_BUBBLE_START     0.08f       // its size at the mouth
#define SHYGUY_BUBBLE_SIZE      0.8f        // the model is 36.6 wide at 1
#define SHYGUY_BUBBLE_RADIUS    14.0f       // of the collider, at full size
#define SHYGUY_BUBBLE_BOUNCE    4.5f        // a player's speed.y off the top
#define SHYGUY_BUBBLE_BUMP_WAIT 30          // frames between bumps

#define SHYGUY_HAPPY_HOP        2.0f        // speed.y of each skip
#define SHYGUY_HAPPY_ANIM       1.6f

#define SHYGUY_BIG_SCALE        6.45f       // 10 tiles: the model is 24.8 tall, as wide as it is
#define SHYGUY_BIG_SPEED        0.08f
#define SHYGUY_BIG_ANIM         0.2f
#define SHYGUY_BIG_BOUNCE       3.85f       // a player's speed.y off its head: 7 tiles at most

#define SHYGUY_SOUND_JUMP       "SE_EMY_CHOROPU_BOUND"      // the Monty Mole's hop
#define SHYGUY_SOUND_THROW      "SE_EMY_GABON_ROCK_THROW"   // the Spike's throw
#define SHYGUY_SOUND_BUBBLE     "SE_PLY_CH_YOSHI_BBL"       // the Baby Yoshi's bubble
#define SHYGUY_SOUND_POP        "SE_PLY_CH_YOSHI_BBL_BREAK"
#define SHYGUY_SOUND_BOUNCE     "SE_PLY_RIDE_CLOUD"

// =====================================================================

// Tsuru RP_Balloon_Burst_0 (effectid.h).
constexpr s32 cEffect_BubblePop = 0x1B8;

namespace {

enum Behaviour : u32
{
    SitWhenStomped = 0,
    ShrinkWhenStomped,      // code/sprites/shy_guy.cpp, unless it is Big
    JumpOnTheSpot,
    SpikeBallThrower,
    Leaper,
    Chaser,
    Sad,
    BubbleBlower,
    Happy,
    NumBehaviours
};

constexpr u32 cFlagBig        = 1;
constexpr u32 cFlagFalls      = 2;
constexpr u32 cFlagStationary = 4;      // Leaper: change direction after every leap
constexpr u32 cFlagExtra      = 8;      // Leaper: toward the player; Chaser: keep off edges

// Facing: the turn the game gives walking enemies (Enemy_CommonRotations 0x60AFE3E4).
constexpr u32 cFacing[2] = { 0x20000000, 0xE0000000 };

inline u32 orDefault(u32 value, u32 fallback) { return value ? value : fallback; }

// Its position is at its feet, as the Goomba's.
const CollisionMgr::Sensor cBelow    = { -5.0f, 5.0f, 0.0f };
const CollisionMgr::Sensor cAbove    = { -5.0f, 5.0f, 16.0f };
const CollisionMgr::Sensor cSides    = { 3.0f, 13.0f, 8.0f };
const CollisionMgr::Sensor cBigBelow = { -40.0f, 40.0f, 0.0f };
const CollisionMgr::Sensor cBigAbove = { -40.0f, 40.0f, 160.0f };
const CollisionMgr::Sensor cBigSides = { 20.0f, 140.0f, 50.0f };

constexpr f32 cLedgeAhead = 9.0f;
constexpr f32 cLedgeBelow = 6.0f;

} // namespace

// ---- The Shy Guy --------------------------------------------------------------------------

class ShyGuy : public Enemy
{
public:
    ShyGuy(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool vf120(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionHammer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    void vf228() override;      // Enemy's EatOut: Yoshi spat it out

    // Enemy's own death states (fireballs, shells, a POW ...).
    void beginState_DieFumi() override;
    void executeState_DieFumi() override;
    void endState_DieFumi() override;
    void beginState_DieFall() override;
    void executeState_DieFall() override;
    void endState_DieFall() override;

    void playAnim(const char* name, bool loop = true, f32 rate = 1.0f);
    void setDirection(u8 newDirection);
    void walk(f32 walkSpeed);
    void startSpin(f32 turns);
    void updateSpin();
    void step(bool keepOffEdges);
    bool stomp(StageActor* player);
    void die();
    void setSitting(bool sitting);

    void executeJump();
    void executeThrow();
    void executeLeap();
    void executeChase();
    void executeSad();
    void executeBubbles();
    void executeHappy();
    void executeBig();
    Vec3 ballPosition() const;

    static const ActiveCollider::Info collisionInfo;
    static const ActiveCollider::Info bigCollisionInfo;

    ModelWrapper* model;
    ::yoshi::EatData eatData;
    ModBase::TumbleDeath tumble;
    const char* anim;
    u32 behaviour;
    u32 flags;
    u32 paramA;             // nybble 7
    u32 paramB;             // nybble 8
    u32 timer;
    u32 phase;
    u32 ballId;
    u32 burstLeft;
    u32 airFrames;
    f32 tilt;               // degrees the model falls forward (the leap)
    f32 spin;               // degrees the model has turned from its facing (throw, twists)
    f32 spinRate;           // degrees a frame, while in the air
    bool big;

    DECLARE_STATE(ShyGuy, Move);
    DECLARE_STATE(ShyGuy, Sit);
    DECLARE_STATE(ShyGuy, Die);
};

CREATE_STATE(ShyGuy, Move);
CREATE_STATE(ShyGuy, Sit);
CREATE_STATE(ShyGuy, Die);

const Profile shyGuyProfile(&ShyGuy::build, ProfileId::ShyGuy, "ShyGuy", nullptr, 0);
PROFILE_RESOURCES(ProfileId::ShyGuy, "shyguy", "kakibo", "kuribo", "gabon", "balloon_awachibiyoshi");

// As the Goomba's info 0x60BED0A4: kind 3, centre (0, 8), half-size (8, 8).
const ActiveCollider::Info ShyGuy::collisionInfo = {
    {0.0f, 8.0f}, {8.0f, 8.0f}, 0, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

const ActiveCollider::Info ShyGuy::bigCollisionInfo = {
    {0.0f, 80.0f}, {50.0f, 80.0f}, 0, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

// ---- The spike ball -----------------------------------------------------------------------

class ShyGuySpikeBall : public Enemy
{
public:
    ShyGuySpikeBall(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo) { return new ShyGuySpikeBall(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override { tsuru::enemyDamagePlayer(this, acSelf, acOther); }
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override { tsuru::enemyDamagePlayer(this, acSelf, acOther); }
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override { return false; }

    void beginState_DieFumi() override { Enemy::beginState_DieFumi(); tumble.begin(this, 0.5f); }
    void executeState_DieFumi() override { }
    void endState_DieFumi() override { }
    void beginState_DieFall() override { beginState_DieFumi(); }
    void executeState_DieFall() override { }
    void endState_DieFall() override { }

    void hold(const Vec3& at, f32 size);
    void thrownTo(u8 direction);

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    ModBase::TumbleDeath tumble;
    u32 unheld;     // frames since its thrower last held it
    bool thrown;
};

const Profile shyGuySpikeBallProfile(&ShyGuySpikeBall::build, ProfileId::ShyGuySpikeBall, "ShyGuySpikeBall", nullptr, 0);

// Shape 1: circle. Kind 3, as the enemies.
const ActiveCollider::Info ShyGuySpikeBall::collisionInfo = {
    {0.0f, 0.0f}, {8.5f, 8.5f}, 1, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

const CollisionMgr::Sensor cBallBelow = { -4.0f, 4.0f, -9.0f };
const CollisionMgr::Sensor cBallAbove = { -4.0f, 4.0f, 9.0f };
const CollisionMgr::Sensor cBallSides = { -4.0f, 4.0f, 9.0f };

ShyGuySpikeBall::ShyGuySpikeBall(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo), model(nullptr), unheld(0), thrown(false)
{ }

u32 ShyGuySpikeBall::onCreate()
{
    model = tsuru::createModel("gabon", "ball");
    if (!model) {
        isDeleted = true;
        return 1;
    }
    scale = Vec3(0.05f, 0.05f, 0.05f);
    aCollider.init(this, &collisionInfo, 0);
    return onExecute();
}

void ShyGuySpikeBall::hold(const Vec3& at, f32 size)
{
    position = at;
    scale = Vec3(size, size, size);
    unheld = 0;
}

void ShyGuySpikeBall::thrownTo(u8 throwDirection)
{
    thrown = true;
    direction = throwDirection;
    speed.x = throwDirection == tsuru::Direction::Left ? -SHYGUY_BALL_SPEED : SHYGUY_BALL_SPEED;
    speed.y = SHYGUY_BALL_LOB;
    maxSpeed.y = SHYGUY_FALL_SPEED;
    tsuru::gravity(this) = SHYGUY_GRAVITY;
    collisionMgr.init(this, &cBallBelow, &cBallAbove, &cBallSides);
    addActiveColliders();
}

u32 ShyGuySpikeBall::onExecute()
{
    states.execute();

    if (tumble.execute(this)) {
        tsuru::placeModel(model, this);
        return 1;
    }

    if (thrown) {
        rotation.z += tsuru::deg2idx(direction == tsuru::Direction::Left ? 6.0f : -6.0f);

        handleGravity();
        handleSpeed();
        collisionMgr.process();

        if (collisionMgr.isOnGround())
            speed.y = 0.0f;
        if (collisionMgr.isCollidedLeft() || collisionMgr.isCollidedRight())
            tumble.begin(this, 0.5f);

        tsuru::offscreenDelete(this);
    } else if (++unheld > 2) {      // its thrower is gone
        isDeleted = true;
    }

    tsuru::placeModel(model, this);
    return 1;
}

u32 ShyGuySpikeBall::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

// ---- The bubble ---------------------------------------------------------------------------

class ShyGuyBubble : public Enemy
{
public:
    ShyGuyBubble(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo) { return new ShyGuyBubble(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override { collisionPlayer(acSelf, acOther); }
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override { return false; }

    // Anything that would kill it pops it.
    void beginState_DieFumi() override { Enemy::beginState_DieFumi(); pop(); }
    void executeState_DieFumi() override { }
    void endState_DieFumi() override { }
    void beginState_DieFall() override { beginState_DieFumi(); }
    void executeState_DieFall() override { }
    void endState_DieFall() override { }

    void pop();

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    u32 age;
    u32 bumpWait;
    f32 wobble;
};

const Profile shyGuyBubbleProfile(&ShyGuyBubble::build, ProfileId::ShyGuyBubble, "ShyGuyBubble", nullptr, 0);

const ActiveCollider::Info ShyGuyBubble::collisionInfo = {
    {0.0f, 0.0f}, {1.0f, 1.0f}, 1, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

ShyGuyBubble::ShyGuyBubble(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo), model(nullptr), age(0), bumpWait(0), wobble(0.0f)
{ }

u32 ShyGuyBubble::onCreate()
{
    model = tsuru::createModel("balloon_awachibiyoshi", "balloon_awachibiyoshi", 1);
    if (!model) {
        isDeleted = true;
        return 1;
    }
    tsuru::playSklAnim(model, "float");
    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();
    return onExecute();
}

u32 ShyGuyBubble::onExecute()
{
    states.execute();

    // Out of the mouth quickly and small, slowing as it grows.
    f32 t = age < SHYGUY_BUBBLE_GROW ? (f32)age / SHYGUY_BUBBLE_GROW : 1.0f;
    t = t * (2.0f - t);
    f32 size = SHYGUY_BUBBLE_START + (SHYGUY_BUBBLE_SIZE - SHYGUY_BUBBLE_START) * t;
    scale = Vec3(size, size, size);
    f32 radius = SHYGUY_BUBBLE_RADIUS * size / SHYGUY_BUBBLE_SIZE;
    aCollider.info.distToEdge.x = radius;
    aCollider.info.distToEdge.y = radius;

    f32 drift = SHYGUY_BUBBLE_SPEED + (SHYGUY_BUBBLE_SLOW - SHYGUY_BUBBLE_SPEED) * t;
    wobble += 0.08f;
    position.x += direction == tsuru::Direction::Left ? -drift : drift;
    position.y += SHYGUY_BUBBLE_RISE + sin(wobble) * 0.2f;

    if (bumpWait)
        bumpWait--;
    if (++age >= SHYGUY_BUBBLE_LIFE)
        pop();

    tsuru::placeModel(model, this);
    return 1;
}

u32 ShyGuyBubble::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

void ShyGuyBubble::pop()
{
    Vec3 effectScale(0.4f, 0.4f, 0.4f);
    Effect::spawn(cEffect_BubblePop, &position, nullptr, &effectScale);
    tsuru::playSound(SHYGUY_SOUND_POP, position);
    isDeleted = true;
}

// It hurts nobody: you bounce off the top of it, and it knocks you around from the sides.
void ShyGuyBubble::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (bumpWait)
        return;
    bumpWait = SHYGUY_BUBBLE_BUMP_WAIT;

    StageActor* player = acOther->owner;
    if (player->position.y >= position.y) {
        player->speed.y = SHYGUY_BUBBLE_BOUNCE;
        tsuru::playSound(SHYGUY_SOUND_BOUNCE, position);
    } else {
        tsuru::damagePlayer(player, this, tsuru::DamageType::Knock);
    }
}

// ---- The Shy Guy, built ---------------------------------------------------------------------

ShyGuy::ShyGuy(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , anim(nullptr)
    , behaviour(buildInfo->settings1 >> 28 & 0xF)   // nybble 5
    , flags(buildInfo->settings1 >> 24 & 0xF)       // nybble 6
    , paramA(buildInfo->settings1 >> 20 & 0xF)      // nybble 7
    , paramB(buildInfo->settings1 >> 16 & 0xF)      // nybble 8
    , timer(0)
    , phase(0)
    , ballId(0)
    , burstLeft(0)
    , airFrames(0)
    , tilt(0.0f)
    , spin(0.0f)
    , spinRate(0.0f)
    , big(buildInfo->settings1 >> 24 & cFlagBig)
{ }

// Behaviour 1 is the retail Goomba class (code/sprites/shy_guy.cpp), which turns at ledges or
// walks off them by the profile it is built as. Its own settings stay in nybbles 11-12.
Actor* ShyGuy::build(const ActorBuildInfo* buildInfo)
{
    u32 settings = buildInfo->settings1 >> 24;
    if (settings >> 4 == ShrinkWhenStomped && !(settings & cFlagBig)) {
        ActorBuildInfo classic = *buildInfo;
        classic.settings1 &= 0xFF;
        classic.profile = Profile::get(settings & cFlagFalls ? ProfileId::ShyGuyClassicFall : ProfileId::ShyGuyClassic);
        return classic.profile->buildFunc(&classic);
    }
    return new ShyGuy(buildInfo);
}

u32 ShyGuy::onCreate()
{
    if (behaviour >= NumBehaviours)
        behaviour = SitWhenStomped;

    model = tsuru::createModel("shyguy", "shyguy", 1, 1);
    if (!model) {
        isDeleted = true;
        return 1;
    }

    // The colour is a frozen frame of "color" (the Biddybud's "bud" has the why).
    tsuru::playTexPatternAnim(model, "color");
    if (model->texAnims.count > 0) {
        model->texAnims[0]->startFrame = (f32)behaviour;
        model->texAnims[0]->speed = 0.0f;
    }

    position.x += 8.0f;
    position.y -= 16.0f;

    tsuru::gravity(this) = SHYGUY_GRAVITY;
    maxSpeed.y = SHYGUY_FALL_SPEED;

    if (big) {
        f32 s = SHYGUY_BIG_SCALE;
        scale = Vec3(s, s, s);
        aCollider.init(this, &bigCollisionInfo, 0);
        collisionMgr.init(this, &cBigBelow, &cBigAbove, &cBigSides);
    } else {
        aCollider.init(this, &collisionInfo, 0);
        collisionMgr.init(this, &cBelow, &cAbove, &cSides);
        ModBase::yoshi::makeEdible(this, &eatData);
    }
    addActiveColliders();

    setDirection(directionToPlayerH(position));
    rotation.y = cFacing[direction];
    doStateChange(&StateID_Move);

    return onExecute();
}

void ShyGuy::playAnim(const char* name, bool loop, f32 rate)
{
    if (anim != name) {
        anim = name;
        tsuru::playSklAnim(model, name, loop);
    }
    if (model->sklAnims.count > 0)
        model->sklAnims[0]->speed = rate;
}

void ShyGuy::setDirection(u8 newDirection)
{
    direction = newDirection;
}

u32 ShyGuy::onExecute()
{
    bool eaten = !big && ModBase::yoshi::beingEaten(eatData);

    if (!tumble.execute(this))
        states.execute();

    if (!eaten && !tumble.active)
        tsuru::chase(&rotation.y, cFacing[direction], tsuru::deg2idx(10.0f));

    Vec3i drawRotation = rotation;
    drawRotation.x += tsuru::deg2idx(tilt);
    drawRotation.y += tsuru::deg2idx(spin);
    Vec3 drawPosition = position;
    drawPosition.y += tilt / SHYGUY_FALL_FLAT * SHYGUY_FLAT_LIFT;   // on the ground, not half in it

    Mtx34 mtx;
    mtx.rotateAndTranslate(drawRotation, drawPosition);
    model->setMtx(mtx);
    model->setScale(scale);
    model->updateAnimations();
    model->updateModel();
    return 1;
}

u32 ShyGuy::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

// Gravity, the step and the tiles. It turns at a wall, and at a ledge if it keeps off them.
void ShyGuy::step(bool keepOffEdges)
{
    handleGravity();
    handleSpeed();
    collisionMgr.process();

    if (!collisionMgr.isOnGround()) {
        if (++airFrames > SHYGUY_PIT_FRAMES)     // nothing below: a pit
            isDeleted = true;
    } else {
        airFrames = 0;
        speed.y = 0.0f;
        f32 size = big ? SHYGUY_BIG_SCALE : 1.0f;
        f32 ahead = direction == tsuru::Direction::Left ? -cLedgeAhead * size : cLedgeAhead * size;
        if (speed.x != 0.0f && keepOffEdges && !checkForSuitableGround(ahead, -cLedgeBelow)) {
            setDirection(direction ^ 1);
            speed.x = -speed.x;
            return;
        }
    }
    if (speed.x != 0.0f && collisionMgr.isCollided(direction)) {
        setDirection(direction ^ 1);
        speed.x = -speed.x;
    }
}

void ShyGuy::walk(f32 walkSpeed)
{
    speed.x = direction == tsuru::Direction::Left ? -walkSpeed : walkSpeed;
    step(!(flags & cFlagFalls));
}

// So many turns in the air, for the jump speed.y has just been given.
void ShyGuy::startSpin(f32 turns)
{
    spinRate = 360.0f * turns * -SHYGUY_GRAVITY / (2.0f * speed.y);
}

void ShyGuy::updateSpin()
{
    if (spinRate == 0.0f)
        return;
    if (speed.y <= 0.0f && collisionMgr.isOnGround())
        spin = spinRate = 0.0f;
    else
        spin += spinRate;
}

// ---- Being hit ------------------------------------------------------------------------------

// True if the stomp was the kill; the sitter only sits, unless it already was.
bool ShyGuy::stomp(StageActor* player)
{
    if (behaviour == SitWhenStomped && states.currentState() != &StateID_Sit) {
        doStateChange(&StateID_Sit);
        return false;
    }
    killPlayerJump(player, Vec2(0.0f, 0.0f), &StateID_Die);
    return true;
}

void ShyGuy::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    StageActor* player = acOther->owner;

    if (big) {
        if (player->position.y >= position.y + aCollider.info.distToCenter.y * 1.7f) {
            player->speed.y = SHYGUY_BIG_BOUNCE;
            tsuru::playSound(SHYGUY_SOUND_BOUNCE, position);
        } else {
            tsuru::damagePlayer(player, this, tsuru::DamageType::Knock);
        }
        return;
    }

    u32 hitType = processCollision(acSelf, acOther, 0);
    if (hitType == tsuru::HitType::Collide)
        tsuru::enemyDamagePlayer(this, acSelf, acOther);
    else if (hitType == tsuru::HitType::NormalJump || hitType == tsuru::HitType::SpinJump)
        stomp(player);
}

void ShyGuy::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
}

// The Big one takes nothing. False: true is a hit that landed, which switches the collider off.
bool ShyGuy::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)            { return big ? false : Enemy::collisionStar(acSelf, acOther); }
bool ShyGuy::collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther)           { return big ? false : Enemy::collisionSlide(acSelf, acOther); }
bool ShyGuy::collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther)  { return big ? false : Enemy::collisionPropellerDrill(acSelf, acOther); }
bool ShyGuy::vf120(ActiveCollider* acSelf, ActiveCollider* acOther)                    { return big ? false : Enemy::vf120(acSelf, acOther); }
bool ShyGuy::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) { return big ? false : Enemy::collisionGroundPoundYoshi(acSelf, acOther); }
bool ShyGuy::collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther)    { return big ? false : Enemy::collisionPenguinSlide(acSelf, acOther); }
bool ShyGuy::collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) { return big ? false : Enemy::collisionThrowableObject(acSelf, acOther); }
bool ShyGuy::collisionHammer(ActiveCollider* acSelf, ActiveCollider* acOther)          { return big ? false : Enemy::collisionHammer(acSelf, acOther); }

bool ShyGuy::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (big) {
        collisionPlayer(acSelf, acOther);
        return false;
    }
    return Enemy::collisionGroundPound(acSelf, acOther);
}

bool ShyGuy::collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (big) {
        acOther->owner->isDeleted = true;
        return false;
    }
    return Enemy::collisionFireball(acSelf, acOther);
}

bool ShyGuy::collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return big ? false : Enemy::collisionFireballYoshi(acSelf, acOther);
}

// An iceball kills it too: this class has no model set up for Enemy's ice block.
bool ShyGuy::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    acOther->owner->isDeleted = true;
    if (!big)
        die();
    return !big;
}

void ShyGuy::vf228()
{
    tumble.begin(this);
}

void ShyGuy::die()
{
    doStateChange(&StateID_Die);
}

void ShyGuy::beginState_DieFumi()
{
    Enemy::beginState_DieFumi();    // score, colliders off
    tumble.begin(this);
}
void ShyGuy::executeState_DieFumi() { }
void ShyGuy::endState_DieFumi() { }

void ShyGuy::beginState_DieFall() { beginState_DieFumi(); }
void ShyGuy::executeState_DieFall() { }
void ShyGuy::endState_DieFall() { }

/** STATE: Die */

void ShyGuy::beginState_Die()
{
    tumble.begin(this);
}

void ShyGuy::executeState_Die() { }

void ShyGuy::endState_Die() { }

/** STATE: Move */

void ShyGuy::beginState_Move()
{
    phase = 0;
    timer = 0;
    speed.x = 0.0f;
}

void ShyGuy::executeState_Move()
{
    if (big) {
        executeBig();
        return;
    }

    switch (behaviour) {
        case JumpOnTheSpot:     executeJump();      break;
        case SpikeBallThrower:  executeThrow();     break;
        case Leaper:            executeLeap();      break;
        case Chaser:            executeChase();     break;
        case Sad:               executeSad();       break;
        case BubbleBlower:      executeBubbles();   break;
        case Happy:             executeHappy();     break;
        default:
            playAnim("walk0");
            walk(SHYGUY_WALK_SPEED);
            break;
    }
}

void ShyGuy::endState_Move() { }

void ShyGuy::executeBig()
{
    playAnim("walk0", true, SHYGUY_BIG_ANIM);
    speed.x = direction == tsuru::Direction::Left ? -SHYGUY_BIG_SPEED : SHYGUY_BIG_SPEED;
    step(true);
}

void ShyGuy::executeJump()
{
    setDirection(directionToPlayerH(position));
    playAnim("idle");
    speed.x = 0.0f;
    step(false);
    updateSpin();

    if (!collisionMgr.isOnGround())
        return;
    if (timer++ < orDefault(paramB, SHYGUY_JUMP_WAIT) * 6u)
        return;

    timer = 0;
    f32 height = orDefault(paramA, SHYGUY_JUMP_HALF_TILES) * 8.0f;
    speed.y = pow(2.0f * -SHYGUY_GRAVITY * height, 0.5f);
    startSpin(SHYGUY_JUMP_TWISTS);
    tsuru::playSound(SHYGUY_SOUND_JUMP, position);
}

// In front of it, wherever the spin has it facing: the ball comes round with it.
Vec3 ShyGuy::ballPosition() const
{
    const f32 facing = direction == tsuru::Direction::Left ? -45.0f : 45.0f;
    const f32 yaw = (facing + spin) * 3.14159265f / 180.0f;
    return Vec3(position.x + sin(yaw) * SHYGUY_BALL_OUT, position.y + SHYGUY_BALL_ABOVE, position.z + cos(yaw) * SHYGUY_BALL_OUT);
}

void ShyGuy::executeThrow()
{
    speed.x = 0.0f;
    step(false);

    // phase 0: facing the player. 1: quickly turning its back. 2: back turned, for a moment.
    // 3: quickly turning again, the ball appearing as it comes round. Thrown once it faces you.
    switch (phase) {
        case 0:
            setDirection(paramA == 1 ? tsuru::Direction::Left : paramA == 2 ? tsuru::Direction::Right : directionToPlayerH(position));
            playAnim("idle");
            if (timer++ >= orDefault(paramB, SHYGUY_THROW_HALVES) * 30u) {
                timer = 0;
                phase = 1;
            }
            break;

        case 1:
            timer++;
            spin = 180.0f * timer / SHYGUY_TURN_FRAMES;
            if (timer >= SHYGUY_TURN_FRAMES) {
                timer = 0;
                phase = 2;
            }
            break;

        case 2:
            if (++timer >= SHYGUY_TURN_PAUSE) {
                StageActor* ball = tsuru::spawnActor(ProfileId::ShyGuySpikeBall, ballPosition());
                ballId = ball ? ball->id : 0;
                timer = 0;
                phase = 3;
            }
            break;

        default: {
            s32 found = ((ActorMgrRelated*)((s32)ActorMgr::instance + 0x6A20))->getById(ballId);
            ShyGuySpikeBall* ball = (ShyGuySpikeBall*)found;

            timer++;
            spin = 180.0f + 180.0f * timer / SHYGUY_TURN_FRAMES;
            if (ball)
                ball->hold(ballPosition(), SHYGUY_BALL_SIZE * timer / SHYGUY_TURN_FRAMES);
            if (timer < SHYGUY_TURN_FRAMES)
                break;

            spin = 0.0f;
            if (ball) {
                ball->thrownTo(direction);
                tsuru::playSound(SHYGUY_SOUND_THROW, position);
            }
            ballId = 0;
            timer = 0;
            phase = 0;
            break;
        }
    }
}

void ShyGuy::executeLeap()
{
    // phase 0: gathering itself. 1: in the air. 2: flat on the ground. 3: getting up.
    switch (phase) {
        case 0:
            speed.x = 0.0f;
            step(false);
            playAnim("idle");
            if (flags & cFlagExtra)
                setDirection(directionToPlayerH(position));
            if (timer++ >= SHYGUY_LEAP_WINDUP) {
                f32 frames = 2.0f * SHYGUY_LEAP_SPEED_Y / -SHYGUY_GRAVITY;
                f32 reach = orDefault(paramA, SHYGUY_LEAP_TILES) * 16.0f / frames;
                speed.x = direction == tsuru::Direction::Left ? -reach : reach;
                speed.y = SHYGUY_LEAP_SPEED_Y;
                tsuru::playSound(SHYGUY_SOUND_JUMP, position);
                playAnim("hikkuri");
                phase = 1;
                timer = 0;
            }
            break;

        case 1: {
            f32 x = speed.x;
            handleGravity();
            handleSpeed();
            collisionMgr.process();
            if (collisionMgr.isCollided(direction))
                speed.x = 0.0f;
            else
                speed.x = x;
            if (speed.y <= 0.0f && collisionMgr.isOnGround()) {
                speed.x = speed.y = 0.0f;
                phase = 2;
            }
            break;
        }

        case 2:
            step(false);
            tsuru::chase(&tilt, SHYGUY_FALL_FLAT, SHYGUY_FALL_TURN);
            if (timer++ >= orDefault(paramB, SHYGUY_DOWN_HALVES) * 30u) {
                timer = 0;
                phase = 3;
            }
            break;

        default:
            step(false);
            if (tsuru::chase(&tilt, 0.0f, SHYGUY_FALL_TURN / 2.0f)) {
                if ((flags & cFlagStationary) && !(flags & cFlagExtra))
                    setDirection(direction ^ 1);
                phase = 0;
            }
            break;
    }
}

void ShyGuy::executeChase()
{
    playAnim("walk1", true, 1.5f);

    u8 toPlayer = directionToPlayerH(position);
    setDirection(toPlayer);
    speed.x += toPlayer == tsuru::Direction::Left ? -SHYGUY_CHASE_ACCEL : SHYGUY_CHASE_ACCEL;
    if (speed.x > SHYGUY_CHASE_SPEED)
        speed.x = SHYGUY_CHASE_SPEED;
    else if (speed.x < -SHYGUY_CHASE_SPEED)
        speed.x = -SHYGUY_CHASE_SPEED;

    handleGravity();
    handleSpeed();
    collisionMgr.process();

    bool sliding = speed.x != 0.0f;
    u8 way = speed.x < 0.0f ? tsuru::Direction::Left : tsuru::Direction::Right;
    if (collisionMgr.isOnGround()) {
        speed.y = 0.0f;
        f32 ahead = way == tsuru::Direction::Left ? -cLedgeAhead : cLedgeAhead;
        if ((flags & cFlagExtra) && sliding && !checkForSuitableGround(ahead, -cLedgeBelow))
            speed.x = 0.0f;
    }
    if (sliding && collisionMgr.isCollided(way))
        speed.x = -speed.x * 0.5f;

    updateSpin();
    if (collisionMgr.isOnGround()) {
        if (timer == 0) {
            timer = SHYGUY_SKATE_WAIT + sead::GlobalRandom::instance->getU32() % SHYGUY_SKATE_WAIT_MORE;
        } else if (--timer == 0) {
            speed.y = SHYGUY_SKATE_HOP;
            startSpin(SHYGUY_SKATE_TURNS);
            tsuru::playSound(SHYGUY_SOUND_JUMP, position);
        }
    }
}

void ShyGuy::executeSad()
{
    if (flags & cFlagStationary) {
        playAnim("sad_sit");
        setSitting(true);
        speed.x = 0.0f;
        step(false);
        return;
    }
    playAnim("sad_walk", true, SHYGUY_SAD_ANIM);
    walk(SHYGUY_SAD_SPEED);
}

void ShyGuy::executeBubbles()
{
    setDirection(directionToPlayerH(position));
    setSitting(true);
    speed.x = 0.0f;
    step(false);

    // phase 0: sitting. 1: blowing a burst, a bubble each time through "sit_blow".
    if (phase == 0) {
        playAnim("sit_idle");
        if (timer++ >= orDefault(paramB, SHYGUY_BUBBLE_HALVES) * 30u) {
            timer = 0;
            burstLeft = orDefault(paramA, 1);
            phase = 1;
        }
        return;
    }

    if (timer == 0) {
        anim = nullptr;
        playAnim("sit_blow", false);
    }
    if (++timer == SHYGUY_BUBBLE_BLOW) {
        const f32 ahead = direction == tsuru::Direction::Left ? -9.0f : 9.0f;     // the mouth
        StageActor* bubble = tsuru::spawnActor(ProfileId::ShyGuyBubble, Vec3(position.x + ahead, position.y + 13.0f, position.z + 100.0f));
        if (bubble) {
            bubble->direction = direction;
            tsuru::playSound(SHYGUY_SOUND_BUBBLE, position);
        }
    }
    if (timer >= SHYGUY_BUBBLE_GAP) {
        timer = 0;
        if (--burstLeft == 0)
            phase = 0;
    }
}

void ShyGuy::executeHappy()
{
    playAnim("happy", true, SHYGUY_HAPPY_ANIM);
    if (flags & cFlagStationary) {
        speed.x = 0.0f;
        setDirection(directionToPlayerH(position));
        step(false);
    } else {
        walk(SHYGUY_WALK_SPEED);
    }
    if (collisionMgr.isOnGround())
        speed.y = SHYGUY_HAPPY_HOP;
}

/** STATE: Sit */

void ShyGuy::setSitting(bool sitting)
{
    const ActiveCollider::Info& info = collisionInfo;
    f32 height = sitting ? SHYGUY_SIT_HEIGHT : 1.0f;
    aCollider.info.distToCenter.y = info.distToCenter.y * height;
    aCollider.info.distToEdge.y = info.distToEdge.y * height;
}

void ShyGuy::beginState_Sit()
{
    speed.x = 0.0f;
    phase = 0;
    timer = 0;
    anim = nullptr;
    playAnim("sitdown", false);
    setSitting(true);
}

void ShyGuy::executeState_Sit()
{
    step(false);

    // phase 0: sitting down. 1: sitting, confused. 2: getting up.
    switch (phase) {
        case 0:
            if (tsuru::sklAnimDone(model)) {
                playAnim("sit");
                phase = 1;
            }
            break;

        case 1:
            if (timer++ >= orDefault(paramA, SHYGUY_SIT_HALVES) * 30u) {
                playAnim("standup", false);
                setSitting(false);
                phase = 2;
            }
            break;

        default:
            if (tsuru::sklAnimDone(model))
                doStateChange(&StateID_Move);
            break;
    }
}

void ShyGuy::endState_Sit()
{
    anim = nullptr;
}
