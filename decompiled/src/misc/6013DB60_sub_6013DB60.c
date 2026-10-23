/* sub_6013DB60
 * address: 0x6013DB60   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6013DB60(int a1)
{
  int v1; // r4
  ActiveColliderMgr *v2; // r6
  ActiveColliderMgr *v3; // r5

  v1 = a1;
  StageActor__removeActiveColliders(a1);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 6428));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(v1 + 6428));
  ActiveColldierMgr_removeFromList3(v2, v1 + 6428);
  v3 = ActiveColliderMgr_instance;
  v1 += 6732;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)v1);
  return ActiveColldierMgr_removeFromList3(v3, v1);
}
