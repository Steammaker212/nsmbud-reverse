/* sub_603FDEBC
 * address: 0x603FDEBC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FDEBC(int result, int a2)
{
  int v3; // r4
  int v4; // r6
  float v5; // r1
  int v6; // r2
  int v7; // r5
  float v8; // [sp+0h] [bp-30h] BYREF
  float v9; // [sp+4h] [bp-2Ch]
  int v10; // [sp+8h] [bp-28h]
  _BYTE v11[8]; // [sp+10h] [bp-20h] BYREF
  float v12[6]; // [sp+18h] [bp-18h] BYREF

  v3 = result;
  if ( a2 )
  {
    v4 = FIELD_U32(result, 8);
    if ( v4 == 2 )
    {
      v4 = 3;
    }
    else if ( v4 == 3 )
    {
      v4 = 2;
    }
    v5 = FIELD_F32(result, 28);
    v6 = FIELD_U32(result, 32);
    v8 = FIELD_F32(result, 24);
    v9 = v5;
    v10 = v6;
    sub_60833074(&v8);
    if ( v4 < 8 )
    {
      if ( FIELD_U32(v3, 56) == 3 )
        v4 += 15;
    }
    else
    {
      v12[0] = FIELD_F32(v3, 416);
      v4 = sub_60814F00(v12) + 1;
    }
    v7 = *(_DWORD *)(a2 + 4 * v4);
    v12[0] = v8;
    v12[1] = v9;
    sub_60024400((int)v11, v12);
    return sub_608141A0(v3 + 96, v7, v11, 0);
  }
  return result;
}
