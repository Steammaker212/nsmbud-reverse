/* sub_608F1004
 * address: 0x608F1004   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F1004(sead_ListNode *a1)
{
  int result; // r0
  sead_ListNode *previous; // r6
  sead_ListNode *v4; // r0
  sead_ListNode *v5; // r7
  sead_ListNode *v6; // r7
  sead_ListNode *next; // r0

  sub_608EE3B8((int)&a1[39]);
  result = sub_60907F94(&FIELD_U32(a1, 0x4));
  if ( result == 1 )
  {
    previous = a1[10].previous;
    while ( previous != (sead_ListNode *)&a1[9].next )
    {
      v4 = previous;
      previous = FIELD_U32(previous, 0x4);
      v5 = v4[1].previous;
      if ( ((int)v5[6].previous & 2) != 0 && sub_608F0CF0((int)a1, v5) == 1 )
      {
        sead__CriticalSection__lock((int)&FIELD_U32(a1, 0x4));
        if ( v5[12].previous == (sead_ListNode *)4 )
        {
          v5[12].previous = (sead_ListNode *)6;
          ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v5, 0x0)[8].next)(v5);
          ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v5, 0x0)[9].previous)(v5);
          sub_608F0A9C((int)a1, a1 + 14, (int)v5);
        }
        sead__CriticalSection__unlock((int)&FIELD_U32(a1, 0x4));
      }
    }
    while ( 1 )
    {
      next = a1[14].next;
      if ( next == &a1[14] )
        break;
      v6 = next[1].previous;
      ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v6, 0x0)[8].next)(v6);
      ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v6, 0x0)[9].previous)(v6);
      sead__TreeNode__detachAll(&v6[2].previous);
      sub_608F0BE8((int)a1, v6);
    }
    return sead__CriticalSection__unlock((int)&FIELD_U32(a1, 0x4));
  }
  return result;
}
