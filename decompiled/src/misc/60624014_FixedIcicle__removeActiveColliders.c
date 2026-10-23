/* FixedIcicle__removeActiveColliders
 * address: 0x60624014   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000968
// 
// Overridden by: None
ActiveColliderMgr *__fastcall FixedIcicle__removeActiveColliders(FixedIcicle *this)
{
  ActiveCollider *this_1; // r4
  ActiveColliderMgr *v2; // r5

  this_1 = (ActiveCollider *)this;
  StageActor__removeActiveColliders((int)this);
  this_1 = (ActiveCollider *)((char *)this_1 + 0x18A4);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, this_1);
  ActiveColldierMgr_removeFromCreateList(v2, this_1);
  return ActiveColldierMgr_removeFromList3(v2, (int)this_1);
}
