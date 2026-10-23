/* sub_601A52A0
 * address: 0x601A52A0   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A52A0(int a1)
{
  int v1; // r4
  unsigned int v2; // r0
  float v3; // r12
  float v4; // lr
  float v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r0
  int v8; // r5
  float *v9; // r6
  float v10; // s2
  float v11; // s0
  float v12; // s10
  float v13; // s3
  float v14; // s6
  float v15; // s14
  float v16; // s7
  float v17; // s11
  float v19[16]; // [sp+0h] [bp-40h] BYREF

  v1 = a1;
  v2 = FIELD_U32(a1, 20);
  FIELD_U32(v1, 480) = (unsigned __int8)v2 >> 4;
  FIELD_U32(v1, 484) = (v2 >> 8) & 0xF;
  FIELD_U32(v1, 488) = v2 & 0xF;
  sub_601A5468(v1);
  FIELD_U32(v1, 128) = 1065353216;
  v1 += 128;
  FIELD_U32(v1, 4) = 1065353216;
  FIELD_U32(v1, 8) = 1065353216;
  v3 = *(float *)(v1 - 48);
  v4 = *(float *)(v1 - 44);
  v5 = *(float *)(v1 - 40);
  FIELD_U32(v1, 48) = 11930464;
  v6 = FIELD_U32(v1, 52);
  v7 = FIELD_U32(v1, 56);
  v8 = (v7 >> 20) & 0xFF0;
  v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v10 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v12 = *(float *)((char *)&sinLutTable[2] + v8) + (float)(v10 * *(float *)((char *)&sinLutTable[3] + v8));
  v13 = v9[2] + (float)(v11 * v9[3]);
  v14 = *(float *)((char *)sinLutTable + v8) + (float)(v10 * *(float *)((char *)&sinLutTable[1] + v8));
  v15 = *v9 + (float)(v11 * v9[1]);
  v16 = (float)(0.024541 * 0.71111) + 0.0;
  v17 = (float)(-0.00030118 * 0.71111) + 1.0;
  v19[0] = (float)(v13 * v12) + (float)(v16 * (float)(v15 * v14));
  v19[4] = v17 * v14;
  v19[8] = (float)(v16 * (float)(v13 * v14)) - (float)(v15 * v12);
  v19[1] = (float)(v16 * (float)(v15 * v12)) - (float)(v13 * v14);
  v19[5] = v17 * v12;
  v19[9] = (float)(v15 * v14) + (float)(v16 * (float)(v13 * v12));
  v19[2] = v17 * v15;
  v19[6] = -v16;
  v19[10] = v17 * v13;
  v19[3] = v3;
  v19[7] = v4;
  v19[11] = v5;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(v1 + 176) + 60))(**(_DWORD **)(v1 + 176), v19);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(v1 + 176) + 68))(**(_DWORD **)(v1 + 176), v1);
  ModelWrapper_updateModel(*(ModelWrapper **)(v1 + 176));
  FIELD_U32(v1, 84) = 1120403456;
  StateMgr__changeState((StateMgr *)(v1 + 156), (StateBase *)&dword_60C8A0E0);
  return 1;
}
