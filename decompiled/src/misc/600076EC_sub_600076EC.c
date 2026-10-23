/* sub_600076EC
 * address: 0x600076EC   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_600076EC(sead_ListNode *a1)
{
  sead_ListNode *next; // r10
  sead_ListNode **p_next; // r11
  sead_ListNode *v3; // r4
  sead_ListNode *v4; // r0
  int v5; // r9
  sead_ListNode *i; // r0
  sead_ListNode *v7; // r10
  sead_ListNode *v8; // r4
  int v9; // r9
  sead_ListNode *j; // r0
  int v13; // [sp+8h] [bp-28h]

  p_next = &a1[2866].next;
  next = a1[2866].next;
  v3 = a1[2865].next;
  v4 = a1 + 2865;
  if ( v3 != v4 )
  {
    v5 = (char *)v3 - (char *)next;
    v13 = (char *)v4 - (char *)next;
    for ( i = next; ; i = *p_next )
    {
      v3 = FIELD_U32(v3, 0x4);
      sead__ListNode__erase((char *)i + v5);
      --a1[2866].previous;
      sead__ListNode__insertFront(a1 + 2867, (sead_ListNode *)((char *)a1[2868].next + v5));
      v5 = (char *)v3 - (char *)next;
      ++a1[2868].previous;
      if ( (char *)v3 - (char *)next == v13 )
        break;
    }
  }
  v7 = a1[2870].next;
  v8 = a1[2869].next;
  if ( v8 != &a1[2869] )
  {
    v9 = (char *)v8 - (char *)v7;
    for ( j = a1[2870].next; ; j = a1[2870].next )
    {
      v8 = FIELD_U32(v8, 0x4);
      sead__ListNode__erase((char *)j + v9);
      --a1[2870].previous;
      sead__ListNode__insertFront(a1 + 2867, (sead_ListNode *)((char *)a1[2868].next + v9));
      v9 = (char *)v8 - (char *)v7;
      ++a1[2868].previous;
      if ( (char *)v8 - (char *)v7 == (char *)&a1[2869] - (char *)v7 )
        break;
    }
  }
  sub_60007858((int)a1, 1);
  sub_60008B9C(&a1[3396]);
  return a1;
}
