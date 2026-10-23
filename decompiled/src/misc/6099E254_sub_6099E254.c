/* sub_6099E254
 * address: 0x6099E254   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6099E254(int a1)
{
  int v2; // r0
  float *v3; // r5
  int v4; // r6
  float v5; // s30
  float v6; // s17
  float v7; // s28
  float v8; // s26
  float v9; // s20
  float v10; // s18
  float v11; // s22
  float v12; // s24
  float v13; // s0
  float v14; // s26
  float v15; // s28
  float v16; // s17
  float v17; // s30
  float v18; // s0
  float v19; // s2
  float v20; // s0
  float v21; // s0
  float v22; // s7
  int v23; // r0
  float v24; // s5
  float v25; // s2
  float v26; // s0
  float v27; // s2
  float v28; // s1
  float v29; // s8
  float v30; // s6

  v2 = FIELD_U32(a1, 2308);
  if ( v2 - 1 >= 2 )
  {
    v3 = (float *)(a1 + 84);
    v4 = 1;
    do
    {
      v5 = *(v3 - 12);
      v6 = *(v3 - 11);
      v7 = *(v3 - 10);
      v8 = *(v3 - 9);
      v9 = *(v3 - 2) - v6;
      v10 = *(v3 - 3) - v5;
      v11 = *(v3 - 1) - v7;
      v12 = *v3 - v8;
      v13 = sqrtf((float)((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v11 * v11)) + (float)(v12 * v12));
      v14 = *(v3 - 18) - v8;
      v15 = *(v3 - 19) - v7;
      v16 = *(v3 - 20) - v6;
      v17 = *(v3 - 21) - v5;
      if ( v13 > 0.0 )
      {
        v18 = 1.0 / v13;
        v12 = v12 * v18;
        v11 = v11 * v18;
        v9 = v9 * v18;
        v10 = v10 * v18;
      }
      v19 = sqrtf((float)((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)(v15 * v15)) + (float)(v14 * v14));
      if ( v19 > 0.0 )
      {
        v14 = v14 * (float)(1.0 / v19);
        v15 = v15 * (float)(1.0 / v19);
        v16 = v16 * (float)(1.0 / v19);
        v17 = v17 * (float)(1.0 / v19);
      }
      *(v3 - 8) = v10 - v17;
      *(v3 - 7) = v9 - v16;
      *(v3 - 6) = v11 - v15;
      *(v3 - 5) = v12 - v14;
      v20 = sqrtf(
              (float)((float)((float)((float)(v9 - v16) * (float)(v9 - v16))
                            + (float)((float)(v10 - v17) * (float)(v10 - v17)))
                    + (float)((float)(v11 - v15) * (float)(v11 - v15)))
            + (float)((float)(v12 - v14) * (float)(v12 - v14)));
      ++v4;
      if ( v20 > 0.0 )
      {
        v21 = 1.0 / v20;
        *(v3 - 8) = v21 * *(v3 - 8);
        *(v3 - 7) = v21 * *(v3 - 7);
        *(v3 - 6) = v21 * *(v3 - 6);
        *(v3 - 5) = v21 * *(v3 - 5);
      }
      v2 = FIELD_U32(a1, 2308);
      v3 += 9;
    }
    while ( v4 < v2 - 1 );
  }
  v22 = FIELD_F32(a1, 32);
  v23 = a1 + 36 * v2;
  v24 = (float)((float)((float)(FIELD_F32(a1, 44) - FIELD_F32(a1, 8)) * 3.0) * (float)(1.0 / v22))
      - FIELD_F32(a1, 60);
  v25 = (float)((float)((float)((float)(FIELD_F32(a1, 40) - FIELD_F32(a1, 4)) * 3.0) * (float)(1.0 / v22))
              - FIELD_F32(a1, 56))
      * 0.5;
  v26 = (float)((float)((float)(1.0 / v22) * (float)((float)(FIELD_F32(a1, 48) - FIELD_F32(a1, 12)) * 3.0))
              - FIELD_F32(a1, 64))
      * 0.5;
  FIELD_F32(a1, 16) = (float)((float)((float)((float)(FIELD_F32(a1, 36) - *(float *)a1) * 3.0) * (float)(1.0 / v22))
                              - FIELD_F32(a1, 52))
                      * 0.5;
  FIELD_F32(a1, 20) = v25;
  FIELD_F32(a1, 24) = v24 * 0.5;
  FIELD_F32(a1, 28) = v26;
  v27 = 1.0 / *(float *)(v23 - 40);
  v28 = (float)((float)((float)(*(float *)(v23 - 28) - *(float *)(v23 - 64)) * 3.0) * v27) - *(float *)(v23 - 48);
  v29 = (float)((float)((float)((float)(*(float *)(v23 - 32) - *(float *)(v23 - 68)) * 3.0) * v27) - *(float *)(v23 - 52))
      * 0.5;
  v30 = (float)(v27 * (float)((float)(*(float *)(v23 - 24) - *(float *)(v23 - 60)) * 3.0)) - *(float *)(v23 - 44);
  *(float *)(v23 - 20) = (float)((float)((float)((float)(*(float *)(v23 - 36) - *(float *)(v23 - 72)) * 3.0) * v27)
                               - *(float *)(v23 - 56))
                       * 0.5;
  *(float *)(v23 - 16) = v29;
  *(float *)(v23 - 12) = v28 * 0.5;
  *(float *)(v23 - 8) = v30 * 0.5;
  return v28 * 0.5;
}
