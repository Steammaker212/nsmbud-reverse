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
  FIELD_F32(a1, 0x6C) = FIELD_F32(a1, 0x6C) + FIELD_F32(a1, 0x78);
  FIELD_F32(a1, 0x70) = FIELD_F32(a1, 0x70) + FIELD_F32(a1, 0x7C);
  result = FIELD_F32(a1, 0x74) + FIELD_F32(a1, 0x80);
  FIELD_F32(a1, 0x74) = result;
  return result;
}
