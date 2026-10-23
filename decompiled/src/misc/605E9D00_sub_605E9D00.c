/* sub_605E9D00
 * address: 0x605E9D00   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E9D00(int a1)
{
  int result; // r0
  int v3; // r2
  bool v4; // zf

  result = sub_6040E4C8(LevelInfo_instance);
  v4 = result == 0;
  if ( !result )
  {
    result = FIELD_U8(a1, 308);
    v4 = result == 0;
  }
  if ( v4 )
  {
    FIELD_U8(a1, 308) = 1;
    return sub_60816D48(dword_60CC6B68, 1024, v3);
  }
  return result;
}
