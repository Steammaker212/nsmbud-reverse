/* BoomBoomBase__dtor_538B4
 * address: 0x600538B4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600263A8
// 
// Overridden by:
//   - 0x6004F138 : BoomBoomW1
void __fastcall BoomBoomBase__dtor_538B4(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

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
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
