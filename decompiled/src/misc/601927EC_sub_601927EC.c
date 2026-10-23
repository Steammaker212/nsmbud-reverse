/* sub_601927EC
 * address: 0x601927EC   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601927EC(int result, float *a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v4; // r12
  unsigned int v5; // lr
  unsigned int v6; // r2
  int v7; // s2
  float *v8; // r5
  float *v9; // r2
  float v10; // s0
  float v11; // s14
  float v12; // s10
  float v13; // s12
  float *v14; // r2
  float v15; // s7
  float v16; // s9
  float v17; // s11
  float v18; // s13
  float v19; // s6
  float v20; // s8
  float v21; // s0
  float v22; // s2
  float v23; // s10
  float v24; // s1
  float v25; // s4
  float v26; // s11
  float v27; // s7

  v4 = *a3;
  v5 = a3[1];
  v6 = a3[2];
  v7 = v6 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v10 = v9[2];
  v11 = v9[3];
  v12 = *v9;
  v13 = v9[1];
  v14 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v15 = *v14;
  v16 = v14[1];
  v17 = v14[2];
  v18 = v14[3];
  v19 = (float)(unsigned int)v7 * 0.000000059605;
  v20 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v21 = v10 + (float)(v19 * v11);
  v22 = v8[2] + (float)(v20 * v8[3]);
  v23 = v12 + (float)(v13 * v19);
  v24 = *v8 + (float)(v8[1] * v20);
  *(float *)result = *a2 * (float)(v22 * v21);
  FIELD_F32(result, 16) = (float)(v22 * v23) * *a2;
  v25 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v26 = v17 + (float)(v25 * v18);
  v27 = v15 + (float)(v16 * v25);
  FIELD_F32(result, 32) = -(float)(v24 * *a2);
  FIELD_F32(result, 4) = (float)((float)((float)(v27 * v24) * v21) - (float)(v26 * v23)) * a2[1];
  FIELD_F32(result, 20) = (float)((float)(v26 * v21) + (float)((float)(v27 * v24) * v23)) * a2[1];
  FIELD_F32(result, 36) = (float)(v27 * v22) * a2[1];
  FIELD_F32(result, 8) = (float)((float)(v24 * (float)(v26 * v21)) + (float)(v27 * v23)) * a2[2];
  FIELD_F32(result, 24) = (float)((float)(v24 * (float)(v26 * v23)) - (float)(v27 * v21)) * a2[2];
  FIELD_F32(result, 40) = (float)(v26 * v22) * a2[2];
  FIELD_U32(result, 12) = *a4;
  FIELD_U32(result, 28) = a4[1];
  FIELD_U32(result, 44) = a4[2];
  return result;
}
