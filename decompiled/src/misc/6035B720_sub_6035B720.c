/* sub_6035B720
 * address: 0x6035B720   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6035B720(int a1)
{
  ActiveCollider *v1; // r4
  ActiveColliderMgr *v2; // r5
  ActiveColliderMgr *result; // r0

  v1 = (ActiveCollider *)(a1 + 6868);
  v2 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                  ActiveColliderMgr_instance,
                                  (ActiveCollider *)(a1 + 6868));
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v2, v1);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v2, v1);
  }
  return result;
}
