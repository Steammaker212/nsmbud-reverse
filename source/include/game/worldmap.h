// game/worldmap.h -- the world map data the game builds from CS_W<n> archives.
//
// codedx style: named members at measured offsets (static_asserts below), the
// rest padded. Evidence: reverse-engineering/FindingsB/ledger.csv F0064-F0075; the code is
// readable in reverse-engineering/FindingsA/course_select/WorldMapData.cpp. The Wii U headers only
// size CourseSelectMgr (0x47824); everything below was read from Deluxe.
//
// A map is romfs/Model/CS_W<world>[a|b].Nin_NX_NVN.szs:
//
//   pointW<w>[a|b].csv   one row per point (9 columns, see MapPoint)
//   routeW<w>[a|b].csv   one row per walkable segment: R<from><to>,<type>,
//   output.bfres         model CS_W<w>: one bone per point, at its position;
//                        small models named after special paths (RW102W1S0)
//
// At boot CourseSelectMgr parses every world (1-9) and variant (a, b) into a
// WorldMapData each. Tool: scripts/worldmap/wmtool.py (dump, check, build).
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "core/types.h"

namespace worldmap {

constexpr u32 cNumWorlds      = 9;      // CourseSelectMgr parses W1-W9, unrolled (0x601A2F94)
constexpr u32 cMaxVariants    = 2;      // map slot = world * 2 + variant (18 slots)
constexpr u32 cMaxPoints      = 256;
constexpr u32 cMaxRoutes      = 256;
constexpr u32 cMaxUnlockNodes = 4;      // per exit; a 5th wraps onto slot 0
constexpr u32 cMaxUnlockPaths = 16;
constexpr u32 cMaxReveals     = 2;
constexpr u32 cMaxCourses     = 58;     // per world, CourseSelectMgr +208
constexpr u32 cMaxSavedPoints = 128;    // F points with save state per map
constexpr u32 cPointCsvMax    = 4095;   // read through a 4096-byte buffer
constexpr u32 cRouteCsvMax    = 8191;   // 0x2000-byte buffer

// sead::BufferedSafeString<N> as laid out in Deluxe: vtable, data, capacity, storage.
template <u32 Storage>
struct FixedString
{
    void* vtable;
    char* data;             // points at buffer
    s32   capacity;
    char  buffer[Storage];
};
static_assert(sizeof(FixedString<8>) == 20 && sizeof(FixedString<12>) == 24, "FixedString");

// What a point name means (0x6019A214). Class 3 points count toward a world's
// total (CourseSelectMgr +2296).
enum class PointClass : u32
{
    Free     = 0,   // F...  path point (Fd01 pipe, Fb01 map enemy, ...)
    Bend     = 1,   // K...  bend in a route; only in route ids and the model
    Entry    = 2,   // W?M?  where the world starts
    Stop     = 3,   // W??? courses, towers, castles, junctions (J), ...
    Other    = 4,   // W?K? Toad houses, W?W?
};

// Point names are W + world + type + n (n = hex digit). Course numbers
// (0x6040D864) are 0-based; the level file is Course/<world>-<course+1>.sarc:
//   W?0n -> n-1 (1-1 ... 1-15)     W?Sn -> 12+(world-1), worlds 1-5 (1-13 ... 5-17)
//   W?G? -> 19 (ghost house)       W?Tn -> 20+n (tower)      W?Cn -> 22+n (castle)
//   W?Kn -> 23+n, or 38+n for n>7  W?W? -> 34                W?A? -> 36 (airship)
//   W?M? -> 37                     W?Bn -> 41+n              W?X? -> 57
//   W?J? -> none (junction: a route continues on another world's map)

// Point flags, column 3. Bit = index in its table (0x60183BE8, 0x60183F9C,
// 0x60184350, 0x60184704); unknown names are ignored.
enum PointFlagA : u32   // MapPoint::flagsA
{
    cFlagA_Stop = 1 << 0, cFlagA_Link1 = 1 << 1, cFlagA_Link2 = 1 << 2, cFlagA_Link3 = 1 << 3,
    cFlagA_Link4 = 1 << 4, cFlagA_Link5 = 1 << 5, cFlagA_Scale = 1 << 6, cFlagA_FixX = 1 << 7,
    cFlagA_FixY = 1 << 8, cFlagA_FixZ = 1 << 9, cFlagA_Focus = 1 << 10, cFlagA_Board1 = 1 << 11,
    cFlagA_Shuffle = 1 << 12, cFlagA_Slot = 1 << 13, cFlagA_1Up = 1 << 14, cFlagA_Nonstop = 1 << 15,
    cFlagA_Onestop = 1 << 16, cFlagA_Merge = 1 << 17,
};
// flagsB: W1PakkunA, W1PakkunB, W1Item, W2Enemy0, W2Enemy1, W2EnemyA, W2EnemyB,
//   W2EnemyC, W2maze, W3EnemyA, W3EnemyB, W4EnemyA-D, W4Circle, ChorobonA-C,
//   W5bEnemy1-7, W5bDemo, W5bPreDemo, W5Teresa, noUI (bit 29), restart (bit 30)
// flagsC: W3TrapA, W3TrapB, W4TrapA, W4TrapB, W6trapA, W6trapB, KanketsusenA,
//   KanketsusenB, KanketsusenD, KanketsusenE, dokan (10), dokan2 (11), RainbowA-D,
//   clear (16), switchA, switchB, ShipKoopaJr01-04, W8Koopa01-03, egg, W7Demo,
//   W7PreDemo, W7DemoEnd, W7Return, dokanW8 (31)
// flagsD: boarding, station, coaster, shadowDemo, shadowRoute, KoopaJr01, W1Item,
//   balloon1, balloon2, bubble1, bubble2, water
// "lookW?NN" sets lookValue = NN (two decimal digits at characters 6-7).

// Route types, column 2 of routeW: name -> code at MapRoute::type (table 0x60AF7B04).
enum class RouteType : s32
{
    Road = 3,           // 道
    StoneBridge = 4,    // 石橋
    Stone = 5,          // 石
    Ladder = 6,         // はしご
    Jump = 7,           // ジャンプ
    Vine = 10,          // ツタ
    Slope = 11,         // 坂
    IceSlope = 12,      // 氷坂
    SwitchBlock = 19,   // スイッチブロック
    Sand = 20,          // 砂
    Quicksand = 21,     // 流砂
    Snow = 22,          // 雪
    Ice = 23,           // 氷
    Cloud = 24,         // 雲
    Water = 25,         // 水
    LadderLeft = 26,    // はしご左
    LadderRight = 27,   // はしご右
    Dirt = 28,          // 土
    RockLadder = 29,    // はしご岩
    RockLadderLeft = 30,  // はしご岩左
    RockLadderRight = 31, // はしご岩右
    RopeLadder = 32,    // はしご縄
    Wood = 33,          // 木
};

// One pointW row. Columns: 0 index, 1 name, 2 flags, 3/6 nodes opened by the
// normal/secret exit, 4/7 paths opened (R<from><to>; the route CSV holds the
// walk as segments through F and K points), 5/8 names of map objects whose
// appear animation plays (empty in vanilla Deluxe). List [0] = normal exit,
// [1] = secret exit.
struct MapPoint
{
    FixedString<8>  name;                                   // 0x000
    FixedString<8>  unlockNodes[2][cMaxUnlockNodes];        // 0x014
    FixedString<12> unlockPaths[2][cMaxUnlockPaths];        // 0x0B4 (9 characters kept)
    FixedString<12> reveals[2][cMaxReveals];                // 0x3B4
    s32             numUnlockNodes[2];                      // 0x414
    s32             numUnlockPaths[2];                      // 0x41C
    s32             numReveals[2];                          // 0x424
    u32             flagsA;                                 // 0x42C PointFlagA
    u32             flagsB;                                 // 0x430
    u32             flagsC;                                 // 0x434
    s32             lookValue;                              // 0x438 "lookW?NN"
    u32             flagsD;                                 // 0x43C
    u8              _440[0x448 - 0x440];
};
static_assert(sizeof(MapPoint) == 0x448, "MapPoint");

// One routeW row (a walkable segment).
struct MapRoute
{
    FixedString<12> id;     // 0x00 R<from 4><to 4>; duplicates are skipped
    RouteType       type;   // 0x18
    u8              _1C[4];
};
static_assert(sizeof(MapRoute) == 0x20, "MapRoute");

// One map (vtable 0x60BD4FE8, ctor 0x6017B8A4, load(world, variant) 0x6017BE7C).
struct WorldMapData
{
    void*    vtable;                    // 0x00000
    u8       _4[0x14 - 0x4];
    s32      world;                     // 0x00014 0-based
    s32      variant;                   // 0x00018 0 = none/'a', 1 = 'b'
    s32      numPoints;                 // 0x0001C
    s32      numPoints2;                // 0x00020
    s32      numRoutes;                 // 0x00024
    u8       _28[0x2C - 0x28];
    MapPoint points[cMaxPoints];        // 0x0002C
    MapRoute routes[cMaxRoutes];        // 0x4482C
    u8       _4682C[0x6062C - 0x4682C];
};
static_assert(sizeof(MapPoint) * cMaxPoints + 0x2C == 0x4482C, "points");
static_assert(sizeof(WorldMapData) == 0x6062C, "WorldMapData");

// CourseSelectMgr (Wii U 0x47824; Deluxe instance pointer at 0x60C89E18).
// Only what the world-map code reads is named.
struct CourseSelectMgrView
{
    u8            _0[0x1C];
    WorldMapData* maps[cNumWorlds * cMaxVariants];  // 0x01C  slot = world * 2 + variant
    void*         nodes[cNumWorlds * cMaxVariants]; // 0x064  runtime node arrays (0x6814 bytes, 104 per node)
    s32           numVariants[cNumWorlds];          // 0x0AC
    u32           courseFlags[cNumWorlds][cMaxCourses]; // 0x0D0  0x10 has normal exit, 0x20 has secret exit
    s32           numStops[cNumWorlds];             // 0x8F8  class-3 points per world
    u8            _91C[0xB18 - 0x91C];
    bool          _B18;                             // 0xB18 set: skips the exit flags (mode switch?)
};
static_assert(__builtin_offsetof(CourseSelectMgrView, nodes) == 0x64, "nodes");
static_assert(__builtin_offsetof(CourseSelectMgrView, courseFlags) == 0xD0, "courseFlags");
static_assert(__builtin_offsetof(CourseSelectMgrView, _B18) == 0xB18, "B18");

// Story save data (instance pointer at 0x60CC6D78), world-map parts:
//   +428 / +432 / +436   current world, variant, point index
//   +15540 + world*0x2400 + variant*0x1200 + slot*36
//                        per-F-point record: name (+0), flags (+32; 0x10 reached)
constexpr u32 cSaveCurrentWorld   = 428;
constexpr u32 cSaveCurrentVariant = 432;
constexpr u32 cSaveCurrentPoint   = 436;
constexpr u32 cSavePointRecords   = 15540;

} // namespace worldmap
