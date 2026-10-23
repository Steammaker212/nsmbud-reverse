/* sub_6035DE84
 * address: 0x6035DE84   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035DE84(int a1)
{
  __int64 v2; // r0
  int result; // r0
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6

  v2 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  result = *(_DWORD *)(EventMgr__instance + 16) & v2
         | ((*(_QWORD *)(EventMgr__instance + 16) & (unsigned __int64)v2) >> 32);
  if ( result )
  {
    FIELD_U8(a1, 535) = 1;
    v4 = ActiveColliderMgr_instance;
    result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
    if ( !result )
    {
      result = ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188));
      if ( !result )
      {
        v5 = ActiveColliderMgr_instance;
        if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
          && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
        {
          ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
        }
        return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C9574C);
      }
    }
  }
  return result;
}
