/* sub_602506AC
 * address: 0x602506AC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602506AC(StageActor *a1)
{
  ActiveCollider *p_aCollider; // r6
  ActiveColliderMgr *v3; // r5
  ActiveCollider *p_node3; // r4
  ActiveColliderMgr *v5; // r5
  ActiveColliderMgr *result; // r0
  ActiveColliderMgr *v7; // r5

  p_aCollider = &FIELD_U32(a1, 0xBC);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0xBC))
    && !ActiveColliderMgr_isInCreateList(v3, p_aCollider) )
  {
    StageActor__addActiveColliders(a1);
  }
  p_node3 = (ActiveCollider *)&a1[18].aCollider.node3;
  v5 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_node3);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v5, p_node3);
    if ( !result )
    {
      v7 = ActiveColliderMgr_instance;
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_node3);
      if ( !result )
      {
        result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v7, p_node3);
        if ( !result )
          return ActiveColliderMgr_addToCreateList(v7, p_node3);
      }
    }
  }
  return result;
}
