/* sub_606CE9B0
 * address: 0x606CE9B0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CE9B0(int a1, int a2)
{
  int result; // r0

  sub_606CAA68(a1, a2);
  result = FIELD_U32(a1, 164) + FIELD_U32(a1, 6920);
  FIELD_U32(a1, 164) = result;
  return result;
}
