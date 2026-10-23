/* sub_60588188
 * address: 0x60588188   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60588188(int a1, float *a2, int a3)
{
  float *v5; // r0
  float *v6; // r1
  float v7; // s18
  float v8; // s16
  unsigned int v9; // r6
  unsigned int v10; // r0
  float *v11; // r1
  __n128 result; // q0
  float v13; // s6

  if ( (FIELD_U32(a1, 6324) | 2) == 2 )
  {
    v5 = (float *)&unk_60B04A8C;
    v6 = (float *)&unk_60B04A98;
  }
  else
  {
    v5 = flt_60AF2160;
    v6 = (float *)&unk_60AF21A0;
  }
  v7 = v5[a3];
  v8 = v6[a3];
  v9 = sub_6000F7B8(v8, v7);
  result.n128_f32[0] = sqrtf((float)(v7 * v7) + (float)(v8 * v8));
  v10 = FIELD_U32(a1, 164) - v9;
  v11 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  result.n128_f32[2] = (float)(v10 & 0xFFFFFF) * 0.000000059605;
  v13 = *v11 + (float)(v11[1] * result.n128_f32[2]);
  *a2 = FIELD_F32(a1, 108) + (float)(result.n128_f32[0] * (float)(v11[2] + (float)(result.n128_f32[2] * v11[3])));
  a2[1] = FIELD_F32(a1, 112) - (float)(result.n128_f32[0] * v13);
  return result;
}
