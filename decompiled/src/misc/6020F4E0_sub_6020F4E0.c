/* sub_6020F4E0
 * address: 0x6020F4E0   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020F4E0(int a1)
{
  int v2; // r0
  int *v3; // r0
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r4
  int v7; // r5
  unsigned int v8; // r6
  int result; // r0
  _DWORD v10[2]; // [sp+4h] [bp-1Ch] BYREF
  int v11; // [sp+Ch] [bp-14h]

  FIELD_U32(a1, 200) = 0;
  if ( FIELD_U8(a1, 468) )
  {
    FIELD_U32(a1, 432) = 0;
    FIELD_U32(a1, 128) = 1077936128;
    FIELD_U32(a1, 132) = 1077936128;
    FIELD_U32(a1, 136) = 1077936128;
    sub_60210A38(a1, 1);
    FIELD_U32(a1, 416) = 150;
    v2 = 3;
  }
  else
  {
    v3 = (int *)sub_601DFFE4(a1 + 300);
    v4 = sub_601693DC(903, v3[21], v3[22], v3[24]);
    sub_60204DB8(v4, 30, 0, 1.0, 1.0);
    FIELD_U8(a1, 216) &= ~2u;
    v2 = 1;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 0;
  }
  FIELD_U32(a1, 420) = v2;
  v5 = FIELD_U32(a1, 352);
  v6 = 0;
  if ( v5 <= 2 )
    v6 = *((_DWORD *)*(&off_60BD8EE8 + v5) + 2 * FIELD_U8(dword_60CC6D78, 2082) + 1);
  v10[0] = 4;
  v10[1] = 1;
  v11 = -1;
  v7 = sub_601A443C(dword_60C89E18, 4, 1);
  if ( FIELD_S32(v7, 32) >= 1 )
  {
    v8 = 0;
    while ( !sub_60183038(v7, v8, v6) )
    {
      if ( (signed int)++v8 >= FIELD_U32(v7, 32) )
        goto LABEL_12;
    }
    v11 = v8;
  }
LABEL_12:
  result = sub_601DFFE4((int)v10);
  if ( result )
  {
    result = sub_601693DC(903, FIELD_U32(result, 84), FIELD_U32(result, 88), FIELD_U32(result, 96));
    if ( result )
      FIELD_U8(result, 300) = 1;
  }
  return result;
}
