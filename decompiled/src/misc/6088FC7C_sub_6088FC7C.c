/* sub_6088FC7C
 * address: 0x6088FC7C   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088FC7C(int a1, int a2)
{
  int result; // r0

  result = FIELD_U32(a1, 1148);
  FIELD_U32(a2, 132) = result;
  return result;
}
