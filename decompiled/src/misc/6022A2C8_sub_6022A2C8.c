/* sub_6022A2C8
 * address: 0x6022A2C8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6022A2C8(float *a1, float a2)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d1
  float32x2_t v6; // d16
  int v7; // r0

  v4.n64_f32[0] = (*(float (__fastcall **)(float *, float))(*(_DWORD *)a1 + 20))(a1, a2);
  if ( v4.n64_f32[0] <= a2 )
  {
    v7 = -1085485875;
  }
  else
  {
    if ( a2 > 0.0 )
    {
      v4.n64_f32[0] = a2 / v4.n64_f32[0];
      v5.n64_u32[0] = 1.0;
      v6.n64_u64[0] = vmin_f32(v4, v5).n64_u64[0];
      v4.n64_u32[0] = 0;
      a1[9] = a1[8] + (float)(vmax_f32(v6, v4).n64_f32[0] * (float)(-0.8 - a1[8]));
      return;
    }
    v7 = *((_DWORD *)a1 + 8);
  }
  *((_DWORD *)a1 + 9) = v7;
}
