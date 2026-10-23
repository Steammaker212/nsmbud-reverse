/* sub_601C6300
 * address: 0x601C6300   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601C6300(float *a1, float a2)
{
  int v4; // r4
  float *v5; // r7
  float *v6; // r5
  float v7; // s6
  float v8; // s2
  float v9; // s18
  float *v10; // r4
  float *v11; // r0
  bool v12; // zf
  float *v13; // r0
  bool v14; // zf
  float *v15; // r0
  bool v16; // zf
  float *v17; // r0
  bool v18; // zf
  float *v19; // r0
  bool v20; // zf
  float *v21; // r0
  float v22; // s6
  float v23; // s2
  float v24; // s20
  float v25; // s22
  float v26; // s24
  float v27; // s26
  float v28; // s30
  float v29; // s28
  float v30; // s0
  float v31; // s0
  int v33; // [sp+0h] [bp-78h] BYREF
  int v34; // [sp+4h] [bp-74h]
  int v35; // [sp+8h] [bp-70h]
  _DWORD v36[27]; // [sp+Ch] [bp-6Ch] BYREF

  v4 = sub_601CF9C0(dword_60C8AEF0);
  memset(v36, 255, 12);
  sub_6019EC34(v36, (_DWORD *)(v4 + 1032));
  v5 = (float *)sub_601DFFE4(v36);
  v6 = (float *)sub_60178694((int)v5, FIELD_U32(v4, 1092));
  v7 = FIELD_F32(v4, 80) - v5[18];
  v8 = FIELD_F32(v4, 88) - v5[20];
  v9 = sqrtf(
         (float)((float)((float)(FIELD_F32(v4, 84) - v5[19]) * (float)(FIELD_F32(v4, 84) - v5[19]))
               + (float)(v7 * v7))
       + (float)(v8 * v8));
  if ( v9 <= a2 )
  {
    do
    {
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v11 = (float *)sub_60178694((int)v5, 0);
      v10 = v11;
      v12 = v11 == 0;
      if ( v11 )
        v12 = v11 == v6;
      if ( !v12 )
      {
        v33 = *((_DWORD *)v11 + 21);
        v34 = *((_DWORD *)v11 + 22);
        v35 = *((_DWORD *)v11 + 24);
        if ( sub_601DADDC(&v33) != 1 )
          goto LABEL_30;
      }
      v13 = (float *)sub_60178694((int)v5, 1u);
      v10 = v13;
      v14 = v13 == 0;
      if ( v13 )
        v14 = v13 == v6;
      if ( !v14 )
      {
        v33 = *((_DWORD *)v13 + 21);
        v34 = *((_DWORD *)v13 + 22);
        v35 = *((_DWORD *)v13 + 24);
        if ( sub_601DADDC(&v33) != 1 )
          goto LABEL_30;
      }
      v15 = (float *)sub_60178694((int)v5, 2u);
      v10 = v15;
      v16 = v15 == 0;
      if ( v15 )
        v16 = v15 == v6;
      if ( !v16 )
      {
        v33 = *((_DWORD *)v15 + 21);
        v34 = *((_DWORD *)v15 + 22);
        v35 = *((_DWORD *)v15 + 24);
        if ( sub_601DADDC(&v33) != 1 )
          goto LABEL_30;
      }
      v17 = (float *)sub_60178694((int)v5, 3u);
      v10 = v17;
      v18 = v17 == 0;
      if ( v17 )
        v18 = v17 == v6;
      if ( !v18 )
      {
        v33 = *((_DWORD *)v17 + 21);
        v34 = *((_DWORD *)v17 + 22);
        v35 = *((_DWORD *)v17 + 24);
        if ( sub_601DADDC(&v33) != 1 )
          goto LABEL_30;
      }
      v19 = (float *)sub_60178694((int)v5, 4u);
      v10 = v19;
      v20 = v19 == 0;
      if ( v19 )
        v20 = v19 == v6;
      if ( v20
        || (v33 = *((_DWORD *)v19 + 21),
            v34 = *((_DWORD *)v19 + 22),
            v35 = *((_DWORD *)v19 + 24),
            sub_601DADDC(&v33) == 1) )
      {
        v21 = (float *)sub_60178694((int)v5, 5u);
        v10 = v21;
        if ( !v21 || v21 == v6 )
        {
          v10 = v5;
        }
        else
        {
          v33 = *((_DWORD *)v21 + 21);
          v34 = *((_DWORD *)v21 + 22);
          v35 = *((_DWORD *)v21 + 24);
          if ( sub_601DADDC(&v33) )
            v10 = v5;
          else
            v6 = v5;
        }
      }
      else
      {
LABEL_30:
        v6 = v5;
      }
      a2 = a2 - v9;
      v22 = v10[18] - v6[18];
      v23 = v10[20] - v6[20];
      v9 = sqrtf(
             (float)((float)((float)(v10[19] - v6[19]) * (float)(v10[19] - v6[19])) + (float)(v22 * v22))
           + (float)(v23 * v23));
      v5 = v10;
    }
    while ( a2 >= v9 );
  }
  else
  {
    v10 = v5;
  }
  v24 = v10[18];
  v25 = v10[19];
  v26 = v10[20];
  v27 = v6[19] - v25;
  v28 = v6[18] - v24;
  v29 = v6[20] - v26;
  v30 = sqrtf((float)((float)(v27 * v27) + (float)(v28 * v28)) + (float)(v29 * v29));
  if ( v30 > 0.0 )
  {
    v31 = 1.0 / v30;
    v29 = v29 * v31;
    v27 = v27 * v31;
    v28 = v28 * v31;
  }
  *a1 = v24 + (float)((float)(v9 - a2) * v28);
  a1[1] = v25 + (float)((float)(v9 - a2) * v27);
  a1[2] = v26 + (float)((float)(v9 - a2) * v29);
  return v9 - a2;
}
