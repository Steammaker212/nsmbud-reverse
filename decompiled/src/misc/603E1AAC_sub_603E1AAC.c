/* sub_603E1AAC
 * address: 0x603E1AAC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603E1AAC(int a1)
{
  int v1; // r4
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveCollider *v6; // r5
  ActiveColliderMgr *v7; // r7
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r4

  v1 = a1;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7568));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(v1 + 7568));
  ActiveColldierMgr_removeFromList3(v4, v1 + 7568);
  v5 = ActiveColliderMgr_instance;
  v6 = (ActiveCollider *)(v1 + 7872);
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7872));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(v1 + 7872));
  ActiveColldierMgr_removeFromList3(v5, v1 + 7872);
  v7 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 8352));
  ActiveColldierMgr_removeFromCreateList(v7, (ActiveCollider *)(v1 + 8352));
  ActiveColldierMgr_removeFromList3(v7, v1 + 8352);
  v8 = ActiveColliderMgr_instance;
  v1 += 8656;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromList3(v8, v1);
  v9 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v6);
  ActiveColldierMgr_removeFromCreateList(v9, v6);
  return ActiveColldierMgr_removeFromList3(v9, (int)v6);
}
