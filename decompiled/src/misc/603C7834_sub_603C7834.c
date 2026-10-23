/* sub_603C7834
 * address: 0x603C7834   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603C7834(_DWORD *result, int a2, int a3, signed int a4)
{
  int v4; // r1

  result[30] = 0;
  result[31] = 0;
  result[32] = 0;
  if ( !result[1575] && (result[4330] & 1) != 0 )
  {
    if ( (result[2930] & 1) != 0 )
      v4 = 2;
    else
      v4 = 1;
    return sub_603CBC1C(result, v4, a3, a4);
  }
  return result;
}
