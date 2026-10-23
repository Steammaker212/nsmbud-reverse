/* sub_608F4CBC
 * address: 0x608F4CBC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F4CBC(int a1, int a2)
{
  int result; // r0

  result = sub_6090BE54(a2);
  FIELD_U32(a1, 12) = result;
  return result;
}
