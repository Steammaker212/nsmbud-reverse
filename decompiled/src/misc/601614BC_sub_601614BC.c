/* sub_601614BC
 * address: 0x601614BC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_601614BC(int a1, float *a2)
{
  float v2; // s0
  float v3; // s6
  float v4; // s12
  float v5; // s5
  unsigned int v6; // r2
  float *v7; // r3
  float v8; // s8
  float v9; // s10
  float *v10; // r3
  float v11; // s2
  float v12; // s8
  float v13; // s4
  float *v14; // r0
  float v15; // s10
  float v16; // s12
  float v17; // s8
  float v18; // s11
  float v19; // s7
  float v20; // s14
  float v21; // s4
  __n64 result; // d0

  v2 = FIELD_F32(a1, 176);
  v3 = FIELD_F32(a1, 172);
  v4 = FIELD_F32(a1, 196);
  v5 = a2[1];
  v6 = FIELD_U32(a1, 244) - FIELD_U32(a1, 248);
  v7 = *(float **)(a1 + 156);
  v8 = *v7;
  v9 = v7[1];
  v10 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v11 = v8 + FIELD_F32(a1, 180);
  v12 = FIELD_F32(a1, 200);
  v13 = v9 + FIELD_F32(a1, 184);
  v14 = *(float **)(a1 + 152);
  v15 = v11 + v4;
  v16 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v17 = v13 + v12;
  v18 = v10[2] + (float)(v16 * v10[3]);
  v19 = *v10 + (float)(v10[1] * v16);
  v20 = *a2 - v15;
  v21 = (float)(v14[1] + v2) - v13;
  result.n64_f32[0] = (float)((float)(*v14 + v3) - v11)
                    + (float)((float)(v15 + (float)((float)(v20 * v18) - (float)((float)(v5 - v17) * v19))) - *a2);
  result.n64_f32[1] = (float)((float)(v17 + (float)((float)((float)(v5 - v17) * v18) + (float)(v20 * v19))) - v5) + v21;
  return result;
}
