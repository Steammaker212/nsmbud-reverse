/* sead__ControllerMgr__dtor
 * address: 0x6090989C   size: 48   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__ControllerMgr__dtor(_DWORD *a1)
{
  *a1 =&sead__ControllerMgr__vtable;
  if ( *((_BYTE *)a1 + 192) )
    dword_60CCF448 = 0;
  return sead__CalculateTask__dtor(a1);
}
