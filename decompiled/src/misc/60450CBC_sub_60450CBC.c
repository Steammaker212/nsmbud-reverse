/* sub_60450CBC
 * address: 0x60450CBC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60450CBC(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  unsigned int v7; // r12
  _DWORD *result; // r0

  v7 = a7;
  if ( a7 >= 0xC )
    v7 = 0;
  result = *(_DWORD **)(a1 + 4 * v7 + 16);
  result[573] = a2;
  result[574] = a3;
  result[575] = a4;
  result[576] = a5;
  result[577] = a6;
  return result;
}
