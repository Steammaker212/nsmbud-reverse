/* sub_607BFADC
 * address: 0x607BFADC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_607BFADC(int a1, float a2, float a3)
{
  float *result; // r0

  FIELD_U32(a1, 1212) |= 0xC0000000;
  FIELD_U32(a1, 1216) |= 1u;
  FIELD_F32(a1, 12436) = a2;
  result = (float *)(a1 + 12440);
  *result = a3;
  return result;
}
