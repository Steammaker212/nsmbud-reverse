/* sub_60724F6C
 * address: 0x60724F6C   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60724F6C(int a1, _WORD *a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // r4
  _DWORD *v7; // r12
  unsigned __int16 *v10; // r5
  int v11; // r3
  _WORD *v12; // r8
  int v13; // r9
  bool v14; // cc
  int v15; // r0
  int result; // r0
  int v17; // r9
  int v18; // r8
  __int16 v19; // [sp+Ch] [bp-44h]
  int v22; // [sp+24h] [bp-2Ch]
  int v23[10]; // [sp+28h] [bp-28h] BYREF

  v7 = a5;
  v10 = a2 + 1549;
  if ( a5[1] + a3 <= (unsigned __int16)a2[1549] && (int)a5[2] >= 1 )
  {
    v11 = 0;
    v12 = a2 + 1542;
    v19 = a3 - 1;
    do
    {
      if ( v11 + a4 >= (unsigned __int16)a2[1550] )
        break;
      *v12 = v19 + a2[1547] + v7[1];
      a2[1543] = a2[1548] + v11 + a4;
      v13 = v7[1];
      v14 = v13 < 1;
      v22 = v11;
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
      v11 = v22 + 1;
    }
    while ( v22 + 1 < a5[2] );
    v23[0] = v6;
  }
  result = v7[4] + a3;
  if ( result <= *v10 )
  {
    result = v7[3];
    if ( result )
    {
      result = v7[5];
      if ( result >= 1 )
      {
        v17 = 0;
        v18 = 0;
        do
        {
          result = a4 + v18;
          if ( a4 + v18 + v7[2] >= (unsigned __int16)a2[1550] )
            break;
          a2[1542] = a2[1547] + a3;
          a2[1543] = result + v7[2] + a2[1548];
          v23[0] = *(_DWORD *)(v7[3] + 4 * v17);
          sub_60723CC0(a1, (int)a2, v23, a5[4], a6);
          ++v17;
          ++v18;
          v7 = a5;
          result = a5[5];
          if ( v17 == result )
            v17 = 0;
        }
        while ( v18 < result );
      }
    }
  }
  return result;
}
