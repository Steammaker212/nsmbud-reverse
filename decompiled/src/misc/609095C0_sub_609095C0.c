/* sub_609095C0
 * address: 0x609095C0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609095C0(_DWORD *result)
{
  int v1; // r3

  result[68] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[1] = 0;
  if ( (int)result[63] >= 1 )
  {
    v1 = 0;
    do
      result[v1++ + 11] = 0;
    while ( v1 < result[63] );
  }
  result[69] = -8388609;
  result[70] = -8388609;
  result[5] = 0x80000000;
  result[6] = 0x80000000;
  result[76] = 0;
  result[75] = 0;
  result[74] = 0;
  result[73] = 0;
  result[72] = 0;
  result[71] = 0;
  return result;
}
