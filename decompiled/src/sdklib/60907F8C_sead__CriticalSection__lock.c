/* sead__CriticalSection__lock
 * address: 0x60907F8C   size: 8   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__CriticalSection__lock(int a1)
{
  return nn__os__LockMutex(a1 + 16);
}
