/* sub_6083D668
 * address: 0x6083D668   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6083D668(_BYTE *result)
{
  *result &= ~1u;
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  result[4] = 1;
  result[5] = 0;
  result[6] = 0;
  result[7] = 15;
  return result;
}
