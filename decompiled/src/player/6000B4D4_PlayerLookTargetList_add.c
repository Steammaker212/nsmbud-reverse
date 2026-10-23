/* PlayerLookTargetList_add
 * address: 0x6000B4D4   size: 40   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerLookTargetList_add(int a1, int a2)
{
  int result; // r0

  sead__ListNode__insertFront((sead_ListNode *)(a1 + 20), (sead_ListNode *)(FIELD_U32(a1, 32) + a2));
  result = FIELD_U32(a1, 28) + 1;
  FIELD_U32(a1, 28) = result;
  return result;
}
