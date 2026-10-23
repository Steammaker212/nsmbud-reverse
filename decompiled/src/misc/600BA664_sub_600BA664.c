/* sub_600BA664
 * address: 0x600BA664   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BA664(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6

  v2 = (ActiveCollider *)(a1 + 188);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 284))(a1);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v3, v2) )
    ActiveColliderMgr_addToCreateList(v3, v2);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6456))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6456)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6456));
  }
  FIELD_U32(a1, 6216) = 16;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 312))(a1);
}
