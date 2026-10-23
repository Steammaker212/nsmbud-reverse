/* sub_608C4F78
 * address: 0x608C4F78   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608C4F78(int *a1)
{
  _DWORD *v2; // r4
  int *v3; // r6
  int *v4; // r1
  int v5; // r2
  int *v6; // r5
  int *v8; // r0
  int *v9; // r2
  int v10; // r3

  v2 = a1 + 7;
  nn__os__LockMutex(a1 + 7);
  nn__os__LockMutex(v2);
  v3 = (int *)a1[5];
  if ( v3 == a1 + 4 && (nn__os__UnlockMutex(v2), nn__os__LockMutex(v2), v3 = (int *)a1[3], v3 == a1 + 2) )
  {
    nn__os__UnlockMutex(v2);
    nn__os__LockMutex(v2);
    v8 = (int *)a1[1];
    if ( v8 == a1 )
    {
      v6 = 0;
    }
    else
    {
      v9 = (int *)v8[1];
      v6 = v8 - 1;
      v10 = *v9;
      *(_DWORD *)(*v8 + 4) = v9;
      *v9 = *v8;
      FIELD_U32(v10, 4) = v8;
      *v8 = v10;
    }
    nn__os__UnlockMutex(v2);
  }
  else
  {
    v4 = (int *)v3[1];
    v5 = *v4;
    *(_DWORD *)(*v3 + 4) = v4;
    *v4 = *v3;
    FIELD_U32(v5, 4) = v3;
    *v3 = v5;
    nn__os__UnlockMutex(v2);
    v6 = v3 - 1;
  }
  nn__os__UnlockMutex(v2);
  return v6;
}
