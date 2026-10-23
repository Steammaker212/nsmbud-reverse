/* sub_608A9994
 * address: 0x608A9994   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9994(int a1, int a2)
{
  int result; // r0

  FIELD_U32(a1, 4) = a2;
  result = sub_608B1608(a2);
  FIELD_U32(a1, 652) = result;
  return result;
}
