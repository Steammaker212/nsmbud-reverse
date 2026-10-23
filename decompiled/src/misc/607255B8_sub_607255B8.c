/* sub_607255B8
 * address: 0x607255B8   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607255B8(int a1, _WORD *a2, int a3, int a4, _DWORD *a5, int a6)
{
  _DWORD *v7; // r2
  int result; // r0
  unsigned __int16 *v11; // r3
  int v12; // r1
  int v13; // r11
  int v14; // r5
  int v15; // r10
  int i; // lr
  int v17; // r10
  int v18; // r11
  unsigned __int16 *v19; // [sp+8h] [bp-38h]
  int v20; // [sp+10h] [bp-30h]
  int v22[10]; // [sp+18h] [bp-28h] BYREF

  v7 = a5;
  v11 = a2 + 1549;
  result = (unsigned __int16)a2[1549];
  if ( a5[4] + a3 <= result )
  {
    if ( a5[3] )
    {
      v12 = a5[5];
      if ( v12 >= 1 )
      {
        v13 = v12 + 1;
        v14 = 0;
        v19 = v11;
        v15 = a4 + 1 - v12;
        do
        {
          if ( v15 < v7[2] )
            break;
          a2[1542] = a2[1547] + a3;
          a2[1543] = v15 + a2[1548] - v7[2];
          v22[0] = *(_DWORD *)(v7[3] + 4 * v14);
          sub_60723CC0(a1, (int)a2, v22, v7[4], a6);
          v7 = a5;
          ++v14;
          --v13;
          ++v15;
          if ( v14 == a5[5] )
            v14 = 0;
        }
        while ( v13 > 1 );
        result = *v19;
      }
    }
  }
  if ( v7[1] + a3 <= result )
  {
    result = v7[2];
    if ( result >= 1 )
    {
      for ( i = 0; i < result; ++i )
      {
        result = a4 - i;
        if ( a4 - i < 0 )
          break;
        a2[1543] = a2[1548] + result;
        result = v7[2];
        v17 = *(_DWORD *)(*v7 + 4 * (result + ~i));
        if ( (int)v7[1] >= 1 )
        {
          v18 = 0;
          v20 = i;
          do
          {
            a2[1542] = a3 + v18 + a2[1547];
            sub_6072342C(a1, (int)a2, v17 + 1);
            sub_6072334C(a1, a2, a6);
            if ( (unsigned __int16)a2[1541] != 0xFFFF )
              sub_607261E4(a1, a2, 0);
            v7 = a5;
            ++v18;
            v17 += 3;
          }
          while ( v18 < a5[1] );
          result = a5[2];
          i = v20;
        }
      }
    }
  }
  return result;
}
