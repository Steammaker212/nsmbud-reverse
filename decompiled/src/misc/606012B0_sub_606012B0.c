/* sub_606012B0
 * address: 0x606012B0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606012B0(int a1)
{
  int result; // r0

  sub_60603510();
  result = FIELD_U32(a1, 164) - 0x8000000;
  FIELD_U32(a1, 164) = result;
  return result;
}
