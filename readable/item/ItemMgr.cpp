// ItemMgr.cpp -- readable reconstruction of the item manager's block-item path.
//
// Each function is a hand-written, behaviour-equivalent rendering of the game
// function at the address in its comment, using the names from
// framework/game/include/game/block.h. Evidence: data/findings/ledger.csv.
// This file documents the game; it is not compiled into mods.
//
// Deluxe (Switch) v1.0.0.

#include "game/block.h"

// 0x60B0267C: content code -> item slot. Codes without an item hold -1.
static const s32 cCodeToItem[] = {
    /*  0 FireMushroom      */  0,      /*  1 MiniMushroom      */  3,
    /*  2 LifeMushroom      */  7,      /*  3 Mushroom          */  0,
    /*  4 FireFlower        */  1,      /*  5 IceMushroom       */  4,
    /*  6 PenguinMushroom   */  6,      /*  7 PropellerMushroom */  5,
    /*  8 Star              */  2,      /*  9 ContinuousStar    */  2,
    /* 10 SquirrelMushroom  */  8,      /* 11 LifeMoon          */  9,
    /* 12..21 coins, vine, Yoshi, spring, empty: no item          */
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    /* 22 Crown             */ 10,      /* 23 Crown2            */ 10,
    /* 24                   */ -1,      /* 25 Acorn2            */  8,
};

// 0x60C9D3F4: item slot -> profile, filled the first time an item spawns.
static const u32 cItemProfile[11] = {
    591,    // Mushroom
    592,    // Fire Flower
    854,    // Star
    593,    // Mini Mushroom
    594,    // Ice Flower
    595,    // Propeller
    596,    // Penguin
    597,    // 1-Up
    598,    // Super Acorn
    599,    // 3-Up Moon
    601,    // Super Crown
};

// Codes whose item depends on the player: 5, 6, 7, 10, 22, 25.
static const u32 cPlayerGatedCodes = 0x24004E0;
// Player modes (minus 1) that may receive those items: every mode but Mini (3).
// Small (0) underflows past the range and is refused too.
static const u32 cGateModeMask = 0x1FB;

// 0x60465E4C
BlockItem ItemMgr::resolveItem(BlockContentCode code, u32 playerNo, bool force)
{
    u32 c = (u32)code;
    if (force)
        return (BlockItem)cCodeToItem[c];
    if (playerNo == 15)
        return BlockItem::Mushroom;
    if (c > 25 || !((1u << c) & cPlayerGatedCodes))
        return (BlockItem)cCodeToItem[c];

    PlayerBase* player = PlayerMgr::instance->players[playerNo < 4 ? playerNo : 0];
    if (player && player->isPlayer()) {             // RTTI check against Player
        u32 m = player->mode - 1;                   // Player +0x528
        if (m <= 8 && ((cGateModeMask >> m) & 1))
            return (BlockItem)cCodeToItem[c];
    }
    return BlockItem::Mushroom;                     // too small for this item
}

// 0x604663F4. The first argument is ignored; the profile comes from item2.
void ItemMgr::spawnItem(BlockItem /*item*/, const Vec3* position, u32 settings1,
                        BlockItem item2, u8 layer, u32 parentId)
{
    if (item2 == BlockItem::None)
        return;

    s32 slot = (s32)item2 > 10 ? 0 : (s32)item2;

    // A game-mode override (scene +764 == 1 and an active object at
    // 0x60C9A1E0 in state 4) turns items 1, 4 and 8 into slot 6 (Penguin).
    // The scene and object are not identified yet: unknown.

    ActorBuildInfo buildInfo = { 0 };
    buildInfo.settings1 = settings1;
    if (parentId)
        buildInfo.parentId = parentId;
    buildInfo.profile  = Profile::get(cItemProfile[slot]);
    buildInfo.position = *position;
    buildInfo._20      = layer;
    ActorMgr::instance->create(&buildInfo, 0);
}

// 0x60466328: the single-item spawn a block calls. params is the struct
// BlockBase::spawnPowerup fills (see BlockBase.cpp); its fields are packed
// into the item's settings1.
//
//   settings1 = (direction  & 3) << 12   params+20
//             | (moveFlag   & 1) << 14   params+24
//             | (u16)(params+28) << 15
//             | (playerNo   & 3) << 16   params+32
//             | (params+36  & 3) << 18
//             | (params+40  & 3) << 20
//             | (params+48 & 31) << 24
//             | (params+56  & 1) << 30
//             | (params+60)      << 31
//             | (params+64  & 1) << 10
void ItemMgr::spawnFromBlock(const BlockSpawnParams& params, BlockContentCode code, u32 parentId)
{
    BlockItem item = resolveItem(code, params.playerNo, params.force);
    spawnItem(item, params.position, params.packSettings1(), item, params.layer, parentId);
}
