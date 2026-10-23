/* BoomBoomBase__dtor
 * address: 0x6004FA4C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026320
// 
// Overridden by:
//   - 0x6004F090 : BoomBoomW1
Actor *__fastcall BoomBoomBase__dtor(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = BoomBoomBase_vtable;
  v2 = (_DWORD *)(a1 + 6644);
  sub_60026BFC((_DWORD *)(a1 + 7528));
  FIELD_U32(a1, 7356) = EffectWrapper_vtable;
  sub_60237560(a1 + 7356);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7356));
  FIELD_U32(a1, 7252) = EffectWrapper_vtable;
  sub_60237560(a1 + 7252);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7252));
  *(_DWORD *)a1 = &BossBase_vtable;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6720));
  PlayerLookTarget_vf0(v2);
  sub_60026BFC((_DWORD *)(a1 + 6332));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
