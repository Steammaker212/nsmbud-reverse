// game/block.h -- ?-blocks, brick blocks and the item manager they spawn through.
//
// Written in codedx's style: real member names where the meaning is known,
// offsets in comments, methods bound to game addresses in symbols/game.sym.
// Every offset and table below is in data/findings/ledger.csv (F0026-F0033).
// Names follow the Wii U decomp (NSMBU-Headers BlockCoinBase / ItemMgr) where
// the Deluxe code matches it structurally; Switch offsets are measured, not
// copied.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "actors/stageactor.h"

// ---------------------------------------------------------------------------
// What a block holds.
//
// A level stores a 5-bit *contents* value per block. BlockBase::getContents
// reads it from settings2 (low nybble, plus bit 28 as bit 4), and the block's
// init turns it into a *content code* through a table at 0x60B04164. Only
// contents 0-20 are defined; 21-31 read past the table, which is what lets
// mods claim them (framework/items).
// ---------------------------------------------------------------------------

enum class BlockContents : u32
{
    Empty           = 0,
    Coin            = 1,
    FireFlowerOrMushroom = 2,   // code 0 (Wii U cContent_FireMushroom)
    FireFlowerOrMushroom2 = 3,  // code 0
    Propeller       = 4,
    Penguin         = 5,
    MiniMushroom    = 6,
    Star            = 7,
    ContinuousStar  = 8,
    Yoshi           = 9,
    MultiCoin       = 10,
    OneUp           = 11,
    Vine            = 12,
    Spring          = 13,
    MushroomIfSmall = 14,
    IceFlower       = 15,
    Acorn           = 16,
    Code23          = 17,       // Deluxe addition: item 10 (Super Crown)
    Code24          = 18,       // Deluxe addition
    Code25          = 19,       // Deluxe addition: item 8 (acorn variant)
    Yoshi2          = 20,

    NumVanilla      = 21,       // 21..31 are unused by the game
};

// The code the block works with (block+0x1AC8). Values 0-21 are the Wii U
// BlockCoinBase::Content enum; 22-26 are Deluxe additions.
enum class BlockContentCode : u32
{
    FireMushroom    = 0,        // item 0 here; the Fire Flower comes from the item's own size rule
    MiniMushroom    = 1,
    LifeMushroom    = 2,        // 1-Up
    Mushroom        = 3,
    FireFlower      = 4,
    IceMushroom     = 5,        // Ice Flower
    PenguinMushroom = 6,
    PropellerMushroom = 7,      // also the power-up path in the block's spawn switch
    Star            = 8,
    ContinuousStar  = 9,
    SquirrelMushroom = 10,      // Super Acorn
    LifeMoon        = 11,       // 3-Up Moon
    Coin            = 12,
    MultiCoin       = 13,
    Vine            = 15,
    Yoshi           = 16,
    Spring          = 17,
    MushroomIfSmall = 19,
    Empty           = 21,
    Crown           = 22,       // Deluxe: Super Crown
    Crown2          = 23,       // Deluxe
    Code24          = 24,
    Acorn2          = 25,       // Deluxe
};

class BlockBase : public StageActor
{
public:
    // 0x60563294, vtable +0x168, shared by 27 of the 28 block vtables.
    inline u32 getContentsRaw() const
    {
        return (settings2 & 0xF) | ((settings2 >> 24) & 0x10);
    }

    // Offsets measured in sub_605B5A3C / sub_605B5BDC / sub_605635AC.
    // Everything between is not yet mapped.
    u8 _284[0x1AC8 - 0x284];
    BlockContentCode contentCode;   // 1AC8  set at init from the contents table
    s32 hitPlayerNo;                // 1ACC  who hit it (Wii U mHitPlayerNo)
    u32 spawnDirection;             // 1AD0  forced to 2 when _1AD4 is set
    u8  _1AD4;                      // 1AD4
    u8  _1AD5[3];
    u32 moveType;                   // 1AD8  1/2 select the spawn animation (Wii U mMoveType)
    u8  _1ADC;
    bool itemGateBypass;            // 1ADD  passed to the item manager as "force" (block+6877)


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    BlockBase() = default;  // keeps the implicit default constructor
    BlockBase(s32);  // 0x00563544 C1/C2
    static void bump(void*);  // 0x005640bc
    s32 setupMovement();  // 0x00563c28 [hook]
    s32 vf174();  // 0x00563cc4 [hook]
    s32 vf160();  // 0x00563e44 [hook]
    void* vf178();  // 0x00563ed8 [hook]
    void* vf17C();  // 0x00563fc0 [hook]
    s32 vf16C();  // 0x005640bc [hook]
    s32 onEmptied();  // 0x005649f8 [hook]
    s32 spawnItemUp();  // 0x00564ba8
    void vfCC();  // 0x00564bac [hook]
    s32 spawnItemDown();  // 0x00564bc0 [hook]
    s32 vfE4();  // 0x00564be4 [hook]
    s32 vfF4();  // 0x00564d3c
    void vf194();  // 0x00564d5c [hook]
    void vf19C();  // 0x00564d60 [hook]
    s32 vf198();  // 0x00564d64 [hook]
    void vf1A0();  // 0x00564d74 [hook]
    void vf1A8();  // 0x00564d78 [hook]
    s32 vf1A4();  // 0x00564d7c [hook]
    bool vf180();  // 0x00564d8c [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x00564e1c [hook]
    f64 vf170();  // 0x0056505c [hook]
};

static_assert(__builtin_offsetof(BlockBase, contentCode)    == 0x1AC8, "BlockBase layout");
static_assert(__builtin_offsetof(BlockBase, hitPlayerNo)    == 0x1ACC, "BlockBase layout");
static_assert(__builtin_offsetof(BlockBase, moveType)       == 0x1AD8, "BlockBase layout");
static_assert(__builtin_offsetof(BlockBase, itemGateBypass) == 0x1ADD, "BlockBase layout");

// The 11 item slots blocks can spawn (table at 0x60C9D3F4, filled on first use).
enum class BlockItem : s32
{
    None        = -1,
    Mushroom    = 0,    // profile 591
    FireFlower  = 1,    // 592
    Star        = 2,    // 854
    MiniMushroom = 3,   // 593
    IceFlower   = 4,    // 594
    Propeller   = 5,    // 595
    Penguin     = 6,    // 596
    OneUp       = 7,    // 597
    Acorn       = 8,    // 598
    ThreeUpMoon = 9,    // 599
    Crown       = 10,   // 601
};

class ItemMgr
{
public:
    static ItemMgr* instance;       // 0x60C9D3E4

    // 0x60465E4C. code -> item through the table at 0x60B0267C. Codes 5, 6, 7,
    // 10, 22 and 25 give their item only if the player's mode passes mask
    // 0x1FB (not small, not mini); otherwise Mushroom. force skips the check.
    BlockItem resolveItem(BlockContentCode code, u32 playerNo, bool force);

    // 0x604663F4. Every block, brick and crate item ends here: looks the
    // item's profile up and calls ActorMgr::create. item > 10 spawns a
    // Mushroom; item == -1 spawns nothing.
    static void spawnItem(BlockItem item, const Vec3* position, u32 settings1,
                          BlockItem item2, u8 layer, u32 parentId);
};
