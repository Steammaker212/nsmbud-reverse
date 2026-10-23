/* sub_608F5918
 * address: 0x608F5918   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F5918(int result, _WORD *a2, int a3)
{
  int v4; // r8
  int v5; // r10
  int v6; // r5
  float v7; // s18
  int v8; // r9
  float v9; // s0
  int v10; // r11
  float v11; // s0
  float v12; // s0
  _DWORD *v13; // r2
  _DWORD *v14; // r7
  int v15; // r9
  int v16; // r5
  _WORD *v17; // r6
  bool v18; // zf
  __int16 v19; // r7
  __int16 v20; // r5
  _WORD *v21; // r2
  int v22; // r2
  _WORD *v23; // r1
  int v24; // r7
  __int16 v25; // r3
  __int16 v26; // r2
  __int16 v27; // r3
  _WORD *v28; // [sp+0h] [bp-60h]
  int v29; // [sp+4h] [bp-5Ch]

  v29 = result;
  v4 = a3 + 1;
  if ( result )
  {
    v28 = a2;
    if ( a3 >= 1 )
    {
      v5 = 0;
      v6 = 36 * a3;
      v7 = (float)a3;
      v8 = result;
      do
      {
        *(float *)v8 = cosf((float)((float)v5 * 6.2832) / v7) * 0.5;
        v9 = sinf((float)((float)v5 * 6.2832) / v7) * -0.5;
        FIELD_F32(v8, 8) = v9;
        FIELD_U32(v8, 4) = 1056964608;
        FIELD_U32(v8, 12) = *(_DWORD *)v8;
        FIELD_F32(v8, 16) = 1.0 - v9;
        FIELD_U32(v8, 20) = 0;
        v10 = v8 + v6;
        *(float *)(v8 + v6 + 36) = cosf((float)((float)v5 * 6.2832) / v7) * 0.5;
        v11 = sinf((float)((float)v5++ * 6.2832) / v7);
        FIELD_F32(v10, 44) = v11 * -0.5;
        FIELD_U32(v10, 40) = -1090519040;
        FIELD_U32(v10, 48) = *(_DWORD *)v8;
        v12 = FIELD_F32(v8, 8);
        v8 += 36;
        FIELD_F32(v10, 52) = 1.0 - v12;
        FIELD_U32(v10, 56) = 1065353216;
      }
      while ( a3 != v5 );
    }
    *(_DWORD *)(v29 + 36 * a3) = 0;
    v13 = (_DWORD *)(v29 + 36 * a3);
    result = 1056964608;
    v13[1] = 1056964608;
    v13[2] = 0;
    v13[3] = 1056964608;
    v13[4] = 1056964608;
    v13[5] = 0;
    *(_DWORD *)(v29 + 36 * (v4 + a3)) = 0;
    v14 = (_DWORD *)(v29 + 36 * (v4 + a3));
    v14[1] = -1090519040;
    v14[2] = 0;
    v14[3] = 1056964608;
    v14[4] = 1056964608;
    v14[5] = 1065353216;
    a2 = v28;
  }
  if ( a2 && a3 >= 1 )
  {
    v15 = a3 - 1;
    v16 = 0;
    v17 = a2;
    do
    {
      result = v16 + 1;
      *v17 = v16;
      v18 = v15 == v16;
      v19 = v16 + 1;
      v20 = a3 + v16 + 1;
      if ( v18 )
        v19 = 0;
      v17[1] = v19;
      v17[2] = a3;
      v17[3 * a3] = v20;
      v21 = &v17[3 * a3];
      v17 += 3;
      v21[1] = v4 + a3;
      v21[2] = v19 + v4;
      v16 = result;
    }
    while ( a3 != result );
    v22 = 0;
    v23 = &a2[6 * a3 + 5];
    do
    {
      v24 = v22 + 1;
      v25 = a3 + v22;
      *(v23 - 5) = v22;
      v18 = v15 == v22;
      v26 = v22 + 1;
      v27 = v25 + 1;
      if ( v18 )
        v26 = 0;
      *(v23 - 4) = v27;
      *(v23 - 3) = v26;
      *(v23 - 2) = v26;
      *(v23 - 1) = v27;
      *v23 = v26 + v4;
      v23 += 6;
      v22 = v24;
    }
    while ( a3 != v24 );
  }
  return result;
}
