/* sub_608B0EC4
 * address: 0x608B0EC4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0EC4(int *a1)
{
  int result; // r0

  result = *a1;
  if ( !result )
  {
    result = a1[1];
    if ( !result )
      return a1[2];
  }
  return result;
}
