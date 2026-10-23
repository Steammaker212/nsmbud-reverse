/* sub_6098AC2C
 * address: 0x6098AC2C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098AC2C(int a1, int a2)
{
  int result; // r0

  sead__ListNode__insertFront((sead_ListNode *)(a1 + 4), (sead_ListNode *)(FIELD_U32(a1, 16) + a2));
  result = FIELD_U32(a1, 12) + 1;
  FIELD_U32(a1, 12) = result;
  return result;
}
