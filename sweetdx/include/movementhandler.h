#pragma once

#include "types.h"
#include "util/vec3.h"

// Links an actor into the game's shared movement system.
class MovementHandler
{
public:
    u32  getMaskForMovementType(u32 movementType);
    void link(Vec3& position, u32 mask, u16 movementId);
    void execute();

    Vec3 position;
};
