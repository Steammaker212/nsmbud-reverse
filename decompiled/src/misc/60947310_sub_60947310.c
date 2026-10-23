/* sub_60947310
 * address: 0x60947310   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60947310(int a1, int *a2)
{
  int result; // r0

  result = sub_60941AB4(a2);
  FIELD_U32(a1, 20) = result;
  return result;
}
