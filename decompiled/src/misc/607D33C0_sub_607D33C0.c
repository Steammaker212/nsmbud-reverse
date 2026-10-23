/* sub_607D33C0
 * address: 0x607D33C0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607D33C0(_DWORD *result)
{
  unsigned int v1; // r1

  v1 = result[307] & 0xFFFDBBFF;
  result[308] &= ~0x20000000u;
  result[309] &= ~0x10000u;
  result[307] = v1;
  result[306] &= ~0x100000u;
  return result;
}
