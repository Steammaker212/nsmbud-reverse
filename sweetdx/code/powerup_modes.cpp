#include "actor/stageactor.h"
#include "actor/enemy.h"
#include "profile.h"
#include "profileid.h"
#include "model.h"
#include "drawmgr.h"
#include "movementhandler.h"

// ===========================================================================
// Power-up modes and the Hammer
// ===========================================================================
//
// The player's power-up mode is stored as a small integer. Only some values are
// used by the retail game:
//
//   mode 1  Mushroom (Super)
//   mode 2  Fire Flower
//   mode 3  Propeller
//   mode 4  Penguin
//   mode 5  Mini
//   mode 6  Star
//   mode 7  Ice Flower
//   mode 9  Yoshi egg
//   mode 10 UNUSED in the retail game
//
// Mode 10 is what this project reuses for the Hammer. Nothing in the base game
// produces it, which is why the approach is safe: we are filling a hole, not
// overwriting behaviour.
//
// The mode is read in several places, each of which has to be taught about 10.
// Those are expressed as `instr` hooks in hooks/hammer_projectile.hks -- there is
// no clean function to override, because the checks are inlined into the fireball
// path.
//
// Why the fireball path
// ---------------------
// The Hammer projectile is mechanically a thrown arc, which is exactly what the
// player fireball already is. Rather than write new physics, the build makes the
// fireball code accept mode 10 and swaps which profile it spawns. That is the
// whole trick.
//
// Two lookup tables also need a slot for mode 10:
//   * the per-mode actor height table
//   * the per-mode body-type table (mode 10 -> body type 0 = Normal)
//
// Both are redirected to relocated copies in mode_tables.hks, so the retail
// tables stay untouched and the change is reversible.

// The retail power-up modes we care about.
enum PowerUpMode
{
    ModeNormal    = 0,
    ModeMushroom  = 1,
    ModeFire      = 2,
    ModePropeller = 3,
    ModePenguin   = 4,
    ModeMini      = 5,
    ModeStar      = 6,
    ModeIce       = 7,
    ModeYoshiEgg  = 9,
    ModeHammer    = 10    // unused by the retail game
};

// Per-mode actor height, indexed by mMode. Relocated to 0x60B494... in the
// patched build; the retail table had no entry for mode 10.
//
//                       0     1     2    3     4     5     6     7     8     9    10
static const f32 sHeightByMode[11] =
    { 16.0f, 31.0f, 31.0f, 6.0f, 31.0f, 31.0f, 31.0f, 31.0f, 31.0f, 31.0f, 31.0f };

// Per-mode body type. Mode 10 uses body type 0 (Normal). There is no Hammer suit
// model in the game -- the power-up model table at 0x60CA6BB8 has twenty entries
// and none of them is a Hammer -- so the Hammer renders as a Fire-coloured Normal
// body.
//
//                       0   1   2   3   4   5   6   7   8   9   10
static const u32 sBodyByMode[11] =
    { 1,  0,  0,  1,  2,  3,  0,  4,  4,  5,  0 };

// Balloon draw offset by mode. Indexed by mMode DIRECTLY (no -1), so index 10 is
// the Hammer slot. The retail table's slot 10 was a spare zero; the patched build
// uses -4.0 so a Hammer held while riding Balloon Yoshi sits correctly.
static const f32 sBalloonOffsetByMode[11] =
    { 0.0f, -4.0f, -4.0f, 4.0f, -5.0f, -2.0f,
      -4.0f, -4.0f, -4.0f, 0.0f, -4.0f };

// ---------------------------------------------------------------------------
// The item-grant gate
// ---------------------------------------------------------------------------
//
// When you collect a power-up (or bump a ? block containing one), the game
// checks whether the mode you would become is one it knows how to handle:
//
//     ldr  r0, [player, #0x528]   ; mMode
//     sub  r0, r0, #1             ; index = mMode - 1
//     cmp  r0, #9                 ; out of range?
//     bhi  reject
//     uxth r0, r0
//     movw r1, #0x3FB             ; which modes are acceptable
//     mov  r2, #1
//     tst  r2, r1, lsr r0         ; test bit(mMode - 1)
//     beq  reject
//
// Because the index is (mMode - 1), the bit that matters for mode 10 is bit 9:
//
//     0x1FB = bits 0,1,3,4,5,6,7,8      (retail)
//     0x3FB = bits 0,1,3,4,5,6,7,8,9    (correct extension)
//     0x5FB = bits 0,1,3,4,5,6,7,8,10   (wrong -- sets bit 10, i.e. mode 11)
//
// An earlier proposal used 0x5FB and would still have rejected Hammer players.
// The build uses 0x3FB; see hooks/item_grant.hks.
//
// The gate exists at two call sites, which is why there are four hooks.

// ---------------------------------------------------------------------------
// Consequence worth knowing about
// ---------------------------------------------------------------------------
//
// Approach B grants the Fire Flower as mode 10, so the Fire Flower no longer
// produces mode 2. A legacy save that was saved in Fire state, or a level that
// starts the player as Fire, therefore shows Normal colours and cannot throw
// fire. If that matters, add a `mode 2 -> mode 10` remap in the power-up
// application function (sub_607A2F40) before its vf+0x90 call. The build as it
// stands does not do this.
