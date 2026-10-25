// BlockBase.cpp -- readable reconstruction of how a ?-block or brick decides
// what comes out.
//
// Hand-written, behaviour-equivalent renderings of the game functions at the
// addresses given, using framework/game/include/game/block.h. Evidence:
// data/findings/ledger.csv. Documents the game; not compiled into mods.
//
// Deluxe (Switch) v1.0.0.

#include "game/block.h"

// 0x60B04164: contents (what the level stores) -> content code.
// 21 entries; contents 21-31 are unused and read past the table.
static const BlockContentCode cContentsToCode[21] = {
    BlockContentCode::Empty,            //  0
    BlockContentCode::Coin,             //  1
    BlockContentCode::FireMushroom,     //  2
    BlockContentCode::FireMushroom,     //  3
    BlockContentCode::PropellerMushroom,//  4
    BlockContentCode::PenguinMushroom,  //  5
    BlockContentCode::MiniMushroom,     //  6
    BlockContentCode::Star,             //  7
    BlockContentCode::ContinuousStar,   //  8
    BlockContentCode::Yoshi,            //  9
    BlockContentCode::MultiCoin,        // 10
    BlockContentCode::LifeMushroom,     // 11
    BlockContentCode::Vine,             // 12
    BlockContentCode::Spring,           // 13
    BlockContentCode::MushroomIfSmall,  // 14
    BlockContentCode::IceMushroom,      // 15
    BlockContentCode::SquirrelMushroom, // 16
    BlockContentCode::Crown2,           // 17 (code 23)
    BlockContentCode::Code24,           // 18
    BlockContentCode::Acorn2,           // 19 (code 25)
    BlockContentCode::Yoshi,            // 20
};

// 0x60563294, vtable +0x168. One block class (vtable slot -> 0x60575CC0)
// overrides it; that override is not read yet.
u32 BlockBase::getContents()
{
    return (settings2 & 0xF) | ((settings2 >> 24) & 0x10);
}

// 0x605635AC (excerpt): the content code is fixed when the block is created.
// In one mode (flag at +6515 of the object at 0x60C9A1F0, unidentified) the
// code is first passed through sub_605B9F30, which remaps it.
void BlockBase::initContentCode()
{
    BlockContentCode code = cContentsToCode[getContents()];
    if (sModeObject->remapContents)                         // 0x60C9A1F0 +6515
        code = sContentRemapper->remap(code);               // sub_605B9F30
    contentCode = code;                                     // +0x1AC8
}

// 0x605B5BDC: what happens when the block is hit, by content code.
void BlockBase::spawnContents(const Vec3& pos, int a3, int a4, bool asChild)
{
    switch (contentCode) {
    case BlockContentCode::PropellerMushroom:   // 7: the power-up path
        spawnPowerup(pos, a3, a4, asChild);
        return;

    case BlockContentCode::Coin:                // 12, 13: coins
    case BlockContentCode::MultiCoin:
        sub_60582B14(dword_60CAF15C, &pos, spawnDirection, hitPlayerNo);   // coin spawn
        return;

    case BlockContentCode::MushroomIfSmall:     // 19, 24: a coin when the item
    case BlockContentCode::Code24:              //  manager says so, else a Mushroom
        if (sub_60465D70(ItemMgr::instance, hitPlayerNo)) {
            contentCode = BlockContentCode::Coin;
            sub_60582B14(dword_60CAF15C, &pos, spawnDirection, hitPlayerNo);
        } else {
            contentCode = BlockContentCode::Mushroom;
        }
        return;

    case BlockContentCode::Crown2:              // 23: a coin unless exactly one
        if (sScene->_764 == 4 || sub_6078A168(PlayerMgr::instance) != 1) {   // player (inferred)
            contentCode = BlockContentCode::Coin;
            sub_60582B14(dword_60CAF15C, &pos, spawnDirection, hitPlayerNo);
        }
        // otherwise the code stays 23
        return;

    default:
        return;
    }
}

// 0x605B5A3C: one power-up out of the block.
void BlockBase::spawnPowerup(const Vec3& pos, int a3, int a4, bool asChild)
{
    // For some hitting players a 1-Up block gives a 3-Up Moon and an Acorn
    // block gives a Super Crown. sub_6078A3DC's predicate is unknown; the
    // Crown being Toadette's item suggests a character check (inferred).
    if (sub_6078A3DC(PlayerMgr::instance, hitPlayerNo) == 1 && getProfileId() != 321) {
        if (contentCode == BlockContentCode::LifeMushroom)
            contentCode = BlockContentCode::LifeMoon;           // 2 -> 11
        else if (contentCode == BlockContentCode::SquirrelMushroom)
            contentCode = BlockContentCode::Crown;              // 10 -> 22
    }

    // Spawn animation from the block's move type.
    u32 anim = 0;
    if (moveType == 1)
        anim = 3;
    else if (moveType == 2)
        anim = spawnDirection == 2 ? 4 : 5;

    if (_1AD4)
        spawnDirection = 2;

    BlockSpawnParams params;
    params.position  = &pos;
    params.layer     = layer;               // StageActor +0x56
    params.force     = itemGateBypass;      // +0x1ADD
    params.direction = spawnDirection;
    params.a4        = a4;
    params.a3        = a3;
    params.playerNo  = hitPlayerNo;
    params.asChild   = asChild;
    params.anim      = anim;
    params.flag      = _1AC3;
    params.facing    = direction;           // StageActor +0x50
    params.extra     = _1AFC;

    ItemMgr::instance->spawnFromBlock(params, contentCode, asChild ? id : 0);
}
