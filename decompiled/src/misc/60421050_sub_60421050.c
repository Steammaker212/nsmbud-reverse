/* sub_60421050
 * address: 0x60421050   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60421050(int a1, int a2)
{
  int result; // r0

  result = a1 + 24;
  FIELD_U32(a2, 116) = result;
  return result;
}
