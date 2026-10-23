/* sub_604C7A58
 * address: 0x604C7A58   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_604C7A58(_BYTE *result, char a2)
{
  result[13932] = a2 & 1;
  result[13933] = (a2 & 2) != 0;
  result[13934] = (a2 & 4) != 0;
  result[13935] = (a2 & 8) != 0;
  return result;
}
