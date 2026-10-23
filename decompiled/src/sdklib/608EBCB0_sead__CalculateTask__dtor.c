/* sead__CalculateTask__dtor
 * address: 0x608EBCB0   size: 72   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__CalculateTask__dtor(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 =&sead__CalculateTask__vtable;
  a1[28] = off_60BFA048;
  v2 = a1 + 28;
  sead__MethodTreeNode__detachAll((int)(a1 + 28));
  sead__IDisposer__dtor(v2);
  return sead__TaskBase__dtor(a1);
}
