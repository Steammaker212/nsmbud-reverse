/* sub_60541DF8
 * address: 0x60541DF8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60541DF8(int a1, unsigned __int8 a2, unsigned int a3)
{
  char v4; // r3
  unsigned __int8 v6; // r2
  int v7; // r6
  int v8; // r1
  int v9; // r0
  int v10; // r11
  bool v11; // zf
  unsigned __int8 *v12; // r2
  int v13; // r4
  int v14; // r9
  unsigned __int8 *v15; // r0
  int v16; // r10
  int v17; // r0
  int v18; // r7
  int v19; // r1
  char v21; // [sp+0h] [bp-28h] BYREF

  v4 = 0;
  v6 = a2;
  v21 = 0;
  v7 = dword_60CC6E04;
  if ( FIELD_U8(a1, 34730) )
    v6 = a2 + 3;
  v8 = v6;
  v9 = FIELD_U32(dword_60CC6E04, 40);
  if ( *(_BYTE *)(v9 + 520 * v6 + 16) )
  {
    v10 = 65 * v6;
    v11 = a3 == 6;
    v12 = (unsigned __int8 *)(v9 + 520 * v6);
    if ( a3 != 6 )
      v11 = v12[3136] == 0;
    if ( v11 )
    {
      v13 = v12[28];
      v15 = v12 + 33;
      v14 = 2;
    }
    else
    {
      v13 = v12[3148];
      v14 = 1;
      v15 = v12 + 3153;
    }
    v18 = *v15;
    v16 = sub_60826C60(dword_60CC6E04, v8, &v21);
    v17 = sub_608FBB8C(*(unsigned __int8 *)(FIELD_U32(v7, 40) + 8 * v10 + 50));
    v4 = v21;
  }
  else
  {
    v21 = 0;
    v13 = 5;
    v16 = 0;
    v17 = 0;
    v14 = 0;
    v18 = 0;
  }
  if ( a3 >= 7 )
    a3 = 0;
  v19 = a1 + 4012 * a3;
  if ( !v13 )
    v13 = 5;
  FIELD_U32(v19, 4000) = v18;
  FIELD_U8(v19, 3980) = v4;
  FIELD_U32(v19, 3984) = v13;
  FIELD_U32(v19, 3988) = v16;
  FIELD_U32(v19, 3992) = v17;
  FIELD_U32(v19, 3996) = v14;
  return sub_60531DEC(v19 + 4);
}
