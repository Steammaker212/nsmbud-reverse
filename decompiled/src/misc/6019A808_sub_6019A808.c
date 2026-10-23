/* sub_6019A808
 * address: 0x6019A808   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019A808(int a1, int a2, unsigned __int8 a3)
{
  int v5; // r9
  int v6; // r8
  int v7; // r6
  int v8; // r11
  int v9; // r7
  int v10; // r0
  int v11; // lr
  int v12; // r2
  bool v13; // cc
  int v14; // r2
  int v15; // kr04_4
  bool v16; // zf
  int v17; // r3
  bool v18; // zf
  bool v19; // r0
  bool v20; // zf
  int result; // r0
  int v22; // [sp+4h] [bp-34h]
  int v23; // [sp+8h] [bp-30h]
  int v24; // [sp+Ch] [bp-2Ch]

  v5 = (unsigned __int8)a2;
  v6 = (unsigned __int8)a1;
  v24 = FIELD_U32(dword_60CC6D78, 448);
  v23 = sub_603F6AA0(dword_60CC6D78 + 796, (unsigned __int8)a1, (unsigned __int8)a2);
  v22 = sub_603F6B0C(dword_60CC6D78 + 796, v6, v5);
  v7 = sub_603F6AA0(dword_60CC6D78 + 796, v6, v5);
  v8 = sub_603F6B0C(dword_60CC6D78 + 796, v6, v5);
  v9 = sub_603F6AA0(dword_60CC6D78 + 796, v6, v5);
  v10 = sub_603F6B0C(dword_60CC6D78 + 796, v6, v5);
  v11 = 14;
  if ( FIELD_U32(dword_60CC6D78, 428) != a1
    || FIELD_U32(dword_60CC6D78, 440) != a2
    || a3 != FIELD_U32(dword_60CC6D78, 420) )
  {
    return v11;
  }
  v12 = 0;
  v11 = 0;
  if ( v24 )
  {
    v13 = v23 < 3;
    if ( v23 <= 3 )
    {
      v11 = 16;
      v13 = v22 < 4;
    }
    if ( !v13 )
    {
      v11 = 8;
      if ( (unsigned int)(v24 - 1) <= 2 )
        v11 = dword_60AFC084[v24 - 1];
    }
  }
  if ( v9 != 4 )
    v12 = 1;
  if ( v23 <= 3 && !v12 )
  {
    switch ( v24 )
    {
      case 1:
        v11 = 9;
        break;
      case 3:
        v11 = 3;
        if ( v10 == 4 )
          v11 = 7;
        if ( v22 > 3 )
          v11 = 3;
        break;
      case 4:
        v11 = 12;
        break;
      case 5:
        v11 = 8;
        if ( v10 == 4 )
          v11 = 13;
        if ( v22 > 3 )
          v11 = 8;
        break;
      default:
        break;
    }
  }
  v14 = 0;
  if ( v23 <= 3 && v7 == 3 && v9 != 4 )
  {
    v15 = v11;
    v11 = 4;
    switch ( v24 )
    {
      case 1:
        return 9;
      case 2:
        return v11;
      case 3:
        v11 = 5;
        if ( v10 == 4 )
          v11 = 3;
        if ( v8 != 3 )
          v11 = 3;
        if ( v22 > 3 )
          return 3;
        return v11;
      case 4:
        return 10;
      case 5:
        v11 = 11;
        if ( v10 == 4 )
          v11 = 8;
        if ( v8 != 3 )
          v11 = 8;
        if ( v22 > 3 )
          return 8;
        return v11;
      default:
        v11 = v15;
        break;
    }
  }
  if ( v10 != 4 )
    v14 = 1;
  if ( v22 > 3 )
  {
    v17 = v8;
  }
  else
  {
    v16 = v11 == 16;
    v17 = v8;
    if ( v11 == 16 )
      v16 = v14 == 0;
    if ( v16 )
    {
      v11 = 16;
      if ( (unsigned int)(v24 - 1) <= 4 )
        v11 = dword_60AFC050[v24 - 1];
    }
  }
  if ( v22 > 3 )
    goto LABEL_48;
  v18 = v11 == 16;
  if ( v11 == 16 )
    v18 = v17 == 3;
  if ( !v18 )
  {
LABEL_48:
    if ( v11 == 16 )
    {
      v19 = v10 != 4;
      v20 = v24 == 3;
      if ( v24 == 3 )
        v20 = v8 == 3;
      if ( !v20 )
        goto LABEL_54;
      v11 = 3;
      if ( v22 >= 4 || !v19 )
        goto LABEL_54;
    }
    return v11;
  }
  if ( (unsigned int)(v24 - 1) <= 4 )
  {
    v11 = dword_60AFC070[v24 - 1];
    goto LABEL_48;
  }
LABEL_54:
  result = 2;
  if ( v9 == 4 )
    result = 1;
  if ( v23 > 3 )
    result = 1;
  if ( v7 != 3 )
    result = 1;
  if ( v24 != 2 )
    return 1;
  return result;
}
