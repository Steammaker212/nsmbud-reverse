/* sub_607E2968
 * address: 0x607E2968   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E2968(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C2693C;
  v2 = a1 + 57;
  nullsub_113(a1 + 96);
  nullsub_111(a1 + 74);
  sub_60954610(v2);
  return sead__CalculateTask__dtor(a1);
}
