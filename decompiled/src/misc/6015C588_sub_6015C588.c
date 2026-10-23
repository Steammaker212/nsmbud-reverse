/* sub_6015C588
 * address: 0x6015C588   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6015C588(int a1, float *a2, float *a3)
{
  unsigned int v3; // r12
  float v4; // s6
  float v5; // s8
  int v6; // lr
  int v7; // s0
  float *v8; // r12
  float v9; // s3
  float v10; // s14
  float v11; // s12
  float v12; // s8
  float v13; // s2
  float v14; // s0
  float v15; // s10
  float v16; // s4
  float v17; // s5
  float v18; // s3
  float v19; // s10
  float v20; // s12
  float v21; // s5
  float v22; // s1
  float v23; // s14
  float v24; // s4
  float result; // s0

  v3 = FIELD_U32(a1, 244);
  v4 = FIELD_F32(a1, 176);
  v5 = FIELD_F32(a1, 172);
  v6 = (v3 >> 20) & 0xFF0;
  v7 = v3 & 0xFFFFFF;
  v8 = *(float **)(a1 + 152);
  v9 = v8[1];
  v10 = (float)(unsigned int)v7 * 0.000000059605;
  v11 = *v8 + v5;
  v12 = *v8 + (float)(v5 + FIELD_F32(a1, 188));
  v13 = *(float *)((char *)sinLutTable + v6) + (float)(*(float *)((char *)&sinLutTable[1] + v6) * v10);
  v14 = *(float *)((char *)&sinLutTable[2] + v6) + (float)(v10 * *(float *)((char *)&sinLutTable[3] + v6));
  v15 = (float)(v9 + v4) + FIELD_F32(a1, 352);
  v16 = v9 + (float)(v4 + FIELD_F32(a1, 192));
  v17 = (float)(v13 * v13) + (float)(v14 * v14);
  v18 = -v13;
  v19 = v15 - v16;
  v20 = (float)(v11 + FIELD_F32(a1, 348)) - v12;
  if ( v17 != 0.0 )
  {
    v21 = 1.0 / v17;
    v13 = -(float)(v13 * v21);
    v18 = -(float)(v21 * v18);
    v14 = v14 * v21;
  }
  v22 = (float)(a3[1] - v16) - v19;
  v23 = (float)(*a3 - v12) - v20;
  v24 = (float)(v16 + v19)
      + (float)((float)(FIELD_F32(a1, 364) / FIELD_F32(a1, 368)) * (float)((float)(v23 * v13) + (float)(v22 * v14)));
  result = (float)(v12 + v20) + (float)((float)(v22 * v18) + (float)(v23 * v14));
  *a2 = result;
  a2[1] = v24;
  return result;
}
