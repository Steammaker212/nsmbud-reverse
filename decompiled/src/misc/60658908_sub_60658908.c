/* sub_60658908
 * address: 0x60658908   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60658908(int a1)
{
  int v1; // r2
  float v2; // s6
  float v3; // s10
  float v4; // s2
  float v5; // s8
  float v6; // s0
  float v7; // s4
  ModelWrapper *v8; // r7
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r6
  int v13; // s14
  float *v14; // r4
  float *v15; // r1
  float v16; // s11
  float v17; // s12
  float v18; // s14
  float v19; // s7
  float v20; // s16
  float v21; // s3
  float v22; // s13
  float v23; // s24
  float v24; // s20
  float v26[30]; // [sp+0h] [bp-78h] BYREF

  v1 = a1 + 156;
  v2 = FIELD_F32(a1, 572);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 576);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 580);
  v7 = FIELD_F32(a1, 116);
  v8 = *(ModelWrapper **)(a1 + 6848);
  v9 = FIELD_U32(a1, 156);
  v10 = FIELD_U32(v1, 4);
  v11 = FIELD_U32(v1, 8);
  v12 = (v11 >> 20) & 0xFF0;
  v13 = v10 & 0xFFFFFF;
  v14 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  v15 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  v16 = (float)(v9 & 0xFFFFFF);
  v17 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
  v18 = (float)(unsigned int)v13 * 0.000000059605;
  v19 = *(float *)((char *)&sinLutTable[2] + v12) + (float)(v17 * *(float *)((char *)&sinLutTable[3] + v12));
  v20 = v14[2] + (float)(v18 * v14[3]);
  v21 = *(float *)((char *)sinLutTable + v12) + (float)(v17 * *(float *)((char *)&sinLutTable[1] + v12));
  v22 = *v14 + (float)(v18 * v14[1]);
  v23 = v15[2] + (float)((float)(v16 * 0.000000059605) * v15[3]);
  v24 = *v15 + (float)((float)(v16 * 0.000000059605) * v15[1]);
  v26[0] = v20 * v19;
  v26[4] = v20 * v21;
  v26[8] = -v22;
  v26[1] = (float)((float)(v24 * v22) * v19) - (float)(v23 * v21);
  v26[5] = (float)(v23 * v19) + (float)((float)(v24 * v22) * v21);
  v26[9] = v24 * v20;
  v26[2] = (float)(v22 * (float)(v23 * v19)) + (float)(v24 * v21);
  v26[6] = (float)(v22 * (float)(v23 * v21)) - (float)(v24 * v19);
  v26[10] = v23 * v20;
  v26[3] = v3 + v2;
  v26[7] = v5 + v4;
  v26[11] = v7 + v6;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v8, 0x0) + 60))(FIELD_U32(v8, 0x0), v26);
  return ModelWrapper_updateModel(v8);
}
