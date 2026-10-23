/* sub_609A4754
 * address: 0x609A4754   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_609A4754(int a1, sead_ListNode *a2, int a3, sead_ListNode *a4)
{
  sead_ListNode *CurrentHeap_const; // r4
  sead_ListNode *v8; // r5
  int v10; // r0

  CurrentHeap_const = a2;
  if ( !a2 )
    CurrentHeap_const = (sead_ListNode *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v8 = (sead_ListNode *)operator_new_8DE25C(0x34u, CurrentHeap_const, 4);
  FIELD_U32(v8, 0x0) = (sead_ListNode *)&off_60C60DE0;
  v8[2].previous = 0;
  v8[1].next = 0;
  v8[1].previous = 0;
  FIELD_U32(v8, 0x4) = 0;
  v8[4].previous = 0;
  v8[3].next = v8 + 3;
  v8[3].previous = v8 + 3;
  v8[6].previous = 0;
  v8[5].next = 0;
  v8[5].previous = 0;
  v8[4].next = 0;
  v8[2].next = a4;
  if ( a1 )
  {
    sub_609A125C((int)v8, a1, CurrentHeap_const, a3);
    if ( !FIELD_U32(v8, 0x4) )
    {
      ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v8, 0x4))(v8);
      return 0;
    }
  }
  else
  {
    v10 = operator_new_8DE25C(0x8Cu, CurrentHeap_const, 4);
    FIELD_U32(v8, 0x4) = (sead_ListNode *)sub_609A59D0(v10);
    sub_6099F1E8(v8, (int)CurrentHeap_const);
  }
  v8[6].previous = CurrentHeap_const;
  return v8;
}
