/* sead__ControllerMgr__ctor
 * address: 0x60909668   size: 80   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sead__ControllerMgr__ctor(sead_IDisposer *a1, int **a2)
{
  sead_IDisposer *result; // r0

  result = sead__CalculateTask__ctor(a1, a2, (int)"sead__ControllerMgr");
  FIELD_U32(result, 0x0) = (int)&sead__ControllerMgr__vtable;
  LOBYTE(result[12].vtable) = 0;
  result[12].containingHeap = (int)&result[12].containingHeap;
  result[12].field_8 = (int)&result[12].containingHeap;
  result[12].field_C = 0;
  result[13].vtable = 4;
  result[13].containingHeap = 0;
  result[13].field_8 = 0;
  result[13].field_C = 0;
  return result;
}
