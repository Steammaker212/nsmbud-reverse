/* sub_608D0868
 * address: 0x608D0868   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D0868(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result == 2 )
  {
    sub_608D098C(a1);
    *a1 = 3;
    return 3;
  }
  return result;
}
