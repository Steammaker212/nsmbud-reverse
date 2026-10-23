/* sub_60422F3C
 * address: 0x60422F3C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60422F3C(int a1, int a2)
{
  int v4; // r6

  v4 = a1 + 648;
  sead__CriticalSection__lock(a1 + 648);
  sead__ListNode__erase(FIELD_U32(a1, 644) + a2);
  --FIELD_U32(a1, 640);
  return sead__CriticalSection__unlock(v4);
}
