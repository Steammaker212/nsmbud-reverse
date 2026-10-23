/* sub_602C7304
 * address: 0x602C7304   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C7304(int a1)
{
  int result; // r0
  ActiveColliderMgr *v3; // r5

  result = FIELD_U8(a1, 28096);
  if ( result )
  {
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91668);
  }
  return result;
}
