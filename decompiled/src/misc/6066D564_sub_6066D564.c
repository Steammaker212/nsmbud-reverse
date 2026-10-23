/* sub_6066D564
 * address: 0x6066D564   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066D564(int a1)
{
  float v1; // s6
  float v2; // s10
  float v3; // s2
  float v4; // s8
  float v5; // s0
  float v6; // s4
  ModelWrapper *v7; // r8
  unsigned int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r3
  void *model; // r0
  int v12; // s14
  float *v13; // r5
  float *v14; // r7
  float *v15; // r2
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

  v1 = FIELD_F32(a1, 572);
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 576);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 580);
  v6 = FIELD_F32(a1, 116);
  v7 = *(ModelWrapper **)(a1 + 6196);
  v8 = FIELD_U32(a1, 156);
  v9 = FIELD_U32(a1, 160);
  v10 = FIELD_U32(a1, 164);
  model = FIELD_U32(v7, 0x0);
  v12 = v9 & 0xFFFFFF;
  v13 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  v14 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  v15 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
  v16 = (float)(v8 & 0xFFFFFF);
  v17 = (float)(v10 & 0xFFFFFF) * 0.000000059605;
  v18 = (float)(unsigned int)v12 * 0.000000059605;
  v19 = v14[2] + (float)(v17 * v14[3]);
  v20 = v13[2] + (float)(v18 * v13[3]);
  v21 = *v14 + (float)(v17 * v14[1]);
  v22 = *v13 + (float)(v18 * v13[1]);
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
  v26[3] = v2 + v1;
  v26[7] = v4 + v3;
  v26[11] = v6 + v5;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)model + 60))(model, v26);
  return ModelWrapper_updateModel(v7);
}
