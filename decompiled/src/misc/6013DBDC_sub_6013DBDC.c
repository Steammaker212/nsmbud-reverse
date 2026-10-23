/* sub_6013DBDC
 * address: 0x6013DBDC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6013DBDC(int a1)
{
  ActiveColliderMgr *v2; // r6
  ActiveCollider *v3; // r4
  ActiveColliderMgr *v4; // r5
  ActiveColliderMgr *result; // r0

  StageActor__addActiveColliders((StageActor *)a1);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6428))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 6428)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 6428));
  }
  v3 = (ActiveCollider *)(a1 + 6732);
  v4 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v3);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v4, v3);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v4, v3);
  }
  return result;
}
