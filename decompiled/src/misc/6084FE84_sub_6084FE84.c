/* sub_6084FE84
 * address: 0x6084FE84   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_6084FE84(int a1, char *a2, _WORD *a3)
{
  _WORD *result; // r0
  char v4; // r12

  result = a3 + 1;
  v4 = 1;
  if ( (*a3 & 0xFFFE) == 0xE )
  {
    v4 = 0;
    if ( !a3[2] )
      result = a3 + 6;
  }
  *a2 = v4;
  return result;
}
