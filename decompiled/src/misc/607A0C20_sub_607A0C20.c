/* sub_607A0C20
 * address: 0x607A0C20   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A0C20(int a1, int a2, int a3)
{
  int v6; // r4

  v6 = 0;
  if ( FIELD_U32(a1, 1320) == FIELD_U32(a1, 11388)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1156))(a1)
    && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 1180))(a1, a2, a3) == 1 )
  {
    AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 84), 4, 0, 0);
    return 1;
  }
  return v6;
}
