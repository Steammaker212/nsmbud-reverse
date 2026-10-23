/* sub_60338FC8
 * address: 0x60338FC8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60338FC8(int a1)
{
  int result; // r0
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6

  result = FIELD_U32(a1, 6724);
  if ( result )
  {
    FIELD_U32(a1, 6728) = 4;
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
    }
    v4 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6380))
      && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6380)) )
    {
      ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6380));
    }
    *(_WORD *)(a1 + 2 * ((FIELD_U32(a1, 20) >> 20) & 3) + 6140) = 16;
    return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &stru_60C9092C);
  }
  return result;
}
