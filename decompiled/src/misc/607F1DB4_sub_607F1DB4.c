/* sub_607F1DB4
 * address: 0x607F1DB4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F1DB4(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C27420;
  v2 = a1 + 57;
  sub_6045C0A0((int)(a1 + 264));
  nullsub_113(a1 + 215);
  nullsub_111(a1 + 193);
  nullsub_113(a1 + 147);
  nullsub_111(a1 + 125);
  sub_60954610(a1 + 108);
  sub_60954610(a1 + 91);
  sub_60954610(a1 + 74);
  sub_60954610(v2);
  return sead__CalculateTask__dtor(a1);
}
