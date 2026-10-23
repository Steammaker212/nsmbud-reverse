/* sub_603F55F8
 * address: 0x603F55F8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F55F8(_DWORD *result, int a2)
{
  _DWORD *v2; // r2
  int v3; // r3
  bool v4; // zf
  int v5; // t1

  v2 = result + 10;
  v3 = result[10];
  v4 = v3 == 0;
  if ( v3 )
  {
    v2 = result + 11;
    v4 = result[11] == 0;
  }
  if ( !v4 && (v2 = result + 12, result[12]) && (v2 = result + 13, result[13]) )
  {
    v5 = result[14];
    result += 14;
    if ( !v5 )
      *result = a2;
  }
  else
  {
    *v2 = a2;
  }
  return result;
}
