/* sub_608B683C
 * address: 0x608B683C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B683C(int a1, int *a2)
{
  char *v4; // r0
  int *v5; // r0
  int *v6; // r1
  int *v7; // r2
  int v8; // r3
  char *v9; // r0

  v4 = (char *)sub_608065A0();
  nn__os__LockMutex(v4 + 1240);
  v5 = *(int **)(a1 + 1236);
  v6 = (int *)(a1 + 1232);
  if ( v5 != (int *)(a1 + 1232) )
  {
    while ( v5 - 9 != a2 )
    {
      v5 = (int *)v5[1];
      if ( v5 == v6 )
        goto LABEL_7;
    }
    if ( v5 != v6 )
    {
      v7 = (int *)v5[1];
      v8 = *v7;
      *(_DWORD *)(*v5 + 4) = v7;
      *v7 = *v5;
      FIELD_U32(v8, 4) = v5;
      *v5 = v8;
    }
  }
LABEL_7:
  v9 = (char *)sub_608065A0();
  return nn__os__UnlockMutex(v9 + 1240);
}
