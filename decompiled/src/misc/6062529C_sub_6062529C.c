/* sub_6062529C
 * address: 0x6062529C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6062529C(_DWORD *result)
{
  _DWORD *v1; // r3

  result[1617] = 0;
  v1 = result + 1618;
  do
  {
    *v1 = 0;
    v1[4] = 0;
    v1[5] = 0x40000000;
    v1 += 9;
  }
  while ( v1 <= result + 1699 );
  result[37] = 0;
  result[1530] = 0;
  return result;
}
