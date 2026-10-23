/* sub_603940D0
 * address: 0x603940D0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603940D0(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r5
  ActiveColliderMgr *result; // r0
  ActiveCollider *v6; // r4
  ActiveColliderMgr *v7; // r5

  FIELD_U32(a1, 344) = sub_6039B8A0;
  v2 = (ActiveCollider *)(a1 + 6608);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6608))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6912))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6912)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6912));
  }
  result = (ActiveColliderMgr *)FIELD_U8(a1, 13300);
  if ( FIELD_U8(a1, 13300) )
  {
    v6 = (ActiveCollider *)(a1 + 188);
    v7 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v6);
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v7, v6);
      if ( !result )
        return ActiveColliderMgr_addToCreateList(v7, v6);
    }
  }
  return result;
}
