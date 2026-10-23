/* sub_605CBAA4
 * address: 0x605CBAA4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_605CBAA4(int a1)
{
  ActiveCollider *v2; // r4
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *result; // r0

  sub_605CC924();
  v2 = (ActiveCollider *)(a1 + 6820);
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
