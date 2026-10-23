/* sub_60336CCC
 * address: 0x60336CCC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60336CCC(StateActor *a1)
{
  ActiveCollider *p_aCollider; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6

  p_aCollider = &FIELD_U32(a1, 0x0)._.aCollider;
  ActiveCollider__init(&FIELD_U32(a1, 0x0)._.aCollider, &FIELD_U32(a1, 0x0)._, &stru_60BECD18, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider)
    && !ActiveColliderMgr_isInCreateList(v3, p_aCollider) )
  {
    ActiveColliderMgr_addToCreateList(v3, p_aCollider);
  }
  CollisionMgr_init((CollisionMgr *)FIELD_U32(a1, 0x0).collisionMgr, a1, &stru_60AFFA9C, &stru_60AFFAA8, &stru_60AFFAB4);
  FIELD_U32(a1, 0x0)._.scale.x = 1.0;
  FIELD_U32(a1, 0x0)._.scale.y = 1.0;
  FIELD_U32(a1, 0x0)._.scale.z = 1.0;
  ActiveCollider__init(
    (ActiveCollider *)&a1[1]._._.field_210,
    &FIELD_U32(a1, 0x0)._,
    &stru_60AFFA70,
    (int)&a1[1]._.collisionMgr[184]);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&a1[1]._._.field_210)
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)&a1[1]._._.field_210) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)&a1[1]._._.field_210);
  }
  return (*(int (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0)._._.vtable + 192))(a1, &dword_60C9419C);
}
