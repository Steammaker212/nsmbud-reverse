/* sub_607A08BC
 * address: 0x607A08BC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607A08BC(int a1, int a2)
{
  int v3; // r1

  if ( a2 == 2 )
  {
    v3 = 45;
  }
  else if ( a2 == 1 )
  {
    v3 = 44;
  }
  else
  {
    v3 = 52;
  }
  sub_60773630(a1, v3, 0);
  return AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 84), 8, 0, 0);
}
