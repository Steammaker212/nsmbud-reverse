/* sub_6093D6A4
 * address: 0x6093D6A4   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6093D6A4(_DWORD *result, float *a2, int a3, unsigned int a4)
{
  int v6; // r11
  float v7; // s4
  float v8; // s6
  float v9; // s2
  float v10; // s0
  float v11; // s5
  float v12; // s3
  float v13; // s12
  float v14; // s8
  float v15; // s7
  float v16; // s1
  float v17; // s14
  float v18; // s10
  int v19; // r4
  int v20; // r6
  unsigned int v21; // r7
  float *v22; // r1
  float v23; // s24
  float v24; // s13
  float v25; // s9
  int v26; // s24
  int v27; // s26
  int v28; // s28
  int v29; // [sp+0h] [bp-78h] BYREF
  float v30; // [sp+Ch] [bp-6Ch] BYREF
  int v31; // [sp+10h] [bp-68h]
  int v32; // [sp+14h] [bp-64h]

  v6 = (int)result;
  v7 = a2[1];
  v8 = *a2;
  v9 = a2[2];
  v10 = a2[3];
  v30 = v10 + (float)((float)((float)(v7 * 0.0) + (float)(*a2 * 0.5)) + (float)(v9 * 0.0));
  v11 = a2[5];
  v12 = a2[4];
  v13 = a2[6];
  v14 = a2[7];
  *(float *)&v31 = v14 + (float)((float)((float)(v11 * 0.0) + (float)(v12 * 0.5)) + (float)(v13 * 0.0));
  v15 = a2[9];
  v16 = a2[8];
  v17 = a2[10];
  v18 = a2[11];
  *(float *)&v32 = v18 + (float)((float)((float)(v15 * 0.0) + (float)(v16 * 0.5)) + (float)(v17 * 0.0));
  if ( a4 )
  {
    v19 = a4 - 1;
    v20 = 0;
    v21 = 0xFFFFFFFF / a4;
    while ( 1 )
    {
      v22 = (float *)((char *)sinLutTable + (((++v20 * v21) >> 20) & 0xFF0));
      v23 = (float)((v20 * v21) & 0xFFFFFF);
      v24 = v22[2] + (float)((float)(v23 * v22[3]) * 0.000000059605);
      v25 = (float)(*v22 + (float)((float)(v23 * v22[1]) * 0.000000059605)) * 0.5;
      *(float *)&v26 = v10 + (float)((float)((float)(v25 * v7) + (float)((float)(v24 * 0.5) * v8)) + (float)(v9 * 0.0));
      *(float *)&v27 = v14
                     + (float)((float)((float)(v25 * v11) + (float)((float)(v24 * 0.5) * v12)) + (float)(v13 * 0.0));
      *(float *)&v28 = v18
                     + (float)((float)((float)(v25 * v15) + (float)((float)(v24 * 0.5) * v16)) + (float)(v17 * 0.0));
      result = sub_6093AD38(v6, &v30, &v29, a3, v26, v27, v28);
      v30 = *(float *)&v26;
      v31 = v27;
      v32 = v28;
      if ( !v19 )
        break;
      v16 = a2[8];
      v15 = a2[9];
      v17 = a2[10];
      v18 = a2[11];
      v7 = a2[1];
      v9 = a2[2];
      v10 = a2[3];
      v12 = a2[4];
      v11 = a2[5];
      v13 = a2[6];
      v14 = a2[7];
      v8 = *a2;
      --v19;
    }
  }
  return result;
}
