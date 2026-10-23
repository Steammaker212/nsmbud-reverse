/* sub_60375874
 * address: 0x60375874   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60375874(_DWORD *result)
{
  int v1; // r1

  v1 = **(_DWORD **)(result[1575] + 20);
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 28) |= 2u;
  result[20] = result[2989];
  return result;
}
