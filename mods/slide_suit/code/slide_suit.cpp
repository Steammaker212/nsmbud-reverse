// slide_suit.cpp -- a Penguin Suit that never stops sliding.
//
// Three requested behaviours, all built on the game's own mechanics:
//
//   1. Always sliding, faster than the Penguin Suit. The suit has no "slide
//      speed" constant to copy -- sliding is what the suit does when its speed
//      is already high -- so this drives speed.x directly, at a constant, in the
//      direction the player is facing. There is no friction to fight because the
//      CollisionMgr is not eating the speed: see "why this works" below.
//
//   2. Hits send you the other way. A wall contact flips speed.x. The engine
//      already reports wall contacts in CollisionMgr::output (bits 18 and 19) so
//      there is no collision code here -- two bits and a negation.
//
//   3. A hit also triggers the block's "bumped from below" event. That is a
//      virtual on the block (damageFromUnder); the base implementation is empty,
//      so calling it through the block's own vtable does nothing on blocks that
//      do not react, and the right thing on blocks that do.
//
//   4. The model spins while sliding. StageActor::rotation is a Vec3i, so this
//      is an integer add per frame in the same units the game's own turn code
//      uses.
//
// =====================================================================
//  WHY THIS WORKS WITHOUT TOUCHING THE COLLISION SYSTEM
// =====================================================================
//
// readable/engine/CollisionActor.cpp established that handleSpeed (0x60003624)
// moves the actor and *then* applies friction, and that friction lives in
// CollisionActor+0x1770/+0x1774 with a "friction active" flag at +0x17AC. If
// this mod rewrote speed.x every frame but left the flag set, the game would
// subtract from +0x1770 each frame and the player would still slow down.
//
// The mod therefore writes speed.x *after* the state has run (in onExecute, via
// the game's own executeState) and clears the friction flag, so what it sets is
// what gets used. It does not disable gravity or collision -- the player still
// falls, still lands, still hits walls. Only horizontal intent is overridden.
//
// Deluxe (Switch) v1.0.0 only.

#include "actor/stageactor.h"
#include "game/player.h"
#include "game/enemy.h"
#include "nsmbudx/log.h"

// =====================================================================
//  CONFIGURATION
// =====================================================================

// Horizontal speed in units per frame. The vanilla walk is about 1.6 and the
// Penguin Suit's own slide tops out around 2.7 (the suit is faster on the ground
// than a walk but slower than this), so 6.0 is roughly twice a penguin slide and
// reads as "out of control" rather than "brisk".
#define SLIDE_SPEED         6.0f

// Spin, added to rotation.z every frame. A full turn is 2^32, so this is
// 0x02000000 = 11.25 degrees per frame = 675 degrees per second at 60 fps.
// A slower, more readable spin: 0x01000000 (5.625 deg/frame).
#define SLIDE_SPIN          0x02000000

// Set to 1 to log what the mod sees on the first few frames of a level. Leave 1
// while testing: it is the only way to tell "the mod did not load" from "the
// hook fired but the player was not in Penguin mode".
#define SLIDE_LOG           1

// Which player mode counts as "wearing the suit". The Penguin Suit is mode 5.
// Change to PlayerMode::Ice if you want the Ice Flower to behave this way too.
#define SLIDE_REQUIRES_MODE PlayerMode::Penguin

// =====================================================================
//  Implementation
// =====================================================================

