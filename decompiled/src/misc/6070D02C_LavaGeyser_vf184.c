/* LavaGeyser_vf184
 * address: 0x6070D02C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall LavaGeyser_vf184(_DWORD *result)
{
  int v1; // r1

  v1 = (result[5] >> 4) & 7;
  if ( !v1 )
    v1 = 3;
  result[1583] = v1;
  result[1578] = result[1597];
  result[1581] = 0;
  return result;
}
