/* sub_608DC5D4
 * address: 0x608DC5D4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608DC5D4(int a1)
{
  int v1; // r4
  signed int result; // r0

  v1 = a1 + 8;
  result = sub_608A9984(a1 + 8);
  if ( result == 1 )
    return sub_608A8404(v1);
  return result;
}
