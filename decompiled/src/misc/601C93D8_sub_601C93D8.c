/* sub_601C93D8
 * address: 0x601C93D8   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C93D8(int a1, int a2)
{
  int *v4; // r0
  int v5; // r1
  int v6; // r2
  int *v7; // r0
  int v8; // r1
  int v9; // r2
  unsigned int v10; // r0
  float v11; // s12
  float *v12; // r1
  float v13; // s14
  float v14; // s1
  float v15; // s3
  float v16; // s5
  float v17; // r1
  float v18; // r2
  float v19; // s8
  float v20; // s2
  float v21; // s14
  float v22; // s3
  float v23; // s5
  float v24; // s10
  float v25; // s12
  float v26; // s0
  float v27; // s8
  float v28; // s18
  float v29; // s16
  float v30; // s20
  float *v31; // r0
  float v33; // [sp+4h] [bp-7Ch] BYREF
  float v34; // [sp+8h] [bp-78h]
  float v35; // [sp+Ch] [bp-74h]
  float v36[4]; // [sp+10h] [bp-70h] BYREF
  _DWORD v37[4]; // [sp+20h] [bp-60h] BYREF
  _DWORD v38[4]; // [sp+30h] [bp-50h] BYREF
  _DWORD v39[3]; // [sp+40h] [bp-40h] BYREF
  _DWORD v40[13]; // [sp+4Ch] [bp-34h] BYREF

  memset(v40, 255, 12);
  if ( FIELD_U32(a1, 1212) == 7 )
    sub_601E0A30(v40);
  else
    sub_601E0AB8(v40);
  memset(v39, 255, sizeof(v39));
  sub_601E06F0(a2, v39);
  v4 = (int *)sub_601E0040(v40);
  v5 = *v4;
  v6 = v4[1];
  v38[2] = v4[2];
  v38[1] = v6;
  v38[0] = v5;
  v7 = (int *)sub_601E0040(v39);
  v8 = *v7;
  v9 = v7[1];
  v37[2] = v7[2];
  v37[1] = v9;
  v37[0] = v8;
  v10 = sub_608332B0(v38, v37);
  v11 = (float)(v10 & 0xFFFFFF);
  v12 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  v16 = v12[3];
  v17 = FIELD_F32(a1, 84);
  v18 = FIELD_F32(a1, 88);
  v19 = (float)(-0.00030118 * 0.0) + 1.0;
  v20 = (float)(0.024541 * 0.0) + 0.0;
  v36[0] = FIELD_F32(a1, 80);
  v36[1] = v17;
  v36[2] = v18;
  v21 = v13 + (float)((float)(v11 * 0.000000059605) * v14);
  v22 = v15 + (float)((float)(v11 * 0.000000059605) * v16);
  v23 = (float)((float)(v19 * v19) * v21) + (float)(v20 * v20);
  v24 = (float)((float)(v20 * v19) * v21) - (float)(v20 * v19);
  v25 = (float)(v19 * (float)(v20 * v21)) - (float)(v20 * v19);
  v26 = (float)(v19 * v19) + (float)(v20 * (float)(v20 * v21));
  v27 = v19 * v22;
  v33 = v36[0] + (float)((float)((float)((float)(v25 * 0.0) + (float)(v27 * 0.0)) + (float)(v23 * 3000.0)) + 0.0);
  v34 = v17
      + (float)((float)((float)((float)((float)(v20 * v22) * 0.0) + (float)(v26 * 0.0)) + (float)(v24 * 3000.0)) + 0.0);
  v35 = v18
      + (float)((float)((float)((float)((float)(v20 * v22) * 0.0) - (float)(v21 * 0.0)) + (float)(v27 * 3000.0)) + 0.0);
  if ( v40[0] == 7 )
  {
    v28 = 800.0;
    v29 = 30.0;
  }
  else
  {
    v29 = 0.033333;
    v35 = v18;
    v33 = v36[0] + 1.0;
    v28 = (float)(v17 + 1000.0) + 1000.0;
    v34 = v17 + 1000.0;
  }
  v30 = *((float *)sub_601C6BF0(a1) + 1);
  v31 = (float *)sub_601C6BF0(a1);
  return sub_601C4A1C(a1, v36, &v33, 100000, v29, v28, v30, v31[1], 1);
}
