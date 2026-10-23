/* sub_605AED80
 * address: 0x605AED80   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605AED80(int a1)
{
  ActiveCollider *v2; // r6
  ActiveCollider *v3; // r5
  ActiveColliderMgr *v4; // r7
  ActiveColliderMgr *v5; // r7
  Actor *v6; // r0

  *(_DWORD *)a1 = off_60C08ADC;
  v2 = (ActiveCollider *)(a1 + 6424);
  v3 = (ActiveCollider *)(a1 + 6120);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6120));
  ActiveColldierMgr_removeFromCreateList(v4, v3);
  ActiveColldierMgr_removeFromList3(v4, (int)v3);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v2);
  ActiveColldierMgr_removeFromCreateList(v5, v2);
  ActiveColldierMgr_removeFromList3(v5, (int)v2);
  ActiveCollider_dtor(v2);
  ActiveCollider_dtor(v3);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v6 = StageActor__dtor((Actor *)a1);
  operator_delete(v6);
}
