/* sub_60764FD8
 * address: 0x60764FD8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60764FD8(_DWORD *result)
{
  _DWORD *v1; // r2
  unsigned int v2; // r3
  int v3; // r1

  result[82] = 3;
  v1 = result + 2047;
  v2 = result[2047];
  if ( v2 > 0x12 )
  {
    *v1 = 3;
  }
  else if ( ((1 << v2) & 0x48001) == 0 )
  {
    *v1 = 3;
  }
  v3 = result[309] | 0x100000;
  if ( (result[309] & 0x4000) != 0 )
    result[1819] = 3;
  result[2275] = 3;
  result[2351] = 3;
  result[309] = v3;
  return result;
}
