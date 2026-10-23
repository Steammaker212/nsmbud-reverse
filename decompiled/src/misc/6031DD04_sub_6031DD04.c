/* sub_6031DD04
 * address: 0x6031DD04   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6031DD04(StageActor *a1)
{
  ActiveCollider *p_lastCollisionOffsetX; // r4
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *result; // r0

  StageActor__addActiveColliders(a1);
  p_lastCollisionOffsetX = (ActiveCollider *)&a1[19].aCollider.lastCollisionOffsetX;
  v3 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_lastCollisionOffsetX);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, p_lastCollisionOffsetX);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, p_lastCollisionOffsetX);
  }
  return result;
}
