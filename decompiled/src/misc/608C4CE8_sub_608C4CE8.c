/* sub_608C4CE8
 * address: 0x608C4CE8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608C4CE8(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C5B2BC;
  v2 = a1 + 2;
  nn__os__FinalizeMutex(a1 + 190);
  nn__os__FinalizeMutex(a1 + 159);
  nn__os__FinalizeMutex(a1 + 124);
  nn__os__FinalizeMutex(a1 + 119);
  nn__os__FinalizeMessageQueue(a1 + 74);
  nullsub_278(v2);
  operator_delete(a1);
}
