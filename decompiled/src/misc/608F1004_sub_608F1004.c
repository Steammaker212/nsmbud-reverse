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
    previous = FIELD_U32(a1 + (10) * 8, 0x0);
    while ( previous != (sead_ListNode *)&FIELD_U32(a1 + (9) * 8, 0x4) )
    {
      v4 = previous;
      previous = FIELD_U32(previous, 0x4);
      v5 = FIELD_U32(v4 + (1) * 8, 0x0);
      if ( ((int)FIELD_U32(v5 + (6) * 8, 0x0) & 2) != 0 && sub_608F0CF0((int)a1, v5) == 1 )
      {
        sead__CriticalSection__lock((int)&FIELD_U32(a1, 0x4));
        if ( FIELD_U32(v5 + (12) * 8, 0x0) == (sead_ListNode *)4 )
        {
          FIELD_U32(v5 + (12) * 8, 0x0) = (sead_ListNode *)6;
          ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v5, 0x0)[8].next)(v5);
          ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v5, 0x0)[9].previous)(v5);
          sub_608F0A9C((int)a1, a1 + 14, (int)v5);
        }
        sead__CriticalSection__unlock((int)&FIELD_U32(a1, 0x4));
      }
    }
    while ( 1 )
    {
      next = FIELD_U32(a1 + (14) * 8, 0x4);
      if ( next == &a1[14] )
        break;
      v6 = FIELD_U32(next + (1) * 8, 0x0);
      ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v6, 0x0)[8].next)(v6);
      ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v6, 0x0)[9].previous)(v6);
      sead__TreeNode__detachAll(&FIELD_U32(v6 + (2) * 8, 0x0));
      sub_608F0BE8((int)a1, v6);
    }
    return sead__CriticalSection__unlock((int)&FIELD_U32(a1, 0x4));
  }
  return result;
}
