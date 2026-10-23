/* sub_608AC458
 * address: 0x608AC458   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC458(int a1, int a2)
{
  int v4; // r6
  int v5; // r4

  v4 = a1 + 4;
  nn__os__LockMutex(a1 + 4);
  v5 = sub_608C5F1C(a1 + 24, a2, sub_608AC4B4, 0, 0, 0);
  nn__os__UnlockMutex(v4);
  return v5;
}
