/* sub_60804474
 * address: 0x60804474   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60804474(sead_IDisposer *a1, float a2)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60C27EF8;
  result[1].vtable = 0;
  result[1].containingHeap = 0;
  *(float *)&result[1].field_8 = a2;
  *(float *)&result[1].field_C = a2;
  *(float *)&result[2].vtable = a2;
  *(float *)&result[2].containingHeap = a2;
  result[2].field_8 = 0;
  result[2].field_C = 0;
  result[3].vtable = 0;
  result[3].containingHeap = 0;
  result[3].field_8 = 0;
  result[3].field_C = 973279855;
  return result;
}
