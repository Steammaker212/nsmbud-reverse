/* sub_6072A748
 * address: 0x6072A748   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072A748(int a1, unsigned int a2, int a3)
{
  int result; // r0

  if ( a2 >= 0x40 )
    a2 = 0;
  result = a1 + 12 * a2;
  FIELD_U32(result, 24) = 10 * a3;
  return result;
}
