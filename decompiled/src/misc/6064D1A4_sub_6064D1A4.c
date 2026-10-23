/* sub_6064D1A4
 * address: 0x6064D1A4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064D1A4(int a1, char a2)
{
  int result; // r0

  if ( (a2 & 1) != 0 )
    result = sub_604005D0(AreaRumbleMgr_instance, 0, 8, 2, 0, 0);
  if ( (a2 & 2) != 0 )
    result = sub_604005D0(AreaRumbleMgr_instance, 1, 8, 2, 0, 0);
  if ( (a2 & 4) != 0 )
    result = sub_604005D0(AreaRumbleMgr_instance, 2, 8, 2, 0, 0);
  if ( (a2 & 8) != 0 )
    return sub_604005D0(AreaRumbleMgr_instance, 3, 8, 2, 0, 0);
  return result;
}
