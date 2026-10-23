/* sub_608E1CE8
 * address: 0x608E1CE8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E1CE8(int a1)
{
  int result; // r0
  int v3; // r5

  result = FIELD_U8(a1, 56);
  if ( result )
  {
    v3 = FIELD_U32(a1, 28);
    if ( v3 )
    {
      FIELD_U32(a1, 28) = 0;
      sead__ListNode__erase((_DWORD *)(a1 + 16));
      --FIELD_U32(v3, 8);
    }
    FIELD_U8(a1, 56) = 0;
    return 0;
  }
  return result;
}
