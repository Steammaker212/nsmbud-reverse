/* sub_60769B48
 * address: 0x60769B48   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60769B48(_BYTE *a1)
{
  char v2; // r2
  _BOOL4 result; // r0
  bool v4; // zf

  v2 = a1[6900];
  result = 0;
  if ( (v2 & 1) != 0 )
  {
    v4 = (a1[1209] & 1) == 0;
    if ( (a1[1209] & 1) == 0 )
      v4 = (a1[1219] & 1) == 0;
    if ( v4 )
      return (a1[6905] & 2) == 0;
  }
  return result;
}
