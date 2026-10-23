/* sub_60761228
 * address: 0x60761228   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60761228(_DWORD *a1)
{
  _DWORD *v1; // r2
  _DWORD *result; // r0
  int v3; // t1

  v1 = a1 + 1762;
  a1[1764] = a1[1762];
  v3 = a1[1763];
  result = a1 + 1763;
  result[2] = v3;
  *v1 = 0;
  *result = 0;
  result[19] = 0;
  return result;
}
