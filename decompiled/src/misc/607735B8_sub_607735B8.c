/* sub_607735B8
 * address: 0x607735B8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607735B8(unsigned __int8 *a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  if ( a4 != 1 || (result = a1[1240], (result & 0x10) == 0) )
  {
    result = a1[1204];
    if ( (result & 0x40) == 0 )
    {
      result = sub_6040E538(LevelInfo_instance);
      if ( !result )
      {
        if ( a1[84] == 255 )
          a5 = 0;
        return sub_60814658(a1 + 840, a2, a3, a5);
      }
    }
  }
  return result;
}
