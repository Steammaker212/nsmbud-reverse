// PenguinSuit.cpp -- the Penguin Suit: what the mode actually changes, and what
// a "always sliding" variant can reuse.
//
// The Penguin Suit is **not an actor**. Sprite 596 (`ペンギン`, profile 254) is
// the *pickup* that grants it. The suit itself is `PlayerMode::Penguin == 5`
// (player+0x528), stored in the same mode field as Fire, Ice and Acorn, and the
// per-mode tables in game/player.h turn it into a body (PlayerBody::Penguin ==
// 3) and a height.
//
// What is special about Penguin at the engine level is that it has an attack
// type of its own. `Attack::PenguinSlip` is **10**, sitting between Shell (9)
// and Spin (11), and every enemy class has a `collisionPenguinSlide` virtual that
// the player's collider dispatches to. That is the piece a copy wants: sliding
// into an enemy should do exactly what the suit's slide does, and reusing
// attack type 10 gets every enemy's own reaction for free -- including the
// classes that override it (Amp, Fuzzy, Thwomp, Pokey, RiverPiranha, BossBase,
// ShellEnemy) and the ones that fall back to `collisionSlide`.
//
// Deluxe (Switch) v1.0.0. Ledger: F0131-F0136.

#include "game/player.h"
#include "game/enemy.h"

// ---------------------------------------------------------------------------
// The slide is an attack, not a state
// ---------------------------------------------------------------------------
//
// `Enemy::collisionPenguinSlide` (0x602A675C) is twelve bytes:
//
//     return (*(int (**)(int))(*(_DWORD *)a1 + 0x118))(a1);   // vtable +0x118
//
// i.e. it forwards straight to the enemy's `collisionSlide` unless the class
// overrides it. The overriders listed in the database are:
//
//     Amp          0x602593EC
//     Fuzzy        0x60277EC4
//     Thwomp       0x6029E258
//     Pokey        0x60382AB4
//     RiverPiranha 0x603DFCD4
//     BossBase     0x60025368
//     ShellEnemy   0x603A272C
//
// So "penguin slide" and "ordinary slide" are the *same* reaction for most of
// the cast, and differ only where a specific enemy wanted to. A mod that sends
// attack type 10 therefore cannot get it wrong: the game decides what each enemy
// does with a slide, and it decides it per class, exactly as for the real suit.
//
// This is the important design consequence for a copy of the suit: nothing in
// the mod needs to know the enemy table. Set the attack type on the player's
// collider and the existing per-class dispatch does the rest.


// ---------------------------------------------------------------------------
// Reverse on impact
// ---------------------------------------------------------------------------
//
// The engine already tells an actor when it hit a wall. `CollisionMgr::output`
// (actor+0xB38, see readable/engine/CollisionActor.cpp) carries
//
//     FlagCollidedRight = 1 << 18
//     FlagCollidedLeft  = 1 << 19
//
// so "bounce back when you hit something" is a read of two bits and a negated
// speed.x -- no raycast, no collider callback, no new collision code:
//
//     if (output & (FlagCollidedRight | FlagCollidedLeft))
//         speed.x = -speed.x;
//
// That is the whole mechanic, and it is why an always-sliding copy is cheap: the
// collision detection is already running every frame for every actor.
//
// Note the ordering trap. `output` is written by CollisionMgr::process at the
// *end* of the actor's move, so a bounce read from the same frame's output and
// applied to speed.x will be consumed by next frame's move. Reading it before
// the move instead would react to the previous frame's contact, which is why the
// mod below flips the speed in onExecute (after the state has run) rather than
// in the collision callback.
bool CollisionActor::isTouchingWall() const
{
    return (this->collisionMgr.output & (FlagCollidedRight | FlagCollidedLeft)) != 0;
}


// ---------------------------------------------------------------------------
// Triggering the block-from-below event
// ---------------------------------------------------------------------------
//
// Hitting a block from underneath is a virtual on the block, not an event id.
// There are **two** relevant virtuals and it matters which one you call:
//
//     vtable+0x0A8   vf16C             the real bump handler (0x605640BC)
//     vtable+0x1DC   damageFromUnder   empty in BlockBase (0x60563A08)
//
// `BlockBase::vf16C` opens with `movw r0,#0x1ac8` / `ldr r0,[r5,r0]!` /
// `cmp r0,#0xd`, i.e. it loads the block's content code and compares it against
// 13, then selects 12 or 14 from the hit result and calls the spawn path. That
// is the "?block was bumped" behaviour. `BlockCoinBase` then plays it through
// `beginState_BumpUp` (0x605B6648) and friends.
//
// `damageFromUnder` is a separate, deliberately-empty hook for subclasses that
// want to react without the standard bump. Calling only that one produces
// nothing visible from a ?-block -- which is the mistake I made first and
// corrected in F0138.
//
// The fields an initiator supplies, because the handler reads them:
//
//     block + 0x1ACC   hitPlayerNo     which player hit it (s32)
//     block + 0x1AC8   contentCode     what it contains
//     block + 0x1AD8   moveType        selects the bump animation
//
// And the exptable way to find the block at all: `ActiveCollider_doOverlapMaybe`
// (0x601597E8) invokes **both** colliders' callbacks for an overlapping pair --
// `blx r2` four times, twice for `ac1->info.callback` and twice for
// `ac2->info.callback`. So when the player's callback runs, the *other*
// argument is the block's collider, and `collider->owner` (ActiveCollider+0x40)
// is the block actor. The mod uses that instead of searching for a block.
void BlockBase::hitFromUnder(s32 playerNo)
{
    this->hitPlayerNo = playerNo;

    // vf16C is the bump itself. Called through the vtable so subclasses that
    // override it (BabyYoshiBlock, FlyingBlockForAmbush) get their own version.
    typedef void (*BumpFn)(void*);
    BumpFn bump = (BumpFn)(*(void***)this)[0x0A8 / 4];
    if (bump)
        bump(this);
}

