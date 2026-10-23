/* sub_60723ABC
 * address: 0x60723ABC   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60723ABC(int a1, _WORD *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // r7
  _WORD *v11; // r11
  int v12; // r8
  int v13; // r4
  int v14; // r3
  int v15; // r4
  int v16; // r9
  bool v17; // cc
  int v18; // r4
  int v19; // r7
  int v21; // [sp+0h] [bp-30h]
  int v22; // [sp+4h] [bp-2Ch]

  v10 = 0;
  if ( a3 < 0 )
    a3 = -a3;
  v11 = a2 + 1542;
  v12 = a3;
  v21 = (unsigned __int16)a2[1542];
  if ( a8 < a5 && a3 >= 1 )
  {
    v13 = a8 + 3;
    v10 = 0;
    do
    {
      sub_6072342C(a1, (int)a2, v13 - 2);
      sub_6072334C(a1, a2, a4);
      if ( (unsigned __int16)a2[1541] != 0xFFFF )
        sub_607261E4(a1, a2, 0);
      ++v10;
      a3 = v12;
      ++*v11;
      if ( v13 >= a5 )
        break;
      v13 += 3;
    }
    while ( v10 < v12 );
  }
  v14 = a6;
  if ( v10 < a3 )
  {
    v22 = a3 - (a7 - a6) / 3;
    if ( v10 < v22 )
    {
      v15 = a5;
      do
      {
        v16 = v14;
        sub_6072342C(a1, (int)a2, v15 + 1);
        sub_6072334C(a1, a2, a4);
        if ( (unsigned __int16)a2[1541] != 0xFFFF )
          sub_607261E4(a1, a2, 1);
        v15 += 3;
        v14 = v16;
        ++v10;
        a3 = v12;
        ++*v11;
        if ( v15 >= v16 )
          v15 = a5;
        v17 = v10 < v12;
        if ( v10 < v12 )
          v17 = v10 < v22;
      }
      while ( v17 );
    }
  }
  if ( v10 < a3 )
  {
    v18 = a3 - v10;
    v19 = v14 + 1;
    do
    {
      sub_6072342C(a1, (int)a2, v19);
      sub_6072334C(a1, a2, a4);
      if ( (unsigned __int16)a2[1541] != 0xFFFF )
        sub_607261E4(a1, a2, 0);
      v19 += 3;
      --v18;
      ++*v11;
    }
    while ( v18 );
  }
  *v11 = v21;
  return v21;
}
