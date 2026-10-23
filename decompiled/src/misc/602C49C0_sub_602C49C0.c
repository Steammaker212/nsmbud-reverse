/* sub_602C49C0
 * address: 0x602C49C0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602C49C0(StageActor *a1)
{
  ActiveColliderMgr *result; // r0
  ActiveCollider *v3; // r4
  ActiveColliderMgr *v4; // r5

  result = (ActiveColliderMgr *)(unsigned __int8)a1[9].field_21A;
  if ( result != (ActiveColliderMgr *)2 )
  {
    StageActor__addActiveColliders(a1);
    v3 = (ActiveCollider *)&a1[14].aCollider.field_128;
    v4 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v3);
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v4, v3);
      if ( !result )
        return ActiveColliderMgr_addToCreateList(v4, v3);
    }
  }
  return result;
}
