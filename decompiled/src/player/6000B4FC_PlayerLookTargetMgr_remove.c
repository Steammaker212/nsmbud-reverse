/* PlayerLookTargetMgr_remove
 * address: 0x6000B4FC   size: 60   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall PlayerLookTargetMgr_remove(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)(FIELD_U32(a1, 32) + a2);
  if ( result[1] || *result )
  {
    sead__ListNode__erase(result);
    result = (_DWORD *)(FIELD_U32(a1, 28) - 1);
    FIELD_U32(a1, 28) = result;
  }
  return result;
}
