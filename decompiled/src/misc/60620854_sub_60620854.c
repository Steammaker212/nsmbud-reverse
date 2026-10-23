/* sub_60620854
 * address: 0x60620854   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60620854(int a1)
{
  ActiveColliderMgr *result; // r0
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  ActiveCollider *v5; // r4
  ActiveColliderMgr *v6; // r5

  FIELD_U32(a1, 6328) = 0;
  result = *(ActiveColliderMgr **)(a1 + 6680);
  if ( result == (ActiveColliderMgr *)1 )
  {
    v3 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                    ActiveColliderMgr_instance,
                                    (ActiveCollider *)(a1 + 188));
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188));
      if ( !result )
      {
        v4 = ActiveColliderMgr_instance;
        if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
          && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
        {
          ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
        }
        v5 = (ActiveCollider *)(a1 + 6332);
        v6 = ActiveColliderMgr_instance;
        result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v5);
        if ( !result )
        {
          result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v6, v5);
          if ( !result )
            return ActiveColliderMgr_addToCreateList(v6, v5);
        }
      }
    }
  }
  return result;
}
