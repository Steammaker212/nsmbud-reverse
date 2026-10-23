/* sub_601EB40C
 * address: 0x601EB40C   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EB40C(int a1)
{
  float v2; // s2
  float v3; // s0
  unsigned int v4; // r0
  unsigned int v5; // r3
  int v6; // s3
  float *v7; // r1
  float v8; // s4
  float v9; // s6
  float *v10; // r0
  float v11; // s10
  float v12; // s12
  float v13; // s14
  float v14; // s1
  float *v15; // r1
  float v16; // s9
  float v17; // s11
  float v18; // s5
  float v19; // s7
  float v20; // s16
  float v21; // s18
  float v22; // s13
  float v23; // s15
  float v24; // r1
  float v25; // r0
  float v26; // s14
  float v27; // s10
  float v28; // s9
  float v29; // s5
  float v30; // s8
  float v31; // s16
  float v32; // s13
  float v33; // s8
  float v34; // s0
  float v36[18]; // [sp+0h] [bp-48h] BYREF

  sub_601861EC((Actor *)a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 264));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
  {
    v2 = FIELD_F32(a1, 128);
    v3 = FIELD_F32(a1, 132);
    if ( v2 != 0.0 || FIELD_F32(a1, 136) != 0.0 )
    {
      v4 = FIELD_U32(a1, 176);
      v5 = FIELD_U32(a1, 184);
      v6 = v4 & 0xFFFFFF;
      v7 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
      v8 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
      v9 = (float)(FIELD_U32(a1, 180) & 0xFFFFFF) * 0.000000059605;
      v10 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
      v11 = *v7;
      v12 = v7[1];
      v13 = v7[2];
      v14 = v7[3];
      v15 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 180) >> 20) & 0xFF0));
      v16 = v15[2];
      v17 = v15[3];
      v18 = *v15;
      v19 = v15[1];
      v20 = v10[2];
      v21 = v10[3];
      v22 = *v10;
      v23 = v10[1];
      v24 = FIELD_F32(a1, 80);
      v25 = FIELD_F32(a1, 84);
      v26 = v13 + (float)(v8 * v14);
      v27 = v11 + (float)(v8 * v12);
      v28 = v16 + (float)(v9 * v17);
      v29 = v18 + (float)(v9 * v19);
      v30 = (float)(unsigned int)v6 * 0.000000059605;
      v31 = v20 + (float)(v30 * v21);
      v32 = v22 + (float)(v30 * v23);
      v33 = FIELD_F32(a1, 88);
      v36[0] = v2 * (float)(v28 * v26);
      v36[4] = (float)(v28 * v27) * v2;
      v36[8] = -(float)(v29 * v2);
      v36[1] = (float)((float)((float)(v32 * v29) * v26) - (float)(v31 * v27)) * v3;
      v36[5] = (float)((float)(v31 * v26) + (float)((float)(v32 * v29) * v27)) * v3;
      v36[9] = (float)(v32 * v28) * v3;
      v34 = FIELD_F32(a1, 136);
      v36[2] = (float)((float)(v29 * (float)(v31 * v26)) + (float)(v32 * v27)) * v34;
      v36[6] = (float)((float)(v29 * (float)(v31 * v27)) - (float)(v32 * v26)) * v34;
      v36[10] = (float)(v31 * v28) * v34;
      v36[3] = v24;
      v36[7] = v25;
      v36[11] = v33 + -55.0;
      (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 264) + 60))(**(_DWORD **)(a1 + 264), v36);
      (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 264) + 52))(**(_DWORD **)(a1 + 264));
      (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 264) + 56))(**(_DWORD **)(a1 + 264));
    }
  }
  return 1;
}
