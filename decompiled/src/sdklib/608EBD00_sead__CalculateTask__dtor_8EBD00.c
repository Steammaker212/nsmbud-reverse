/* sead__CalculateTask__dtor_8EBD00
 * address: 0x608EBD00   size: 76   group: sdklib
 * sym: sead::CalculateTask::~CalculateTask() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sead__CalculateTask__dtor_8EBD00(_DWORD *a1)
{
  _DWORD *v2; // r5
  void *v3; // r0

  *a1 =&sead__CalculateTask__vtable;
  a1[28] = off_60BFA048;
  v2 = a1 + 28;
  sead__MethodTreeNode__detachAll((int)(a1 + 28));
  sead__IDisposer__dtor(v2);
  v3 = (void *)sead__TaskBase__dtor(a1);
  operator_delete(v3);
}
