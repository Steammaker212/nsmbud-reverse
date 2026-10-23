/* sub_60202590
 * address: 0x60202590   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60202590(int a1)
{
  int result; // r0

  result = sub_608336A8(FIELD_U32(a1, 560));
  FIELD_U32(a1, 552) = result;
  return result;
}
