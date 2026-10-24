/* sub_60803F18
 * address: 0x60803F18   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60803F18(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60C27ED8;
  FIELD_U32(result + (1) * 16, 0x0) = 0;
  FIELD_U32(result + (1) * 16, 0x4) = 0;
  FIELD_U32(result + (1) * 16, 0x8) = 0;
  FIELD_U32(result + (1) * 16, 0xC) = 0;
  FIELD_U32(result + (2) * 16, 0x0) = 0;
  return result;
}
