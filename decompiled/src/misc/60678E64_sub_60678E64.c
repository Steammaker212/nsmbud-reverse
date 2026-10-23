/* sub_60678E64
 * address: 0x60678E64   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60678E64(int a1)
{
  ActiveColliderMgr *result; // r0
  ActiveCollider *v3; // r4
  ActiveColliderMgr *v4; // r5

  sub_605DD51C(a1);
  result = *(ActiveColliderMgr **)(a1 + 8284);
  if ( result )
  {
    v3 = (ActiveCollider *)(a1 + 8144);
    v4 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v3);
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v4, v3);
      if ( !result )
        return ActiveColliderMgr_addToCreateList(v4, v3);
    }
  }
  return result;
}
