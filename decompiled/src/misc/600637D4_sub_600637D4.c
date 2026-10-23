/* sub_600637D4
 * address: 0x600637D4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_600637D4(int a1, unsigned int a2)
{
  __n128 result; // q0

  CollisionActor__afterCreate((CollisionActor *)a1, a2);
  result.n128_f32[0] = FIELD_F32(dword_60CC6484, 216) - FIELD_F32(dword_60CC6484, 208);
  result.n128_f32[2] = FIELD_F32(dword_60CC6484, 220) - FIELD_F32(dword_60CC6484, 212);
  FIELD_U32(a1, 500) = result.n128_u32[0];
  FIELD_U32(a1, 504) = result.n128_u32[2];
  return result;
}
