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
//
// IMPORTANT: this dereferences player+0x528, so it may only be called on an
// object that is definitely a BrosBase. The onExecute hook guarantees that (the
// game called *this* horse's own BrosBase::onExecute, so `self` is a player).
// It must NOT be called on an arbitrary actor from the overlap hook -- a plain
// StageActor is only 0x284 bytes, so reading +0x528 there would run off the end
// of the allocation. `slidePlayers` below is how the overlap hook identifies
// players instead: by pointer equality, with no dereference at all.
inline bool wearingSuit(void* player)
{
    return *modeAt(player) == (u32)SLIDE_REQUIRES_MODE;
}

// Players currently known to be sliding, remembered from onExecute.
//
// The overlap hook runs for every collider pair in the scene, so it cannot ask
// "is this a player?" by reading player-only fields. What it can do cheaply and
// safely is compare an Actor* against a small set of pointers that onExecute has
// already vouched for. Comparing pointers never touches the pointee, so a stale
// entry cannot fault.
constexpr u32 kMaxPlayers = 4;
void* g_slidePlayers[kMaxPlayers] = {};

void rememberSlidePlayer(void* player)
{
    for (u32 i = 0; i < kMaxPlayers; ++i)
        if (g_slidePlayers[i] == player)
            return;
    for (u32 i = 0; i < kMaxPlayers; ++i)
    {
        if (g_slidePlayers[i] == nullptr)
        {
            g_slidePlayers[i] = player;
            return;
        }
    }
}

void forgetSlidePlayer(void* player)
{
    for (u32 i = 0; i < kMaxPlayers; ++i)
        if (g_slidePlayers[i] == player)
            g_slidePlayers[i] = nullptr;
}

