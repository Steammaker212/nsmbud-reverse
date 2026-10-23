/* sub_608C40AC
 * address: 0x608C40AC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C40AC(int a1, int a2)
{
  int v4; // r5
  int *v5; // r2
  int v6; // r3

  v4 = a1 + 476;
  nn__os__LockMutex(a1 + 476);
  if ( a2 + 4 != a1 + 516 )
  {
    v5 = *(int **)(a2 + 8);
    v6 = *v5;
    *(_DWORD *)(FIELD_U32(a2, 4) + 4) = v5;
    *v5 = FIELD_U32(a2, 4);
    FIELD_U32(v6, 4) = a2 + 4;
    FIELD_U32(a2, 4) = v6;
  }
  return nn__os__UnlockMutex(v4);
}
