/* sub_60456458
 * address: 0x60456458   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60456458(int a1, int a2, char a3)
{
  int result; // r0

  result = a1 + 8 * a2;
  FIELD_U8(result, 158) = a3;
  return result;
}
