/* sub_607A90A4
 * address: 0x607A90A4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607A90A4(_DWORD *result)
{
  int v1; // r1

  v1 = result[308];
  result[308] = v1 & 0xFFFFFFEF;
  if ( result[330] != 8 || *(_DWORD *)(result[2840] + 164) == 8 )
  {
    result[2452] = 9;
    result[308] = v1 & 0xFFFFFFCF;
  }
  else
  {
    result[2452] = 5;
  }
  return result;
}
