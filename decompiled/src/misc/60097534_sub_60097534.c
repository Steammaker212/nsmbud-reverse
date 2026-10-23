/* sub_60097534
 * address: 0x60097534   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60097534(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BC99D0;
  v2 = (_DWORD *)(a1 + 6112);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6456));
  FIELD_U32(a1, 6328) = EffectWrapper_vtable;
  sub_60237560(a1 + 6328);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6328));
  FIELD_U32(a1, 6224) = EffectWrapper_vtable;
  sub_60237560(a1 + 6224);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6224));
  LightSource__dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
