/* sub_604020F0
 * address: 0x604020F0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_604020F0(_BYTE *result, unsigned int a2)
{
  if ( a2 - 19 < 4 )
    goto LABEL_4;
  if ( a2 == 25 )
    return result;
  if ( a2 == 10 )
  {
LABEL_4:
    result += 3588 * a2 + 93397;
  }
  else
  {
    if ( a2 >= 0x19 )
      a2 = 0;
    result += 3592 * a2 + 3601;
  }
  *result = 1;
  return result;
}
