/* Small value types, separated out because `structs.h` embeds them by value.

 * `structs.h` is included BEFORE the recovered-types header, and its recovered `StageActor` has real
 * `Vec3 position/speed/maxSpeed` members rather than padding. A struct that embeds Vec3 by value needs Vec3 to be a
 * complete type first, so these three live in a header that is included ahead of everything else. Guarded, because
 * several units include it in different orders.
 */
#ifndef NSMBUDX_VALUE_TYPES_H
#define NSMBUDX_VALUE_TYPES_H

#include <stdint.h>

typedef struct Vec2 {
    float x;   /* +0x000  float */
    float y;   /* +0x004  float */
} Vec2;   /* sizeof 0x8 */
_Static_assert(offsetof(Vec2, x) == 0x0, "Vec2.x offset");
_Static_assert(offsetof(Vec2, y) == 0x4, "Vec2.y offset");
_Static_assert(sizeof(Vec2) == 0x8, "Vec2 size");   /* sizeof 0x8 */

typedef struct Vec3 {
    float x;   /* +0x000  from main.i64 */
    float y;   /* +0x004  from main.i64 */
    float z;   /* +0x008  from main.i64 */
} Vec3;   /* sizeof 0xC */

typedef struct Vec3i {
    int32_t x;   /* +0x000  from main.i64 */
    int32_t y;   /* +0x004  from main.i64 */
    int32_t z;   /* +0x008  from main.i64 */
} Vec3i;   /* sizeof 0xC */

#endif
