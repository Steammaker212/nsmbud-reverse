/* sub_608E8668
 * address: 0x608E8668   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608E8668(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  _DWORD *result; // r0

  v4 = a2;
  if ( a2 )
    v4 = a2 + 4;
  if ( v4[3] )
  {
    v4[3] = 0;
    sead__ListNode__erase(v4);
    --FIELD_U32(a1, 24);
  }
  result = *(_DWORD **)(a1 + 28);
  if ( result == a2 )
  {
    FIELD_U32(a1, 28) = 0;
    return 0;
  }
  return result;
}
