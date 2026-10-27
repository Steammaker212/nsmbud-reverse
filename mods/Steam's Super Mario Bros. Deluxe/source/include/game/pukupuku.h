// game/pukupuku.h -- the Cheep Cheep (Pukupuku) family, profiles 530-538.
//
// codedx style: named members at measured offsets (static_asserts below), the
// rest padded. Evidence: data/findings/ledger.csv F0034-F0042. The class
// itself is not in the Wii U headers; Enemy semantics come from red-pro2.
//
// One class serves nine profiles (build function Actor_gurupupukupuku_mid_build,
// 0x60370B50 -> ctor 0x60371098, vtable 0x60BF08AC):
//
//   530 Cheep Cheep           531 group           532 big        533 big group
//   534 searching (chases)    535 big searching   536 fleeing    537 big fleeing
//   538 Mecha Cheep           (539 Spiny Cheep and 540-547 are other classes)
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "actors/stageactor.h"

// settings1 nybble 12 (bits 0-3) for profiles 530-533. Other values become
// Normal; 534/535 force Search and 536/537 force Flee. The Mecha keeps the raw
// value. Matches Yaz0moto's "Type" list for sprite 101.
enum class PukupukuMode : u32
{
    Normal      = 0,
    Search      = 1,    // forced for 534/535
    TurnAround  = 3,    // turns back after nybble 8 (+2) distance
    Flee        = 8,    // forced for 536/537
    Up45        = 9,
    Down45      = 10,
};

// Editor nybbles (Yaz0moto numbering) the code reads:
//   5 (settings1 bit 31)   start facing left; clear = face the player
//                          (45° modes always start left)
//   5 (settings1 bit 28)   picks one of two values for +0x1F4 (unknown use)
//   5 (bits 28-29 == 11)   formation member, Normal mode only: takes its
//                          height from the parent's table (+0x17D8)
//   7 (bit 20)             facing = the left bit, never toward the player
//   8 (bits 16-19)         swimming distance (+2)
//   12 (bits 0-3)          PukupukuMode
//   19-20, 21-22           movement controller type / id (codedx movement)

class Pukupuku : public StageActor
{
public:
    // Enemy (0x284..0x189C) is not mapped here; see codedx actor/enemy.h.
    u8 _284[0x17C4 - 0x284];
    u8 stateMgr[0x18];          // 17C4  Enemy's StateMgr (begin/execute/end below)
    u8 _17DC[0x189C - 0x17DC];

    void* model;                // 189C  ModelWrapper*: skeletal "swim", texture "pukupuku"
    u8 collisionMgr[0x4];       // 18A0  CollisionMgr (init in onCreate)
    u8 _18A4[0x2DA8 - 0x18A4];

    PukupukuMode mode;          // 2DA8  from the ctor's profile/settings switch
    u32 searchTimer;            // 2DAC  reset when entering the Search/Flee state
    u8 _2DB0[0x2DF8 - 0x2DB0];
    f32 linkOffsetX;            // 2DF8  added to position.x when linked to a controller
    f32 linkOffsetY;            // 2DFC
    u8 _2E00[0x2E0C - 0x2E00];
    u32 liquidResult;           // 2E0C  checkLiquidCollisions result
    f32 waterSurfaceY;          // 2E10  y is clamped to waterSurfaceY - 16 every frame
    f32 prevWaterSurfaceY;      // 2E14
    bool inWater;               // 2E18  set when the result is 1
    u8 _2E19[0x2EB4 - 0x2E19];
    u32 isBig;                  // 2EB4  532/533/535/537 and the Mecha; scale 1.5
    u32 isMecha;                // 2EB8  538: model pukupuku_mecha
    u32 _2EBC;
    u32 facing;                 // 2EC0  copy of direction after onCreate
    u8 effect[0x2F30 - 0x2EC4]; // 2EC4  EffectWrapper
};

static_assert(sizeof(Pukupuku) == 0x2F30, "Pukupuku size (operator new in 0x60370B50)");
static_assert(__builtin_offsetof(Pukupuku, model)         == 0x189C, "Pukupuku layout");
static_assert(__builtin_offsetof(Pukupuku, mode)          == 0x2DA8, "Pukupuku layout");
static_assert(__builtin_offsetof(Pukupuku, waterSurfaceY) == 0x2E10, "Pukupuku layout");
static_assert(__builtin_offsetof(Pukupuku, isBig)         == 0x2EB4, "Pukupuku layout");
static_assert(__builtin_offsetof(Pukupuku, isMecha)       == 0x2EB8, "Pukupuku layout");

// Virtual states (Wii U style: each calls actor virtuals by vtable offset).
//
//   state object   begin / execute / end    entered for
//   0x60C960D8     +0x280 / +0x284 / +0x288  modes 0, 9, 10
//   0x60C960FC     +0x298 / +0x29C / +0x2A0  modes 1, 8 (search, flee)
//   0x60C96120     +0x2A4 / +0x2A8 / +0x2AC  (not identified)
//   0x60C96144     +0x2B0 / +0x2B4 / +0x2B8  (not identified)
//   0x60C96224     (base-class state)        mode 3
