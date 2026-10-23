/* sub_604177D4
 * address: 0x604177D4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604177D4(int a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *result; // r0

  if ( a2 >= 5 )
    a2 = 0;
  result = (_DWORD *)(a1 + 52 * a2);
  result[10] = *a3;
  result[11] = a3[1];
  result[12] = a3[2];
  result[13] = a3[3];
  return result;
}
