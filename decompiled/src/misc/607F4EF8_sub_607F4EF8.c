/* sub_607F4EF8
 * address: 0x607F4EF8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607F4EF8(_DWORD *a1)
{
  _DWORD *v2; // r5
  void *v3; // r0

  *a1 = off_60C276C0;
  v2 = a1 + 57;
  nullsub_113(a1 + 215);
  nullsub_111(a1 + 193);
  sub_60954610(a1 + 176);
  sub_60954610(a1 + 159);
  sub_60954610(a1 + 142);
  sub_60954610(a1 + 125);
  sub_60954610(a1 + 108);
  sub_60954610(a1 + 91);
  sub_60954610(a1 + 74);
  sub_60954610(v2);
  v3 = (void *)sead__CalculateTask__dtor(a1);
  operator_delete(v3);
}
