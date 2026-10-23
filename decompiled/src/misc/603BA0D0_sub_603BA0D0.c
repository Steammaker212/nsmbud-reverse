/* sub_603BA0D0
 * address: 0x603BA0D0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BA0D0(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  float v5; // r7
  float v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r0
  int result; // r0
  int v12; // r0
  int v13; // r0

  v2 = a1 + 17192;
  v3 = FIELD_U32(a1, 19416);
  if ( (v3 & 1) != 0 )
  {
    v9 = sub_6014C390(v2);
    v5 = FIELD_F32(v9, 16);
    v6 = FIELD_F32(v9, 12);
    FIELD_F32(a1, 108) = v6;
    FIELD_F32(a1, 112) = v5 + -7.0;
    v7 = sub_6014C390(v2);
    v8 = 0;
    goto LABEL_5;
  }
  if ( (v3 & 0x10400) == 0x400 )
  {
    v4 = sub_6014C3BC(v2);
    v5 = FIELD_F32(v4, 16);
    v6 = FIELD_F32(v4, 12);
    FIELD_F32(a1, 108) = v6;
    FIELD_F32(a1, 112) = v5 + 7.0;
    v7 = sub_6014C3BC(v2);
    v8 = 2;
LABEL_5:
    v10 = FIELD_U32(v7, 8);
    FIELD_F32(a1, 6476) = v6;
    FIELD_F32(a1, 6480) = v5;
    FIELD_U32(a1, 22544) = v8;
    FIELD_U32(a1, 6464) = v10;
    FIELD_U8(a1, 22576) = 0;
    FIELD_U8(a1, 22613) = 0;
    ((void (__fastcall *)(int))loc_603B90EC)(a1);
    return 1;
  }
  if ( (v3 & 0x440000) != 0 && (v3 & 0x10000000) == 0 )
  {
    v12 = sub_6014C3EC(v2, 0);
    v6 = FIELD_F32(v12, 12);
    v5 = FIELD_F32(v12, 16);
    FIELD_F32(a1, 108) = v6 + 7.0;
    FIELD_F32(a1, 112) = v5;
    v7 = sub_6014C3EC(v2, 0);
    v8 = 1;
    goto LABEL_5;
  }
  result = 0;
  if ( (v3 & 0x880000) != 0 && (v3 & 0x20000000) == 0 )
  {
    v13 = sub_6014C3EC(v2, 1);
    v6 = FIELD_F32(v13, 12);
    v5 = FIELD_F32(v13, 16);
    FIELD_F32(a1, 108) = v6 + -7.0;
    FIELD_F32(a1, 112) = v5;
    v7 = sub_6014C3EC(v2, 1);
    v8 = 3;
    goto LABEL_5;
  }
  return result;
}
