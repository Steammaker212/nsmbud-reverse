/* SE_BOSS_CMN_FAT_LAND_QUAKE_ref
 * address: 0x6005ACF8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall SE_BOSS_CMN_FAT_LAND_QUAKE_ref(ActiveCollider *a1)
{
  ActiveColliderMgr *v2; // r5

  ((void (*)(void))loc_60056BEC)();
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 1, 0, 0);
  sub_60813430(&a1[20].field_FC, "SE_BOSS_CMN_FAT_LAND_QUAKE", 0);
  a1 = (ActiveCollider *)((char *)a1 + 8744);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, a1);
  ActiveColldierMgr_removeFromCreateList(v2, a1);
  return ActiveColldierMgr_removeFromList3(v2, (int)a1);
}
