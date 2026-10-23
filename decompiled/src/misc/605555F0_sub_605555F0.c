/* sub_605555F0
 * address: 0x605555F0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605555F0(int a1, int a2)
{
  int v4; // r1
  int result; // r0

  v4 = FIELD_U32(a1, 3676);
  result = FIELD_U32(v4, 12);
  if ( result != a2 )
  {
    if ( result )
    {
      sub_60858A34(result);
      v4 = FIELD_U32(a1, 3676);
    }
    return sub_608589FC(a2, v4);
  }
  return result;
}
