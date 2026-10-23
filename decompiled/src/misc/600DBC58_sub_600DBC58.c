/* sub_600DBC58
 * address: 0x600DBC58   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_600DBC58(__n64 **a1, float a2)
{
  __n64 *v4; // r0
  __n64 *v5; // r1
  int v6; // r5
  bool v7; // zf
  int v8; // r6
  bool v9; // zf
  float *v10; // r6
  float *v11; // r0
  float v12; // s0
  float v13; // s6
  float v14; // s0
  float v15; // s8
  float v16; // s10
  float v17; // s2
  float v18; // s7
  float v19; // s8
  float v20; // s0
  float v21; // s6
  float v22; // s15
  float v23; // s4
  __n64 result; // d0

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == (__n64 *)1 )
    return v5[1];
  if ( v5[4].n64_f32[0] >= a2 )
    return v5[1];
  v5 = *a1;
  if ( (*a1)[4].n64_f32[0] <= a2 )
  {
    return v5[1];
  }
  else
  {
    v6 = (int)&v4[-1].n64_i32[1] + 3;
    v7 = v4 == (__n64 *)2;
    v8 = 0;
    if ( v4 != (__n64 *)2 )
      v7 = v4 == (__n64 *)1;
    if ( !v7 )
    {
      v8 = 0;
      do
      {
        if ( *(float *)(sub_608DE61C(a1, (v8 + v6) / 2) + 32) < a2 )
          v8 = (v8 + v6) / 2;
        else
          v6 = (v8 + v6) / 2;
        v9 = v8 == v6 - 1;
        if ( v8 != v6 - 1 )
          v9 = v8 == v6;
      }
      while ( !v9 );
    }
    v10 = (float *)sub_608DE61C(a1, v8);
    v11 = (float *)sub_608DE61C(a1, v6);
    v12 = v10[8];
    v13 = a2 - v12;
    v14 = 1.0 / (float)(v11[8] - v12);
    v15 = (float)(v13 * v13) * v14;
    v16 = v13 * (float)(v14 * v15);
    v17 = (float)(v14 * v15) * 3.0;
    v18 = v16 - (float)(v15 + v15);
    v19 = v16 - v15;
    v20 = (float)(v14 * v16) + (float)(v14 * v16);
    v21 = v13 + v18;
    v22 = v17 - v20;
    v23 = (float)(v20 - v17) + 1.0;
    result.n64_f32[0] = (float)((float)((float)(v10[2] * v23) + (float)(v11[2] * (float)(v17 - v20)))
                              + (float)(v10[5] * v21))
                      + (float)(v19 * v11[5]);
    result.n64_f32[1] = (float)((float)((float)(v10[3] * v23) + (float)(v11[3] * v22)) + (float)(v21 * v10[6]))
                      + (float)(v19 * v11[6]);
  }
  return result;
}
