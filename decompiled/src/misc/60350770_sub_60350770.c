/* sub_60350770
 * address: 0x60350770   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60350770(int a1)
{
  int result; // r0

  sub_60352A88(a1, 0, 1, 1.0);
  result = LODWORD(flt_60AF1EA0[FIELD_U32(a1, 80)]);
  FIELD_U32(a1, 120) = result;
  return result;
}
