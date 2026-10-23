/* sub_606CF734
 * address: 0x606CF734   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_606CF734(__n128 result, int a2, _DWORD *a3)
{
  result.n128_u32[2] = 1134559232;
  *a3 = result.n128_u32[0];
  a3[1] = vmax_f32((float32x2_t)result.n128_u64[0], *(float32x2_t *)&result.n128_i8[8]).n64_u32[0];
  return result;
}
