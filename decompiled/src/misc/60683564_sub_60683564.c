/* sub_60683564
 * address: 0x60683564   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60683564(ActiveColliderMgr *result)
{
  ActiveCollider *p_last; // r5
  ActiveColliderMgr *v2; // r4

  if ( BYTE1(result[117].createList.vtable) )
  {
    p_last = (ActiveCollider *)&result[2].list4.last;
    v2 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                    ActiveColliderMgr_instance,
                                    (ActiveCollider *)&result[2].list4.last);
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v2, p_last);
      if ( !result )
        return ActiveColliderMgr_addToCreateList(v2, p_last);
    }
  }
  return result;
}
