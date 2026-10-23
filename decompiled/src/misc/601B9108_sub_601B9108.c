/* sub_601B9108
 * address: 0x601B9108   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B9108(float *a1, float *a2, float *a3)
{
  float v4; // s18
  float v5; // s16
  float v6; // s0
  int result; // r0
  float v8; // s16
  float v9; // s18
  float v10; // s20
  float *v11; // r6
  float v12; // s2
  float v13; // s2
  float v14; // s0
  float v15; // s0
  float v16; // s0
  float v17; // s2
  float v18; // s0
  float v19; // s0
  float v20; // s0

  v4 = a3[1];
  v5 = a3[2];
  v6 = sqrtf(
         (float)((float)((float)(a1[21] - v4) * (float)(a1[21] - v4))
               + (float)((float)(a1[20] - *a3) * (float)(a1[20] - *a3)))
       + (float)((float)(a1[22] - v5) * (float)(a1[22] - v5)));
  result = 1032;
  v8 = v5 - a2[2];
  v9 = v4 - a2[1];
  v10 = *a3 - *a2;
  v11 = a1 + 258;
  v12 = a1[258];
  if ( v12 > 0.00000011921 || v12 < -0.00000011921 )
  {
    v15 = sqrtf((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v8 * v8));
    if ( v15 > 0.0 )
    {
      v16 = 1.0 / v15;
      v8 = v8 * v16;
      v9 = v9 * v16;
      v10 = v10 * v16;
    }
    v17 = *v11;
    v18 = a1[20];
    goto LABEL_11;
  }
  v13 = a1[50];
  if ( v6 >= v13 )
  {
    v19 = sqrtf((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v8 * v8));
    if ( v19 > 0.0 )
    {
      v20 = 1.0 / v19;
      v8 = v8 * v20;
      v9 = v9 * v20;
      v10 = v10 * v20;
    }
    v18 = a1[20];
    v17 = a1[50];
LABEL_11:
    a1[20] = v18 + (float)(v10 * v17);
    a1[21] = a1[21] + (float)(v9 * v17);
    v14 = 0.0;
    a1[22] = a1[22] + (float)(v8 * v17);
    goto LABEL_12;
  }
  v14 = v13 - v6;
  a1[20] = *a3;
  a1[21] = a3[1];
  result = *((_DWORD *)a3 + 2);
  *((_DWORD *)a1 + 22) = result;
LABEL_12:
  *v11 = v14;
  return result;
}
