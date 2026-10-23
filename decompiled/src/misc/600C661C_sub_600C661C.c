/* sub_600C661C
 * address: 0x600C661C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_600C661C(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r4
  ActiveCollider *v4; // r5
  ActiveColliderMgr *result; // r0

  v2 = (ActiveCollider *)(a1 + 8240);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8240))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  if ( !ActiveColliderMgr_isInActiveList(v3, (ActiveCollider *)(a1 + 8544))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 8544)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 8544));
  }
  if ( !ActiveColliderMgr_isInActiveList(v3, (ActiveCollider *)(a1 + 8848))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 8848)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 8848));
  }
  if ( !ActiveColliderMgr_isInActiveList(v3, (ActiveCollider *)(a1 + 9152))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 9152)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 9152));
  }
  v4 = (ActiveCollider *)(a1 + 9456);
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(v3, v4);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, v4);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, v4);
  }
  return result;
}
