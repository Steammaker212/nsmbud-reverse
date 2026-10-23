/* sub_603E18E4
 * address: 0x603E18E4   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603E18E4(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveCollider *v5; // r5
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r7
  ActiveCollider *v8; // r4
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r4
  ActiveColliderMgr *result; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7568))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 7568)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 7568));
  }
  v5 = (ActiveCollider *)(a1 + 7872);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7872))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 7872)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 7872));
  }
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8352))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 8352)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 8352));
  }
  v8 = (ActiveCollider *)(a1 + 8656);
  v9 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v8) && !ActiveColliderMgr_isInCreateList(v9, v8) )
    ActiveColliderMgr_addToCreateList(v9, v8);
  v10 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v5);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v10, v5);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v10, v5);
  }
  return result;
}
