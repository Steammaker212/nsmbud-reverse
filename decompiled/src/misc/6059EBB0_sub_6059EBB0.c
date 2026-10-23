/* sub_6059EBB0
 * address: 0x6059EBB0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6059EBB0(int a1)
{
  *(_DWORD *)a1 = off_60C07ACC;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10516));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10212));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9908));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9604));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9300));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8996));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8692));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8388));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8084));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7780));
  ShapedCollider_dtor((ColliderBase *)(a1 + 7080));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6424));
  LightSource__dtor((_DWORD *)(a1 + 6340));
  FIELD_U32(a1, 6236) = EffectWrapper_vtable;
  sub_60237560(a1 + 6236);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6236));
  FIELD_U32(a1, 6132) = EffectWrapper_vtable;
  sub_60237560(a1 + 6132);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6132));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
