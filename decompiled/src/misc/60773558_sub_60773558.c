/* sub_60773558
 * address: 0x60773558   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60773558(int a1, int a2, int a3)
{
  int result; // r0

  if ( a3 != 1 || (result = FIELD_U8(a1, 1240), (result & 0x10) == 0) )
  {
    result = FIELD_U8(a1, 1204);
    if ( (result & 0x40) == 0 )
    {
      result = sub_6040E538(LevelInfo_instance);
      if ( !result )
        return sub_60814590(a1 + 840, a2, 0);
    }
  }
  return result;
}
