/* sub_603600B0
 * address: 0x603600B0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603600B0(StageActor *a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r4
  ActiveColliderMgr *result; // r0

  StageActor__addActiveColliders(a1);
  v2 = (ActiveCollider *)&FIELD_U32(a1 + (19) * 644, 0x34);
  v3 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, v2);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, v2);
  }
  return result;
}
