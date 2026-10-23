/* sub_6038CEB4
 * address: 0x6038CEB4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6038CEB4(int a1)
{
  int v1; // r4
  ActiveColliderMgr *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r5

  v1 = a1;
  StageActor__removeActiveColliders(a1);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7216));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(v1 + 7216));
  ActiveColldierMgr_removeFromList3(v2, v1 + 7216);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 6912));
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)(v1 + 6912));
  ActiveColldierMgr_removeFromList3(v3, v1 + 6912);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7824));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(v1 + 7824));
  ActiveColldierMgr_removeFromList3(v4, v1 + 7824);
  v5 = ActiveColliderMgr_instance;
  v1 += 7520;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)v1);
  return ActiveColldierMgr_removeFromList3(v5, v1);
}
