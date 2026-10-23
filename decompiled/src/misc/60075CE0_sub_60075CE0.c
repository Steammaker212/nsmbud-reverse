/* sub_60075CE0
 * address: 0x60075CE0   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60075CE0(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r6
  ActiveColliderMgr *v11; // r6
  ActiveColliderMgr *v12; // r6
  ActiveColliderMgr *v13; // r6

  v2 = (ActiveCollider *)(a1 + 7620);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7620));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7924));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 7924));
  ActiveColldierMgr_removeFromList3(v4, a1 + 7924);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8228));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 8228));
  ActiveColldierMgr_removeFromList3(v5, a1 + 8228);
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8532));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(a1 + 8532));
  ActiveColldierMgr_removeFromList3(v6, a1 + 8532);
  v7 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8836));
  ActiveColldierMgr_removeFromCreateList(v7, (ActiveCollider *)(a1 + 8836));
  ActiveColldierMgr_removeFromList3(v7, a1 + 8836);
  v8 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 9140));
  ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 9140));
  ActiveColldierMgr_removeFromList3(v8, a1 + 9140);
  v9 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 9444));
  ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(a1 + 9444));
  ActiveColldierMgr_removeFromList3(v9, a1 + 9444);
  v10 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 9748));
  ActiveColldierMgr_removeFromCreateList(v10, (ActiveCollider *)(a1 + 9748));
  ActiveColldierMgr_removeFromList3(v10, a1 + 9748);
  v11 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10052));
  ActiveColldierMgr_removeFromCreateList(v11, (ActiveCollider *)(a1 + 10052));
  ActiveColldierMgr_removeFromList3(v11, a1 + 10052);
  v12 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10356));
  ActiveColldierMgr_removeFromCreateList(v12, (ActiveCollider *)(a1 + 10356));
  ActiveColldierMgr_removeFromList3(v12, a1 + 10356);
  v13 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10660));
  ActiveColldierMgr_removeFromCreateList(v13, (ActiveCollider *)(a1 + 10660));
  ActiveColldierMgr_removeFromList3(v13, a1 + 10660);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 23896));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 24296));
  return ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 24696));
}
