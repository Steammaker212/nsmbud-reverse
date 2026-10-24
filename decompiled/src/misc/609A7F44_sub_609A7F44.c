/* sub_609A7F44
 * address: 0x609A7F44   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A7F44(int a1)
{
  int v2; // r5
  sead_ListNode *v3; // r7
  sead_ListNode *v4; // r8

  v2 = FIELD_U32(a1, 16);
  v3 = *(sead_ListNode **)(a1 + 84);
  v4 = (sead_ListNode *)(a1 + 4);
  if ( v2 )
  {
    FIELD_U32(a1, 16) = 0;
    sead__ListNode__erase((_DWORD *)(a1 + 4));
    --FIELD_U32(v2, 8);
  }
  FIELD_U32(a1, 16) = v3 + 50;
  sead__ListNode__insertFront(v3 + 50, v4);
  ++FIELD_U32(v3 + (51) * 8, 0x0);
  FIELD_U8(a1, 112) = 1;
  FIELD_U8(a1, 128) = 1;
  return 1;
}
