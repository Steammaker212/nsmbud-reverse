#pragma once

#include "types.h"
#include "sead.h"
#include "util/vec3.h"

class ModelWrapper;

class DrawMgr
{
public:
    static DrawMgr* instance;

    void drawModel(ModelWrapper* model);

    // Draw a single tile directly, without an actor. `position` is the world
    // position of the tile centre.
    void drawTile(u16 tile, const Vec3& position, const u32& rotation,
                  const Vec3& scale);
};
