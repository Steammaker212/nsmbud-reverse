#pragma once

#include "types.h"
#include "vec3.h"
#include "vec3i.h"

// 3x4 row-major transform, 0x30 bytes. ModelWrapper::setMtx consumes this.
class Mtx34
{
public:
    union
    {
        f32 rows[3][4];
        f32 cells[12];
    };

    inline void identity()
    {
        rows[0][0] = 1.0f; rows[0][1] = 0.0f; rows[0][2] = 0.0f; rows[0][3] = 0.0f;
        rows[1][0] = 0.0f; rows[1][1] = 1.0f; rows[1][2] = 0.0f; rows[1][3] = 0.0f;
        rows[2][0] = 0.0f; rows[2][1] = 0.0f; rows[2][2] = 1.0f; rows[2][3] = 0.0f;
    }

    inline void translate(const Vec3& t)
    {
        rows[0][3] = t.x;
        rows[1][3] = t.y;
        rows[2][3] = t.z;
    }

    inline void rotateAndTranslate(const Vec3i& rotation, const Vec3& translation)
    {
        identity();
        rotateX(rotation.x);
        rotateY(rotation.y);
        rotateZ(rotation.z);
        translate(translation);
    }

    void rotateX(const u32& rot);
    void rotateY(const u32& rot);
    void rotateZ(const u32& rot);
};
