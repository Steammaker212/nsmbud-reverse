/* sub_6090F0D0
 * address: 0x6090F0D0   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090F0D0(float *result, float *a2, float *a3, _DWORD *a4)
{
  float32x2_t v4; // d8
  float32x2_t v5; // d9
  float v6; // s2
  float v7; // s6
  float v8; // s10
  float v9; // s8
  float v10; // s14
  float v11; // s12
  float v12; // s7
  float v13; // s1
  float v14; // s5
  float v15; // s3
  float v16; // s7
  float v17; // s7
  float v18; // s1
  float v19; // s2
  float v20; // s6
  float v21; // s0
  float v22; // s4

  v6 = a2[1];
  v7 = result[1];
  v8 = result[3];
  v9 = result[2];
  v10 = a2[3] - v6;
  v11 = a2[2] - *a2;
  v12 = *result - *a2;
  v13 = (float)(v10 * v10) + (float)(v11 * v11);
  v4.n64_f32[0] = (float)((float)(v7 - v6) * v8) + (float)(v12 * v9);
  if ( v13 > 0.00000011921 || v13 < -0.00000011921 )
  {
    v14 = (float)(v10 * v8) + (float)(v11 * v9);
    v5.n64_u32[0] = 0;
    v15 = (float)((float)(v7 - v6) * v10) + (float)(v12 * v11);
    v16 = v13 - (float)(v14 * v14);
    if ( v16 > 0.00000011921 || v16 < -0.00000011921 )
    {
      v17 = (float)(v15 - (float)(v14 * v4.n64_f32[0])) / v16;
      if ( v17 >= 0.0 )
      {
        v5.n64_f32[0] = v17;
        if ( v17 > 1.0 )
          v5.n64_u32[0] = 1.0;
      }
    }
    v4.n64_f32[0] = (float)(v14 * v5.n64_f32[0]) - v4.n64_f32[0];
    if ( v4.n64_f32[0] < 0.0 )
    {
      v18 = v15 / v13;
      v4.n64_u32[0] = 0;
      if ( v18 >= 0.0 )
      {
        v5.n64_u32[0] = 1.0;
        if ( v18 <= 1.0 )
          v5.n64_f32[0] = v18;
      }
      else
      {
        v5.n64_u32[0] = 0;
      }
    }
  }
  else
  {
    v5.n64_u32[0] = 0;
    v4.n64_f32[0] = -v4.n64_f32[0];
    v4.n64_u32[0] = vmax_f32(v4, v5).n64_u32[0];
  }
  v19 = v6 + (float)(v10 * v5.n64_f32[0]);
  v20 = v7 + (float)(v4.n64_f32[0] * v8);
  v21 = *a2 + (float)(v11 * v5.n64_f32[0]);
  v22 = *result + (float)(v4.n64_f32[0] * v9);
  if ( a3 )
    *a3 = v4.n64_f32[0];
  if ( a4 )
    *a4 = v5.n64_u32[0];
  return (float)((float)(v20 - v19) * (float)(v20 - v19)) + (float)((float)(v22 - v21) * (float)(v22 - v21));
}
