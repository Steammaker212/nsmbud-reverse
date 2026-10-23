/* sub_602044F0
 * address: 0x602044F0   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_602044F0()
{
  _DWORD *v0; // r11
  unsigned int i; // r5
  int result; // r0
  _DWORD *v3; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r7
  int v7; // r4
  int v8; // r0
  bool v9; // zf
  _DWORD *v10; // r4
  int v11; // r11
  _BOOL4 v12; // r0
  int v13; // r1
  _DWORD v14[3]; // [sp+Ch] [bp+0h] BYREF
  int v15; // [sp+18h] [bp+Ch]
  int v16; // [sp+1Ch] [bp+10h]
  int v17; // [sp+20h] [bp+14h]

  v0 = v14;
  for ( i = 0; i != 5; ++i )
  {
    result = sub_6021EE50(2, i);
    if ( result != -1 )
    {
      v3 = (_DWORD *)sub_60186FEC(dword_60CC6D78 + 984, 2u, i);
      v14[0] = *v3;
      v4 = v3[1];
      v14[1] = v4;
      v5 = v3[2];
      v14[2] = v5;
      v6 = v3[3];
      v7 = v3[4];
      v8 = v3[5];
      v15 = v6;
      v16 = v7;
      v17 = v8;
      if ( v14[0] == -1 )
        goto LABEL_13;
      v9 = v4 == -1;
      if ( v4 != -1 )
        v9 = v5 == -1;
      if ( v9 )
      {
LABEL_13:
        v17 = *(_DWORD *)sub_6021F408(dword_60C8D4EC, 2, i);
      }
      else
      {
        v10 = v0;
        v11 = v15;
        v12 = sub_601EAA9C(dword_60C8B144, -1);
        v13 = v15;
        if ( v12 && v15 >= 1 )
          v13 = --v15;
        v9 = v11 == 0;
        v0 = v10;
        if ( !v9 && !v13 )
          sub_6021F50C(dword_60C8D4EC, v10, 2, i);
      }
      result = sub_60186FC0(dword_60CC6D78 + 984, 2u, i, (int)v0);
    }
  }
  return result;
}
