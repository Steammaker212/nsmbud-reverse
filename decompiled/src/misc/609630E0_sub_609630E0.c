/* sub_609630E0
 * address: 0x609630E0   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609630E0(_DWORD *a1, int a2)
{
  unsigned int v4; // r1
  unsigned int v5; // r0
  int v6; // r11
  unsigned int v7; // r5
  int v8; // r6
  _DWORD *v9; // r1
  int v10; // r0
  _DWORD *v11; // r7
  unsigned int v12; // r2
  int *v13; // r1
  int v14; // r0
  int *v15; // r2
  int v16; // r7
  bool v17; // zf
  unsigned int v18; // r0
  _DWORD *v19; // r0
  unsigned int v20; // r1
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r1
  _DWORD *result; // r0

  v4 = 0;
  a1[2] = 0;
  v5 = a1[9];
  if ( v5 < 2 )
    v4 = v5;
  if ( (int)a1[3 * v4 + 5] >= 1 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = 0;
      v9 = &a1[3 * ((v5 & 1) == 0)];
      v11 = v9 + 5;
      v10 = v9[5];
      if ( v10 <= 15 )
      {
        v12 = v9[3];
        v13 = (int *)v9[4];
        if ( v12 > v10 )
          v13 += v10;
        v8 = *v13;
        memset(*(void **)(*v13 + 4), 0, 12 * *(_DWORD *)*v13);
        FIELD_U32(v8, 8) = 0;
        ++*v11;
      }
      v14 = a1[2];
      if ( v14 > 15 )
        break;
      v15 = (int *)a1[1];
      if ( *a1 > (unsigned int)v14 )
        v15 += v14;
      v16 = *v15;
      memset(*(void **)(*v15 + 4), 0, 12 * *(_DWORD *)*v15);
      FIELD_U32(v16, 8) = 0;
      v17 = v8 == 0;
      if ( v8 )
        v17 = v16 == 0;
      ++a1[2];
      if ( v17 )
        break;
      v18 = a1[9];
      if ( v18 >= 2 )
        v18 = 0;
      v19 = &a1[3 * v18];
      v20 = v19[3];
      v21 = (_DWORD *)v19[4];
      if ( v20 > v7 )
        v21 = (_DWORD *)((char *)v21 + v6);
      sub_60963460(v21, v8, v16, *v21, a2);
      if ( !FIELD_U32(v8, 8) )
      {
        v22 = &a1[3 * ((a1[9] & 1) == 0)];
        --v22[5];
        --a1[2];
      }
      v5 = a1[9];
      v23 = 0;
      ++v7;
      v6 += 4;
      if ( v5 < 2 )
        v23 = a1[9];
    }
    while ( (signed int)v7 < a1[3 * v23 + 5] );
    v5 = a1[9];
  }
  v24 = sub_60963754(a1, &a1[(((v5 & 1) == 0) | (2 * ((v5 & 1) == 0))) + 3]);
  v25 = a1[9] & 1;
  if ( v24 == 1 )
    a1[9] = !(a1[9] & 1);
  else
    v25 = !(a1[9] & 1);
  result = &a1[3 * v25];
  result[5] = 0;
  return result;
}
