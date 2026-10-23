/* sub_603B9C08
 * address: 0x603B9C08   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603B9C08(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r1
  int v4; // r5
  int v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r4
  int v9; // r1
  int v10; // r4
  int v11; // r0
  int v12; // r0

  switch ( (FIELD_U32(a1, 22544) + (int)*(float *)&dword_60AF1F60[FIELD_U32(a1, 80)] + 4) % 4 )
  {
    case 0:
      if ( (FIELD_U8(a1, 14064) & 1) == 0 )
        return 0;
      v1 = a1 + 11840;
      if ( !sub_6014C390(a1 + 11840) )
        return 0;
      v2 = sub_6014C390(v1);
      goto LABEL_17;
    case 1:
      v3 = FIELD_U32(a1, 14064);
      if ( (v3 & 0x440000) == 0 || (v3 & 0x10000000) != 0 )
        return 0;
      v4 = a1 + 11840;
      v5 = 0;
      if ( !sub_6014C3EC(a1 + 11840, 0) )
        return v5;
      v6 = v4;
      v7 = 0;
LABEL_16:
      v2 = sub_6014C3EC(v6, v7);
LABEL_17:
      v11 = sub_6014A2B8(v2);
      if ( !v11 )
        return 0;
      v12 = FIELD_U32(v11, 300);
      if ( v12 != 30 )
        return v12 == 17;
      return 1;
    case 2:
      if ( (FIELD_U32(a1, 14064) & 0x10400) != 0x400 )
        return 0;
      v8 = a1 + 11840;
      if ( !sub_6014C3BC(a1 + 11840) )
        return 0;
      v2 = sub_6014C3BC(v8);
      goto LABEL_17;
    case 3:
      v9 = FIELD_U32(a1, 14064);
      if ( (v9 & 0x880000) == 0 )
        return 0;
      if ( (v9 & 0x20000000) != 0 )
        return 0;
      v10 = a1 + 11840;
      if ( !sub_6014C3EC(a1 + 11840, 1) )
        return 0;
      v6 = v10;
      v7 = 1;
      goto LABEL_16;
    default:
      return 0;
  }
}
