/* sead__ListNode__erase
 * address: 0x608DE544   size: 48   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__ListNode__erase(_DWORD *result)
{
  _DWORD *v1; // r1

  if ( *result )
    *(_DWORD *)(*result + 4) = result[1];
  v1 = (_DWORD *)result[1];
  if ( v1 )
    *v1 = *result;
  *result = 0;
  result[1] = 0;
  return result;
}
