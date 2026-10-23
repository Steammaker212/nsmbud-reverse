/* sub_6053F30C
 * address: 0x6053F30C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053F30C(int a1, unsigned int a2)
{
  unsigned int v3; // r4
  char v4; // r2
  int v5; // r6
  int v6; // r1
  int v7; // r0
  int v8; // r11
  unsigned __int8 *v9; // r2
  int v10; // r5
  int v11; // r9
  unsigned __int8 *v12; // r0
  int result; // r0
  int v14; // r10
  int v15; // r7
  int v16; // r1
  char v17; // [sp+0h] [bp-28h] BYREF

  v3 = a2;
  v4 = 0;
  v17 = 0;
  v5 = dword_60CC6E04;
  v6 = (unsigned __int8)(a2 + 3);
  v7 = FIELD_U32(dword_60CC6E04, 40);
  if ( *(_BYTE *)(v7 + 520 * v6 + 16) )
  {
    v8 = 65 * v6;
    v9 = (unsigned __int8 *)(v7 + 520 * v6);
    if ( v9[3136] )
    {
      v10 = v9[3148];
      v11 = 1;
      v12 = v9 + 3153;
    }
    else
    {
      v10 = v9[28];
      v12 = v9 + 33;
      v11 = 2;
    }
    v14 = *v12;
    v15 = sub_60826C60(dword_60CC6E04, v6, &v17);
    result = sub_608FBB8C(*(unsigned __int8 *)(FIELD_U32(v5, 40) + 8 * v8 + 50));
    v4 = v17;
  }
  else
  {
    v10 = 5;
    result = 0;
    v11 = 0;
    v14 = 0;
    v15 = 0;
    v17 = 0;
  }
  if ( v3 >= 3 )
    v3 = 0;
  v16 = a1 + 4012 * v3;
  if ( !v10 )
    v10 = 5;
  FIELD_U32(v16, 4052) = v14;
  FIELD_U8(v16, 4032) = v4;
  FIELD_U32(v16, 4036) = v10;
  FIELD_U32(v16, 4040) = v15;
  FIELD_U32(v16, 4044) = result;
  FIELD_U32(v16, 4048) = v11;
  return result;
}
