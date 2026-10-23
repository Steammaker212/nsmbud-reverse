/* sub_6061078C
 * address: 0x6061078C   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061078C(int a1)
{
  unsigned int v2; // lr
  unsigned int *v3; // r5
  float v4; // s0
  float v5; // s2
  float v6; // r12
  float v7; // s10
  float *v8; // r0
  float v9; // s6
  float v10; // s12
  float v11; // s4
  float v12; // s8
  unsigned int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r5
  float *v16; // r7
  float *v17; // r6
  float *v18; // r2
  float v19; // s14
  float v20; // s1
  float v21; // s5
  float v22; // s11
  float v23; // s18
  float v24; // s7
  float v25; // s15
  float v26; // s22
  float v27; // s26
  float v28; // s10
  float v29; // s1
  float v30; // r1
  int v31; // r2
  float v32; // s0
  float v34; // [sp+0h] [bp-90h] BYREF
  float v35; // [sp+4h] [bp-8Ch]
  int v36; // [sp+8h] [bp-88h]
  float v37[32]; // [sp+10h] [bp-80h] BYREF

  v2 = FIELD_U32(a1, 1104);
  v3 = (unsigned int *)(a1 + 156);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 1100);
  v8 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v13 = *v3;
  v14 = v3[1];
  v15 = v3[2];
  v16 = (float *)((char *)sinLutTable + ((v14 >> 20) & 0xFF0));
  v17 = (float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0));
  v18 = (float *)((char *)sinLutTable + ((v15 >> 20) & 0xFF0));
  v19 = (float)(v15 & 0xFFFFFF) * 0.000000059605;
  v20 = (float)(v14 & 0xFFFFFF) * 0.000000059605;
  v21 = (float)(v13 & 0xFFFFFF) * 0.000000059605;
  v22 = v18[2] + (float)(v19 * v18[3]);
  v23 = v16[2] + (float)(v20 * v16[3]);
  v24 = *v18 + (float)(v19 * v18[1]);
  v25 = *v16 + (float)(v20 * v16[1]);
  v26 = *v17 + (float)(v21 * v17[1]);
  v27 = v17[2] + (float)(v21 * v17[3]);
  v37[0] = (float)(v23 * v22) + (float)(v26 * (float)(v25 * v24));
  v37[4] = v27 * v24;
  v37[8] = (float)(v26 * (float)(v23 * v24)) - (float)(v25 * v22);
  v37[1] = (float)(v26 * (float)(v25 * v22)) - (float)(v23 * v24);
  v37[5] = v27 * v22;
  v37[9] = (float)(v25 * v24) + (float)(v26 * (float)(v23 * v22));
  v28 = v7 * 0.75;
  v29 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v37[2] = v27 * v25;
  v37[6] = -v26;
  v37[10] = v27 * v23;
  v37[3] = v4 + (float)(v28 * (float)(v9 + (float)(v10 * v29)));
  v37[7] = v5 + (float)(v28 * (float)(v11 + (float)(v29 * v12)));
  v37[11] = v6;
  (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)(a1 + 644) + 60))(FIELD_U32(a1, 644), v37);
  v30 = FIELD_F32(a1, 148);
  v31 = FIELD_U32(a1, 152);
  v34 = FIELD_F32(a1, 144);
  v35 = v30;
  v36 = v31;
  v32 = FIELD_F32(a1, 1088) + 1.0;
  v34 = v34 * v32;
  v35 = v32 * v30;
  (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)(a1 + 644) + 68))(FIELD_U32(a1, 644), &v34);
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 644) + 56))(FIELD_U32(a1, 644));
}
