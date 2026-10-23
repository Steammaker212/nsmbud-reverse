/* sub_607D888C
 * address: 0x607D888C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D888C(int result)
{
  FIELD_U8(result, 100) = 0;
  if ( FIELD_U8(result, 101) == 3 )
  {
    FIELD_U8(result, 100) = 1;
    return AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 3, 0, 0);
  }
  return result;
}
