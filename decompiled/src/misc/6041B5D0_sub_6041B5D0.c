/* sub_6041B5D0
 * address: 0x6041B5D0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6041B5D0(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BF9D68;
  v2 = a1 + 1012;
  sub_6041B6CC(a1);
  sub_6092138C(a1 + 1130);
  sub_6092138C(a1 + 1106);
  j_nullsub_280(a1 + 1082);
  sub_609175E4(v2);
  sub_609175E4(a1 + 926);
  nullsub_73(a1 + 850);
  nullsub_73(a1 + 796);
  sub_609175E4(a1 + 744);
  sub_609175E4(a1 + 676);
  nullsub_1351(a1 + 515);
  nullsub_68(a1 + 438);
  nullsub_1349(a1 + 435);
  nullsub_68(a1 + 274);
  nullsub_1350(a1 + 271);
  nullsub_68(a1 + 196);
  nullsub_1348(a1 + 193);
  nullsub_68(a1 + 114);
  nullsub_68(a1 + 38);
  nullsub_1347(a1 + 35);
  sead__CriticalSection__dtor(a1 + 8);
  return sead__IDisposer__dtor(a1);
}
