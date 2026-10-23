/* sub_605DD51C
 * address: 0x605DD51C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_605DD51C(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r4
  ActiveCollider *v4; // r1
  ActiveCollider *v5; // r6
  ActiveColliderMgr *result; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( FIELD_U32(a1, 7288)
    && !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7148))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 7148)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 7148));
  }
  v4 = (ActiveCollider *)(a1 + 188);
  v5 = (ActiveCollider *)(a1 + 7452);
  if ( !ActiveColliderMgr_isInActiveList(v3, v4) && !ActiveColliderMgr_isInCreateList(v3, v2) )
    ActiveColliderMgr_addToCreateList(v3, v2);
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(v3, v5);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, v5);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, v5);
  }
  return result;
}