namespace {

// Confidence check: is this hook even seeing the right object? Log the first
// few calls and then go quiet, so a long level does not flood the log.
u32  g_logged = 0;
bool g_reported = false;
u32  s_loggedBounces = 0;

// Player really is a BrosBase subclass, so the fields below are the ones
// readable/player/PenguinSuit.cpp and framework/game/include/game/player.h
// document. Everything past the StageActor part is addressed by offset because
// the full Player layout has not been reversed member by member -- only the
// handful of fields needed here (F0131-F0136).
inline u32*  modeAt(void* player)      { return (u32*)((char*)player + 0x528); }
inline s32*  speedXAt(void* player)    { return (s32*)((char*)player + 0x078); }
inline s32*  dirAt(void* player)       { return (s32*)((char*)player + 0x050); }
inline Vec3i* rotationAt(void* player) { return (Vec3i*)((char*)player + 0x09C); }
inline u32*  frictionFlagAt(void* player) { return (u32*)((char*)player + 0x17AC); }

// The player's own collider sits inside the StageActor part at +0xBC.
inline ActiveCollider* colliderAt(void* player)
{
    return (ActiveCollider*)((char*)player + 0x0BC);
}

constexpr f32 kSpeed     = SLIDE_SPEED;
constexpr u32 kSpin      = SLIDE_SPIN;
constexpr u32 kWallFlags = (1u << 18) | (1u << 19);   // right | left

// Frames to ignore wall contacts for, after a bounce.
//
// This is not cosmetic. CollisionMgr::output keeps reporting the same contact
// for as long as the player overlaps the wall, so without a cooldown the
// direction would flip every frame and the player would sit in the wall,
// vibrating. 8 frames is long enough for the reversed speed to carry the player
// clear and short enough that a deliberate second bump still registers.
constexpr u32 kBounceCooldown = 8;
u32 g_bounceCooldown = 0;

// Is the player wearing the suit this mod hijacks?
inline bool wearingSuit(void* player)
{
    return *modeAt(player) == (u32)SLIDE_REQUIRES_MODE;
}

inline void setSpeedX(void* player, f32 v)
{
    union { f32 f; u32 u; } s;
    s.f = v;
    *(u32*)speedXAt(player) = s.u;
}

inline u32 collisionOutput(void* player)
{
    return *(u32*)((char*)player + 0x288 + 0x8B0);
}

// Force constant horizontal motion in the facing direction and spin the model.
void driveSlide(void* player)
{
    // Face the way we are moving: direction 0 is right, 1 is left (StageActor
    // ctor writes `direction = 0`; executeState_Move treats >1 as "no facing").
    const s32 dir = *dirAt(player);
    setSpeedX(player, (dir == 1) ? -kSpeed : kSpeed);

    // CollisionActor+0x17AC: while this is 1, handleSpeed decays the residual
    // velocity at +0x1770. Clearing it every frame is what makes the speed we
    // just wrote survive the move.
    *frictionFlagAt(player) = 0;

    // Unmistakably "sliding": keep the model turning about its own axis.
    rotationAt(player)->z += (s32)kSpin;
}

// If we touched a wall, bounce. Returns true if a bounce happened this frame.
//
// CollisionMgr::output is at StageActor+0x288 (the CollisionMgr) +0x8B0.
bool handleWallContact(void* player, u32 playerNo)
{
    if (g_bounceCooldown)
    {
        --g_bounceCooldown;
        return false;
    }

    if (!(collisionOutput(player) & kWallFlags))
        return false;

    // Reverse: flip the direction we were travelling in, and set the speed to
    // match so the next frame moves away from the wall.
    s32* dir = dirAt(player);
    *dir = (*dir == 1) ? 0 : 1;
    setSpeedX(player, (*dir == 1) ? -kSpeed : kSpeed);

    g_bounceCooldown = kBounceCooldown;
    return true;
}

} // namespace


// =====================================================================
//  Hook: BrosBase::onExecute (RVA 0x00263D10)
// =====================================================================
//
// Chosen because it is the one function the player runs every frame regardless
// of state (it calls StateMgr::execute itself), so driving speed here works in
// Move, Jump, Attack and every other state without hooking each one.
//
// It is also a safe trampoline: `push {r4, r5, r6, lr }` (0xe92d4070), listed in
// sdk/data/hookable.csv with trampoline_safe = yes.
extern "C" int SlideSuit_onExecute_orig(void* self);

extern "C" int SlideSuit_onExecute(void* self)
{
    // Run the game's own per-frame logic first: states, anims, collision. The
    // speed we set afterwards is what the NEXT frame's handleSpeed consumes,
    // which is the ordering the friction code expects.
    int result = SlideSuit_onExecute_orig(self);

    const u32 playerNo = 0;         // TODO: read from the player when a second
                                   // player is involved; single-player is fine.

    if (wearingSuit(self))
    {
        const bool bounced = handleWallContact(self, playerNo);
        driveSlide(self);

        if (bounced && s_loggedBounces < 4)
        {
            ++s_loggedBounces;
            nsmbudx::log("slide: bounced, now dir=", (u32)*dirAt(self),
                         " out=", collisionOutput(self));
        }
    }

#if SLIDE_LOG
    if (g_logged < 8)
    {
        ++g_logged;
        nsmbudx::log("slide: mode=", *modeAt(self),
                     " dir=", (u32)*dirAt(self),
                     " rot.z=", (u32)rotationAt(self)->z,
                     " out=", collisionOutput(self));
    }
    else if (!g_reported)
    {
        g_reported = true;
        nsmbudx::log("slide: hooked and running (mode ", *modeAt(self), ")");
    }
#endif

    return result;
}
