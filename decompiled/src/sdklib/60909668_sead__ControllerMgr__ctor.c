/* sead__ControllerMgr__ctor
 * address: 0x60909668   size: 80   group: sdklib
 * sym: sead::ControllerMgr::ControllerMgr(sead::TaskConstructArg const&) as C1
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
  LOBYTE(FIELD_U32(result + (12) * 16, 0x0)) = 0;
  FIELD_U32(result + (12) * 16, 0x4) = (int)&FIELD_U32(result + (12) * 16, 0x4);
  FIELD_U32(result + (12) * 16, 0x8) = (int)&FIELD_U32(result + (12) * 16, 0x4);
  FIELD_U32(result + (12) * 16, 0xC) = 0;
  FIELD_U32(result + (13) * 16, 0x0) = 4;
  FIELD_U32(result + (13) * 16, 0x4) = 0;
  FIELD_U32(result + (13) * 16, 0x8) = 0;
  FIELD_U32(result + (13) * 16, 0xC) = 0;
  return result;
}
