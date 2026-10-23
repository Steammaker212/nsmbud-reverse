/* sub_60773968
 * address: 0x60773968   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60773968(unsigned __int8 *a1)
{
  int result; // r0

  if ( sub_60766708((int)a1) || (result = a1[6900], (result & 1) != 0) )
  {
    if ( !sub_6040E44C(LevelInfo_instance) || (result = a1[84]) == 0 )
    {
      result = a1[6902];
      if ( (result & 4) == 0 )
        JUMPOUT(0x607739DC);
    }
  }
  return result;
}
