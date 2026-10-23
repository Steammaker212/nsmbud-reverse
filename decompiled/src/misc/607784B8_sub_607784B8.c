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

  previous = a1[9].previous;
  if ( (int)previous < (int)a1[10].next )
  {
    next = a1[9].next;
    v6 = 0;
    if ( next )
    {
      v6 = a1[9].next;
      a1[9].next = FIELD_U32(next, 0x0);
    }
    FIELD_U32(v6, 0x0) = 0;
    FIELD_U32(v6, 0x4) = 0;
    v6[1].previous = 0;
    sead__ListNode__insertFront(a1 + 8, (sead_ListNode *)&FIELD_U32(v6, 0x4));
    ++a1[9].previous;
    if ( v6 )
      FIELD_U32(v6, 0x0) = a2;
  }
  sub_60778530(a1, a2);
  return previous;
}
