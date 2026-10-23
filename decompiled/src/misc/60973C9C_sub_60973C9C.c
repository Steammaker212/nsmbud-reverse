/* sub_60973C9C
 * address: 0x60973C9C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60973C9C(_DWORD *result, int a2, int a3)
{
  int v3; // r12
  int v4; // r1

  v3 = result[11];
  if ( v3 < result[12] )
  {
    *(_DWORD *)(result[13] + 4 * v3) = a2;
    ++result[11];
  }
  v4 = result[14];
  if ( v4 < result[15] )
  {
    *(_DWORD *)(result[16] + 4 * v4) = a3;
    ++result[14];
  }
  return result;
}
