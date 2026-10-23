/* sub_606B3750
 * address: 0x606B3750   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606B3750(_DWORD *result, int a2)
{
  int v2; // r12
  int i; // r3
  int v4; // r4
  int v5; // r2
  int v6; // r2

  v2 = result[7];
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = result[6];
      v5 = result[5];
      if ( i + v4 >= v5 )
        v4 -= v5;
      v6 = *(_DWORD *)(result[4] + 4 * (i + v4));
      if ( v6 != a2
        && FIELD_U8(v6, 21) == FIELD_U8(a2, 21)
        && FIELD_U32(v6, 48) == FIELD_U32(a2, 48) + 1 )
      {
        FIELD_U8(v6, 52) = FIELD_U8(a2, 52);
        v2 = result[7];
      }
    }
  }
  return result;
}
