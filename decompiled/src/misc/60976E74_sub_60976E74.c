/* sub_60976E74
 * address: 0x60976E74   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60976E74(int a1, int a2, int a3, signed int a4, unsigned __int8 a5, int a6)
{
  int v7; // r7
  unsigned int v9; // r6
  int v10; // r5
  unsigned int result; // r0
  int v12; // r6
  int v13; // r8
  int v14; // r0
  unsigned int v15; // r1
  int v16; // r2
  _DWORD *v17; // r0
  _BOOL4 v18; // r10
  int v19; // r7
  _DWORD *v20; // r8
  int *v21; // r2
  int v22; // r5
  _DWORD *v23; // r0
  _DWORD *v24; // r6
  int v25; // r6
  _BOOL4 v26; // r7
  _DWORD *v27; // r5
  int v28; // r4
  int v29; // r1
  int v30; // r1
  int v31; // r2
  unsigned int v32; // r0
  int v33; // r6
  unsigned int v34; // r5
  unsigned int v36; // [sp+18h] [bp-50h]
  int v37; // [sp+1Ch] [bp-4Ch]
  _DWORD v38[3]; // [sp+24h] [bp-44h] BYREF
  _DWORD v39[2]; // [sp+30h] [bp-38h]
  _DWORD v40[12]; // [sp+38h] [bp-30h] BYREF

  v7 = a6;
  v9 = (a2 + 3) & 0xFFFFFFFC;
  FIELD_U8(a1, 160) = a5;
  v10 = 3 * v9 * a5;
  result = 3 * a3;
  if ( 3 * a3 )
  {
    result = operator_new_8DE2C8(result, a6, 8);
    FIELD_U32(a1, 60) = result;
  }
  if ( v10 )
  {
    v36 = v9;
    sub_60913D88(a1 + 4, v10, a6, 4, 1);
    v12 = 0;
    sub_60913A6C(v40, a1 + 4, 0);
    v13 = dword_60CC73E8(FIELD_U32(a1, 16));
    v14 = sub_60913FB4(a1 + 4);
    v15 = FIELD_U32(a1, 12);
    if ( v15 >> 2 )
    {
      if ( ((v15 >> 2) & 3) != 0 )
      {
        v12 = 0;
        do
          *(_DWORD *)(v13 + v14 + 4 * v12++) = -1091622615;
        while ( ((v15 >> 2) & 3) != v12 );
      }
      if ( (v15 >> 2) - 1 >= 3 )
      {
        v16 = (v15 >> 2) - v12;
        v17 = (_DWORD *)(v13 + v14 + 4 * v12 + 8);
        do
        {
          *(v17 - 2) = -1091622615;
          *(v17 - 1) = -1091622615;
          *v17 = -1091622615;
          v17[1] = -1091622615;
          v17 += 4;
          v16 -= 4;
        }
        while ( v16 );
      }
    }
    v18 = 0;
    v19 = 0;
    v39[1] = 0;
    v39[0] = 0;
    do
    {
      v20 = (_DWORD *)(a1 + 28 * v19);
      v20[19] = 0;
      v21 = v20 + 17;
      v20[20] = v36;
      v22 = FIELD_U8(a1, 160);
      if ( FIELD_U8(a1, 160) )
      {
        v23 = (_DWORD *)sub_608DE334(12 * v22 + 8, a6, 4);
        v21 = v20 + 17;
        if ( v23 )
        {
          *v23 = 12;
          v23[1] = v22;
          v24 = v23 + 2;
          memset(v23 + 2, 0, 12 * ((12 * v22 - 12) / 0xCu) + 12);
          v21 = v20 + 17;
          v20[17] = v22;
          v20[18] = v24;
        }
      }
      result = FIELD_U32(a1, 60) + v19 * a3;
      v20[21] = result;
      v20[22] = 0;
      v20[23] = a3;
      v25 = *v21;
      v37 = v19;
      if ( *v21 )
      {
        v26 = v18;
        v27 = (_DWORD *)(v20[18] + 4);
        do
        {
          v28 = v39[v26];
          v29 = a1 + 4;
          if ( v26 )
            v29 = a1 + 32;
          sub_60913A6C(v38, v29, v39[v26] & 0xFFFFFFFC);
          v18 = 0;
          v30 = v38[1];
          v31 = v38[2];
          *(v27 - 1) = v38[0];
          *v27 = v30;
          v27[1] = v31;
          result = v28 + v36;
          v39[v26] = v28 + v36;
          if ( !v26 )
          {
            result = FIELD_U32(a1, 40);
            v18 = result > 3;
          }
          --v25;
          v27 += 3;
          v26 = v18;
        }
        while ( v25 );
      }
      v19 = v37 + 1;
    }
    while ( v37 != 2 );
    v7 = a6;
  }
  if ( a4 >= 1 )
  {
    v32 = 616 * a4 + 8;
    if ( v32 < 616 * a4 )
      v32 = -1;
    if ( !is_mul_ok(0x268u, a4) )
      v32 = -1;
    result = sub_608DE334(v32, v7, 4);
    if ( result )
    {
      *(_DWORD *)result = 616;
      FIELD_U32(result, 4) = a4;
      v33 = 616 * a4;
      v34 = result + 8;
      result += 8;
      do
      {
        v33 -= 616;
        result = sub_60976C24(result) + 616;
      }
      while ( v33 );
      FIELD_U32(a1, 152) = a4;
      FIELD_U32(a1, 156) = v34;
    }
  }
  return result;
}
