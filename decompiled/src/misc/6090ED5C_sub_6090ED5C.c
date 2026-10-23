/* sub_6090ED5C
 * address: 0x6090ED5C   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090ED5C(float *result, float *a2, float *a3, float *a4)
{
  float v4; // s2
  float v5; // s6
  float v6; // s14
  float v7; // s8
  float v8; // s12
  float v9; // s10
  float v10; // s11
  float v11; // s3
  float v12; // s5
  float v13; // s7
  _BOOL4 v14; // r12
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s6
  float v19; // s9
  float v20; // s3
  float v21; // s5
  float v22; // s1
  float v23; // s5
  float v24; // s11
  float v25; // s16
  float v26; // s13
  float v27; // s7

  v4 = a2[1];
  v5 = result[1];
  v6 = a2[3] - v4;
  v7 = result[3] - v5;
  v8 = a2[2] - *a2;
  v9 = result[2] - *result;
  v10 = *result - *a2;
  v11 = (float)(v6 * v6) + (float)(v8 * v8);
  v12 = (float)(v7 * v7) + (float)(v9 * v9);
  v13 = (float)((float)(v5 - v4) * v6) + (float)(v10 * v8);
  v14 = v11 <= 0.00000011921 && v11 >= -0.00000011921;
  if ( v12 <= 0.00000011921 && v12 >= -0.00000011921 )
  {
    if ( v14 )
    {
      if ( a3 )
        *a3 = 0.0;
      if ( a4 )
        *a4 = 0.0;
      v15 = *a2;
      v16 = a2[1];
      v17 = *result;
      v18 = result[1];
      return (float)((float)(v18 - v16) * (float)(v18 - v16)) + (float)((float)(v17 - v15) * (float)(v17 - v15));
    }
    v23 = v13 / v11;
    v22 = 0.0;
    if ( (float)(v13 / v11) >= 0.0 )
    {
      v20 = 1.0;
      if ( v23 <= 1.0 )
        v20 = v23;
      goto LABEL_32;
    }
LABEL_13:
    v20 = v22;
    goto LABEL_32;
  }
  v19 = (float)((float)(v5 - v4) * v7) + (float)(v10 * v9);
  if ( !v14 )
  {
    v24 = (float)(v7 * v6) + (float)(v9 * v8);
    v22 = 0.0;
    v25 = (float)(v12 * v11) - (float)(v24 * v24);
    if ( v25 > 0.00000011921 || v25 < -0.00000011921 )
    {
      v26 = (float)((float)(v24 * v13) - (float)(v19 * v11)) / v25;
      if ( v26 >= 0.0 )
      {
        v22 = (float)((float)(v24 * v13) - (float)(v19 * v11)) / v25;
        if ( v26 > 1.0 )
          v22 = 1.0;
      }
    }
    v27 = v13 + (float)(v24 * v22);
    if ( v27 >= 0.0 )
    {
      if ( v27 <= v11 )
      {
        v20 = v27 / v11;
        goto LABEL_32;
      }
      v20 = 1.0;
      v22 = (float)(v24 - v19) / v12;
      if ( v22 < 0.0 )
      {
        v22 = 0.0;
        goto LABEL_32;
      }
      if ( v22 <= 1.0 )
        goto LABEL_32;
      v22 = 1.0;
      goto LABEL_13;
    }
    v20 = 0.0;
    v21 = (float)-v19 / v12;
    if ( v21 < 0.0 )
    {
      v22 = 0.0;
      goto LABEL_32;
    }
LABEL_22:
    v22 = 1.0;
    if ( v21 <= 1.0 )
      v22 = v21;
    goto LABEL_32;
  }
  v20 = 0.0;
  v21 = (float)-v19 / v12;
  if ( v21 >= 0.0 )
    goto LABEL_22;
  v22 = 0.0;
LABEL_32:
  v16 = v4 + (float)(v6 * v20);
  v15 = *a2 + (float)(v8 * v20);
  v18 = v5 + (float)(v7 * v22);
  v17 = *result + (float)(v9 * v22);
  if ( a3 )
    *a3 = v22;
  if ( a4 )
    *a4 = v20;
  return (float)((float)(v18 - v16) * (float)(v18 - v16)) + (float)((float)(v17 - v15) * (float)(v17 - v15));
}
