/* sub_606BA5F4
 * address: 0x606BA5F4   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606BA5F4(int a1, float *a2, int a3)
{
  int v4; // r7
  int v5; // r3
  int v6; // r1
  int v7; // r1
  float v8; // s20
  int v9; // r4
  int v10; // r10
  int v11; // r6
  float v12; // s22
  int v13; // r0
  float *v14; // r2
  float v15; // r5
  float *v16; // r0
  float v17; // r7
  float v18; // s16
  float v19; // s18
  float result; // s0
  int v21; // r0
  int v22; // r0
  float v23; // s20
  unsigned int v24; // r0
  int v25; // r1
  float *v26; // r1

  v4 = -1;
  v5 = -1;
  v6 = FIELD_U32(a1, 6120);
  if ( v6 < 1 )
    v4 = 0x1FFF;
  v7 = v4 + v6;
  if ( a3 )
  {
    v8 = 0.0;
    v9 = 0;
    if ( v7 < 1 )
      v5 = 0x1FFF;
    v10 = a1 + 6256;
    v11 = v5 + v7;
    v12 = (float)a3 * 52.0;
    while ( 1 )
    {
      v13 = 0;
      if ( (unsigned int)v11 <= 0x2000 )
        v13 = v11;
      v14 = (float *)(v10 + 8 * v13);
      v15 = *v14;
      if ( (unsigned int)v7 > 0x2000 )
        v7 = 0;
      v16 = (float *)(v10 + 8 * v7);
      v17 = v14[1];
      v18 = v15 - *v16;
      v19 = v17 - v16[1];
      result = (float)(v19 * v19) + (float)(v18 * v18);
      v8 = v8 + sqrtf(result);
      if ( v8 >= v12 )
        break;
      v21 = -1;
      ++v9;
      v7 = v11;
      if ( v11 < 1 )
        v21 = 0x1FFF;
      v11 += v21;
      if ( v9 >= 0x2000 )
        return result;
    }
    v23 = v12 - v8;
    if ( v23 == 0.0 )
    {
      *a2 = v15;
      a2[1] = v17;
    }
    else
    {
      v24 = sub_6000F7B8(v19, v18);
      v25 = (v24 >> 20) & 0xFF0;
      v24 &= 0xFFFFFFu;
      v26 = (float *)((char *)sinLutTable + v25);
      a2[1] = v17 - (float)(v23 * (float)(v26[2] + (float)((float)((float)v24 * v26[3]) * 0.000000059605)));
      result = *v26 + (float)((float)((float)v24 * v26[1]) * 0.000000059605);
      *a2 = v15 - (float)(v23 * result);
    }
  }
  else
  {
    if ( (unsigned int)v7 > 0x2000 )
      v7 = 0;
    v22 = a1 + 8 * v7;
    *a2 = FIELD_F32(v22, 6256);
    a2[1] = FIELD_F32(v22, 6260);
  }
  return result;
}
