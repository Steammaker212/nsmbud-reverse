/* CreateRootTask
 * address: 0x60562A50   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall CreateRootTask(int a1)
{
  sead_IDisposer *v2; // r0
  sead_IDisposer *result; // r0

  v2 = (sead_IDisposer *)operator_new_8DE25C(0xC0u, *(void **)(*(_DWORD *)a1 + 4 * *(_DWORD *)(*(_DWORD *)a1 + 20)), 4);
  result = CalculateTask2_ctor(v2, a1, (int)"RootTask");
  FIELD_U32(result, 0x0) = (int)RootTask_vtable;
  return result;
}
