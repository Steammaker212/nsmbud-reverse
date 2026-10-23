/* sub_608C5C24
 * address: 0x608C5C24   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C5C24(_DWORD *a1)
{
  int result; // r0

  result = *a1;
  if ( result )
  {
    sub_608C5D2C(a1);
    sub_608CF21C(*a1, 3);
    sub_608CF15C(*a1);
    *a1 = 0;
    return 0;
  }
  return result;
}
