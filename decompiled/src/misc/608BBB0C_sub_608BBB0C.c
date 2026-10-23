/* sub_608BBB0C
 * address: 0x608BBB0C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BBB0C(int a1, int a2, int a3, float a4)
{
  int result; // r0

  result = a1 + 24 * a2 + 4 * a3;
  FIELD_F32(result, 28) = a4;
  return result;
}
