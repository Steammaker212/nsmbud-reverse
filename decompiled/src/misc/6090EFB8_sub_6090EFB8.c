/* sub_6090EFB8
 * address: 0x6090EFB8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090EFB8(float *result, float *a2, float *a3, float *a4)
{
  float v4; // s2
  float v5; // s6
  float v6; // s8
  float v7; // s10
  float v8; // s14
  float v9; // s12
  float v10; // s11
  float v11; // s7
  float v12; // s1
  float v13; // s3
  float v14; // s5
  float v15; // s5
  float v16; // s7
  float v17; // s7
  float v18; // s1
  float v19; // s2
  float v20; // s0
  float v21; // s4
  float v22; // s6

  v4 = a2[1];
  v5 = result[1];
  v6 = result[2];
  v7 = result[3];
  v8 = a2[3] - v4;
  v9 = a2[2] - *a2;
  v10 = *result - *a2;
  v11 = (float)(v8 * v8) + (float)(v9 * v9);
  v12 = (float)((float)(v5 - v4) * v7) + (float)(v10 * v6);
  if ( v11 > 0.00000011921 || v11 < -0.00000011921 )
  {
    v15 = (float)(v8 * v7) + (float)(v9 * v6);
    v13 = 0.0;
    v16 = v11 - (float)(v15 * v15);
    if ( v16 > 0.00000011921 || v16 < -0.00000011921 )
    {
      v17 = (float)((float)((float)((float)(v5 - v4) * v8) + (float)(v10 * v9)) - (float)(v15 * v12)) / v16;
      if ( v17 >= 0.0 )
      {
        v13 = v17;
        if ( v17 > 1.0 )
          v13 = 1.0;
      }
    }
    v14 = v15 * v13;
  }
  else
  {
    v13 = 0.0;
    v14 = -0.0;
  }
  v18 = v14 - v12;
  v19 = v4 + (float)(v8 * v13);
  v20 = *a2 + (float)(v9 * v13);
  v21 = *result + (float)(v18 * v6);
  v22 = v5 + (float)(v18 * v7);
  if ( a3 )
    *a3 = v18;
  if ( a4 )
    *a4 = v13;
  return (float)((float)(v22 - v19) * (float)(v22 - v19)) + (float)((float)(v21 - v20) * (float)(v21 - v20));
}
