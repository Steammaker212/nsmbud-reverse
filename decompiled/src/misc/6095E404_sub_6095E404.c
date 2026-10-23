/* sub_6095E404
 * address: 0x6095E404   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095E404(_DWORD *a1, float *a2, unsigned int a3, int a4)
{
  int v4; // r10
  int v5; // lr
  int v6; // r12
  int v7; // r6
  int v8; // r11
  unsigned int v9; // r7
  unsigned int v10; // r5
  float *v11; // r4
  float *v12; // r5
  float v13; // s2
  float v14; // s4
  float v15; // s0
  float v16; // s6
  float *v17; // r5
  float v18; // s8
  float *v19; // r5
  float *v20; // r7
  float v21; // s0
  float v22; // s0
  float v23; // s0
  float v24; // s0
  float v25; // s0

  v4 = a1[114];
  if ( v4 < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  if ( a3 >= 3 )
    a3 = 0;
  do
  {
    if ( (a4 & (1 << v5)) == 0 )
    {
      v7 = a1[156];
      if ( a1[155] > (unsigned int)v5 )
        v7 += 1396 * v5;
      v8 = FIELD_U32(v7, 988);
      if ( v8 < 1 )
      {
LABEL_19:
        v6 |= 1 << v5;
        v20 = (float *)(v7 + 24 * a3);
        if ( v20[205] > *a2 )
          v20[205] = *a2;
        v21 = a2[1];
        if ( v20[206] > v21 )
          v20[206] = v21;
        v22 = a2[2];
        if ( v20[207] > v22 )
          v20[207] = v22;
        v23 = a2[3];
        if ( v20[208] < v23 )
          v20[208] = v23;
        v24 = a2[4];
        if ( v20[209] < v24 )
          v20[209] = v24;
        v25 = a2[5];
        if ( v20[210] < v25 )
          v20[210] = v25;
        v4 = a1[114];
      }
      else
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = 0;
          v11 = a2 + 3;
          if ( v9 < 0x18 )
            v10 = v9;
          v12 = (float *)(v7 + 16 * v10);
          v13 = v12[249];
          v14 = v12[250];
          v15 = v12[248];
          v16 = v12[251];
          v17 = a2 + 3;
          if ( v13 > 0.0 )
            v17 = a2;
          v18 = v17[1];
          v19 = a2 + 3;
          if ( v14 > 0.0 )
            v19 = a2;
          if ( v15 > 0.0 )
            v11 = a2;
          if ( (float)((float)((float)((float)(v13 * v18) + (float)(v15 * *v11)) + (float)(v14 * v19[2])) - v16) > 0.0 )
            break;
          if ( (int)++v9 >= v8 )
            goto LABEL_19;
        }
      }
    }
    ++v5;
  }
  while ( v5 < v4 );
  return v6;
}
