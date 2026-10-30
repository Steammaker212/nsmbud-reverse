// block_items.cpp -- see modbase/block_items.h.
//
// The chain this hooks, all seen in the binary (ledger F0026-F0033):
//
//   BlockBase::getContents      0x60563294  contents = settings2 & 0xF | bit 28
//   block init                  0x605635AC  code = contentToCode[contents]
//   block spawn switch          0x605B5BDC  code 7 -> spawnPowerup
//   spawnPowerup (single)       0x605B5A3C  -> ItemMgr::spawn via resolveItem
//   spawnPowerup (multiplayer)  0x605B5FA8  -> one item per player
//   ItemMgr::spawnItem          0x604663F4  profile = itemProfiles[item]; ActorMgr::create
//
// Deluxe (Switch) v1.0.0 only.

#include "modbase/block_items.h"
#include "modbase/log.h"
#include "actors/stageactor.h"
#include "actors/actormgr.h"
#include "modbase/game.h"
#include "game/block.h"
#include "actors/profile.h"

namespace {

// Contents 4 is the Propeller block: code 7, the power-up spawn path, with the
// game's own small-player Mushroom rule.
constexpr u32 cPlaceholderContents = 4;

struct Entry
{
    u32 profileId;      // 0 = unregistered
    bool mushroomIfSmall;
};

Entry sEntries[ModBase::blockItems::cLastCustomContents + 1];
StageActor* sSpawningBlock;     // set while a block's spawnPowerup runs (main thread)

inline u32 rawContents(StageActor* block)
{
    return (block->settings2 & 0xF) | ((block->settings2 >> 24) & 0x10);
}

inline const Entry* entryFor(StageActor* block)
{
    if (!block)
        return nullptr;
    u32 c = rawContents(block);
    if (c < ModBase::blockItems::cFirstCustomContents || !sEntries[c].profileId)
        return nullptr;
    return &sEntries[c];
}

} // namespace

namespace ModBase {
namespace blockItems {

bool registerContents(u32 contents, u32 profileId, bool mushroomIfSmall)
{
    if (contents < cFirstCustomContents || contents > cLastCustomContents)
        return false;
    sEntries[contents] = { profileId, mushroomIfSmall };
    return true;
}

} // namespace blockItems
} // namespace ModBase

// ---- hooks ------------------------------------------------------------------

namespace ModBase { namespace blockItems { u32 getContents_orig(StageActor* block); } }
namespace ModBase { namespace blockItems { int spawnSingle_orig(StageActor* block, void* pos, int a3, int a4, int a5); } }
namespace ModBase { namespace blockItems { void spawnMulti_orig(StageActor* block, void* pos, int a3, int a4, int a5); } }
namespace ModBase { namespace blockItems { void spawnItem_orig(s32 item, const Vec3* pos, u32 settings1, s32 item2,
                                          u8 layer, u32 parentId); } }

// BlockBase::getContents: a registered custom value reports as a Propeller
// block, so the content table is never indexed past its 21 entries.
namespace ModBase { namespace blockItems { u32 getContents(StageActor* block); } }
u32 ModBase::blockItems::getContents(StageActor* block)
{
    u32 contents = ModBase::blockItems::getContents_orig(block);
    if (contents >= ModBase::blockItems::cFirstCustomContents && contents < 32
        && sEntries[contents].profileId)
        return cPlaceholderContents;
    return contents;
}

namespace ModBase { namespace blockItems { int spawnSingle(StageActor* block, void* pos, int a3, int a4, int a5); } }
int ModBase::blockItems::spawnSingle(StageActor* block, void* pos, int a3, int a4, int a5)
{
    StageActor* prev = sSpawningBlock;
    sSpawningBlock = block;
    int r = ModBase::blockItems::spawnSingle_orig(block, pos, a3, a4, a5);
    sSpawningBlock = prev;
    return r;
}

