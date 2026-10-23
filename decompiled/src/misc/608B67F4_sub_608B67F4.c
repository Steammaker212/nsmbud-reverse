/* sub_608B67F4
 * address: 0x608B67F4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B67F4(_DWORD *a1, _DWORD *a2)
{
  char *v4; // r0
  int v5; // r0
  int v6; // t1
  int v7; // t1
  char *v8; // r0

  v4 = (char *)sub_608065A0();
  nn__os__LockMutex(v4 + 1240);
  v6 = a1[308];
  a1 += 308;
  v5 = v6;
  v7 = a2[9];
  a2 += 9;
  *a2 = v5;
  FIELD_U32(v7, 4) = a1;
  *(_DWORD *)(*a1 + 4) = a2;
  *a1 = v7;
  v8 = (char *)sub_608065A0();
  return nn__os__UnlockMutex(v8 + 1240);
}
