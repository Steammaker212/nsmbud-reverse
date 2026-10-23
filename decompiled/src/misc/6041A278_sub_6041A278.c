/* sub_6041A278
 * address: 0x6041A278   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041A278(_DWORD *a1, int a2)
{
  int v4; // r4

  v4 = (int)(a1 + 500);
  sead__CriticalSection__lock((int)(a1 + 500));
  if ( sub_608DE684(a1 + 479, a1[482] + a2) >= 0 )
  {
    sead__ListNode__erase(a1[482] + a2);
    --a1[481];
  }
  if ( sub_608DE684(a1 + 483, a1[486] + a2) >= 0 )
  {
    sead__ListNode__erase(a1[486] + a2);
    --a1[485];
  }
  if ( sub_608DE684(a1 + 487, a1[490] + a2) >= 0 )
  {
    sead__ListNode__erase(a1[490] + a2);
    --a1[489];
  }
  return sead__CriticalSection__unlock(v4);
}
