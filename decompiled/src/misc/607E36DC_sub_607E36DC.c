/* sub_607E36DC
 * address: 0x607E36DC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607E36DC(_DWORD *a1)
{
  int v2; // r5
  void *v3; // r0

  *a1 = off_60C26AE0;
  v2 = (int)(a1 + 470);
  nullsub_113(a1 + 593);
  nullsub_111(a1 + 571);
  sub_6045C0A0(v2);
  sub_6045C0A0((int)(a1 + 369));
  sub_6045C0A0((int)(a1 + 268));
  sub_6045C0A0((int)(a1 + 167));
  sub_6045C0A0((int)(a1 + 66));
  sub_60954610(a1 + 48);
  v3 = (void *)sead__CalculateTask__dtor(a1);
  operator_delete(v3);
}
