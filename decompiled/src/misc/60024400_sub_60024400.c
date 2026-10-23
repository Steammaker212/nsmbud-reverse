/* sub_60024400
 * address: 0x60024400   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60024400(int a1, float *a2)
{
  __n128 result; // q0

  result.n128_f32[0] = *a2 * 0.0015625;
  result.n128_f32[2] = a2[1] * 0.0027778;
  *(_DWORD *)a1 = result.n128_u32[0];
  FIELD_F32(a1, 4) = result.n128_f32[2];
  return result;
}
