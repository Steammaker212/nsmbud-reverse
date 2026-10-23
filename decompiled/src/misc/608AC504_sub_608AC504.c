/* sub_608AC504
 * address: 0x608AC504   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC504(int a1, int a2, int a3, int a4)
{
  int v8; // r6
  int v9; // r4

  v8 = a1 + 4;
  nn__os__LockMutex(a1 + 4);
  v9 = sub_608C5F1C(a1 + 24, a2, sub_608AC4B4, 0, a3, a4);
  nn__os__UnlockMutex(v8);
  return v9;
}
