/* sub_607734E8
 * address: 0x607734E8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607734E8(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int result; // r0
  int v8; // r2

  if ( a3 != 1 || (result = a1[1240], (result & 0x10) == 0) )
  {
    result = a1[1204];
    if ( (result & 0x40) == 0 )
    {
      result = sub_6040E538(LevelInfo_instance);
      if ( !result )
      {
        if ( a1[84] == 255 )
          v8 = 0;
        else
          v8 = a4;
        return sub_60814010(a1 + 840, a2, v8);
      }
    }
  }
  return result;
}
