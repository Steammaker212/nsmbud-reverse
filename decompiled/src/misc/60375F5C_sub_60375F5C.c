/* sub_60375F5C
 * address: 0x60375F5C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60375F5C(int a1)
{
  __n128 result; // q0
  float *v3; // r0

  if ( sub_60372E6C((float *)a1) == 1 )
  {
    v3 = (float *)sub_60373ABC();
    result.n128_f32[0] = v3[2] * FIELD_F32(a1, 144);
    result.n128_f32[2] = v3[3] * FIELD_F32(a1, 148);
    FIELD_U32(a1, 312) = result.n128_u32[0];
    FIELD_U32(a1, 316) = result.n128_u32[2];
  }
  return result;
}
