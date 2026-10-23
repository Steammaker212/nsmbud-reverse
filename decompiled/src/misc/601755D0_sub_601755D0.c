/* sub_601755D0
 * address: 0x601755D0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601755D0(int a1)
{
  _DWORD *result; // r0

  FIELD_U8(a1, 587) = 1;
  result = (_DWORD *)(a1 + 608);
  *result = 25;
  result[1] = 1065353216;
  result[2] = 1032805417;
  return result;
}
