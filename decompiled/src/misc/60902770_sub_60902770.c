/* sub_60902770
 * address: 0x60902770   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_60902770(sead_ListNode *a1, sead_ListNode *a2)
{
  sead_ListNode *previous; // r6
  sead_ListNode *next; // r8
  char *v5; // r4
  int v6; // r0
  size_t v7; // r7
  sead_ListNode *v8; // r7

  previous = a2;
  next = FIELD_U32(a1 + (5) * 8, 0x4);
  if ( !a2 )
    previous = FIELD_U32(a1 + (5) * 8, 0x0);
  FIELD_U32(a1 + (5) * 8, 0x4) = previous;
  v5 = (char *)FIELD_U32(previous + (4) * 8, 0x4);
  if ( v5 != &byte_60ABC94D )
  {
    v6 = (int)FIELD_U32(previous + (5) * 8, 0x0);
    v7 = v6 - 1;
    if ( v6 > 0 )
      v7 = 0;
    memset(FIELD_U32(previous + (4) * 8, 0x4), 0, v7);
    v5[v7] = 0;
  }
  v8 = FIELD_U32(previous + (3) * 8, 0x4);
  if ( v8 )
  {
    FIELD_U32(previous + (3) * 8, 0x4) = 0;
    sead__ListNode__erase(&FIELD_U32(previous + (2) * 8, 0x0));
    --FIELD_U32(v8 + (1) * 8, 0x0);
  }
  FIELD_U32(previous + (3) * 8, 0x4) = a1 + 2;
  sead__ListNode__insertFront(a1 + 2, previous + 2);
  ++FIELD_U32(a1 + (3) * 8, 0x0);
  return next;
}
