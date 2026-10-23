/* sub_608DC45C
 * address: 0x608DC45C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DC45C(int a1)
{
  int v1; // r4
  int result; // r0

  v1 = a1 + 8;
  result = sub_608A9984(a1 + 8);
  if ( result == 1 )
    return sub_6099BC78(v1);
  return result;
}