bool isRememberedSlidePlayer(void* actor)
{
    if (actor == nullptr)
        return false;
    for (u32 i = 0; i < kMaxPlayers; ++i)
        if (g_slidePlayers[i] == actor)
            return true;
    return false;
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

// =====================================================================
//  Making the slide an attack
// =====================================================================
//
// Attack types are published through the collider's `info.category` field --
// ActiveColliderInfo is at collider+0x74 and `category` at +0x18, so
// collider+0x8C, which on an actor is +0x148 (aCollider is at +0xBC).
//
// The value really is the framework's Attack enum. `Enemy::vfEC` (0x602A27E8)
// is the dispatcher and compares it down a chain:
//
//     cmp r0,#3    -> Star          cmp r0,#0xa   -> PenguinSlip
//     cmp r0,#8    -> NetPunch      cmp r0,#0xd   -> SpinFall
//     cmp r0,#0x11 -> Cannon        cmp r0,#0x19  -> Unk25
//
// which is exactly Attack::Star / NetPunch / PenguinSlip / SpinFall / Cannon /
// Unk25. Each branch then calls the matching vtable slot -- PenguinSlip reaches
// Enemy vtable +0x12C (`hitPenguinSlide`), where the enemy's own
// `collisionPenguinSlide` decides the reaction.
//
// The trick is *when* to publish it. Writing 10 permanently would also apply to
// every other interaction the player has, so instead we swap it in only for the
// duration of one collider-pair test: set, run the game's own doOverlapMaybe
// (which invokes both callbacks), then restore. The enemy's dispatcher therefore
// sees a penguin slide, and nothing outside that call ever does.
constexpr u32 kColliderCategory = 0x8C;   // collider+0x8C == actor+0x148
constexpr u32 kAttackPenguinSlip = 10;

u32* playerCategory(void* actor)
{
    return (u32*)((char*)actor + kColliderCategory);
}
//
// =====================================================================
//  Block bumps
// =====================================================================
//
// ActiveCollider_doOverlapMaybe (0x601597E8) is the collider-pair test, and it
// invokes the callbacks of **both** colliders -- `blx r2` four times, twice for
// each side. So when it is about to run the pair (player, block) we have both
// colliders in hand, which is the only place a player-side hook can learn which
// block it is touching.
//
// BlockBase's bump handler is vf16C at vtable+0x0A8 (0x605640BC). It is NOT
// damageFromUnder (vtable+0x1DC), which is empty in the base class -- calling
// that one does nothing visible to a ?-block. vf16C opens by loading
// contentCode at +0x1AC8 and comparing it with 13.
constexpr u32 kBlockBumpVtOffset = 0x0A8;
constexpr u32 kBlockHitPlayerNo  = 0x1ACC;
constexpr u32 kBlockContentCode  = 0x1AC8;

// Per-block cooldown, keyed by actor pointer. A slide overlaps the same block
// for several frames, and bumping it every frame would fire the item spawn
// repeatedly. Small fixed table, because the number of blocks a sliding player
// can be touching at once is tiny.
struct BumpRecord { void* block; u32 frames; };
constexpr u32 kMaxBumpRecords = 8;
BumpRecord g_bumpRecords[kMaxBumpRecords] = {};
u32 g_bumpTick = 0;
u32 g_loggedBumps = 0;

// Is this actor actually a block? This check is not optional.
//
// The bump is a virtual call through vtable+0x0A8. Every other kind of actor has
// a *different* vtable, so calling slot 0x0A8 on an enemy would jump into an
// unrelated function with the wrong arguments -- a crash, not a no-op.
//
// The test is exact rather than heuristic: BlockBase's constructor installs one
// of three implementations into that slot, and any actor whose slot holds one of
// them was built by BlockBase. The three are the shared handler and the only two
// overrides (from vf16C's "Overridden by" list):
//
//     0x605640BC  BlockBase::vf16C            (shared by every other block)
//     0x60569738  FlyingBlockForAmbush::vf16C
//     0x60576938  BabyYoshiBlock::vf16C
//
// A block that overrode it some other way would simply not be bumped, which is
// the safe direction to fail in.
constexpr u32 kBlockVf16C_Base      = 0x605640BC;
constexpr u32 kBlockVf16C_Ambush    = 0x60569738;
constexpr u32 kBlockVf16C_BabyYoshi = 0x60576938;

void* blockBumpFn(void* actor)
{
    if (actor == nullptr)
        return nullptr;

    void* fn = (*(void***)actor)[kBlockBumpVtOffset / 4];
    const u32 v = (u32)fn;
    if (v == kBlockVf16C_Base || v == kBlockVf16C_Ambush || v == kBlockVf16C_BabyYoshi)
        return fn;
    return nullptr;
}

// Returns true if this block may be bumped now (and starts its cooldown).
bool claimBump(void* block)
{
    for (u32 i = 0; i < kMaxBumpRecords; ++i)
    {
        if (g_bumpRecords[i].block == block)
        {
            if (g_bumpTick < g_bumpRecords[i].frames)
                return false;
            g_bumpRecords[i].frames = g_bumpTick + 30;
            return true;
        }
    }
    for (u32 i = 0; i < kMaxBumpRecords; ++i)
    {
        if (g_bumpRecords[i].block == nullptr)
        {
            g_bumpRecords[i].block  = block;
            g_bumpRecords[i].frames = g_bumpTick + 30;
            return true;
        }
    }
    return false;   // table full: stay quiet rather than spam a bump
}

void bumpBlock(void* block, s32 playerNo)
{
    // Verify before anything else: this is the difference between "bump a block"
    // and "call a random virtual on an enemy".
    void* bump = blockBumpFn(block);
    if (bump == nullptr)
        return;
    if (!claimBump(block))
        return;

    *(s32*)((char*)block + kBlockHitPlayerNo) = playerNo;

    ((void (*)(void*))bump)(block);
    if (g_loggedBumps < 4)
    {
        ++g_loggedBumps;
        nsmbudx::log("slide: bumped a block, content=",
                     *(u32*)((char*)block + kBlockContentCode));
    }
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
        rememberSlidePlayer(self);

        const bool bounced = handleWallContact(self, playerNo);
        driveSlide(self);

        if (bounced && s_loggedBounces < 4)
        {
            ++s_loggedBounces;
            nsmbudx::log("slide: bounced, now dir=", (u32)*dirAt(self),
                         " out=", collisionOutput(self));
        }
    }
    else
    {
        // Not in the suit any more (or never was): stop offering this pointer to
        // the overlap hook, so a powered-down player stops bumping blocks.
        forgetSlidePlayer(self);
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


// =====================================================================
//  Hook: ActiveCollider_doOverlapMaybe (RVA 0x001597E8)
// =====================================================================
//
// This is where the block bump becomes possible at all. The function is called
// for every collider pair the collision manager is considering, and it runs the
// callbacks of both sides. Hooking it gives us the pair before the game reacts,
// so we can recognise "player <-> block" and bump the block ourselves.
//
// It is a safe trampoline: `push {r4, r5, r6, r7, r8, r9, r10, r11, lr}`
// (0xe92d4ff0), trampoline_safe = yes.
//
// The arguments are the two colliders. ActiveCollider::owner is +0x40.
extern "C" bool SlideSuit_doOverlap_orig(void* ac1, void* ac2);

extern "C" bool SlideSuit_doOverlap(void* ac1, void* ac2)
{
    ++g_bumpTick;

    // Identify the player by pointer equality against what onExecute vouched
    // for. Do NOT call wearingSuit() on these owners: the overlap hook sees
    // every actor in the scene, and most of them are far smaller than
    // player+0x528.
    void* owner1 = *(void**)((char*)ac1 + 0x40);
    void* owner2 = *(void**)((char*)ac2 + 0x40);

    const bool p1 = isRememberedSlidePlayer(owner1);
    const bool p2 = isRememberedSlidePlayer(owner2);

    if (p1 && !p2)
        bumpBlock(owner2, 0);
    else if (p2 && !p1)
        bumpBlock(owner1, 0);

    // Publish Penguin Slip for exactly the duration of this pair test.
    //
    // The game's doOverlapMaybe runs both callbacks; the enemy side dispatches
    // on acOther->info.category, so a player that reports category 10 here gets
    // the enemy's collisionPenguinSlide reaction. Restoring afterwards means the
    // overwritten value never escapes into the rest of the frame.
    void* playerCollider = nullptr;
    u32   savedCategory  = 0;

    if (p1 || p2)
    {
        playerCollider = p1 ? ac1 : ac2;
        savedCategory  = *(u32*)((char*)playerCollider + kColliderCategory);
        *(u32*)((char*)playerCollider + kColliderCategory) = kAttackPenguinSlip;
    }

    const bool result = SlideSuit_doOverlap_orig(ac1, ac2);

    if (playerCollider != nullptr)
        *(u32*)((char*)playerCollider + kColliderCategory) = savedCategory;

    return result;
}
