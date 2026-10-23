/* sub_600D6760
 * address: 0x600D6760   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D6760(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r5
  unsigned int v4; // r2
  float *v5; // lr
  float *v6; // r0
  float *v7; // r3
  float v8; // s6
  float v9; // s5
  float v10; // s7
  float v11; // s1
  float v12; // s3
  float v13; // r0
  float v14; // r1
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s6
  float v19; // s12
  float v20; // s8
  float v21; // s5
  float v22; // s1
  float v23; // s9
  float v24; // s13
  float v25; // s4
  float v27[16]; // [sp+0h] [bp-40h] BYREF

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 164);
  v4 = FIELD_U32(a1, 160);
  v5 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float)(v2 & 0xFFFFFF);
  v9 = v6[2];
  v10 = v6[3];
  v11 = *v6;
  v12 = v6[1];
  v13 = FIELD_F32(a1, 116);
  v14 = FIELD_F32(a1, 108);
  v15 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v16 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v17 = v8 * 0.000000059605;
  v18 = FIELD_F32(a1, 112);
  v19 = v7[2] + (float)(v15 * v7[3]);
  v20 = *v7 + (float)(v15 * v7[1]);
  v21 = v9 + (float)(v16 * v10);
  v22 = v11 + (float)(v16 * v12);
  v23 = *v5 + (float)(v17 * v5[1]);
  v24 = v5[2] + (float)(v17 * v5[3]);
  v25 = FIELD_F32(a1, 576);
  v27[0] = (float)(v21 * v19) + (float)(v23 * (float)(v22 * v20));
  v27[4] = v24 * v20;
  v27[8] = (float)(v23 * (float)(v21 * v20)) - (float)(v22 * v19);
  v27[1] = (float)(v23 * (float)(v22 * v19)) - (float)(v21 * v20);
  v27[5] = v24 * v19;
  v27[9] = (float)(v22 * v20) + (float)(v23 * (float)(v21 * v19));
  v27[2] = v24 * v22;
  v27[6] = -v23;
  v27[10] = v24 * v21;
  v27[3] = v14;
  v27[7] = v18 + v25;
  v27[11] = v13;
  (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)(a1 + 644) + 60))(FIELD_U32(a1, 644), v27);
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 644) + 68))(FIELD_U32(a1, 644), a1 + 144);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 644) + 52))(FIELD_U32(a1, 644));
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 644) + 56))(FIELD_U32(a1, 644));
}
