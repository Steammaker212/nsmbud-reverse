/* RectCollider_vf28
 * address: 0x601672FC   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall RectCollider_vf28(int a1, _BYTE *a2, float *a3)
{
  float *v6; // r0
  float v7; // s16
  float v8; // s18
  float v9; // s20
  float v10; // s22
  float v11; // s24
  float v12; // s26
  int v13; // r1
  float v14; // s0
  float v15; // s2
  signed int result; // r0
  int v17; // r3
  int v18; // r2
  float *v19; // r6
  float v20; // s12
  int v21; // s14
  float v22; // s4
  float v23; // s10
  float *v24; // r5
  float v25; // s6
  float v26; // s8
  unsigned int v27; // r6
  float *i; // r3
  float *v29; // r2
  float v30; // s4
  float v31; // s12
  int v32; // s14
  ColliderNodeUnk1 v33; // [sp+0h] [bp-58h] BYREF

  v6 = *(float **)(a1 + 152);
  v7 = FIELD_F32(a1, 128);
  v8 = FIELD_F32(a1, 132);
  v9 = FIELD_F32(a1, 172);
  v10 = FIELD_F32(a1, 176);
  v11 = *v6;
  v12 = v6[1];
  if ( a2 )
    *a2 = 0;
  ColliderNodeUnk1_ctor(&v33);
  v13 = FIELD_U32(a1, 348);
  if ( v13 < 1 )
    return 1;
  v14 = (float)(v12 + v10) + v8;
  v15 = (float)(v11 + v9) + v7;
  if ( a2 )
  {
    result = 0;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      v19 = *(float **)(a1 + 352);
      if ( v13 > (unsigned int)v18 )
        v19 = (float *)((char *)v19 + v17);
      v20 = v15 + v19[3];
      *(float *)&v21 = v14 + v19[4];
      v22 = v15 + v19[1];
      *(float *)&v33.field_4 = v14 + v19[2];
      v33.field_8 = v20;
      v33.field_C = v21;
      v23 = (float)((float)(a3[1] - *(float *)&v33.field_4) * (float)(v20 - v22))
          - (float)((float)(*a3 - v22) * (float)(*(float *)&v21 - *(float *)&v33.field_4));
      if ( v23 > 0.0 )
        break;
      if ( v23 <= 0.0001 && v23 >= -0.0001 )
      {
        *a2 = 1;
        v13 = FIELD_U32(a1, 348);
      }
      ++v18;
      v17 += 32;
      if ( v18 >= v13 )
        return 1;
    }
  }
  else
  {
    v24 = *(float **)(a1 + 352);
    v25 = *a3;
    v26 = a3[1];
    result = 0;
    v27 = 0;
    for ( i = v24; ; i += 8 )
    {
      v29 = v24;
      if ( v13 > v27 )
        v29 = i;
      v30 = v15 + v29[1];
      v31 = v15 + v29[3];
      *(float *)&v32 = v14 + v29[4];
      *(float *)&v33.field_4 = v14 + v29[2];
      v33.field_8 = v31;
      v33.field_C = v32;
      if ( (float)((float)((float)(v26 - *(float *)&v33.field_4) * (float)(v31 - v30))
                 - (float)((float)(v25 - v30) * (float)(*(float *)&v32 - *(float *)&v33.field_4))) > 0.0 )
        break;
      if ( (int)++v27 >= v13 )
        return 1;
    }
  }
  return result;
}
