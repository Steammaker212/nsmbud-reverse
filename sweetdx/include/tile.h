#pragma once

#include "types.h"
#include "level.h"

//
// Tile access. A level is a grid of 16-bit tile ids per layer; a null pointer
// means the coordinates are outside the layer.
//

class TileLayer
{
public:
    // Returns a pointer to the tile at (x, y), or null if out of range. Optionally
    // reports which block owns that tile through blockIndexOut.
    u16* getTilePtr(u32 x, u32 y, u32* blockIndexOut = nullptr);
};


class TilesetMgr
{
public:
    static TilesetMgr* instance;

    TileLayer* getTileLayer(u32 area, u8 layer);
};


class TileMgr
{
public:
    static TileMgr* instance;

    static inline u16* getTilePtr(u16 x, u16 y, u32 area, u8 layer,
                                  u32* blockIndexOut = nullptr)
    {
        TileLayer* tileLayer = TilesetMgr::instance->getTileLayer(area, layer);
        if (!tileLayer)
            return nullptr;
        return tileLayer->getTilePtr(x, y, blockIndexOut);
    }

    static inline u16* getTilePtrCurrentArea(u16 x, u16 y, u8 layer,
                                             u32* blockIndexOut = nullptr)
    {
        return getTilePtr(x, y, LevelInfo::instance->area, layer, blockIndexOut);
    }
};
