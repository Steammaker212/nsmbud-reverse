/* sub_60237454
 * address: 0x60237454   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60237454(int a1, __int64 *a2, char a3)
{
  int v4; // r5
  int v5; // r6
  int v6; // r7
  sead_ListNode *v7; // r8

  v4 = 0;
  if ( dword_60C8D9DC && sub_60236A80(a1 + 16, a2, a3) == 1 )
  {
    if ( !FIELD_U32(a1, 84) && !FIELD_U32(a1, 80) )
    {
      v5 = FIELD_U32(a1, 92);
      v6 = dword_60C8D9DC;
      v7 = (sead_ListNode *)(dword_60C8D9DC + 224);
      if ( v5 )
      {
        FIELD_U32(a1, 92) = 0;
        sead__ListNode__erase(a1 + 80);
        --FIELD_U32(v5, 8);
      }
      FIELD_U32(a1, 92) = v7;
      sead__ListNode__insertFront(v7, (sead_ListNode *)(a1 + 80));
      ++FIELD_U32(v6, 232);
    }
    v4 = 1;
    FIELD_U8(a1, 100) = 1;
  }
  return v4;
}
