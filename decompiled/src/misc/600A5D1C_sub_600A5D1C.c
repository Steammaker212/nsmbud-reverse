/* sub_600A5D1C
 * address: 0x600A5D1C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A5D1C(int a1)
{
  ActiveColliderMgr *v2; // r5
  int result; // r0

  PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6644);
  v2 = ActiveColliderMgr_instance;
  result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  if ( !result )
  {
    result = ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188));
    if ( !result )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  }
  return result;
}
