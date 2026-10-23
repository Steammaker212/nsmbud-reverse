/* sub_60800910
 * address: 0x60800910   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60800910(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)&off_60C27E3C;
  result[1].vtable = 1065353216;
  result[1].containingHeap = 1137122418;
  result[1].field_8 = 1130364928;
  result[1].field_C = 0;
  result[2].vtable = 0;
  return result;
}
