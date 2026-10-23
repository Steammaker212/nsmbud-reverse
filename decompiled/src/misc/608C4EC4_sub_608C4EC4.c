/* sub_608C4EC4
 * address: 0x608C4EC4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C4EC4(int a1)
{
  nn__os__FinalizeMutex(a1 + 232);
  nn__os__FinalizeMessageQueue(a1 + 48);
  nn__os__FinalizeMutex(a1 + 28);
  return a1;
}
