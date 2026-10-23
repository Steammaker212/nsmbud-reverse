/* sub_601B7E90
 * address: 0x601B7E90   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B7E90(_DWORD *a1)
{
  _DWORD *v2; // r6
  int v3; // r8
  int v4; // r7
  int v5; // r11
  int v6; // r10
  int v7; // r9
  int v8; // r1
  int v9; // r2
  bool v10; // vf
  int v11; // r1
  _DWORD *v12; // r5
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  bool v19; // zf
  int *v20; // r0
  int v21; // r1
  int v22; // r0
  float v23; // s0
  float v24; // s4
  int result; // r0
  int v26; // [sp+0h] [bp-28h]

  v2 = a1 + 287;
  v3 = a1[287];
  v4 = a1[288];
  v5 = a1[289];
  v6 = a1[290];
  v7 = a1[291];
  v26 = a1[292];
  if ( (int)a1[286] > 0 )
  {
    v8 = a1[284];
    v9 = a1[285];
    v10 = __OFSUB__(v9, v8);
    v11 = v9 - v8;
    if ( v11 < 0 != v10 )
      v11 = a1[285];
    v12 = (_DWORD *)(a1[283] + 60 * v11);
    sub_6019EC34(v2, v12);
    sub_6019EC34(a1 + 290, v12 + 3);
    a1[293] = v12[6];
    a1[294] = v12[7];
    a1[295] = v12[8];
    a1[296] = v12[9];
    a1[297] = v12[10];
    a1[298] = v12[11];
    v13 = v12[12];
    v14 = v12[13];
    a1[301] = v12[14];
    a1[300] = v14;
    a1[299] = v13;
    v15 = a1[285] + 1;
    if ( v15 >= a1[284] )
      v15 = 0;
    a1[285] = v15;
    --a1[286];
  }
  sub_6019EC34(a1 + 271, v2);
  if ( v3 == a1[287] )
  {
    v16 = a1[288];
    v17 = v4 == v16;
    if ( v4 == v16 )
      v17 = v5 == a1[289];
    if ( v17 )
    {
      v18 = a1[290];
      v19 = v6 == v18;
      if ( v6 == v18 )
        v19 = v7 == a1[291];
      if ( v19 && v26 == a1[292] )
      {
        v20 = a1 + 277;
        v21 = a1[277];
LABEL_20:
        *v20 = v21 | 1;
        goto LABEL_21;
      }
    }
  }
  v20 = a1 + 277;
  v21 = a1[277];
  if ( (v21 & 2) != 0 && a1[299] == 1 )
    goto LABEL_20;
LABEL_21:
  v22 = sub_601CF9C0(dword_60C8AEF0);
  v23 = FIELD_F32(v22, 80) - FIELD_F32(v22, 92);
  v24 = FIELD_F32(v22, 88) - FIELD_F32(v22, 100);
  if ( (float)((float)((float)((float)(FIELD_F32(v22, 84) - FIELD_F32(v22, 96))
                             * (float)(FIELD_F32(v22, 84) - FIELD_F32(v22, 96)))
                     + (float)(v23 * v23))
             + (float)(v24 * v24)) > 0.0 )
    a1[255] = FIELD_U32(v22, 180);
  a1[275] = a1[274];
  result = sub_601E0070(a1 + 271, a1 + 290);
  a1[274] = result;
  return result;
}
