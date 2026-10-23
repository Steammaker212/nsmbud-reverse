/* sub_605390B8
 * address: 0x605390B8   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605390B8(int a1, unsigned int a2)
{
  unsigned int v3; // r4
  char v4; // r2
  int v5; // r6
  int v6; // r0
  int v7; // r7
  unsigned __int8 *v8; // r2
  int v9; // r5
  int v10; // r9
  unsigned __int8 *v11; // r0
  int v12; // r10
  int result; // r0
  int v14; // r11
  int v15; // r1
  char v16; // [sp+0h] [bp-28h] BYREF

  v3 = a2;
  v4 = 0;
  v16 = 0;
  v5 = dword_60CC6E04;
  v6 = FIELD_U32(dword_60CC6E04, 40);
  if ( *(_BYTE *)(v6 + 520 * (unsigned __int8)a2 + 16) )
  {
    v7 = 65 * (unsigned __int8)a2;
    v8 = (unsigned __int8 *)(v6 + 520 * (unsigned __int8)a2);
    if ( v8[3136] )
    {
      v9 = v8[3148];
      v10 = 1;
      v11 = v8 + 3153;
    }
    else
    {
      v9 = v8[28];
      v11 = v8 + 33;
      v10 = 2;
    }
    v14 = *v11;
    v12 = sub_60826C60(dword_60CC6E04, (unsigned __int8)a2, &v16);
    result = sub_608FBB8C(*(unsigned __int8 *)(FIELD_U32(v5, 40) + 8 * v7 + 50));
    v4 = v16;
  }
  else
  {
    v9 = 5;
    v12 = 0;
    result = 0;
    v10 = 0;
    v14 = 0;
    v16 = 0;
  }
  if ( v3 >= 3 )
    v3 = 0;
  v15 = a1 + 4012 * v3;
  if ( !v9 )
    v9 = 5;
  FIELD_U32(v15, 4052) = v14;
  FIELD_U8(v15, 4032) = v4;
  FIELD_U32(v15, 4036) = v9;
  FIELD_U32(v15, 4040) = v12;
  FIELD_U32(v15, 4044) = result;
  FIELD_U32(v15, 4048) = v10;
  return result;
}
