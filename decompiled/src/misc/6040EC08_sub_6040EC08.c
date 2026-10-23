/* sub_6040EC08
 * address: 0x6040EC08   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6040EC08(int a1, unsigned int a2)
{
  unsigned int v2; // r2
  _DWORD *result; // r0

  v2 = FIELD_U32(a1, 28);
  result = *(_DWORD **)(a1 + 32);
  if ( v2 > a2 )
    result += a2;
  *result = 0;
  return result;
}
