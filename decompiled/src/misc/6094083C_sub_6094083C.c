/* sub_6094083C
 * address: 0x6094083C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094083C(int result, int a2)
{
  int v2; // r5
  int v4; // r6

  v2 = result;
  v4 = FIELD_U32(result, 72);
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      sead__ListNode__erase((_DWORD *)(FIELD_U32(v4, 48) + result));
      result = FIELD_U32(v4, 44) - 1;
      FIELD_U32(v4, 44) = result;
    }
    FIELD_U32(v2, 72) = a2;
    if ( a2 )
    {
      sead__ListNode__insertFront((sead_ListNode *)(a2 + 36), (sead_ListNode *)(FIELD_U32(a2, 48) + v2));
      result = FIELD_U32(a2, 44) + 1;
      FIELD_U32(a2, 44) = result;
    }
  }
  return result;
}
