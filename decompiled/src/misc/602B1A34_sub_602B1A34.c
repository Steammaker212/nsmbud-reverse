/* sub_602B1A34
 * address: 0x602B1A34   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602B1A34(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r4
  ActiveCollider *v4; // r5
  ActiveColliderMgr *result; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = (ActiveCollider *)(a1 + 6508);
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(v3, v4);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, v4);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, v4);
  }
  return result;
}
