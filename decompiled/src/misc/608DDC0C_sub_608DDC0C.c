/* sub_608DDC0C
 * address: 0x608DDC0C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DDC0C(int a1, int a2)
{
  int result; // r0
  int *v5; // r0

  result = FIELD_U8(a1, 192);
  if ( result )
  {
    if ( !FIELD_U32(a1, 136) )
    {
      v5 = sub_608C3C60();
      sub_608C3FE8((int)v5, (int)sub_608DDC9C, a1);
    }
    sead__CriticalSection__lock(a1 + 144);
    if ( sub_608DE684(a1 + 128, FIELD_U32(a1, 140) + a2) == -1 )
    {
      sead__ListNode__insertFront((sead_ListNode *)(a1 + 128), (sead_ListNode *)(FIELD_U32(a1, 140) + a2));
      ++FIELD_U32(a1, 136);
    }
    return sead__CriticalSection__unlock(a1 + 144);
  }
  return result;
}
