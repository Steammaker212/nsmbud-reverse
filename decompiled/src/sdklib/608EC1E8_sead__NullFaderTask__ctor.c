/* sead__NullFaderTask__ctor
 * address: 0x608EC1E8   size: 52   group: sdklib
 * sym: sead::NullFaderTask::NullFaderTask(sead::TaskConstructArg const&) as C1
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__NullFaderTask__ctor(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)sead__FaderTaskBase__ctor(a1, a2, "NullFaderTask");
  *result = off_60C5C440;
  result[119] = 0;
  result[120] = 0;
  result[121] = 0;
  return result;
}
