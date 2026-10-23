/* BanzaiBill_vf18
 * address: 0x60320A78   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall BanzaiBill_vf18(int a1)
{
  int v1; // r4
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r5

  v1 = a1;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 6368));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(v1 + 6368));
  ActiveColldierMgr_removeFromList3(v4, v1 + 6368);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 6676));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(v1 + 6676));
  ActiveColldierMgr_removeFromList3(v5, v1 + 6676);
  v6 = ActiveColliderMgr_instance;
  v1 += 6980;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)v1);
  return ActiveColldierMgr_removeFromList3(v6, v1);
}
