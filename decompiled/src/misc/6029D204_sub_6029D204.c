/* sub_6029D204
 * address: 0x6029D204   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6029D204(_DWORD *result)
{
  int v1; // r2

  result[1578] = 0;
  if ( result[1576] == 1 )
  {
    v1 = result[801] | 0x1408000;
    result[800] |= 0xD000640u;
    result[801] = v1;
  }
  return result;
}
