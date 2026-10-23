/* sub_608F9AEC
 * address: 0x608F9AEC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F9AEC(int a1, int a2)
{
  int v4; // r5

  sead__CriticalSection__lock((int)&unk_60CCEEDC);
  v4 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v4 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  sead__ListNode__insertFront((sead_ListNode *)(a1 + 40), (sead_ListNode *)(FIELD_U32(a1, 52) + a2));
  ++FIELD_U32(a1, 48);
  if ( v4 )
    sead__CriticalSection__unlock(v4);
  return sead__CriticalSection__unlock((int)&unk_60CCEEDC);
}
