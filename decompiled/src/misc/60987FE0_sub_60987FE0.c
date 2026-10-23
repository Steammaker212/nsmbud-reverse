/* sub_60987FE0
 * address: 0x60987FE0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60987FE0(_DWORD *result, _DWORD *a2)
{
  int v2; // r2
  int v3; // r2

  v2 = *(_DWORD *)(*a2 + 40);
  result[3] = v2;
  result[4] = v2;
  v3 = result[10];
  if ( !v3 )
  {
    result[8] = a2[5];
    result[9] = a2[6];
  }
  result[10] = v3 + 1;
  return result;
}
