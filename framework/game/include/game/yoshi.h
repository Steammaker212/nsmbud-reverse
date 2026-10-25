// game/yoshi.h -- Yoshi (profile 442) and what he eats.
//
// codedx style: named members at measured offsets, the rest padded. Evidence:
// data/findings/ledger.csv F0076-F0090; the code is readable in
// readable/player/Yoshi.cpp. Wii U has only a stub (NSMBU-Headers
// player/Yoshi.h: `class Yoshi : public PlayerBase`); EatData comes from
// NSMBU-Headers actor/EatData.h and matches Deluxe field for field.
//
// Yoshi is a PlayerBase (0x2C5C bytes in Deluxe; Wii U 0x2750) with:
//   * his own model manager (YoshiModel, 0x2B8 bytes) at +0x2C64,
//   * a second state machine for the mouth (idle, tongue, spit, ...),
//   * eleven PlayerBase states overridden (Walk ... Cloud) and five of his own.
//
// Build function 0x607CB7B4 (operator new 0x2E30), ctor 0x607CB7D0, vtable
// 0x60C25AB0. Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

namespace yoshi {

// ---- eating (any actor) ----------------------------------------------------------

// Actor +0x215 (StageActor::type).
enum class ActorKind : u8 { Generic = 0, Player = 1, Yoshi = 2, Enemy = 3 };

constexpr u32 cActorKindOffset    = 0x215;
constexpr u32 cActorEatDataOffset = 0x26C;    // EatData*; null = cannot be eaten
constexpr u32 cActorChibiEatOffset = 0x270;   // ChibiYoshiEatData* (baby Yoshis)
constexpr u32 cActorProfileFlags  = 0x238;    // bit 0x80 set by eatable actors (FireballBase)

// EatData::EatType (Wii U names). Yoshi reads it when the tongue comes back:
// YoshiFire / YoshiFireIce replace the catch with a YoshiFlame (profile 478)
// he can spit (0x607D0A4C -> 0x607D1164). Enemy fireballs are YoshiFire.
enum class EatType : u32
{
    None         = 0,
    Eat          = 1,
    EatPermanent = 2,
    Drink        = 3,
    DrinkBig     = 4,
    YoshiFire    = 5,
    YoshiFireIce = 6,
};

enum class EatState : u32 { None = 0, EatTongue = 1, EatMouth = 2, DamageSpitOut = 3, SpitOut = 4 };

// Owned by the eaten actor (usually embedded in it; actor+0x26C points at it).
struct EatData
{
    void*    vtable;        // 0x00
    u32      ownerId;       // 0x04
    u32      yoshiId;       // 0x08 cleared on swallow
    EatState state;         // 0x0C
    EatType  type;          // 0x10
    f32      scale[3];      // 0x14
    u32      scoreType;     // 0x20 0 = 200 points, 1 = 1000, 2 = none
};
static_assert(sizeof(EatData) == 0x24, "EatData");

// EatData virtuals (byte offsets; Wii U order). Verified in Deluxe: setEatMouth
// (called when the tongue brings the catch in, after state = EatMouth) and
// setEatGlupDown (swallow, "SE_VOC_YS_GOKUN"). Signature: (EatData*, Actor* yoshi).
namespace EatDataVt {
constexpr u32 setAfterEatScale = 0x00, calcSpitOutPos = 0x04, calcEatScaleRate = 0x08,
              eatMove = 0x0C, vf10 = 0x10, setEatTongue = 0x14, setEatTongueOff = 0x18,
              setEatMouth = 0x1C, setEatSpitOut = 0x20, setEatGlupDown = 0x24,
              calcEatInScale = 0x28;
}

// ---- Yoshi -----------------------------------------------------------------------

// Fields after PlayerBase (raw offsets from the ctor and the code that uses them).
namespace YoshiField {
constexpr u32 mouthActorId  = 0x2C5C;   // actor in the mouth (0 = empty)
constexpr u32 modelMgr      = 0x2C64;   // player+0x288 points here; +4 = YoshiModel*
constexpr u32 model         = 0x2C68;   // YoshiModel* (0x2B8 bytes; colour at +0x148)
constexpr u32 mouthStateMgr = 0x2C8C;   // StateMgr (executer at +0x2C7C)
constexpr u32 tonguePlayerNo= 0x2C9C;   // -1 in ctor; player number when the tongue starts
constexpr u32 tongueDir     = 0x2CA0;
constexpr u32 tonguePhase   = 0x2CA4;   // 0 wait, 1 out, 2 caught, 3 back, 4 back empty, 5 end
constexpr u32 tongueFrame   = 0x2CB8;
constexpr u32 fruitCount    = 0x2CC8;   // eggs come at cFruitsPerEgg
constexpr u32 forcedEgg     = 0x2CCC;   // u8: lay an egg now, with this extra setting
constexpr u32 flutterPhase  = 0x2CE8;   // 0 can start, 1 rising/falling, 2 fluttering, 4 done
constexpr u32 canFlutter    = 0x2CEC;   // u8: one flutter per jump
constexpr u32 flutterTimer  = 0x2CF0;
constexpr u32 effects       = 0x2CF4;   // 3 EffectWrappers (0x68 each): flutter puff at +0x2CF4
}

// The colour: settings1 & 0xF, stored at YoshiModel +0x148 (0 green, 1 pink,
// 2 yellow, 3 light blue: the order of the strings, not traced in code).
// Texture archives Yoshi_TexGreen/Pink/Yellow/LightBlue are in the profile's
// archive list; in v1.0.0 the model's own table holds Yoshi_TexGreen four times.

// Constants the code loads at run time (patchable with sweet-dx `data` hooks).
constexpr u32 cFruitsPerEggAddr   = 0x60B0C0C8;   // u32 5
constexpr u32 cFlutterFramesAddr  = 0x60B0C0CC;   // u32 30
constexpr u32 cFlutterLiftFastAddr= 0x607D3F94;   // f32 0.2: gravity while falling faster than -1.0
constexpr u32 cFlutterLiftSlowAddr= 0x607D3F98;   // f32 0.07: gravity after that

// Movement fields (StageActor, Wii U order): speedF +0x58, maxSpeedF +0x5C,
// maxFallSpeed +0x60, gravity +0x64, pow +0x68, speed +0x78.

// States. PlayerBase states Yoshi overrides (StateIDs 0x60CC5488 + 0x24*n,
// virtual begin/execute/end at vtable 0x300 + 0xC*n):
//   Walk 0x60CC5488   Jump 0x60CC54AC   Fall 0x60CC54D0   Land 0x60CC54F4
//   Crouch 0x60CC5518 SitJump 0x60CC553C Slip 0x60CC5560  Turn 0x60CC5584
//   HipAttack 0x60CC55A8 Funsui 0x60CC55CC Cloud 0x60CC55F0
// Yoshi's own (begin / execute / end):
//   0x60CC5614  0x607D2EB8 / 0x607D2F88 / 0x607D2F78
//   0x60CC5634  0x607D3298 / 0x607D33F4 / 0x607D33C0  "Yoshi!" voice, anim 120/38
//   0x60CC5654  0x607D34F0 / 0x607D3560 / 0x607D3554  damage voice, anim 148
//   0x60CC5674  0x607D3718 / 0x607D3750 / 0x607D3740  anim 118
//   0x60CC5694  0x607D3814 / 0x607D38D8 / 0x607D38C8  damage, jumps away (speed.y 3.0)
// Mouth state machine (+0x2C8C):
//   Idle   0x60CC5398  0x607CF1BC / 0x607CF1CC / 0x607CF1DC
//   Tongue 0x60CC53B8  0x607CF1EC / 0x607CF27C / 0x607CF4D4
//   Spit   0x60CC53D8  0x607CF550 / 0x607CF5A4 / 0x607CF824
//   ?      0x60CC53F8  0x607CF8B0 / 0x607CFA98 / 0x607CFAB8

} // namespace yoshi
