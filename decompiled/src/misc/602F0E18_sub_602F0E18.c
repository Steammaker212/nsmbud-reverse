/* sub_602F0E18
 * address: 0x602F0E18   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F0E18(int a1, int a2)
{
  int result; // r0

  result = sub_602F4740(a2 + 7448, a2 + 7384);
  FIELD_U32(a2, 164) = result;
  return result;
}
