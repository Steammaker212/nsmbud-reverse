// modbase/worldmap.h -- read the world maps the game parsed, at runtime.
//
// The game parses every CS_W<n> archive (worlds 1-9, variants a/b) at boot.
// This part logs one line per map as it loads:
//
//   [ModBase] worldmap W1: 72 points, 134 routes
//
// so a custom world can be checked in the Ryujinx log before walking it, and
// gives typed access to the parsed data (game/worldmap.h):
//
//   const worldmap::WorldMapData* w1 = ModBase::worldmap::map(0, 0);
//   const worldmap::MapPoint* p = ModBase::worldmap::findPoint(w1, "W101");
//
// Make and check the archives with scripts/worldmap/wmtool.py; the format and
// every limit are in docs/WORLDMAP.md.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "game/worldmap.h"

namespace ModBase {
namespace worldmap {

// world 0-8, variant 0-1; null if that map was not loaded.
const ::worldmap::WorldMapData* map(u32 world, u32 variant);

const ::worldmap::MapPoint* findPoint(const ::worldmap::WorldMapData* map, const char* name);

// The player's place on the world map, from the story save. False before a
// save exists.
bool currentPosition(u32* world, u32* variant, u32* point);

} // namespace worldmap
} // namespace ModBase
