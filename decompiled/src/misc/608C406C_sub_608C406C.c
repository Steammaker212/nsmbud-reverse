/* sub_608C406C
 * address: 0x608C406C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C406C(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  _DWORD *v4; // r6
  int v5; // r0
  int v6; // t1
  int v7; // t1

  v2 = a1;
  v4 = a1 + 119;
  nn__os__LockMutex(a1 + 119);
  v6 = v2[129];
  v2 += 129;
  v5 = v6;
  v7 = a2[1];
  *++a2 = v5;
  FIELD_U32(v7, 4) = v2;
  *(_DWORD *)(*v2 + 4) = a2;
  *v2 = v7;
  return nn__os__UnlockMutex(v4);
}
