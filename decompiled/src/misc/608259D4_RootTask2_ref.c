/* RootTask2_ref
 * address: 0x608259D4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall RootTask2_ref(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0

  result = CalculateTask2_ctor(a1, a2, (int)"RootTask2");
  FIELD_U32(result, 0x0) = (int)&off_60C2A6C0;
  return result;
}
