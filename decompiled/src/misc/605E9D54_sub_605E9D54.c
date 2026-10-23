/* sub_605E9D54
 * address: 0x605E9D54   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E9D54(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r6
  int v5; // r1
  int v6; // r2

  result = sub_6040E4C8(LevelInfo_instance);
  if ( !result )
  {
    result = FIELD_U8(a1, 308);
    if ( FIELD_U8(a1, 308) )
    {
      v3 = FIELD_U32(a1, 36);
      if ( v3 )
      {
        v4 = 0;
        while ( 1 )
        {
          v5 = FIELD_U32(a1, 28);
          v6 = FIELD_U32(a1, 32);
          if ( v4 + v6 >= v5 )
            v6 -= v5;
          result = sub_605DBD64(*(_DWORD *)(FIELD_U32(a1, 24) + 4 * (v4 + v6)));
          if ( result )
            break;
          if ( v3 == ++v4 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        FIELD_U8(a1, 308) = 0;
        return sub_60816F60(dword_60CC6B68, 1024);
      }
    }
  }
  return result;
}
