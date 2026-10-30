// worldmap.cpp -- see modbase/worldmap.h.

#include "modbase/worldmap.h"
#include "modbase/log.h"
#include "modbase/game/level/worldmap.h"   // CourseSelectMgr::instance, StorySave::instance

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

namespace ModBase { namespace worldmap { void load_orig(::worldmap::WorldMapData* map, s32 world, s32 variant); } }

namespace ModBase { namespace worldmap { void load(::worldmap::WorldMapData* map, s32 world, s32 variant); } }
void ModBase::worldmap::load(::worldmap::WorldMapData* map, s32 world, s32 variant)
{
    ModBase::worldmap::load_orig(map, world, variant);
    // Variant 0 is the plain archive (CS_W1) or, when that is missing, 'a'.
    ModBase::log("worldmap W", (u32)(world + 1), variantSuffix(variant), ": ",
                 (u32)map->numPoints, " points, ", (u32)map->numRoutes, " routes");
    if ((u32)map->numPoints >= ::worldmap::cMaxPoints || (u32)map->numRoutes >= ::worldmap::cMaxRoutes)
        ModBase::log("worldmap W", (u32)(world + 1), variantSuffix(variant),
                     ": at the 256 point/route limit; later rows were dropped");
}

namespace ModBase {
namespace worldmap {

const ::worldmap::WorldMapData* map(u32 world, u32 variant)
{
    auto* mgr = (::worldmap::CourseSelectMgrView*)CourseSelectMgr::instance;
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
    u8* save = (u8*)StorySave::instance;
    if (!save)
        return false;
    *world   = *(u32*)(save + ::worldmap::cSaveCurrentWorld);
    *variant = *(u32*)(save + ::worldmap::cSaveCurrentVariant);
    *point   = *(u32*)(save + ::worldmap::cSaveCurrentPoint);
    return true;
}

} // namespace worldmap
} // namespace ModBase
