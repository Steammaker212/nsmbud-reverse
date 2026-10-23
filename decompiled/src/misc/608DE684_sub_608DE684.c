/* sub_608DE684
 * address: 0x608DE684   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DE684(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r2

  result = -1;
  v4 = FIELD_U32(a1, 4);
  if ( v4 != a1 )
  {
    v5 = 0;
    while ( v4 != a2 )
    {
      v4 = FIELD_U32(v4, 4);
      ++v5;
      if ( v4 == a1 )
        return result;
    }
    return v5;
  }
  return result;
}
