/* sub_60796A74
 * address: 0x60796A74   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60796A74(float *a1, int a2)
{
  float v2; // s6
  __n128 result; // q0
  float v4; // s4

  if ( a2 )
  {
    v2 = a1[3007];
    result.n128_f32[0] = v2 * a1[36];
    result.n128_f32[2] = v2 * a1[37];
    v4 = v2 * a1[38];
    *(_DWORD *)a2 = result.n128_u32[0];
    FIELD_U32(a2, 4) = result.n128_u32[2];
    FIELD_F32(a2, 8) = v4;
  }
  return result;
}
