// WorldMapData.cpp -- readable reconstruction of how the world maps are loaded.
//
// Hand-written, behaviour-equivalent renderings of the Deluxe functions at the
// addresses given, using framework/game/include/game/worldmap.h. None of this
// is in the Wii U decomp (NSMBU-Headers only sizes CourseSelectMgr). The
// CSV scanning loops are folded into helpers. Evidence:
// data/findings/ledger.csv F0064-F0075. Documents the game; not compiled.
//
// Deluxe (Switch) v1.0.0.

#include "game/worldmap.h"

using namespace worldmap;

// ---- which archive and which CSVs ---------------------------------------------

// Part of 0x6017BE9C (and of the counter 0x601A33F8). ArchiveMgr::exists is
// sub_60822378, ArchiveMgr::getFile is sub_608226EC.
static const char* findMapArchive(s32 world, s32 variant, SafeString& archive)
{
    archive.format("CS_W%d", world + 1);                                   // "CS_W1"
    if (!ArchiveMgr::exists("Model/" + archive + ".Nin_NX_NVN.szs"))
        archive.format("CS_W%d%c", world + 1, 'a' + variant);              // "CS_W2a", "CS_W5b"
    return archive;
}

static void openCsvs(s32 world, s32 variant, const SafeString& archive, const char** point, const char** route)
{
    if (variant != 0) {                                                    // "pointW5b.csv"
        *point = ArchiveMgr::getFile(archive, format("pointW%x%c.csv", world + 1, 'a' + variant));
        *route = ArchiveMgr::getFile(archive, format("routeW%x%c.csv", world + 1, 'a' + variant));
    } else if ((*point = ArchiveMgr::getFile(archive, format("pointW%x.csv", world + 1)))) {
        *route = ArchiveMgr::getFile(archive, format("routeW%x.csv", world + 1));
    } else {                                                               // "pointW2a.csv"
        *point = ArchiveMgr::getFile(archive, format("pointW%x%c.csv", world + 1, 'a'));
        *route = ArchiveMgr::getFile(archive, format("routeW%x%c.csv", world + 1, 'a'));
    }
}

// ---- 0x6017BE7C / 0x6017BE9C: WorldMapData::load ------------------------------

void WorldMapData::load(s32 world_, s32 variant_)
{
    world = world_;
    variant = variant_;
    clear();                                                               // sub_6017BBCC

    SafeString archive;
    const char *pointCsv, *routeCsv;
    findMapArchive(world, variant, archive);
    openCsvs(world, variant, archive, &pointCsv, &routeCsv);

    // Points. The text is copied into a 4096-byte buffer: a longer file is cut
    // off there, while the row loop still walks the whole file.
    FixedBuffer<4096> text(pointCsv);
    for (u32 pos = 0; pos < fileSize(pointCsv); ) {
        pos = skipTo(text, pos, ',');                                      // column 0: index, ignored
        MapPoint& p = points[numPoints < cMaxPoints ? numPoints : 0];
        pos += readField(&p.name, text, pos);                              // sub_60181410
        pos = readFlags(p, text, pos);                                     // sub_6017D65C
        pos = readNodeList(p, text, pos, 0);                               // sub_6017E728  column 3
        pos = readPathList(p, text, pos, 0);                               // sub_6017F25C  column 4
        pos = readRevealList(p, text, pos, 0);                             // sub_6018018C  column 5
        pos = readNodeList(p, text, pos, 1);                               //               column 6
        pos = readPathList(p, text, pos, 1);                               //               column 7
        pos = readRevealList(p, text, pos, 1);                             //               column 8
        numPoints++;                                                       // no upper check: index 256 wraps to 0
        pos += 2;                                                          // "\r\n"
    }
    numPoints2 = numPoints;

    // Routes: an 0x2000-byte buffer.
    FixedBuffer<0x2000> rtext(routeCsv);
    for (u32 pos = 0; pos < fileSize(routeCsv); pos += 3) {
        readRouteId(rtext, &pos);                                          // sub_60180C24
        pos++;
        readRouteType(rtext, &pos);                                        // sub_60180FE8
        MapRoute& r = routes[numRoutes < cMaxRoutes ? numRoutes : 0];
        if (r.id.data[0] != '0')
            numRoutes++;
    }
}

// sub_6017D65C: column 2, comma-separated names, each up to 31 characters.
static u32 readFlags(MapPoint& p, const char* text, u32 pos)
{
    for (const char* name : splitQuoted(text, &pos)) {
        for (u32 bit = 0; bit < 18; bit++) if (name == flagNameA(bit)) p.flagsA |= 1 << bit;   // 0x60183BE8
        for (u32 bit = 0; bit < 31; bit++) if (name == flagNameB(bit)) p.flagsB |= 1 << bit;   // 0x60183F9C
        for (u32 bit = 0; bit < 32; bit++) if (name == flagNameC(bit)) p.flagsC |= 1 << bit;   // 0x60184350
        for (u32 bit = 0; bit < 12; bit++) if (name == flagNameD(bit)) p.flagsD |= 1 << bit;   // 0x60184704
        if (startsWith(name, "lookW"))
            p.lookValue = (name[6] - '0') * 10 + (name[7] - '0');
    }
    return pos;
}

// sub_6017E728 (nodes) / sub_6017F25C (paths) / sub_6018018C (reveals): a quoted,
// comma-separated list into a fixed array. The index is clamped back to 0, so
// a 5th node (17th path, 3rd reveal) overwrites the first.
static u32 readNodeList(MapPoint& p, const char* text, u32 pos, u32 exit)
{
    u32 n = 0;
    for (const char* name : splitQuoted(text, &pos))
        p.unlockNodes[exit][n < cMaxUnlockNodes ? n : 0] = name, n++;      // 4 characters kept
    p.numUnlockNodes[exit] = n;
    return pos;
}

