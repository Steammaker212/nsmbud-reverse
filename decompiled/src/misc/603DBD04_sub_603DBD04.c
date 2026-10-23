/* sub_603DBD04
 * address: 0x603DBD04   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603DBD04(CollisionActor *a1)
{
  float result; // s0

  CollisionActor__handleGravity(a1);
  FIELD_U32(a1, 0x0).position.x = FIELD_U32(a1, 0x0).position.x + FIELD_U32(a1, 0x0).speed.x;
  FIELD_U32(a1, 0x0).position.y = FIELD_U32(a1, 0x0).position.y + FIELD_U32(a1, 0x0).speed.y;
  result = FIELD_U32(a1, 0x0).position.z + FIELD_U32(a1, 0x0).speed.z;
  FIELD_U32(a1, 0x0).position.z = result;
  return result;
}
