/* sub_604D2C94
 * address: 0x604D2C94   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D2C94(int result)
{
  int v1; // r4
  _BYTE *v2; // lr
  int *v3; // r1
  _DWORD *v4; // r10
  int *v5; // r8
  _DWORD *v6; // r2
  _DWORD *v7; // r12
  int *v8; // r9
  int *v9; // r11
  _DWORD *v10; // r6
  int v11; // r7
  int v12; // r3
  bool v13; // vf
  int v14; // r7
  int v15; // r5
  int v16; // r7
  int v17; // r3
  int v18; // r7
  int v19; // r5
  int v20; // r7
  int v21; // r3
  int v22; // r7
  int v23; // r5
  int v24; // r7
  int v25; // r3
  int v26; // r7
  int v27; // r5
  int v28; // r7
  int v29; // r3
  int v30; // r7
  _BYTE *v31; // lr
  int v32; // t1
  int v33; // r4
  int v34; // r5
  int v35; // r1
  int v36; // r3
  int v37; // r1
  int v38; // r1
  _DWORD **v39; // [sp+0h] [bp-28h]

  v1 = 0;
  v2 = (_BYTE *)dword_60C99DEC;
  FIELD_U32(result, 20076) = 0;
  v3 = (int *)(result + 20076);
  FIELD_U32(result, 20072) = 0;
  v4 = (_DWORD *)(result + 20072);
  FIELD_U32(result, 20188) = 0;
  v5 = (int *)(result + 20188);
  FIELD_U32(result, 20184) = 0;
  v6 = (_DWORD *)(result + 20184);
  v7 = (_DWORD *)(result + 20176);
  v8 = (int *)(result + 20180);
  v9 = (int *)(result + 20068);
  v10 = (_DWORD *)(result + 21864);
  v39 = (_DWORD **)(result + 20064);
  if ( v2[36] )
  {
    ++*v10;
    if ( *v9 >= 1 )
    {
      *v3 = 1;
      **v39 = FIELD_U32(result, 20048);
      v1 = *v5;
    }
    v11 = *v8;
    if ( v1 < *v8 )
    {
      *v5 = v1 + 1;
      v12 = *v6 + v1;
      v13 = __OFSUB__(v12, v11);
      v14 = v12 - v11;
      if ( v14 < 0 != v13 )
        v14 = *v6 + v1;
      *(_DWORD *)(*v7 + 4 * v14) = v2 + 36;
    }
  }
  if ( v2[108] )
  {
    ++*v10;
    v15 = *v9;
    v16 = *v3;
    if ( *v3 < *v9 )
    {
      *v3 = v16 + 1;
      v17 = *v4 + v16;
      v18 = v17 - v15;
      if ( v17 < v15 )
        v18 = v17;
      (*v39)[v18] = FIELD_U32(result, 20052);
    }
    v19 = *v8;
    v20 = *v5;
    if ( *v5 < *v8 )
    {
      *v5 = v20 + 1;
      v21 = *v6 + v20;
      v22 = v21 - v19;
      if ( v21 < v19 )
        v22 = v21;
      *(_DWORD *)(*v7 + 4 * v22) = v2 + 108;
    }
  }
  if ( v2[180] )
  {
    ++*v10;
    v23 = *v9;
    v24 = *v3;
    if ( *v3 < *v9 )
    {
      *v3 = v24 + 1;
      v25 = *v4 + v24;
      v26 = v25 - v23;
      if ( v25 < v23 )
        v26 = v25;
      (*v39)[v26] = FIELD_U32(result, 20056);
    }
    v27 = *v8;
    v28 = *v5;
    if ( *v5 < *v8 )
    {
      *v5 = v28 + 1;
      v29 = *v6 + v28;
      v30 = v29 - v27;
      if ( v29 < v27 )
        v30 = v29;
      *(_DWORD *)(*v7 + 4 * v30) = v2 + 180;
    }
  }
  v32 = (unsigned __int8)v2[252];
  v31 = v2 + 252;
  if ( v32 )
  {
    ++*v10;
    v33 = *v9;
    v34 = *v3;
    if ( *v3 < *v9 )
    {
      *v3 = v34 + 1;
      v35 = *v4 + v34;
      v36 = v35 - v33;
      if ( v35 < v33 )
        v36 = *v4 + v34;
      (*v39)[v36] = FIELD_U32(result, 20060);
    }
    result = *v8;
    v37 = *v5;
    if ( *v5 < *v8 )
    {
      *v5 = v37 + 1;
      v38 = *v6 + v37;
      v13 = __OFSUB__(v38, result);
      result = v38 - result;
      if ( result < 0 != v13 )
        result = v38;
      *(_DWORD *)(*v7 + 4 * result) = v31;
    }
  }
  return result;
}
