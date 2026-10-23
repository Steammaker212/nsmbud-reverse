/* sead__TaskMgr__destroyTaskSync
 * address: 0x608EFD84   size: 68   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__TaskMgr__destroyTaskSync(int a1, int a2)
{
  int result; // r0

  result = sub_60907F94(*(_DWORD *)(FIELD_U32(a1, 40) + 32) + 4);
  if ( result == 1 )
  {
    sub_608F0BE8(a1, a2);
    return sead__CriticalSection__unlock(*(_DWORD *)(FIELD_U32(a1, 40) + 32) + 4);
  }
  return result;
}
