/* sead__ControllerMgr__dtor_9098D4
 * address: 0x609098D4   size: 60   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sead__ControllerMgr__dtor_9098D4(int a1)
{
  void *v1; // r0

  *(_DWORD *)a1 =&sead__ControllerMgr__vtable;
  if ( FIELD_U8(a1, 192) )
    dword_60CCF448 = 0;
  v1 = (void *)sead__CalculateTask__dtor((_DWORD *)a1);
  operator_delete(v1);
}
