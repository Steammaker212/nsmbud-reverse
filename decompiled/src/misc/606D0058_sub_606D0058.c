/* sub_606D0058
 * address: 0x606D0058   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_606D0058(int *result)
{
  int v1; // r1
  int v2; // s0

  v1 = ((unsigned int)result[5] >> 8) & 3;
  if ( v1 == 2 )
  {
    v2 = -988004352;
  }
  else
  {
    if ( v1 != 1 )
      return result;
    v2 = result[29];
  }
  result += 1739;
  *result = v2;
  return result;
}
