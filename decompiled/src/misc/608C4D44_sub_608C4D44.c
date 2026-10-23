/* sub_608C4D44
 * address: 0x608C4D44   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C4D44(_DWORD *a1)
{
  _DWORD *v2; // r5

  v2 = a1 + 3;
  *a1 = off_60C5B2E4;
  a1[1] = a1 + 1;
  a1[2] = a1 + 1;
  nn__os__InitializeEvent(a1 + 3, 0, 0);
  a1[10] = 0;
  a1[11] = 0;
  nn__os__SignalEvent(v2);
  return a1;
}
