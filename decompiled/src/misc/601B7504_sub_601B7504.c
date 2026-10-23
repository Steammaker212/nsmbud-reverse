/* sub_601B7504
 * address: 0x601B7504   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601B7504(float a1, int a2, float *a3, unsigned int a4)
{
  int v7; // r4
  int v8; // r0
  float *v9; // r7
  float *v10; // r5
  float v11; // s6
  float v12; // s2
  float v13; // s18
  float *v14; // r4
  float *v15; // r0
  bool v16; // zf
  float *v17; // r0
  bool v18; // zf
  float *v19; // r0
  bool v20; // zf
  float *v21; // r0
  bool v22; // zf
  float *v23; // r0
  bool v24; // zf
  float *v25; // r0
  float v26; // s6
  float v27; // s2
  float v28; // s20
  float v29; // s22
  float v30; // s24
  float v31; // s26
  float v32; // s30
  float v33; // s28
  float v34; // s0
  float v35; // s0
  int v37; // [sp+0h] [bp-78h] BYREF
  int v38; // [sp+4h] [bp-74h]
  int v39; // [sp+8h] [bp-70h]
  _DWORD v40[27]; // [sp+Ch] [bp-6Ch] BYREF

  v7 = sub_601CF9C0(dword_60C8AEF0);
  memset(v40, 255, 12);
  sub_6019EC34(v40, (_DWORD *)(v7 + 1032));
  v8 = sub_601DFFE4(v40);
  v9 = (float *)v8;
  if ( a4 == 6 )
    a4 = FIELD_U32(v7, 1092);
  v10 = (float *)sub_60178694(v8, a4);
  v11 = FIELD_F32(v7, 80) - v9[18];
  v12 = FIELD_F32(v7, 88) - v9[20];
  v13 = sqrtf(
          (float)((float)((float)(FIELD_F32(v7, 84) - v9[19]) * (float)(FIELD_F32(v7, 84) - v9[19]))
                + (float)(v11 * v11))
        + (float)(v12 * v12));
  if ( v13 <= a1 )
  {
    do
    {
      v37 = -1;
      v38 = -1;
      v39 = -1;
      v15 = (float *)sub_60178694((int)v9, 0);
      v14 = v15;
      v16 = v15 == 0;
      if ( v15 )
        v16 = v15 == v10;
      if ( !v16 )
      {
        v37 = *((_DWORD *)v15 + 21);
        v38 = *((_DWORD *)v15 + 22);
        v39 = *((_DWORD *)v15 + 24);
        if ( sub_601DADDC(&v37) != 1 )
          goto LABEL_32;
      }
      v17 = (float *)sub_60178694((int)v9, 1u);
      v14 = v17;
      v18 = v17 == 0;
      if ( v17 )
        v18 = v17 == v10;
      if ( !v18 )
      {
        v37 = *((_DWORD *)v17 + 21);
        v38 = *((_DWORD *)v17 + 22);
        v39 = *((_DWORD *)v17 + 24);
        if ( sub_601DADDC(&v37) != 1 )
          goto LABEL_32;
      }
      v19 = (float *)sub_60178694((int)v9, 2u);
      v14 = v19;
      v20 = v19 == 0;
      if ( v19 )
        v20 = v19 == v10;
      if ( !v20 )
      {
        v37 = *((_DWORD *)v19 + 21);
        v38 = *((_DWORD *)v19 + 22);
        v39 = *((_DWORD *)v19 + 24);
        if ( sub_601DADDC(&v37) != 1 )
          goto LABEL_32;
      }
      v21 = (float *)sub_60178694((int)v9, 3u);
      v14 = v21;
      v22 = v21 == 0;
      if ( v21 )
        v22 = v21 == v10;
      if ( !v22 )
      {
        v37 = *((_DWORD *)v21 + 21);
        v38 = *((_DWORD *)v21 + 22);
        v39 = *((_DWORD *)v21 + 24);
        if ( sub_601DADDC(&v37) != 1 )
          goto LABEL_32;
      }
      v23 = (float *)sub_60178694((int)v9, 4u);
      v14 = v23;
      v24 = v23 == 0;
      if ( v23 )
        v24 = v23 == v10;
      if ( v24
        || (v37 = *((_DWORD *)v23 + 21),
            v38 = *((_DWORD *)v23 + 22),
            v39 = *((_DWORD *)v23 + 24),
            sub_601DADDC(&v37) == 1) )
      {
        v25 = (float *)sub_60178694((int)v9, 5u);
        v14 = v25;
        if ( !v25 || v25 == v10 )
        {
          v14 = v9;
        }
        else
        {
          v37 = *((_DWORD *)v25 + 21);
          v38 = *((_DWORD *)v25 + 22);
          v39 = *((_DWORD *)v25 + 24);
          if ( sub_601DADDC(&v37) )
            v14 = v9;
          else
            v10 = v9;
        }
      }
      else
      {
LABEL_32:
        v10 = v9;
      }
      a1 = a1 - v13;
      v26 = v14[18] - v10[18];
      v27 = v14[20] - v10[20];
      v13 = sqrtf(
              (float)((float)((float)(v14[19] - v10[19]) * (float)(v14[19] - v10[19])) + (float)(v26 * v26))
            + (float)(v27 * v27));
      v9 = v14;
    }
    while ( a1 >= v13 );
  }
  else
  {
    v14 = v9;
  }
  v28 = v14[18];
  v29 = v14[19];
  v30 = v14[20];
  v31 = v10[19] - v29;
  v32 = v10[18] - v28;
  v33 = v10[20] - v30;
  v34 = sqrtf((float)((float)(v31 * v31) + (float)(v32 * v32)) + (float)(v33 * v33));
  if ( v34 > 0.0 )
  {
    v35 = 1.0 / v34;
    v33 = v33 * v35;
    v31 = v31 * v35;
    v32 = v32 * v35;
  }
  *a3 = v28 + (float)((float)(v13 - a1) * v32);
  a3[1] = v29 + (float)((float)(v13 - a1) * v31);
  a3[2] = v30 + (float)((float)(v13 - a1) * v33);
  return v13 - a1;
}
