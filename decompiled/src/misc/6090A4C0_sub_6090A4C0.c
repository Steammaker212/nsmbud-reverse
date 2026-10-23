/* sub_6090A4C0
 * address: 0x6090A4C0   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6090A4C0(float *result, float *a2)
{
  float v2; // s0
  float v3; // s2
  float v4; // s16
  float v5; // s18
  float v6; // s20
  float v7; // s0
  float v8; // s0
  float v9; // s0
  float v10; // s4
  float v11; // s2
  float v12; // s24
  float v13; // s22
  float v14; // s26
  float v15; // s0
  float v16; // s0
  float v17; // s8
  float v18; // s10
  float v19; // s2
  float v20; // s0
  float v21; // s12
  float v22; // s4

  v2 = result[13];
  v3 = result[16];
  if ( v2 != v3 || result[15] != result[18] )
  {
    v4 = result[14] - result[17];
    v5 = v2 - v3;
    v6 = result[15] - result[18];
    v7 = sqrtf((float)((float)(v4 * v4) + (float)(v5 * v5)) + (float)(v6 * v6));
    if ( v7 > 0.0 )
    {
      v8 = 1.0 / v7;
      v6 = v6 * v8;
      v4 = v4 * v8;
      v5 = v5 * v8;
    }
    v9 = result[19];
    v10 = result[20];
    v11 = result[21];
    v12 = (float)(v5 * v11) - (float)(v6 * v9);
    v13 = (float)(v6 * v10) - (float)(v4 * v11);
    v14 = (float)(v4 * v9) - (float)(v5 * v10);
    v15 = sqrtf((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14));
    if ( v15 > 0.0 )
    {
      v16 = 1.0 / v15;
      v14 = v16 * v14;
      v12 = v16 * v12;
      v13 = v13 * v16;
    }
    v17 = (float)(v6 * v13) - (float)(v5 * v14);
    v18 = (float)(v4 * v14) - (float)(v6 * v12);
    v19 = result[14];
    v20 = result[13];
    v21 = (float)(v5 * v12) - (float)(v4 * v13);
    v22 = result[15];
    *a2 = v13;
    a2[1] = v12;
    a2[2] = v14;
    a2[3] = -(float)((float)((float)(v12 * v19) + (float)(v13 * v20)) + (float)(v14 * v22));
    a2[4] = v18;
    a2[5] = v17;
    a2[6] = v21;
    a2[7] = -(float)((float)((float)(v17 * v19) + (float)(v18 * v20)) + (float)(v21 * v22));
    a2[8] = v5;
    a2[9] = v4;
    a2[10] = v6;
    a2[11] = -(float)((float)((float)(v4 * v19) + (float)(v5 * v20)) + (float)(v6 * v22));
  }
  return result;
}
