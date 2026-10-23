/* sub_601B0F0C
 * address: 0x601B0F0C   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B0F0C(int a1)
{
  unsigned int i; // r6
  int result; // r0
  int v3; // r7
  _DWORD *v4; // r0
  bool v5; // zf
  int v6; // r1
  int v7; // r2
  int v8; // r5
  int v9; // r4
  int v10; // r0
  int v11; // r9
  int v12; // r1
  int v13; // r8
  int v14; // r10
  int v15; // r0
  int v16; // r1
  int v17; // r4
  int v18; // r5
  bool v19; // zf
  _DWORD v21[3]; // [sp+1Ch] [bp-3Ch] BYREF
  int v22; // [sp+28h] [bp-30h]
  int v23; // [sp+2Ch] [bp-2Ch]
  int v24; // [sp+30h] [bp-28h]

  for ( i = 0; i != 5; ++i )
  {
    result = sub_6021EE50(3, i);
    v3 = result;
    if ( result != -1 )
    {
      v4 = (_DWORD *)sub_60186FEC(dword_60CC6D78 + 984, 3u, i);
      v21[0] = *v4;
      v5 = v21[0] == -1;
      v6 = v4[1];
      v21[1] = v6;
      if ( v21[0] != -1 )
        v5 = v6 == -1;
      v7 = v4[2];
      v21[2] = v7;
      v8 = v4[3];
      v9 = v4[4];
      v10 = v4[5];
      v22 = v8;
      v23 = v9;
      v24 = v10;
      if ( v5 )
      {
        v11 = v22;
        v12 = 0;
        v13 = 1;
        v14 = v22;
      }
      else
      {
        v14 = v22;
        v13 = 0;
        v12 = 0;
        if ( v7 == -1 )
        {
          v13 = 1;
          v11 = v22;
        }
        else
        {
          v15 = sub_601EAA9C(dword_60C8B144, -1);
          v11 = v22;
          v12 = 1;
          if ( v15 == 1 && v22 >= 1 )
            v11 = --v22;
        }
      }
      if ( v3 != 898 )
      {
        if ( v12 )
        {
          if ( v14 && !v11 )
            sub_6021F50C(dword_60C8D4EC, v21, 3, i);
        }
        else
        {
          v24 = *(_DWORD *)sub_6021F408(dword_60C8D4EC, 3, i);
        }
      }
      sub_60186FC0(dword_60CC6D78 + 984, 3u, i, (int)v21);
      v16 = i;
      if ( i == 4 )
        v16 = 3;
      v17 = FIELD_U32(dword_60CC6D78, 412);
      v18 = FIELD_U32(dword_60CC6D78, 424);
      result = v18 != sub_6021FF4C(3, v16);
      v19 = (v13 | (v11 == 0)) == 0;
      if ( v13 | (v11 == 0) )
        v19 = i == 0;
      if ( !v19 )
      {
        result |= v17 != 3;
        if ( result == 1 )
          result = (int)sub_601B0DB0(a1, i);
      }
    }
  }
  return result;
}
