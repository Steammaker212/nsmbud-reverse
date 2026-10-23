/* PlayerBase_vf5
 * address: 0x6075E76C   size: 388   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerBase_vf5(int a1)
{
  unsigned int v2; // r7
  unsigned int v3; // r1
  unsigned int v4; // r3
  float *v5; // r0
  float *v6; // r2
  float *v7; // r6
  float v8; // s0
  float v9; // s12
  float v10; // s2
  float v11; // s14
  float v12; // s6
  float v13; // s1
  float v14; // s4
  float v15; // s3
  float v16; // s10
  float v17; // s5
  float v18; // s8
  float v19; // s7
  float v20; // s11
  float v21; // s13
  float v22; // s8
  float v23; // s4
  float v24; // s10
  float v25; // s3
  float v26; // s6
  float v27; // s5
  float v28; // s1
  float v29; // s2
  float v30; // s0
  float v31; // s12
  float v33[18]; // [sp+0h] [bp-48h] BYREF

  fb_dummy_ref_2((int **)(a1 + 10636));
  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v33[3] = FIELD_F32(a1, 108);
  v5 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = *v5;
  v9 = v5[1];
  v10 = v5[2];
  v11 = v5[3];
  v12 = *v7;
  v13 = v7[1];
  v14 = v7[2];
  v15 = v7[3];
  v16 = *v6;
  v17 = v6[1];
  v18 = v6[2];
  v19 = v6[3];
  v33[7] = FIELD_F32(a1, 112);
  v33[11] = FIELD_F32(a1, 116);
  v20 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v21 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v22 = v18 + (float)(v20 * v19);
  v23 = v14 + (float)(v21 * v15);
  v24 = v16 + (float)(v20 * v17);
  v25 = FIELD_F32(a1, 144);
  v26 = v12 + (float)(v21 * v13);
  v33[0] = (float)(v23 * v22) * v25;
  v27 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v33[4] = v25 * (float)(v23 * v24);
  v33[8] = -(float)(v26 * v25);
  v28 = FIELD_F32(a1, 148);
  v29 = v10 + (float)(v27 * v11);
  v30 = v8 + (float)(v27 * v9);
  v33[1] = (float)((float)((float)(v30 * v26) * v22) - (float)(v29 * v24)) * v28;
  v33[5] = v28 * (float)((float)(v29 * v22) + (float)((float)(v30 * v26) * v24));
  v33[9] = (float)(v30 * v23) * v28;
  v31 = FIELD_F32(a1, 152);
  v33[2] = (float)((float)(v26 * (float)(v29 * v22)) + (float)(v30 * v24)) * v31;
  v33[6] = v31 * (float)((float)(v26 * (float)(v29 * v24)) - (float)(v30 * v22));
  v33[10] = (float)(v29 * v23) * v31;
  ((void (__fastcall *)(_DWORD, float *))loc_60793FF0)(*(_DWORD *)(FIELD_U32(a1, 648) + 4), v33);
  return 1;
}
