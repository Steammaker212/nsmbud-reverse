/* sub_60725214
 * address: 0x60725214   size: 932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60725214(int a1, _WORD *a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // r4
  _DWORD *v7; // r12
  unsigned __int16 *v10; // r5
  int v11; // r3
  _WORD *v12; // r9
  int v13; // r8
  bool v14; // cc
  int v15; // r0
  int v16; // r1
  int result; // r0
  int v18; // r9
  int v19; // r8
  int v20; // r0
  int v21; // r9
  int v22; // r8
  __int16 v23; // [sp+Ch] [bp-44h]
  int v24; // [sp+1Ch] [bp-34h]
  int v27[10]; // [sp+28h] [bp-28h] BYREF

  v7 = a5;
  v10 = a2 + 1549;
  if ( a5[1] + a3 <= (unsigned __int16)a2[1549] && (int)a5[2] >= 1 )
  {
    v11 = 0;
    v12 = a2 + 1542;
    v23 = a3 - 1;
    do
    {
      if ( v7[5] + v11 + a4 >= (unsigned __int16)a2[1550] )
        break;
      *v12 = v23 + a2[1547] + v7[1];
      a2[1543] = v7[5] + v11 + a4 + a2[1548];
      v13 = v7[1];
      v14 = v13 < 1;
      v24 = v11;
      v6 = 3 * v13 + *(_DWORD *)(*v7 + 4 * v11) - 3;
      if ( v13 >= 1 )
        v14 = v13 + a3 - 1 < 0;
      if ( !v14 )
      {
        do
        {
          sub_6072342C(a1, (int)a2, v6 + 1);
          sub_6072334C(a1, a2, a6);
          if ( (unsigned __int16)a2[1541] != 0xFFFF )
            sub_607261E4(a1, a2, 0);
          v6 -= 3;
          --*v12;
          if ( v13 - 1 < 1 )
            break;
          v15 = a3 - 2 + v13--;
        }
        while ( v15 >= 0 );
      }
      v7 = a5;
      v11 = v24 + 1;
    }
    while ( v24 + 1 < a5[2] );
    v27[0] = v6;
  }
  v16 = v7[1];
  result = *v10;
  if ( v16 + a3 <= result && v7[3] && (int)v7[5] >= 1 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      if ( a4 + v19 >= (unsigned __int16)a2[1550] )
        break;
      a2[1542] = a2[1547] + a3;
      a2[1543] = a4 + v19 + a2[1548];
      v27[0] = *(_DWORD *)(v7[3] + 4 * v18);
      sub_60723CC0(a1, (int)a2, v27, a5[4], a6);
      ++v18;
      ++v19;
      v7 = a5;
      v20 = a5[5];
      if ( v18 == v20 )
        v18 = 0;
    }
    while ( v19 < v20 );
    v16 = v7[1];
    result = *v10;
  }
  if ( v16 + a3 <= result )
  {
    result = v7[6];
    if ( result )
    {
      result = v7[2];
      if ( result >= 1 )
      {
        v21 = 0;
        v22 = 0;
        do
        {
          result = a4 + v22;
          if ( a4 + v22 >= (unsigned __int16)a2[1550] )
            break;
          a2[1542] = a2[1547] + a3 + v7[1];
          a2[1543] = result + a2[1548];
          v27[0] = *(_DWORD *)(v7[6] + 4 * v21);
          sub_60723CC0(a1, (int)a2, v27, a5[4], a6);
          ++v21;
          ++v22;
          v7 = a5;
          result = a5[2];
          if ( v21 == a5[8] )
            v21 = 0;
        }
        while ( v22 < result );
      }
    }
  }
  return result;
}
