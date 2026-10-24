/* sub_607784B8
 * address: 0x607784B8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_607784B8(sead_ListNode *a1, sead_ListNode *a2)
{
  sead_ListNode *previous; // r4
  sead_ListNode *next; // r1
  sead_ListNode *v6; // r7

  previous = FIELD_U32(a1 + (9) * 8, 0x0);
  if ( (int)previous < (int)FIELD_U32(a1 + (10) * 8, 0x4) )
  {
    next = FIELD_U32(a1 + (9) * 8, 0x4);
    v6 = 0;
    if ( next )
    {
      v6 = FIELD_U32(a1 + (9) * 8, 0x4);
      FIELD_U32(a1 + (9) * 8, 0x4) = FIELD_U32(next, 0x0);
    }
    FIELD_U32(v6, 0x0) = 0;
    FIELD_U32(v6, 0x4) = 0;
    FIELD_U32(v6 + (1) * 8, 0x0) = 0;
    sead__ListNode__insertFront(a1 + 8, (sead_ListNode *)&FIELD_U32(v6, 0x4));
    ++FIELD_U32(a1 + (9) * 8, 0x0);
    if ( v6 )
      FIELD_U32(v6, 0x0) = a2;
  }
  sub_60778530(a1, a2);
  return previous;
}
