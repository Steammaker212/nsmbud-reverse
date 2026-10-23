/* sub_6033934C
 * address: 0x6033934C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6033934C(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveCollider *v4; // r4
  ActiveColliderMgr *v5; // r5
  ActiveColliderMgr *result; // r0

  v2 = (ActiveCollider *)(a1 + 6380);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6380))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = (ActiveCollider *)(a1 + 188);
  v5 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v4);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v5, v4);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v5, v4);
  }
  return result;
}
