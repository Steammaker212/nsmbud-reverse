/* sub_602CE5EC
 * address: 0x602CE5EC   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CE5EC(float *a1, float a2, int a3, float *a4)
{
  float v4; // r6
  float v5; // r7
  float v8; // s18
  float v9; // s28
  float v10; // s24
  float v11; // s26
  float v12; // s0
  float v13; // s0
  float v14; // s24
  float v15; // s22
  float v16; // s20
  float v17; // s18
  float v18; // s1
  float v19; // s3
  int v21; // [sp+4h] [bp-84h] BYREF
  float v22[32]; // [sp+8h] [bp-80h] BYREF

  v4 = a4[1];
  v5 = a4[2];
  v8 = *a4;
  v9 = (float)(a1[17] - (float)((float)(*a4 - a1[14]) * 0.7)) - *a4;
  v10 = (float)((float)(v4 - a1[15]) + a1[18]) - v4;
  v11 = (float)(a1[19] - (float)((float)(v5 - a1[16]) * 0.7)) - v5;
  v12 = sqrtf((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11));
  if ( v12 <= 0.0 )
    v13 = 1.0;
  else
    v13 = 10.5 / v12;
  a1[14] = *a4;
  a1[15] = v4;
  a1[16] = v5;
  v14 = (float)(v4 + (float)(v10 * v13)) - v4;
  v15 = (float)(v8 + (float)(v9 * v13)) - v8;
  v16 = (float)(v5 + (float)(v11 * v13)) - v5;
  v17 = sqrtf((float)((float)(v14 * v14) + (float)(v15 * v15)) + (float)(v16 * v16));
  if ( v17 > 0.0 )
  {
    v16 = v16 * (float)(1.0 / v17);
    v14 = v14 * (float)(1.0 / v17);
    v15 = v15 * (float)(1.0 / v17);
  }
  v21 = (int)(float)((float)(2147500000.0 * a2) / 180.0);
  sub_60832684((int)v22, (unsigned int *)&v21);
  v18 = a1[15] + (float)(v17 * (float)((float)((float)(v14 * v22[5]) + (float)(v15 * v22[4])) + (float)(v16 * v22[6])));
  v19 = a1[16] + (float)(v17 * (float)((float)((float)(v14 * v22[9]) + (float)(v15 * v22[8])) + (float)(v16 * v22[10])));
  a1[17] = a1[14]
         + (float)(v17 * (float)((float)((float)(v14 * v22[1]) + (float)(v15 * v22[0])) + (float)(v16 * v22[2])));
  a1[18] = v18;
  a1[19] = v19;
  sub_602D1B04(a1, 10.5);
  sub_602D25C0(a1);
  SE_OBJ_CMN_SPLASH_ref_2D1F80(a1);
  return 1;
}
