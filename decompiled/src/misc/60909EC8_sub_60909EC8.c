/* sub_60909EC8
 * address: 0x60909EC8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60909EC8(int result)
{
  int v1; // r4
  int v2; // r5

  v1 = result;
  v2 = FIELD_U32(result, 324);
  if ( v2 )
  {
    sead__ListNode__erase((_DWORD *)(FIELD_U32(v2, 344) + result));
    --FIELD_U32(v2, 340);
    FIELD_U32(v1, 324) = 0;
    return 0;
  }
  return result;
}
