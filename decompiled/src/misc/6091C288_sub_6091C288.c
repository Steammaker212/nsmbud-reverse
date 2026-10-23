/* sub_6091C288
 * address: 0x6091C288   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091C288(_DWORD *result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r12
  int v4; // lr
  int v5; // r10
  int v6; // r9
  int v7; // r11
  int v8; // r8
  int v9; // r7
  int v10; // r6
  int v11; // r3
  int v12; // r2
  _WORD *v13; // r3
  __int16 v14; // t1
  int v15; // r5
  int v17; // r2
  int v18; // r5
  unsigned int v19; // r2
  unsigned int v20; // r0
  int v21; // r1
  _DWORD *v22; // r5
  _DWORD *v23; // r1
  int v24; // r8
  int v25; // r7
  int v26; // r6
  _DWORD *v27; // r5
  _DWORD *v28; // [sp+0h] [bp-30h]
  int v29; // [sp+8h] [bp-28h]

  v2 = result;
  v3 = result[4];
  if ( v3 )
  {
    v4 = result[5];
    v5 = 0;
    v6 = 1;
    v7 = 28;
    result = (_DWORD *)result[4];
    do
    {
      v8 = v5 + 1;
      if ( v5 + 1 < (int)result )
      {
        v9 = v7;
        v10 = v5 + 1;
        v11 = v4 + 28 * v5;
        v14 = FIELD_U16(v11, 24);
        v13 = (_WORD *)(v11 + 24);
        LOWORD(v12) = v14;
        do
        {
          v15 = v2[5];
          if ( (unsigned int)result > v10++ )
            v15 += v9;
          v9 += 28;
          v12 = (unsigned __int16)v12 * FIELD_U32(v15, 16);
          *v13 = v12;
          result = (_DWORD *)v2[4];
        }
        while ( v10 < (int)result );
      }
      v17 = 7 * v5;
      v7 += 28;
      ++v5;
      v6 *= *(_DWORD *)(v4 + 4 * v17 + 16);
    }
    while ( v8 != v3 );
    if ( v6 > 1 )
    {
      v18 = v6 - 1;
      v19 = 936 * (v6 - 1);
      v20 = v19 + 8;
      if ( v19 + 8 < v19 )
        v20 = -1;
      if ( !is_mul_ok(0x3A8u, v6 - 1) )
        v20 = -1;
      result = (_DWORD *)sub_608DE334(v20, a2, 4);
      if ( result )
      {
        *result = 936;
        result[1] = v18;
        v28 = result + 2;
        v21 = (int)&result[234 * v18 + 2];
        v22 = result + 179;
        v29 = v21;
        do
        {
          *(v22 - 177) = off_60C5D608;
          *(v22 - 176) = 0;
          *((_BYTE *)v22 - 700) = 0;
          *((_WORD *)v22 - 349) = 0;
          untitled_ref((int)(v22 - 173));
          memset(v22 - 27, 0, 48);
          sub_60973ACC(v22 - 15);
          *(v22 - 15) = &off_60C5D628;
          sub_60973ACC(v22 - 10);
          *(v22 - 10) = &off_60C5D644;
          sub_60973ACC(v22 - 5);
          *(v22 - 5) = &off_60C5D660;
          sub_60973ACC(v22);
          *v22 = &off_60C5D67C;
          v22[53] = 0;
          v22[54] = 0;
          *((_WORD *)v22 + 110) = 0;
          v23 = v22 + 57;
          v22 += 234;
        }
        while ( v23 != (_DWORD *)v29 );
        v2[2] = v6 - 1;
        result = v28;
        v2[3] = v28;
      }
    }
  }
  v24 = v2[2];
  if ( v24 )
  {
    v25 = v2[3];
    v26 = 0;
    do
    {
      ++v26;
      v27 = *(_DWORD **)(v2[1] + 4);
      FIELD_U32(v25, 4) = v27;
      FIELD_U16(v25, 10) = v26;
      (*(void (__fastcall **)(_DWORD *))(*v27 + 12))(v27);
      result = (_DWORD *)v27[1];
      FIELD_U32(v25, 596) = result;
      v25 += 936;
    }
    while ( v24 != v26 );
  }
  return result;
}
