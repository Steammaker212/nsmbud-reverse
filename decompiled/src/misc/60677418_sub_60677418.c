/* sub_60677418
 * address: 0x60677418   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60677418(int a1)
{
  ActiveColliderMgr *v2; // r6

  block_light_ref();
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C16208, 0);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B07C64, &stru_60B07C70, &stru_60B07C7C);
  ShapedCollider_init((ShapedCollider *)(a1 + 6160), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB7CD0);
  FIELD_U32(a1, 6472) = sub_605C9460;
  FIELD_U32(a1, 6476) = sub_605C95B8;
  FIELD_U32(a1, 6480) = sub_605C9710;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6160));
  StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB0ECC._._);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 256))(a1);
  return 1;
}
