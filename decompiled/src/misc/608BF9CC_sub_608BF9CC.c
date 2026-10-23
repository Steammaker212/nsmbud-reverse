/* sub_608BF9CC
 * address: 0x608BF9CC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BF9CC(int a1, unsigned int a2, int a3)
{
  int result; // r0

  if ( a2 - 2 >= 2 )
  {
    if ( a2 > 1 )
      return result;
    sub_608C932C();
  }
  FIELD_U32(a3, 4) = 0;
  return 0;
}
