/* sub_60902734
 * address: 0x60902734   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60902734(int a1, _DWORD *a2)
{
  int result; // r0

  if ( a2 )
    a2 += 4;
  result = a2[3];
  if ( result )
  {
    a2[3] = 0;
    sead__ListNode__erase(a2);
    result = FIELD_U32(a1, 24) - 1;
    FIELD_U32(a1, 24) = result;
  }
  return result;
}
