/* sead__CriticalSection__dtor
 * address: 0x60907F28   size: 44   group: sdklib
 * sym: sead::CriticalSection::~CriticalSection() as D2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__CriticalSection__dtor(_DWORD *a1)
{
  *a1 =&sead__CriticalSection__vtable;
  nn__os__FinalizeMutex(a1 + 4);
  return sead__IDisposer__dtor(a1);
}
