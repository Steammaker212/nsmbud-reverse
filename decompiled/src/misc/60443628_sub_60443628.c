/* sub_60443628
 * address: 0x60443628   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60443628(int a1, int a2)
{
  int result; // r0

  result = sub_604456F0(a2, a1);
  FIELD_U32(a1, 420) = a2;
  FIELD_U32(a1, 424) = result;
  return result;
}
