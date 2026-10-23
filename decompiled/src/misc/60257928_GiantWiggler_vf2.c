/* GiantWiggler_vf2
 * address: 0x60257928   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall GiantWiggler_vf2(int a1)
{
  ActiveCollider *v2; // r5

  *(_DWORD *)a1 = GiantWiggler_vtable;
  v2 = (ActiveCollider *)(a1 + 12836);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 13140));
  ActiveCollider_dtor(v2);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12532));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12228));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 11924));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 11620));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 11316));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 11012));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10708));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10404));
  FIELD_U32(a1, 6316) = off_60BDAB98;
  FIELD_U32(a1, 6392) = EffectWrapper_vtable;
  sub_60237560(a1 + 6392);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6392));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
