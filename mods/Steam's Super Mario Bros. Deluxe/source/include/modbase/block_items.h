// modbase/block_items.h -- put any actor (a new power-up) inside ?-blocks and bricks.
//
// A level stores a 5-bit contents value per block, and the game only defines
// 0-20. Register one of the unused values 21-31 and every block holding it
// spawns your profile when hit:
//
//   ModBase::blockItems::registerContents(21, ProfileId::HammerFlower);
//
// Call it from a static constructor (it must run before a level loads).
// In the level editor, set the block's contents to 21: settings2 low nybble =
// 21 & 0xF = 5, plus bit 28 set.
//
// How it works (framework/items/code/block_items.cpp): such a block reports
// itself as a Propeller block (contents 4), so it bounces, plays its sound and
// runs the game's own power-up spawn, including the "Mushroom if the player
// is small" rule. At the single spawn funnel (ItemMgr::spawnItem, 0x604663F4),
// the item is swapped for your profile. With mushroomIfSmall = false, small
// players get your item too.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "core/types.h"

namespace ModBase {
namespace blockItems {

constexpr u32 cFirstCustomContents = 21;
constexpr u32 cLastCustomContents  = 31;

// false if contents is outside 21-31.
bool registerContents(u32 contents, u32 profileId, bool mushroomIfSmall = true);

} // namespace blockItems
} // namespace ModBase
