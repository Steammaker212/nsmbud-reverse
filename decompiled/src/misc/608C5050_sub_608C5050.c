/* sub_608C5050
 * address: 0x608C5050   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C5050(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  _DWORD *result; // r0
  _DWORD *v5; // r6

  v2 = a1 + 7;
  nn__os__LockMutex(a1 + 7);
  v3 = (_DWORD *)a1[5];
  if ( v3 == a1 + 4 && (nn__os__UnlockMutex(v2), nn__os__LockMutex(v2), v3 = (_DWORD *)a1[3], v3 == a1 + 2) )
  {
    nn__os__UnlockMutex(v2);
    nn__os__LockMutex(v2);
    v5 = (_DWORD *)a1[1];
    nn__os__UnlockMutex(v2);
    result = v5 - 1;
    if ( v5 == a1 )
      return 0;
  }
  else
  {
    nn__os__UnlockMutex(v2);
    return v3 - 1;
  }
  return result;
}
