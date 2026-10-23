/* sead__Heap__appendDisposer
 * address: 0x608F9998   size: 88   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__Heap__appendDisposer(int a1, int a2)
{
  int v4; // r4
  int result; // r0

  v4 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v4 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  sead__ListNode__insertFront((sead_ListNode *)(a1 + 64), (sead_ListNode *)(FIELD_U32(a1, 76) + a2));
  result = FIELD_U32(a1, 72) + 1;
  FIELD_U32(a1, 72) = result;
  if ( v4 )
    return sead__CriticalSection__unlock(v4);
  return result;
}
