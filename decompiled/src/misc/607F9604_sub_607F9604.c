/* sub_607F9604
 * address: 0x607F9604   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607F9604(_DWORD *a1)
{
  _DWORD *v2; // r5
  void *v3; // r0

  *a1 = off_60C27C1C;
  v2 = a1 + 48;
  sub_60544E84((int)(a1 + 12886));
  sub_604BF148(a1 + 326);
  sub_6045C0A0((int)(a1 + 224));
  sub_60954610(a1 + 207);
  sub_60954610(a1 + 190);
  nullsub_113(a1 + 135);
  nullsub_111(a1 + 113);
  nullsub_113(a1 + 70);
  nullsub_111(v2);
  v3 = (void *)sead__CalculateTask__dtor(a1);
  operator_delete(v3);
}
