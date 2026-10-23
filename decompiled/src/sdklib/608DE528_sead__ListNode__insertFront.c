/* sead__ListNode__insertFront
 * address: 0x608DE528   size: 28   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sead__ListNode__insertFront(sead_ListNode *this, sead_ListNode *node)
{
  sead_ListNode *tmp; // r2

  tmp = FIELD_U32(this, 0x0);
  FIELD_U32(this, 0x0) = node;
  FIELD_U32(node, 0x0) = tmp;
  FIELD_U32(node, 0x4) = this;
  if ( tmp )
    FIELD_U32(tmp, 0x4) = node;
  return this;
}
