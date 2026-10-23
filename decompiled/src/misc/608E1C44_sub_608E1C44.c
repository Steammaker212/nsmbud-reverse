/* sub_608E1C44
 * address: 0x608E1C44   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E1C44(int a1)
{
  int v2; // r5
  int v3; // r6

  if ( FIELD_U8(a1, 56) )
  {
    v2 = FIELD_U32(a1, 28);
    if ( v2 )
    {
      FIELD_U32(a1, 28) = 0;
      sead__ListNode__erase((_DWORD *)(a1 + 16));
      --FIELD_U32(v2, 8);
    }
    FIELD_U8(a1, 56) = 0;
  }
  v3 = FIELD_U32(a1, 28);
  if ( v3 )
  {
    FIELD_U32(a1, 28) = 0;
    sead__ListNode__erase((_DWORD *)(a1 + 16));
    --FIELD_U32(v3, 8);
  }
  FIELD_U32(a1, 28) = &dword_60CCEB24;
  sead__ListNode__insertFront((sead_ListNode *)&dword_60CCEB24, (sead_ListNode *)(a1 + 16));
  ++dword_60CCEB2C;
  FIELD_U8(a1, 56) = 1;
  return 1;
}
