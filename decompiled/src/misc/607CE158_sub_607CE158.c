/* sub_607CE158
 * address: 0x607CE158   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607CE158(Enemy *a1, int a2, int a3)
{
  int v6; // r4
  char playerId; // r8

  v6 = 0;
  if ( !(*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 1156))(a1) )
  {
    playerId = FIELD_U8(a1, 0x54);
    if ( (*(int (__fastcall **)(Enemy *, int, int))(FIELD_U32(a1, 0x0) + 1180))(a1, a2, a3) == 1 )
    {
      AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, playerId, 4, 0, 0);
      return 1;
    }
  }
  return v6;
}