// sub_60180FE8: the 23 type names (table built on first use, 0x60C88ED4), each
// mapped through 0x60AF7B04. An unknown name leaves the type unchanged.
static void readRouteType(const char* text, u32* pos)
{
    static const char* const cNames[23] = { "道", "砂", "木", "ジャンプ", "はしご", "ツタ", "坂", "氷坂",
        "スイッチブロック", "流砂", "雪", "氷", "雲", "水", "はしご右", "はしご左", "はしご岩",
        "はしご岩右", "はしご岩左", "はしご縄", "土", "石橋", "石" };
    static const s32 cCodes[23] = { 3, 20, 33, 7, 6, 10, 11, 12, 19, 21, 22, 23, 24, 25,
                                    27, 26, 29, 31, 30, 32, 28, 4, 5 };
    // ... routes[numRoutes].type = cCodes[i] for the matching name
}

// sub_60180C24: a route id already in the list is not stored again.

// ---- 0x6019A214: what a point name is ------------------------------------------

PointClass classify(const char* name)
{
    if (name[0] == 'F') return PointClass::Free;
    if (name[0] == 'K') return PointClass::Bend;
    if (name[0] == 'W' && name[2] == 'M') return PointClass::Entry;
    if (name[0] != 'W' || name[2] == 'K' || name[2] == 'W') return PointClass::Other;
    return PointClass::Stop;
}

// ---- 0x6040D864: point name -> course number -----------------------------------

s32 courseOf(const char* name)
{
    if (strlen(name) != 4 || name[0] != 'W')
        return -1;
    s32 n = isdigit(name[3]) ? name[3] - '0' : (name[3] >= 'a' && name[3] <= 'f') ? name[3] - 'a' + 10 : 0;
    switch (name[2]) {
    case '0': return n - 1;                                 // W101 -> 0 -> Course/1-1
    case 'A': return 36;                                    // airship
    case 'B': return n + 41;
    case 'C': return n + 22;                                // castle
    case 'G': return 19;                                    // ghost house
    case 'K': return n > 7 ? n + 38 : n + 23;               // Toad house
    case 'M': return 37;
    case 'S': {                                             // W1S0 -> 12 -> 1-13
        u32 w = name[1] - '1';
        return w < 5 ? w + 12 : 12;
    }
    case 'T': return n + 20;                                // tower
    case 'W': return 34;
    case 'X': return 57;
    default:  return -1;                                    // J: junction, no course
    }
}

// ---- 0x601A2F94 / 0x601A33F8 / 0x601A3024: CourseSelectMgr builds every map ------

void CourseSelectMgr::countMaps()                           // 0x601A2F94
{
    memset(numVariants, 0, sizeof(numVariants) + sizeof(courseFlags));    // 2160 bytes from +0xAC
    for (u32 w = 0; w < 9; w++)                             // unrolled: worlds 1-9, never more
        countMap(w);
}

// 0x601A33F8: counts the variants that exist (archive found and its point CSV
// readable) and, for the first, the class-3 points.
void CourseSelectMgr::countMap(u32 w)
{
    // CS_W<n> or CS_W<n>a, then CS_W<n>b, CS_W<n>c... while the archive exists;
    // each found increments numVariants[w]. World 9 always tries 'a'.
    // numStops[w] = points with classify() == Stop.
}

void CourseSelectMgr::buildMaps()                           // 0x601A3024
{
    for (u32 w = 0; w != 9; w++)
        for (s32 v = 0; v < numVariants[w]; v++) {
            u32 slot = w * 2 + v < 18 ? w * 2 + v : 0;      // a 3rd variant lands on the next world
            maps[slot] = new WorldMapData;                  // 0x6062C bytes, ctor 0x6017B8A4
            maps[slot]->load(w, v);
            nodes[slot] = new MapNodeArray;                 // 0x6814 bytes: 256 x 104-byte nodes

            if (mModeFlag)                                  // +0xB18
                continue;
            for (s32 i = 0; i < maps[slot]->numPoints; i++) {
                MapPoint& p = maps[slot]->points[i];
                if (classify(p.name.data) != PointClass::Stop)
                    continue;
                u32 c = courseOf(p.name.data);
                if (c >= cMaxCourses) c = 0;
                if (p.numUnlockPaths[0] >= 1) courseFlags[w][c] |= 0x10;   // has a normal exit
                if (p.numUnlockPaths[1] >= 1) courseFlags[w][c] |= 0x20;   // has a secret exit
            }
        }
}

// ---- 0x6018D8A0: after a course is cleared --------------------------------------
//
// From the story save's current position (+428 world, +432 variant, +436
// point) and the exit taken (0 normal, 1 secret):
//   1. each reveal name (column 5/8): the map objects with that name play
//      their appear animation (sub_6018DB70; three object finders);
//   2. each unlock path (column 4/7): the objects "<path>a", "<path>b", ...
//      appear (the path's pieces in the map model), then the path opens
//      (sub_6018DD18).

// ---- 0x60178798 / 0x60182F24: F-point state in the save -------------------------
//
// The story save keeps 128 records per world and variant
// (+15540 + world*0x2400 + variant*0x1200 + slot*36): a point name and flags.
// sub_6081F5DC finds a point's slot by name. Flag 0x10 = reached; 0x04, 0x08,
// 0x40 promote flagsA bits 7, 8, 9 (fixX, fixY, fixZ) when asked for them.
