/* sub_608DA314
 * address: 0x608DA314   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DA314(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r2
  int v7; // t1
  int result; // r0

  sub_608DA388();
  v4 = FIELD_U32(a1, 4);
  if ( v4 && !sub_608DA7EC(v4, a2) )
  {
    v5 = FIELD_U32(a2, 144);
    v6 = *(_DWORD **)(FIELD_U32(a1, 4) + 12);
    v7 = v6[5];
    v6 += 5;
    FIELD_U32(a2, 144) = v7;
    FIELD_U32(v5, 4) = v6;
    *(_DWORD *)(*v6 + 4) = a2 + 144;
    *v6 = v5;
  }
  sead__ListNode__insertFront((sead_ListNode *)(a1 + 36), (sead_ListNode *)(FIELD_U32(a1, 48) + a2));
  result = FIELD_U32(a1, 44) + 1;
  FIELD_U32(a1, 44) = result;
  return result;
}
