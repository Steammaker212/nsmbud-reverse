/* sub_607C83EC
 * address: 0x607C83EC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C83EC(int a1, int a2)
{
  int v4; // r6
  int v5; // r0

  v4 = 0;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1156))(a1)
    && (FIELD_U8(a2, 153) & 0x10) != 0
    && (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1180))(a1, FIELD_U32(a2, 64), 2) == 1 )
  {
    v5 = FIELD_U32(a2, 64);
    FIELD_U32(a1, 256) = v5;
    FIELD_U32(a1, 7204) = v5;
    FIELD_U32(a1, 15096) = 60;
    AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 84), 8, 0, 0);
    return 1;
  }
  return v4;
}
