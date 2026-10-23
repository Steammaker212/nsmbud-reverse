/* sub_603FE244
 * address: 0x603FE244   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603FE244(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BF97A4;
  v2 = a1 + 427;
  nullsub_1332(a1);
  j_nullsub_280(v2);
  nullsub_73(a1 + 370);
  sub_609175E4(a1 + 318);
  sub_609175E4(a1 + 232);
  nullsub_73(a1 + 158);
  sub_609175E4(a1 + 106);
  sub_609175E4(a1 + 20);
  return sead__IDisposer__dtor(a1);
}
