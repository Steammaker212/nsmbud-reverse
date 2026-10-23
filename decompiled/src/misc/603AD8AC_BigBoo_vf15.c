/* BigBoo_vf15
 * address: 0x603AD8AC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BigBoo_vf15(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6

  v2 = (ActiveCollider *)(a1 + 6312);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6312));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6964);
  return 1;
}
