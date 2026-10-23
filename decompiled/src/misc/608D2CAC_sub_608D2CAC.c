/* sub_608D2CAC
 * address: 0x608D2CAC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2CAC(int *a1)
{
  _DWORD *v2; // r5
  int *v3; // r2
  int v4; // r3
  int *v5; // r0

  v2 = a1 + 2;
  nn__os__LockMutex(a1 + 2);
  while ( 1 )
  {
    v5 = (int *)a1[1];
    if ( v5 == a1 )
      break;
    v3 = (int *)v5[1];
    v4 = *v3;
    *(_DWORD *)(*v5 + 4) = v3;
    *v3 = *v5;
    FIELD_U32(v4, 4) = v5;
    *v5 = v4;
  }
  return nn__os__UnlockMutex(v2);
}
