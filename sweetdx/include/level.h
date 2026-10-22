#pragma once

#include "sead.h"
#include "util/vec2.h"
#include "util/vec3.h"

class StageActor;

//
// A level is split into up to four areas; only one is live at a time. Each area
// owns its block (tile object) lists.
//
class Level : public sead::IDisposer
{
public:
    class Area
    {
    public:
        struct Location
        {
            u16 x;      // +0x00
            u16 y;      // +0x02
            u16 w;      // +0x04
            u16 h;      // +0x06
            u8  id;     // +0x08
        };

        Location* getLocation(sead::Rect* rectOut, u8 id);

        u32  id;                     // +0x000
        void* blocks[15];            // +0x004
        u32  blockSizes[15];         // +0x040
        u32  blockEntryCounts[15];   // +0x07C
        u8   _B8[0x100];
        u8   _1B8[0x100];
        u8   _2B8[0x100];
    };

    Area* getArea(u32 id);

    static Level* instance;

    Area areas[4];
};


//
// The live position within the level: which world/level/area/entrance the player
// is in, plus where they are heading.
//
class LevelInfo : public sead::IDisposer
{
public:
    static LevelInfo* instance;

    u8  world;                 // +0x10
    u8  level;                 // +0x11
    u8  area;                  // +0x12
    u8  entrance;              // +0x13
    u32 zone;                  // +0x14
    u32 entranceType;          // +0x18
    u8  destWorld;             // +0x1C
    u8  destLevel;             // +0x1D
    u8  destArea;              // +0x1E
    u8  destEntrance;          // +0x1F
    u32 destZone;              // +0x20
    u32 destEntranceType;      // +0x24
};
