/* sub_602A8F40
 * address: 0x602A8F40   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_602A8F40(int a1)
{
  float *v2; // r5
  __n128 result; // q0

  v2 = (float *)(a1 + 6300);
  sub_606D45B8(a1 + 6316, a1 + 6300);
  result.n128_f32[0] = FIELD_F32(a1, 108) - *v2;
  result.n128_f32[2] = FIELD_F32(a1, 112) - FIELD_F32(a1, 6304);
  FIELD_U32(a1, 6308) = result.n128_u32[0];
  FIELD_F32(a1, 6312) = result.n128_f32[2];
  return result;
}
