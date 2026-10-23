/* sub_607E10C8
 * address: 0x607E10C8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E10C8(_DWORD *a1)
{
  int v2; // r5

  *a1 = off_60C2670C;
  v2 = (int)(a1 + 642);
  sub_60475AE8(a1 + 1824);
  sub_60520DC4(a1 + 743);
  sub_6045C0A0(v2);
  sub_6045C0A0((int)(a1 + 541));
  sub_6045C0A0((int)(a1 + 440));
  sub_6045C0A0((int)(a1 + 339));
  sub_6045C0A0((int)(a1 + 238));
  nullsub_113(a1 + 195);
  nullsub_111(a1 + 173);
  sub_60954610(a1 + 156);
  sub_60954610(a1 + 139);
  sub_60954610(a1 + 122);
  nullsub_113(a1 + 70);
  nullsub_111(a1 + 48);
  return sead__CalculateTask__dtor(a1);
}
