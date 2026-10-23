/* jc_quake_ed_ref
 * address: 0x6008E964   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_quake_ed_ref(int a1)
{
  int v2; // r0
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_quake_ed";
  sub_60421AE4(v2, v4, 0);
  FIELD_U32(a1, 9356) = 0;
  FIELD_U32(a1, 9352) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  sub_60101ABC(a1);
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 3, 3, 0, 0);
  SE_BOSS_JR_CROWN_LAND_ref_3(a1);
  FIELD_U16(a1, 6276) = 20;
  return 6276;
}
