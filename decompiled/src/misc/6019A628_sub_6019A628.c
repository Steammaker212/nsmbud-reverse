/* sub_6019A628
 * address: 0x6019A628   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019A628(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r7
  int v3; // r5
  int v4; // r4
  int v5; // r8
  int v6; // r9
  int v7; // r11
  _BOOL4 v8; // r10
  _BOOL4 v9; // r1
  _BOOL4 v10; // r9
  _BOOL4 v11; // r8
  int v12; // r0
  _BOOL4 v13; // r2
  int v14; // r1
  bool v15; // zf
  unsigned __int64 v16; // r2
  int result; // r0
  _BOOL4 v18; // [sp+4h] [bp-34h]
  int v19; // [sp+8h] [bp-30h]
  int v20; // [sp+Ch] [bp-2Ch]
  int v21; // [sp+10h] [bp-28h]

  v2 = a1;
  v3 = a2;
  v4 = dword_60CC6D78 + 796;
  v5 = sub_603F6AA0(dword_60CC6D78 + 796, a1, a2);
  v21 = sub_603F6B0C(v4, v2, v3);
  v6 = sub_603F6AA0(v4, v2, v3);
  v7 = sub_603F6B0C(v4, v2, v3);
  v20 = v6;
  v19 = sub_603F6AA0(v4, v2, v3);
  v8 = v6 == 3 || v19 == 4 || v5 < 3;
  v9 = v6 != 3;
  v10 = v19 != 4;
  v18 = v9;
  v11 = v5 > 2;
  v12 = sub_603F6B0C(v4, v2, v3);
  v13 = v7 == 3 || v12 == 4 || v21 < 3;
  if ( !v8 )
  {
    v14 = 1;
    if ( !v13 )
      return v14;
  }
  v14 = 2;
  if ( !v8 && (v21 <= 2 || v7 == 3 || v12 == 4) )
    return v14;
  v15 = (!v11 || !v18 || !v10) && !v13;
  v16 = (v19 == 4) | (unsigned __int64)((!v11 || !v18 || !v10) && !v13);
  v14 = 3;
  if ( !v15 )
    v14 = 6;
  if ( !(_DWORD)v16 )
    v14 = 7;
  if ( v12 == 4 )
    HIDWORD(v16) = 1;
  if ( !v16 )
    v14 = 4;
  if ( v20 == 3 || v16 )
    return v14;
  result = 0;
  if ( v7 == 3 )
    return 5;
  return result;
}
