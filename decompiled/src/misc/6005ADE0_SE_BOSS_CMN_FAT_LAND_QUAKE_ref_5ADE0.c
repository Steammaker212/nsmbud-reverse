/* SE_BOSS_CMN_FAT_LAND_QUAKE_ref_5ADE0
 * address: 0x6005ADE0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_CMN_FAT_LAND_QUAKE_ref_5ADE0(_DWORD *a1)
{
  jump_ed_ref(a1);
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 1, 0, 0);
  return sub_60813430(a1 + 1583, "SE_BOSS_CMN_FAT_LAND_QUAKE", 0);
}
