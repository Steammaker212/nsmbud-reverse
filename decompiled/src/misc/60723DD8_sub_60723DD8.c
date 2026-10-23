/* sub_60723DD8
 * address: 0x60723DD8   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60723DD8(int result, unsigned __int16 *a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // r5
  _DWORD *v7; // r12
  int v8; // r4
  int v10; // r10
  int v11; // lr
  int *v12; // r6
  int v13; // r2
  unsigned __int16 *v14; // r7
  int v15; // r1
  int v16; // r1
  int v17; // r9
  int v18; // r9
  int v19; // r5
  int v20; // r1
  int v21; // r11
  int v22; // r9
  int v23; // r6
  int v24; // r3
  int *v25; // [sp+4h] [bp-4Ch]
  _WORD *v26; // [sp+Ch] [bp-44h]
  _WORD *v27; // [sp+10h] [bp-40h]
  int v29; // [sp+18h] [bp-38h]
  _WORD *v30; // [sp+1Ch] [bp-34h]
  unsigned __int16 *v31; // [sp+1Ch] [bp-34h]
  unsigned __int16 *v32; // [sp+20h] [bp-30h]
  int v33; // [sp+20h] [bp-30h]
  int v35[10]; // [sp+28h] [bp-28h] BYREF

  v7 = a5;
  v8 = a3;
  v10 = result;
  v11 = a5[2];
  if ( v11 <= 0 )
  {
    v12 = a5 + 1;
    v14 = a2 + 1549;
  }
  else
  {
    v12 = a5 + 1;
    v13 = 0;
    v32 = a2 + 1541;
    v30 = a2 + 1542;
    v14 = a2 + 1549;
    v27 = a2 + 1543;
    v26 = a2 + 1548;
    v15 = a4;
    do
    {
      v16 = v15 - v13;
      if ( v16 < 0 )
        break;
      *v27 = *v26 + v16;
      result = v7[1];
      v11 = v7[2];
      v6 = *(_DWORD *)(*v7 + 4 * (v11 + ~v13));
      if ( result < 1 )
      {
        v15 = a4;
      }
      else
      {
        v17 = 0;
        v29 = v13;
        do
        {
          result = v8 + v17;
          if ( v8 + v17 >= *v14 )
            break;
          *v30 = result + a2[1547];
          sub_6072342C(v10, (int)a2, v6 + 1);
          sub_6072334C(v10, a2, a6);
          if ( *v32 != 0xFFFF )
            sub_607261E4(v10, a2, 0);
          result = *v12;
          v8 = a3;
          ++v17;
          v6 += 3;
        }
        while ( v17 < *v12 );
        v7 = a5;
        v15 = a4;
        v13 = v29;
        v11 = a5[2];
      }
      ++v13;
    }
    while ( v13 < v11 );
    v35[0] = v6;
  }
  v31 = v14;
  if ( *v12 + v8 < *v14 && v7[6] && v11 >= 1 )
  {
    v18 = a4;
    v19 = 0;
    result = a5[8];
    v25 = v12;
    do
    {
      if ( v18 < 0 )
        break;
      v33 = result - 1;
      a2[1542] = a2[1547] + v8 + *v12;
      a2[1543] = v18 + a2[1548];
      v35[0] = *(_DWORD *)(a5[6] + 4 * (result - 1));
      sub_60723CC0(v10, (int)a2, v35, *v14 - v8 - *v12, a6);
      result = v33;
      v11 = a5[2];
      v8 = a3;
      v14 = v31;
      v12 = v25;
      ++v19;
      --v18;
      if ( !v33 )
        result = a5[8];
    }
    while ( v19 < v11 );
  }
  if ( v8 >= 1 )
  {
    v20 = a4;
    if ( a5[3] )
    {
      if ( v11 >= 1 )
      {
        v21 = 0;
        result = (int)a5;
        v22 = a5[5];
        do
        {
          if ( v20 < 0 )
            break;
          v23 = v20;
          --v22;
          a2[1542] = a2[1547];
          a2[1543] = v20 + a2[1548];
          v35[0] = *(_DWORD *)(a5[3] + 4 * v22);
          v24 = *v14;
          if ( v24 >= v8 )
            v24 = v8;
          sub_60723CC0(v10, (int)a2, v35, v24, a6);
          if ( !v22 )
            v22 = a5[5];
          v8 = a3;
          v14 = v31;
          ++v21;
          v20 = v23 - 1;
          result = a5[2];
        }
        while ( v21 < result );
      }
    }
  }
  return result;
}
