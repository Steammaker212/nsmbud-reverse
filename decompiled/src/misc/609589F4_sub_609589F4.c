/* sub_609589F4
 * address: 0x609589F4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609589F4(int a1, int a2, int a3)
{
  __int16 v4; // r4
  int result; // r0

  v4 = a3;
  result = sub_6083C9F4(a1 + 200, a2, a3);
  FIELD_U16(a1, 2) = v4;
  return result;
}
