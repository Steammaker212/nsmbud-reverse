/* BanzaiBill_vf19
 * address: 0x60320B4C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BanzaiBill_vf19(int a1)
{
  signed int result; // r0
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveCollider *v6; // r4
  ActiveColliderMgr *v7; // r5

  result = sub_602A588C(a1);
  if ( !result )
  {
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
    }
    result = FIELD_U32(a1, 6308);
    if ( !result )
    {
      v4 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6368))
        && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6368)) )
      {
        ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6368));
      }
      v5 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6676))
        && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6676)) )
      {
        ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6676));
      }
      v6 = (ActiveCollider *)(a1 + 6980);
      v7 = ActiveColliderMgr_instance;
      result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v6);
      if ( !result )
      {
        result = ActiveColliderMgr_isInCreateList(v7, v6);
        if ( !result )
          return (signed int)ActiveColliderMgr_addToCreateList(v7, v6);
      }
    }
  }
  return result;
}
