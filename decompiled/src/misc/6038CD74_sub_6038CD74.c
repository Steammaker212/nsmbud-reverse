/* sub_6038CD74
 * address: 0x6038CD74   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6038CD74(int a1)
{
  ActiveColliderMgr *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveCollider *v5; // r4
  ActiveColliderMgr *v6; // r5
  ActiveColliderMgr *result; // r0

  StageActor__addActiveColliders((StageActor *)a1);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7216))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 7216)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 7216));
  }
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6912))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 6912)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 6912));
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7824))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 7824)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 7824));
  }
  v5 = (ActiveCollider *)(a1 + 7520);
  v6 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v5);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v6, v5);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v6, v5);
  }
  return result;
}
