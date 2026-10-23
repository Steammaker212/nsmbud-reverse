/* sub_602E74DC
 * address: 0x602E74DC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_602E74DC(int a1)
{
  float *v1; // r2
  __n128 result; // q0
  float v3; // s4

  v1 = *(float **)(a1 + 56);
  result.n128_f32[0] = v1[27] - FIELD_F32(a1, 7372);
  result.n128_f32[2] = v1[28] - FIELD_F32(a1, 7376);
  v3 = v1[29] - FIELD_F32(a1, 7380);
  FIELD_U32(a1, 108) = result.n128_u32[0];
  FIELD_U32(a1, 112) = result.n128_u32[2];
  FIELD_F32(a1, 116) = v3;
  return result;
}
