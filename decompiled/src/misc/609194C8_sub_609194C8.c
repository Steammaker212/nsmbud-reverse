/* sub_609194C8
 * address: 0x609194C8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609194C8(int a1)
{
  int v2; // r5
  int v3; // r6

  v2 = FIELD_U32(dword_60CCFC8C, 32);
  v3 = dword_60CCF464 + 236;
  sead__CriticalSection__lock(dword_60CCF464 + 236);
  dword_60CC735C(v2, 1, a1 + 32);
  dword_60CC7360(v2);
  return sead__CriticalSection__unlock(v3);
}
