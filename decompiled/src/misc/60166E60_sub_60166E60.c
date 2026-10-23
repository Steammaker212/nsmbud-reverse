/* sub_60166E60
 * address: 0x60166E60   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_60166E60(float *a1, float *a2, int a3, int a4, __n64 result, int a6)
{
  signed int v10; // r7
  signed int v11; // r5
  unsigned int v12; // r0
  float v13; // s2
  float v14; // s6
  float v15; // s4
  unsigned int v16; // r0
  float v17; // s2
  float v18; // s8
  float v19; // s4
  float v20; // s6
  float v21; // s0
  unsigned int v22; // r0
  unsigned int v23; // r0
  float *v24; // r1
  unsigned int v25; // r3
  float *v26; // r0
  float v27; // s3
  float v28; // s10
  float v29; // s12
  float v30; // s8
  float v31; // s14
  float v32; // s5
  float v33; // [sp+0h] [bp-28h] BYREF
  float v34; // [sp+4h] [bp-24h]

  if ( !a4 && a6 != 1 )
    return result;
  result.n64_f32[0] = a1[3] - a1[1];
  result.n64_f32[1] = a1[2] - *a1;
  if ( result.n64_f32[1] > 0.0001 || result.n64_f32[1] < -0.0001 )
  {
    if ( result.n64_f32[0] > 0.0001 || result.n64_f32[0] < -0.0001 )
    {
      v10 = sub_6000F7B8(result.n64_f32[0], result.n64_f32[1]);
      if ( a3 == 2 )
        goto LABEL_24;
    }
    else
    {
      v10 = 0x80000000;
      if ( result.n64_f32[1] >= 0.0 )
        v10 = 0;
      if ( a3 == 2 )
      {
LABEL_24:
        v11 = v10 ^ 0x80000000;
        v16 = v10 ^ 0x80000000;
        if ( v10 >= 0 )
        {
          if ( !v10 )
            return result;
          v16 = -v11;
        }
        if ( v16 <= 0x20000000 )
        {
          sub_60153134((int)a2, (int)&v33);
          v17 = a2[2];
          v18 = v34;
          v19 = *a2;
          v20 = v33;
          v21 = a2[1];
LABEL_39:
          v13 = v18 - v17;
          result.n64_f32[0] = v20 - v21;
          v15 = v20 - v19;
          v14 = v13;
          goto LABEL_40;
        }
        return result;
      }
    }
  }
  else
  {
    v10 = -1073741824;
    if ( result.n64_f32[0] >= 0.0 )
      v10 = 0x40000000;
    if ( a3 == 2 )
      goto LABEL_24;
  }
  if ( a3 == 1 )
  {
    v11 = v10 + 0x40000000;
    v22 = v10 + 0x40000000;
    if ( v10 + 0x40000000 < 0 )
    {
      if ( v10 == 0x40000000 )
        return result;
      v22 = -1073741824 - v10;
    }
    if ( v22 > 0x20000000 )
      return result;
    sub_60153190((int)a2, (int)&v33);
    v13 = v34 - a2[1];
    v14 = v34 - *a2;
    result.n64_f32[0] = v33 - a2[2];
    v15 = result.n64_f32[0];
LABEL_40:
    v24 = (float *)((char *)sinLutTable + (((unsigned int)v11 >> 20) & 0xFF0));
    v25 = (int)(float)((float)v11 + (float)v11);
    v26 = (float *)((char *)sinLutTable + ((v25 >> 20) & 0xFF0));
    v27 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
    result.n64_f32[1] = (float)(v25 & 0xFFFFFF) * v26[3];
    v28 = *v24 + (float)(v24[1] * v27);
    v29 = v24[2] + (float)(v27 * v24[3]);
    v30 = v26[2] + (float)(result.n64_f32[1] * 0.000000059605);
    v31 = -v28;
    if ( a4 == 1 )
    {
      result.n64_f32[1] = (float)(v15 * v29) + (float)(v14 * v31);
      v32 = a1[1] + (float)((float)((float)(v14 * v29) + (float)(v15 * v28)) * v30);
      *a1 = *a1 + (float)(result.n64_f32[1] * v30);
      a1[1] = v32;
    }
    if ( a6 == 1 )
    {
      result.n64_f32[1] = a1[3] + (float)((float)((float)(v13 * v29) + (float)(result.n64_f32[0] * v28)) * v30);
      a1[2] = a1[2] + (float)((float)((float)(result.n64_f32[0] * v29) + (float)(v13 * v31)) * v30);
      a1[3] = result.n64_f32[1];
    }
    return result;
  }
  if ( !a3 )
  {
    v11 = v10 - 0x40000000;
    v12 = v10 - 0x40000000;
    if ( v10 - 0x40000000 < 0 )
    {
      if ( v10 == -1073741824 )
        return result;
      v12 = 0x40000000 - v10;
    }
    if ( v12 > 0x20000000 )
      return result;
    sub_60153190((int)a2, (int)&v33);
    v13 = v34 - *a2;
    result.n64_f32[0] = v33 - a2[2];
    v14 = v34 - a2[1];
    v15 = result.n64_f32[0];
    goto LABEL_40;
  }
  v23 = v10;
  if ( v10 < 0 )
  {
    if ( v10 == 0x80000000 )
      return result;
    v23 = -v10;
  }
  if ( v23 <= 0x20000000 )
  {
    sub_60153134((int)a2, (int)&v33);
    v17 = a2[2];
    v18 = v34;
    v21 = *a2;
    v20 = v33;
    v19 = a2[1];
    v11 = v10;
    goto LABEL_39;
  }
  return result;
}
