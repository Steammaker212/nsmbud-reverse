/* sub_601D39F0
 * address: 0x601D39F0   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_601D39F0(float *result, float *a2, float *a3)
{
  float *v3; // r4
  float v4; // s18
  float v5; // s16
  float v6; // s0
  float v7; // s2
  float v8; // s16
  float v9; // s18
  float v10; // s20
  float v11; // s2
  float v12; // s0
  float v13; // s0
  float v14; // s0
  float v15; // s0
  float v16; // s2
  float v17; // s0
  float v18; // s0

  v3 = result;
  v4 = a3[1];
  v5 = a3[2];
  v6 = sqrtf(
         (float)((float)((float)(result[21] - v4) * (float)(result[21] - v4))
               + (float)((float)(result[20] - *a3) * (float)(result[20] - *a3)))
       + (float)((float)(result[22] - v5) * (float)(result[22] - v5)));
  v7 = result[252];
  v8 = v5 - a2[2];
  v9 = v4 - a2[1];
  v10 = *a3 - *a2;
  if ( v7 > 0.00000011921 || v7 < -0.00000011921 )
  {
    v13 = sqrtf((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v8 * v8));
    if ( v13 > 0.0 )
    {
      v14 = 1.0 / v13;
      v8 = v8 * v14;
      v9 = v9 * v14;
      v10 = v10 * v14;
    }
    v15 = result[20];
    v16 = result[252];
    goto LABEL_11;
  }
  v11 = result[50];
  if ( v6 >= v11 )
  {
    v17 = sqrtf((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v8 * v8));
    if ( v17 > 0.0 )
    {
      v18 = 1.0 / v17;
      v8 = v8 * v18;
      v9 = v9 * v18;
      v10 = v10 * v18;
    }
    v15 = result[20];
    v16 = result[50];
LABEL_11:
    result[20] = v15 + (float)(v10 * v16);
    result[21] = result[21] + (float)(v9 * v16);
    v12 = 0.0;
    result[22] = result[22] + (float)(v8 * v16);
    goto LABEL_12;
  }
  v12 = v11 - v6;
  result[20] = *a3;
  result[21] = a3[1];
  result = *((float **)a3 + 2);
  *((_DWORD *)v3 + 22) = result;
LABEL_12:
  v3[252] = v12;
  return result;
}
