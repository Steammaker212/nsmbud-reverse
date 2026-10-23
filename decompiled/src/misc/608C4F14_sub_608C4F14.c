/* sub_608C4F14
 * address: 0x608C4F14   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C4F14(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r5
  int v6; // t1
  int v7; // r0

  v3 = a2;
  nn__os__ClearEvent(a2 + 3);
  v3[10] = 1;
  nn__os__LockMutex(a1 + 28);
  v6 = v3[1];
  ++v3;
  v7 = a1 + 8 * a3;
  *v3 = *(_DWORD *)v7;
  FIELD_U32(v6, 4) = v7;
  *(_DWORD *)(*(_DWORD *)v7 + 4) = v3;
  *(_DWORD *)v7 = v6;
  nn__os__UnlockMutex(a1 + 28);
  return nn__os__TrySendMessageQueue(a1 + 48, 0);
}
