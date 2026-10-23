/* sub_607FED54
 * address: 0x607FED54   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_607FED54(sead_IDisposer *a1, int a2, float a3, float a4)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60C27DDC;
  result[1].vtable = FIELD_U32(a2, 24);
  result[1].containingHeap = 0;
  *(float *)&result[1].field_8 = a3;
  result[1].field_C = 0;
  *(float *)&result[2].vtable = a4;
  return result;
}
