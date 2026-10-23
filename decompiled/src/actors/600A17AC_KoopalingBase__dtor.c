/* KoopalingBase__dtor
 * address: 0x600A17AC   size: 308   group: actors
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
//   - 0x600A0F88 : Iggy
Actor *__fastcall KoopalingBase__dtor(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60BC91CC;
  v2 = (_DWORD *)(a1 + 6644);
  FIELD_U32(a1, 8012) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 8012);
  sub_60237560(a1 + 8012);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 7908) = EffectWrapper_vtable;
  sub_60237560(a1 + 7908);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7908));
  FIELD_U32(a1, 7804) = EffectWrapper_vtable;
  sub_60237560(a1 + 7804);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7804));
  FIELD_U32(a1, 7608) = EffectWrapper_vtable;
  sub_60237560(a1 + 7608);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7608));
  FIELD_U32(a1, 7504) = EffectWrapper_vtable;
  sub_60237560(a1 + 7504);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7504));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7184));
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
