/* sub_6032CCA0
 * address: 0x6032CCA0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6032CCA0(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BEBCE8;
  v2 = (_DWORD *)(a1 + 13160);
  BasicSoundActor_vf0((_DWORD *)(a1 + 13560));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 13256));
  LightSource__dtor(v2);
  return BanzaiBill_vf2(a1);
}
