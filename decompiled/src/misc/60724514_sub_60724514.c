/* sub_60724514
 * address: 0x60724514   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60724514(int a1, unsigned __int16 *a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // r5
  _DWORD *v7; // r3
  int v9; // r12
  int result; // r0
  _DWORD *v12; // r7
  int v13; // r9
  unsigned __int16 *v14; // r6
  _WORD *v15; // r10
  int v16; // r4
  int v17; // r5
  int i; // r10
  int v19; // r9
  int j; // r10
  int v21; // r3
  _WORD *v22; // [sp+4h] [bp-44h]
  _WORD *v23; // [sp+8h] [bp-40h]
  _WORD *v24; // [sp+Ch] [bp-3Ch]
  unsigned __int16 *v26; // [sp+18h] [bp-30h]
  unsigned __int16 *v27; // [sp+18h] [bp-30h]
  int v29[10]; // [sp+20h] [bp-28h] BYREF

  v7 = a5;
  v9 = a3;
  result = a5[2];
  if ( result <= 0 )
  {
    v12 = a5 + 1;
    v14 = a2 + 1549;
  }
  else
  {
    v12 = a5 + 1;
    v13 = 0;
    v26 = a2 + 1541;
    v14 = a2 + 1549;
    v24 = a2 + 1543;
    v23 = a2 + 1548;
    v15 = a2 + 1542;
    v22 = a2 + 1547;
    do
    {
      if ( v13 + a4 >= a2[1550] )
        break;
      *v15 = *v22 + v9;
      *v24 = *v23 + v13 + a4;
      v6 = *(_DWORD *)(*v7 + 4 * v13);
      if ( (int)v7[1] >= 1 )
      {
        v16 = 0;
        do
        {
          if ( v9 + v16 >= *v14 )
            break;
          sub_6072342C(a1, (int)a2, v6 + 1);
          sub_6072334C(a1, a2, a6);
          if ( *v26 != 0xFFFF )
            sub_607261E4(a1, a2, 0);
          ++v16;
          v6 += 3;
          ++*v15;
          v9 = a3;
        }
        while ( v16 < *v12 );
      }
      v7 = a5;
      ++v13;
      result = a5[2];
    }
    while ( v13 < result );
    v29[0] = v6;
  }
  v27 = v14;
  if ( *v12 + v9 < *v14 && v7[6] && result >= 1 )
  {
    v17 = 0;
    for ( i = 0; i < result; ++i )
    {
      if ( a4 + i >= a2[1550] )
        break;
      a2[1542] = a2[1547] + v9 + *v12;
      a2[1543] = a4 + i + a2[1548];
      v29[0] = *(_DWORD *)(a5[6] + 4 * v17);
      sub_60723CC0(a1, (int)a2, v29, *v14 - v9 - *v12, a6);
      result = a5[2];
      v14 = v27;
      v9 = a3;
      if ( ++v17 == a5[8] )
        v17 = 0;
    }
  }
  if ( v9 >= 1 && a5[3] && result >= 1 )
  {
    v19 = 0;
    for ( j = 0; j < result; ++j )
    {
      result = a4 + j;
      if ( a4 + j >= a2[1550] )
        break;
      a2[1542] = a2[1547];
      a2[1543] = result + a2[1548];
      v29[0] = *(_DWORD *)(a5[3] + 4 * v19);
      v21 = *v14;
      if ( v21 >= v9 )
        v21 = v9;
      sub_60723CC0(a1, (int)a2, v29, v21, a6);
      v9 = a3;
      v14 = v27;
      ++v19;
      result = a5[2];
      if ( v19 == a5[5] )
        v19 = 0;
    }
  }
  return result;
}
