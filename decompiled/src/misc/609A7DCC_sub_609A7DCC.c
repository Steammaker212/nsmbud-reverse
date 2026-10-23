/* sub_609A7DCC
 * address: 0x609A7DCC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A7DCC(_DWORD *a1, int a2, sead_ListNode *a3, int a4)
{
  sead_ListNode *v7; // r7
  int v8; // r4

  a1[21] = a2;
  a1[22] = a3;
  v7 = (sead_ListNode *)(a1 + 1);
  v8 = a1[4];
  if ( v8 )
  {
    a1[4] = 0;
    sead__ListNode__erase(a1 + 1);
    --FIELD_U32(v8, 8);
  }
  a1[4] = a3;
  sead__ListNode__insertFront(a3, v7);
  ++a3[1].previous;
  return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 12))(a1, a4);
}
