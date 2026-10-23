/* sub_60769D94
 * address: 0x60769D94   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60769D94(int a1, int a2)
{
  _BOOL4 result; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r1
  int v7; // r0
  int v8; // r1

  result = 0;
  if ( (FIELD_U8(a1, 1235) & 0x20) == 0 && (FIELD_U8(a1, 1226) & 1) != 0 )
  {
    v4 = 10;
    if ( (FIELD_U8(a1, 1208) & 0x20) != 0 )
      v4 = 1;
    switch ( a2 )
    {
      case 0:
        v5 = sub_60786738(a1 + 688);
        result = 1;
        if ( !v5 )
          return (FIELD_U8(a1, 1208) & 0x20) != 0;
        return result;
      case 1:
        v6 = sub_60786744(a1 + 688);
        result = 1;
        if ( !v6 && (FIELD_U8(a1, 1208) & 0x40) == 0 )
          goto LABEL_16;
        return result;
      case 2:
        if ( FIELD_U32(a1, 80) != 1 )
          goto LABEL_16;
        v7 = 9868;
        goto LABEL_15;
      case 3:
        if ( FIELD_U32(a1, 80) )
          goto LABEL_16;
        v7 = 9872;
LABEL_15:
        v8 = *(_DWORD *)(a1 + v7);
        result = 1;
        if ( v8 < v4 )
          goto LABEL_16;
        return result;
      default:
LABEL_16:
        result = 0;
        break;
    }
  }
  return result;
}