namespace ModBase { namespace blockItems { void spawnMulti(StageActor* block, void* pos, int a3, int a4, int a5); } }
void ModBase::blockItems::spawnMulti(StageActor* block, void* pos, int a3, int a4, int a5)
{
    StageActor* prev = sSpawningBlock;
    sSpawningBlock = block;
    ModBase::blockItems::spawnMulti_orig(block, pos, a3, a4, a5);
    sSpawningBlock = prev;
}

// ItemMgr::spawnItem: the same build the game does, with the registered profile.
namespace ModBase { namespace blockItems { void spawnItem(s32 item, const Vec3* pos, u32 settings1, s32 item2,
                                     u8 layer, u32 parentId); } }
void ModBase::blockItems::spawnItem(s32 item, const Vec3* pos, u32 settings1, s32 item2,
                                     u8 layer, u32 parentId)
{
    const Entry* e = entryFor(sSpawningBlock);
    if (!e || item2 == -1 || (e->mushroomIfSmall && item == 0)) {
        ModBase::blockItems::spawnItem_orig(item, pos, settings1, item2, layer, parentId);
        return;
    }

    ActorBuildInfo buildInfo = { 0 };
    buildInfo.settings1 = settings1;
    buildInfo.parentId  = parentId;
    buildInfo.profile   = Profile::get(e->profileId);
    buildInfo.position  = *pos;
    buildInfo._20       = layer;
    if (!buildInfo.profile) {
        ModBase::log("block items: profile ", e->profileId, " is not registered; spawning the vanilla item");
        ModBase::blockItems::spawnItem_orig(item, pos, settings1, item2, layer, parentId);
        return;
    }
    ActorMgr::instance->create(&buildInfo, 0);
}

// A block that is not a BlockBase (the Triple Block) spawning its contents. Mirrors the game's
// path: ItemMgr 0x60466328 packs the item's settings1 from the block's spawn parameters
// (direction bits 12-13 and 18-19, bit 14 set by the single-item spawn, player bits 16-17),
// resolves the item with ItemMgr::resolveItem and calls ItemMgr::spawnItem. Directions: 2
// out of the top, 3 out of the bottom (Tsuru's 0x00082000 / 0x000C3000).
bool ModBase::blockItems::spawnContents(StageActor* block, u32 contents, const Vec3& position, bool down, s32 player)
{
    if (contents == 0 || contents > cLastCustomContents)
        return false;
    u32 code;
    if (contents >= cFirstCustomContents) {
        if (!sEntries[contents].profileId)
            return false;
        code = (u32)BlockContentCode::PropellerMushroom;    // the placeholder (cPlaceholderContents)
    } else {
        code = contentCodeTable[contents];
    }
    const u32 dir = down ? 3 : 2;
    if (code == (u32)BlockContentCode::Coin || code == (u32)BlockContentCode::MultiCoin) {
        ActorBuildInfo buildInfo = { 0 };
        buildInfo.settings1 = (u32)(player & 0xF) | (dir << 4);
        buildInfo.profile = Profile::get(399);
        buildInfo.position = position;
        ActorMgr::instance->create(&buildInfo, 0);
        return true;
    }
    if (code == (u32)BlockContentCode::Vine || code == (u32)BlockContentCode::Yoshi
        || code == (u32)BlockContentCode::Spring || code == (u32)BlockContentCode::Empty) {
        ModBase::log("block items: contents ", contents, " (code ", code, ") needs BlockBase; not spawned");
        return false;
    }
    BlockItem item = ItemMgr::instance->resolveItem((BlockContentCode)code, (u32)player, false);
    if (item == BlockItem::None)
        return false;
    u32 settings1 = (dir << 12) | (1u << 14) | (((u32)player & 3) << 16) | (dir << 18);
    StageActor* prev = sSpawningBlock;
    sSpawningBlock = block;
    ModBase::blockItems::spawnItem((s32)item, &position, settings1, (s32)item, block->_56, block->id);
    sSpawningBlock = prev;
    return true;
}
