/* sub_60127404
 * address: 0x60127404   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60127404(int a1)
{
  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U16(a1, 6276) = 45;
  sub_60128E08(a1);
  sub_60128F34(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1332))(a1);
  return sub_608134CC(a1 + 6332, "SE_BOSS_WENDY_MAGIC_SHOT", FIELD_S16(a1, 6640), 0);
}
