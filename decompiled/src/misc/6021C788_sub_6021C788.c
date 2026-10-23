/* sub_6021C788
 * address: 0x6021C788   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6021C788(int a1, __n128 result)
{
  float v2; // s4

  result.n128_u32[1] = FIELD_U32(a1, 832);
  result.n128_f32[2] = FIELD_F32(a1, 632)
                     + (float)((float)(result.n128_f32[1] - FIELD_F32(a1, 820)) * result.n128_f32[0]);
  v2 = FIELD_F32(a1, 636) + (float)((float)(FIELD_F32(a1, 836) - FIELD_F32(a1, 824)) * result.n128_f32[0]);
  FIELD_F32(a1, 804) = FIELD_F32(a1, 628)
                       + (float)((float)(FIELD_F32(a1, 828) - FIELD_F32(a1, 816)) * result.n128_f32[0]);
  FIELD_U32(a1, 808) = result.n128_u32[2];
  FIELD_F32(a1, 812) = v2;
  return result;
}
