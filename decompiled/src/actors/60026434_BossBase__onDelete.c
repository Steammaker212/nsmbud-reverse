/* BossBase__onDelete
 * address: 0x60026434   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003444
// 
// Overridden by:
//   - 0x600CE810 : BowserJrBase
//   - 0x600B1518 : KoopalingBase
signed int __fastcall BossBase__onDelete(BossBase *this)
{
  BossBase *v1; // r4
  ActiveColliderMgr *v2; // r5

  v1 = this;
  PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, (int)&FIELD_U32(this, 0x19F4));
  v1 = (BossBase *)((char *)v1 + 0x1A40);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromList3(v2, (int)v1);
  return 1;
}
