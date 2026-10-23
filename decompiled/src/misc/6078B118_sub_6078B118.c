/* sub_6078B118
 * address: 0x6078B118   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6078B118(_DWORD *result)
{
  int v1; // r12
  int i; // r2
  int v3; // r3
  int v4; // r1

  v1 = result[28];
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = result[27];
      v4 = result[26];
      if ( i + v3 >= v4 )
        v3 -= v4;
      *(_BYTE *)(*(_DWORD *)(result[25] + 4 * (i + v3)) + 1312) = i;
    }
  }
  return result;
}
