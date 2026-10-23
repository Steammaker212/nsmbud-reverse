/* sub_602D0278
 * address: 0x602D0278   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D0278(int a1, float *a2)
{
  float v2; // s2
  int v3; // r12
  float *v4; // r0
  float v5; // s6
  float *v6; // r3
  float *v7; // r2
  float v8; // s0
  float v9; // s10
  float v10; // s8
  int result; // r0
  int v12; // r12
  float v13; // s8
  float *v14; // r2
  float *v15; // r1
  int v16; // r12
  float v17; // s6
  float *v18; // r3
  float *v19; // r1
  int v20; // r1
  float v21; // s8
  float *v22; // r1
  float *v23; // r2

  v2 = a2[1];
  v3 = FIELD_U32(a1, 6436);
  v4 = (float *)(a1 + 6324);
  v5 = FIELD_F32(v3, 8);
  v6 = (float *)(v3 + 8);
  v7 = (float *)(v3 + 8);
  v8 = *a2;
  if ( v5 < *v4 )
  {
    v7 = v4;
    v4 = (float *)(v3 + 8);
  }
  v9 = v4[1];
  v10 = *v4;
  result = 0;
  if ( (float)((float)((float)(*v7 - v10) * (float)(v2 - (float)(v9 + 3.0)))
             - (float)((float)(v8 - v10) * (float)((float)(v7[1] + 3.0) - (float)(v9 + 3.0)))) >= 0.0 )
  {
    v12 = FIELD_U32(v3, 120);
    v13 = FIELD_F32(v12, 8);
    v14 = (float *)(v12 + 8);
    v15 = (float *)(v12 + 8);
    if ( v13 < v5 )
    {
      v15 = v6;
      v6 = (float *)(v12 + 8);
    }
    if ( (float)((float)((float)(*v15 - *v6) * (float)(v2 - (float)(v6[1] + 3.0)))
               - (float)((float)(v8 - *v6) * (float)((float)(v15[1] + 3.0) - (float)(v6[1] + 3.0)))) >= 0.0 )
    {
      v16 = FIELD_U32(v12, 120);
      v17 = FIELD_F32(v16, 8);
      v18 = (float *)(v16 + 8);
      v19 = (float *)(v16 + 8);
      if ( v17 < v13 )
      {
        v19 = v14;
        v14 = (float *)(v16 + 8);
      }
      if ( (float)((float)((float)(*v19 - *v14) * (float)(v2 - (float)(v14[1] + 3.0)))
                 - (float)((float)(v8 - *v14) * (float)((float)(v19[1] + 3.0) - (float)(v14[1] + 3.0)))) >= 0.0 )
      {
        v20 = FIELD_U32(v16, 120);
        v21 = FIELD_F32(v20, 8);
        v22 = (float *)(v20 + 8);
        v23 = v22;
        if ( v21 < v17 )
        {
          v23 = (float *)(v16 + 8);
          v18 = v22;
        }
        if ( (float)((float)((float)(*v23 - *v18) * (float)(v2 - (float)(v18[1] + 3.0)))
                   - (float)((float)(v8 - *v18) * (float)((float)(v23[1] + 3.0) - (float)(v18[1] + 3.0)))) >= 0.0 )
          return 1;
      }
    }
  }
  return result;
}
