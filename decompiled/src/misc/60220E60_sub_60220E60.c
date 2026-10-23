/* sub_60220E60
 * address: 0x60220E60   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60220E60(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r7
  int v5; // r6
  sead_ListNode *v6; // r8

  result = 0;
  if ( !FIELD_U32(a1, 16) && !FIELD_U32(a1, 12) )
  {
    v3 = sub_601918EC(dword_60C8996C);
    v4 = FIELD_U32(a1, 24);
    v5 = v3;
    v6 = (sead_ListNode *)(v3 + 312);
    if ( v4 )
    {
      FIELD_U32(a1, 24) = 0;
      sead__ListNode__erase(a1 + 12);
      --FIELD_U32(v4, 8);
    }
    FIELD_U32(a1, 24) = v6;
    sead__ListNode__insertFront(v6, (sead_ListNode *)(a1 + 12));
    ++FIELD_U32(v5, 320);
    return 1;
  }
  return result;
}
