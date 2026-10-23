/* BanzaiBill_initColliders_helper
 * address: 0x6032166C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BanzaiBill_initColliders_helper(int a1)
{
  signed int result; // r0
  ActiveColliderMgr *v3; // r6
  ActiveCollider *v4; // r4
  ActiveColliderMgr *v5; // r5

  result = sub_602A588C(a1);
  if ( !result )
  {
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6368))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 6368)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 6368));
    }
    v4 = (ActiveCollider *)(a1 + 6676);
    v5 = ActiveColliderMgr_instance;
    result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v4);
    if ( !result )
    {
      result = ActiveColliderMgr_isInCreateList(v5, v4);
      if ( !result )
        return (signed int)ActiveColliderMgr_addToCreateList(v5, v4);
    }
  }
  return result;
}
