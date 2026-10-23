/* sub_60423020
 * address: 0x60423020   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60423020(int a1)
{
  int v2; // r5

  v2 = sead__TaskBase__getMethodTreeMgr_const() + 4;
  sead__CriticalSection__lock(v2);
  sead__TaskBase__attachMethodWithCheck(a1, 4, a1 + 264);
  return sead__CriticalSection__unlock(v2);
}
