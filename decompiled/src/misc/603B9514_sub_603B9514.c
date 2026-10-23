/* sub_603B9514
 * address: 0x603B9514   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B9514(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  int v5; // t1
  int v6; // r5
  int v7; // r0
  int v8; // r3
  int v9; // r3

  v5 = FIELD_U32(a1, 22544);
  v4 = (_DWORD *)(a1 + 22544);
  v6 = 0;
  switch ( (v5 + (int)*(float *)&dword_60AF1F60[*(v4 - 5616)] + 4) % 4 )
  {
    case 0:
      if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      {
        if ( a2 == 1 )
          *v4 = 0;
        if ( a3 == 1 )
          FIELD_U32(a1, 6464) = sub_6014C4A4(a1 + 648);
        v7 = sub_6014C390(a1 + 648);
        goto LABEL_21;
      }
      break;
    case 1:
      v8 = FIELD_U32(a1, 2872);
      if ( (v8 & 0x440000) != 0 && (v8 & 0x10000000) == 0 )
      {
        if ( a2 == 1 )
          *v4 = 1;
        if ( a3 == 1 )
          FIELD_U32(a1, 6464) = sub_6014C658(a1 + 648, 0);
        v7 = sub_6014C3EC(a1 + 648, 0);
        goto LABEL_21;
      }
      break;
    case 2:
      if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
      {
        if ( a2 == 1 )
          *v4 = 2;
        if ( a3 == 1 )
          FIELD_U32(a1, 6464) = sub_6014C5E8(a1 + 648);
        v7 = sub_6014C3BC(a1 + 648);
LABEL_21:
        v6 = 1;
        if ( v7 )
          goto LABEL_30;
      }
      break;
    case 3:
      v9 = FIELD_U32(a1, 2872);
      if ( (v9 & 0x880000) != 0 && (v9 & 0x20000000) == 0 )
      {
        if ( a2 == 1 )
          *v4 = 3;
        if ( a3 == 1 )
          FIELD_U32(a1, 6464) = sub_6014C658(a1 + 648, 1);
        v6 = 1;
        v7 = sub_6014C3EC(a1 + 648, 1);
        if ( v7 )
LABEL_30:
          FIELD_U32(a1, 22568) = sub_6014A2B8(v7);
      }
      break;
    default:
      return v6;
  }
  return v6;
}
