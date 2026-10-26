// worldmap.cpp -- see nsmbudx/worldmap.h.

#include "nsmbudx/worldmap.h"
#include "nsmbudx/log.h"

extern "C" u8 CourseSelectMgr_instance[];    // holds CourseSelectMgr*
extern "C" u8 StorySave_instance[];          // holds the story save data*

namespace {

bool sameName(const char* a, const char* b)
{
    while (*a && *a == *b)
        a++, b++;
    return *a == *b;
}

const char* variantSuffix(s32 variant)
{
    return variant == 1 ? "b" : variant == 0 ? "" : "?";
}

} // namespace

extern "C" void WorldMap_load_orig(::worldmap::WorldMapData* map, s32 world, s32 variant);

extern "C" void WorldMap_load(::worldmap::WorldMapData* map, s32 world, s32 variant)
{
    WorldMap_load_orig(map, world, variant);
    // Variant 0 is the plain archive (CS_W1) or, when that is missing, 'a'.
    nsmbudx::log("worldmap W", (u32)(world + 1), variantSuffix(variant), ": ",
                 (u32)map->numPoints, " points, ", (u32)map->numRoutes, " routes");
    if ((u32)map->numPoints >= ::worldmap::cMaxPoints || (u32)map->numRoutes >= ::worldmap::cMaxRoutes)
        nsmbudx::log("worldmap W", (u32)(world + 1), variantSuffix(variant),
                     ": at the 256 point/route limit; later rows were dropped");
}

namespace nsmbudx {
namespace worldmap {

const ::worldmap::WorldMapData* map(u32 world, u32 variant)
{
    auto* mgr = *(::worldmap::CourseSelectMgrView**)CourseSelectMgr_instance;
    if (!mgr || world >= ::worldmap::cNumWorlds || variant >= ::worldmap::cMaxVariants)
        return nullptr;
    return mgr->maps[world * 2 + variant];
}

const ::worldmap::MapPoint* findPoint(const ::worldmap::WorldMapData* map, const char* name)
{
    if (!map)
        return nullptr;
    for (s32 i = 0; i < map->numPoints && i < (s32)::worldmap::cMaxPoints; i++)
        if (map->points[i].name.data && sameName(map->points[i].name.data, name))
            return &map->points[i];
    return nullptr;
}

bool currentPosition(u32* world, u32* variant, u32* point)
{
    u8* save = *(u8**)StorySave_instance;
    if (!save)
        return false;
    *world   = *(u32*)(save + ::worldmap::cSaveCurrentWorld);
    *variant = *(u32*)(save + ::worldmap::cSaveCurrentVariant);
    *point   = *(u32*)(save + ::worldmap::cSaveCurrentPoint);
    return true;
}

} // namespace worldmap
} // namespace nsmbudx
