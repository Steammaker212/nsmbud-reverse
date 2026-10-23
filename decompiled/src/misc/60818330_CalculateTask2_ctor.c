/* CalculateTask2_ctor
 * address: 0x60818330   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall CalculateTask2_ctor(sead_IDisposer *a1, int a2, int a3)
{
  sead_IDisposer *result; // r0

  result = sead__CalculateTask__ctor(a1, a2, a3);
  FIELD_U32(result, 0x0) = (int)off_60C2A0C0;
  return result;
}
