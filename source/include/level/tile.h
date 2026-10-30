#pragma once

#include "core/types.h"
#include "level.h"


class TileLayer
{
public:
    u16* getTilePtr(u32 x, u32 y, u32* blockIndexOut = nullptr);
};


class TilesetMgr
{
public:
    TileLayer* getTileLayer(u32 area, u8 layer);

    static TilesetMgr* instance;
};


class TileMgr
{
public:
    static TileMgr* instance;

    static inline u16* getTilePtr(u16 x, u16 y, u32 area, u8 layer, u32* blockIndexOut = nullptr)
    {
        TileLayer* tileLayer = TilesetMgr::instance->getTileLayer(area, layer);

        if (!tileLayer)
            return nullptr;

        return tileLayer->getTilePtr(x, y, blockIndexOut);
    }

    static inline u16* getTilePtrCurrentArea(u16 x, u16 y, u8 layer, u32* blockIndexOut = nullptr)
    {
        return getTilePtr(x, y, LevelInfo::instance->area, layer, blockIndexOut);
    }


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    TileMgr();  // 0x00710d40 C1/C2
    s32 createInstance();  // 0x00710cb8 [hook]
    void* ctor_helper();  // 0x007118e8 [hook]
    s32 splashRelated(void*, s32, s32);  // 0x00715fb4 [hook]
    void* setTile(s16, u32, u32, s32);  // 0x00716804 [hook]
    s32 setTileArea_helper();  // 0x00723334
};
