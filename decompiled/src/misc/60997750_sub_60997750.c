/* sub_60997750
 * address: 0x60997750   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60997750(int result, int a2, int a3)
{
  FIELD_U32(result, 12) = a2;
  FIELD_U32(result, 16) = a3;
  if ( a3 )
  {
    sead__ListNode__insertFront((sead_ListNode *)(a3 + 68), (sead_ListNode *)(FIELD_U32(a3, 80) + result));
    result = FIELD_U32(a3, 76) + 1;
    FIELD_U32(a3, 76) = result;
  }
  return result;
}
