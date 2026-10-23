/* sub_600D0C44
 * address: 0x600D0C44   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D0C44(int a1, float a2, float a3, float32x2_t a4, double a5)
{
  int v5; // r1
  float v6; // s8
  float *v7; // r0
  float v8; // s0
  float v9; // s2

  v5 = 0;
  if ( a2 != 0.0 && !FIELD_U32(a1, 6792) )
  {
    *(float *)&a5 = fabsf(a2);
    a4.n64_u32[0] = 2.0;
    v6 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
    FIELD_F32(a1, 132) = v6 * fabsf(a3);
    FIELD_U32(a1, 104) = vmin_f32(*(float32x2_t *)&a5, a4).n64_u32[0];
    v7 = (float *)(a1 + 6780);
    v8 = *v7 + (float)(v6 * 5.0);
    v9 = -30.0;
    *v7 = v8;
    if ( v8 >= -30.0 )
    {
      v9 = v8;
      if ( v8 > 30.0 )
        v9 = 30.0;
    }
    v5 = 1;
    *v7 = v9;
  }
  return v5;
}
