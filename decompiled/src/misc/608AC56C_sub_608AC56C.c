/* sub_608AC56C
 * address: 0x608AC56C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC56C(int a1)
{
  int v2; // r5
  int v3; // r4

  v2 = a1 + 4;
  nn__os__LockMutex(a1 + 4);
  v3 = sub_608C5FA0(a1 + 24);
  nn__os__UnlockMutex(v2);
  return v3;
}
