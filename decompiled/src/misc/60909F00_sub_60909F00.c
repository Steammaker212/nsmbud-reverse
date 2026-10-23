/* sub_60909F00
 * address: 0x60909F00   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60909F00(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r5

  *(a1 - 77) = off_60C5CFE0;
  v2 = a1 - 77;
  *a1 = off_60C5D004;
  v3 = a1[4];
  if ( v3 )
  {
    sead__ListNode__erase((_DWORD *)((char *)v2 + FIELD_U32(v3, 344)));
    --FIELD_U32(v3, 340);
    a1[4] = 0;
  }
  return sead__IDisposer__dtor(a1);
}