// The block's collider hands us the actor. ActiveCollider::owner is +0x40.
static BlockBase* blockFromCollider(void* collider)
{
    return (BlockBase*)(*(void**)((char*)collider + 0x40));
}


// ---------------------------------------------------------------------------
// What the suit does NOT give you
// ---------------------------------------------------------------------------
//
// Two things a copy of the suit cannot inherit from the mode value alone:
//
// 1. **Ice balls.** Firing them is the suit's attack action, and it is driven by
//    `BrosBase::createProjectile` / `throwProjectile` (both `ret`-only stubs in
//    the base class -- each character overrides them). Nothing here makes the
//    slide variant able to shoot; that is a separate hook.
//
// 2. **The ice physics.** Being on ice is a *tile/collision* property, not a
//    mode property: the player gets low friction because the CollisionMgr says
//    the ground is slippery, and the mode does not change that. This is worth
//    stating plainly because it is the actual mechanism behind "feels like
//    sliding on ice" -- see readable/engine/CollisionActor.cpp, where friction
//    lives at CollisionActor+0x1770/+0x1774 and is applied after the move. A mod
//    that wants permanent ice does not need a special mode; it keeps the
//    friction budget from ever being consumed, or sets speed directly.


// ---------------------------------------------------------------------------
// Model rotation
// ---------------------------------------------------------------------------
//
// `StageActor::rotation` is a **Vec3i** at +0x09C -- three 32-bit integers, not
// floats -- and the model is drawn from it. That is why "spin the player model
// while sliding" is an integer write, and why the magnitude is a fixed-point
// unit rather than radians.
//
// `BrosBase::executeState_Move` (0x60265384) already does exactly this kind of
// turn, and its assembly is the specification for the units. With r4 = player
// and `direction = directionToPlayerX()` in r0 (stored at player+0x50):
//
//     ldr r2,[r4,#0xA0]        ; r2 = the accumulator at player+0xA0
//     ldr r1,[table, r0,lsl#2] ; the per-direction increment
//     add r1,r2,r1
//     str r1,[r4,#0xA0]
//     ...                      ; r1 = |accumulated|
//     ldr r0,[snapTable,r0,lsl#2]
//     ...                      ; r2 = |snap|
//     cmp r1,r2                ; INTEGER compare, not float
//     strhs r0,[r4,#0xA0]      ; reached it -> snap and report "finished"
//
// **+0xA0 is StageActor::rotation.y.** rotation is the Vec3i at +0x09C, so y is
// +0x0A0. The turn code is not keeping a private accumulator next to the
// rotation -- it is accumulating *into the model's Y rotation* and snapping it
// when it gets far enough. That is the single most useful fact here for a spin:
// there is no second field to feed, and no "apply rotation to model" step to
// find. Write rotation.z and the model turns.
//
// Both tables are integer and both are indexed by direction:
//
//     increments  0x60AF1F98  { 0x08000000, 0xF8000000 }   (+/- 2^27)
//     snap target 0x60AFE3E4  { 0x20000000, 0xE0000000 }   (+/- 2^29)
//
// The snap table is reached through a GOT slot (0x60C64884) rather than read
// directly, which is why a naive search for the literal finds nothing.
//
// Note the scale: a full turn is a 32-bit angle where 2^32 is 360 degrees, so
// 0x20000000 is 45 degrees and the increment 0x08000000 is 11.25 degrees per
// frame. A spin is a steady addition in the same units -- 0x01000000 per frame
// is 5.6 degrees per frame, a visible spin at 60 fps rather than a blur.
//
// A correction worth recording: I first described this accumulator as
// "fixed-point compared against a float target" and the snap table as
// `8.0f / -24.0f`. Reading the same words as floats gives 8.0 and -24.0, which
// is what made the mistake tempting, but the instructions are `cmp`/`bge`/`rsb`
// with no VFP in sight, and the values are 0x20000000/0xE0000000. F0136.
