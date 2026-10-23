/* sub_608D1244
 * address: 0x608D1244   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D1244(_DWORD *a1, int *a2, int a3)
{
  char *v6; // r6
  int v7; // r0
  int *v8; // r4
  int *v9; // r1
  int v10; // r2

  v6 = (char *)sub_608065A0();
  nn__os__LockMutex(a1 + 1);
  v7 = a1[7] + 8 * a3;
  v8 = *(int **)(v7 + 4);
  if ( v8 != (int *)v7 )
  {
    while ( v8 - 1 != a2 )
    {
      v8 = (int *)v8[1];
      if ( v8 == (int *)v7 )
        return nn__os__UnlockMutex(a1 + 1);
    }
    ((void (__fastcall *)(int *, char *, _DWORD *))loc_608CDBA0)(a2, v6 + 12, a1);
    (*(void (__fastcall **)(int *))(*(v8 - 1) + 12))(a2);
    if ( v8 != (int *)(a1[7] + 8 * a3) )
    {
      v9 = (int *)v8[1];
      v10 = *v9;
      *(_DWORD *)(*v8 + 4) = v9;
      *v9 = *v8;
      FIELD_U32(v10, 4) = v8;
      *v8 = v10;
    }
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 12))(a1, -1);
  }
  return nn__os__UnlockMutex(a1 + 1);
}
