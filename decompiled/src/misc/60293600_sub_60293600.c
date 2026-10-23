/* sub_60293600
 * address: 0x60293600   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60293600(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveCollider *v6; // r4
  ActiveColliderMgr *v7; // r5
  ActiveColliderMgr *result; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6360)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6360));
  }
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6860))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6860)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6860));
  }
  v6 = (ActiveCollider *)(a1 + 7164);
  v7 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v6);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v7, v6);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v7, v6);
  }
  return result;
}
