/* sub_601B71A8
 * address: 0x601B71A8   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601B71A8(float a1, int a2, float *a3)
{
  int v5; // r0
  int v6; // r0
  float *v7; // r7
  unsigned int v8; // r1
  float v9; // s18
  float *v10; // r5
  int v11; // r4
  float *v12; // r0
  bool v13; // zf
  float *v14; // r0
  bool v15; // zf
  float *v16; // r0
  bool v17; // zf
  float *v18; // r0
  bool v19; // zf
  float *v20; // r0
  bool v21; // zf
  float *v22; // r0
  float v23; // s6
  float v24; // s2
  float v25; // s20
  float v26; // s22
  float v27; // s24
  float v28; // s26
  float v29; // s30
  float v30; // s28
  float v31; // s0
  float v32; // s0
  int v34; // [sp+4h] [bp-84h] BYREF
  int v35; // [sp+8h] [bp-80h]
  int v36; // [sp+Ch] [bp-7Ch]
  _DWORD v37[3]; // [sp+10h] [bp-78h] BYREF
  int v38; // [sp+1Ch] [bp-6Ch] BYREF
  int v39; // [sp+20h] [bp-68h]
  int v40; // [sp+24h] [bp-64h]

  v5 = sub_601CF9C0(dword_60C8AEF0);
  v38 = -1;
  v39 = -1;
  v40 = -1;
  sub_6019EC34(&v38, (_DWORD *)(v5 + 1032));
  v37[0] = v38;
  v37[1] = v39;
  v37[2] = v40;
  sub_601DAE88(v37);
  v6 = sub_601DFFE4(v37);
  v7 = (float *)v6;
  v8 = 4;
  if ( v38 == 3 )
    v8 = 2;
  v9 = 0.0;
  v10 = (float *)sub_60178694(v6, v8);
  if ( a1 >= 0.0 )
  {
    v11 = (int)v7;
    do
    {
      v34 = -1;
      v35 = -1;
      v36 = -1;
      v12 = (float *)sub_60178694(v11, 0);
      v7 = v12;
      v13 = v12 == 0;
      if ( v12 )
        v13 = v12 == v10;
      if ( !v13 )
      {
        v34 = *((_DWORD *)v12 + 21);
        v35 = *((_DWORD *)v12 + 22);
        v36 = *((_DWORD *)v12 + 24);
        if ( sub_601DADDC(&v34) != 1 )
          goto LABEL_31;
      }
      v14 = (float *)sub_60178694(v11, 1u);
      v7 = v14;
      v15 = v14 == 0;
      if ( v14 )
        v15 = v14 == v10;
      if ( !v15 )
      {
        v34 = *((_DWORD *)v14 + 21);
        v35 = *((_DWORD *)v14 + 22);
        v36 = *((_DWORD *)v14 + 24);
        if ( sub_601DADDC(&v34) != 1 )
          goto LABEL_31;
      }
      v16 = (float *)sub_60178694(v11, 2u);
      v7 = v16;
      v17 = v16 == 0;
      if ( v16 )
        v17 = v16 == v10;
      if ( !v17 )
      {
        v34 = *((_DWORD *)v16 + 21);
        v35 = *((_DWORD *)v16 + 22);
        v36 = *((_DWORD *)v16 + 24);
        if ( sub_601DADDC(&v34) != 1 )
          goto LABEL_31;
      }
      v18 = (float *)sub_60178694(v11, 3u);
      v7 = v18;
      v19 = v18 == 0;
      if ( v18 )
        v19 = v18 == v10;
      if ( !v19 )
      {
        v34 = *((_DWORD *)v18 + 21);
        v35 = *((_DWORD *)v18 + 22);
        v36 = *((_DWORD *)v18 + 24);
        if ( sub_601DADDC(&v34) != 1 )
          goto LABEL_31;
      }
      v20 = (float *)sub_60178694(v11, 4u);
      v7 = v20;
      v21 = v20 == 0;
      if ( v20 )
        v21 = v20 == v10;
      if ( v21
        || (v34 = *((_DWORD *)v20 + 21),
            v35 = *((_DWORD *)v20 + 22),
            v36 = *((_DWORD *)v20 + 24),
            sub_601DADDC(&v34) == 1) )
      {
        v22 = (float *)sub_60178694(v11, 5u);
        v7 = v22;
        if ( !v22 || v22 == v10 )
        {
          v7 = (float *)v11;
        }
        else
        {
          v34 = *((_DWORD *)v22 + 21);
          v35 = *((_DWORD *)v22 + 22);
          v36 = *((_DWORD *)v22 + 24);
          if ( sub_601DADDC(&v34) )
            v7 = (float *)v11;
          else
            v10 = (float *)v11;
        }
      }
      else
      {
LABEL_31:
        v10 = (float *)v11;
      }
      a1 = a1 - v9;
      v23 = v7[18] - v10[18];
      v24 = v7[20] - v10[20];
      v9 = sqrtf(
             (float)((float)((float)(v7[19] - v10[19]) * (float)(v7[19] - v10[19])) + (float)(v23 * v23))
           + (float)(v24 * v24));
      v11 = (int)v7;
    }
    while ( a1 >= v9 );
  }
  v25 = v7[18];
  v26 = v7[19];
  v27 = v7[20];
  v28 = v10[19] - v26;
  v29 = v10[18] - v25;
  v30 = v10[20] - v27;
  v31 = sqrtf((float)((float)(v28 * v28) + (float)(v29 * v29)) + (float)(v30 * v30));
  if ( v31 > 0.0 )
  {
    v32 = 1.0 / v31;
    v30 = v30 * v32;
    v28 = v28 * v32;
    v29 = v29 * v32;
  }
  *a3 = v25 + (float)((float)(v9 - a1) * v29);
  a3[1] = v26 + (float)((float)(v9 - a1) * v28);
  a3[2] = v27 + (float)((float)(v9 - a1) * v30);
  return v9 - a1;
}
