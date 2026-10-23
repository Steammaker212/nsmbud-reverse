/* sub_601B5850
 * address: 0x601B5850   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B5850(int result, float *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // lr
  int v5; // r5
  int v6; // r12
  unsigned int v7; // r7
  int v8; // r2
  int v9; // s2
  float *v10; // r7
  float *v11; // r2
  float *v12; // r5
  float v13; // s0
  float v14; // s2
  float v15; // s4
  float v16; // s5
  float v17; // s1
  float v18; // s12
  float v19; // s8
  float v20; // s9
  float v21; // s13

  v4 = a3[1];
  v5 = (*a3 >> 20) & 0xFF0;
  v6 = *a3 & 0xFFFFFF;
  v7 = a3[2];
  v8 = (v7 >> 20) & 0xFF0;
  v9 = v7 & 0xFFFFFF;
  v10 = (float *)((char *)sinLutTable + v5);
  v11 = (float *)((char *)sinLutTable + v8);
  v12 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v13 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(unsigned int)v9 * 0.000000059605;
  v15 = (float)(unsigned int)v6 * 0.000000059605;
  v16 = v12[2] + (float)(v13 * v12[3]);
  v17 = *v12 + (float)(v12[1] * v13);
  v18 = v11[2] + (float)(v14 * v11[3]);
  v19 = *v11 + (float)(v11[1] * v14);
  v20 = *v10 + (float)(v10[1] * v15);
  v21 = v10[2] + (float)(v15 * v10[3]);
  *(float *)result = *a2 * (float)((float)(v16 * v18) + (float)(v20 * (float)(v17 * v19)));
  FIELD_F32(result, 16) = (float)(v21 * v19) * *a2;
  FIELD_F32(result, 32) = (float)((float)(v20 * (float)(v16 * v19)) - (float)(v17 * v18)) * *a2;
  FIELD_F32(result, 4) = (float)((float)(v20 * (float)(v17 * v18)) - (float)(v16 * v19)) * a2[1];
  FIELD_F32(result, 20) = (float)(v21 * v18) * a2[1];
  FIELD_F32(result, 36) = (float)((float)(v17 * v19) + (float)(v20 * (float)(v16 * v18))) * a2[1];
  FIELD_F32(result, 8) = (float)(v21 * v17) * a2[2];
  FIELD_F32(result, 24) = -(float)(v20 * a2[2]);
  FIELD_F32(result, 40) = (float)(v21 * v16) * a2[2];
  FIELD_U32(result, 12) = *a4;
  FIELD_U32(result, 28) = a4[1];
  FIELD_U32(result, 44) = a4[2];
  return result;
}
