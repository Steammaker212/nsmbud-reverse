/* FinalBowser__dtor
 * address: 0x60078F74   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026320
// 
// Overridden by: None
Actor *__fastcall FinalBowser__dtor(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BC68D0;
  FIELD_U32(a1, 26356) = off_60BE75C0;
  FIELD_U32(a1, 26380) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 26380);
  sub_60237560(a1 + 26380);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 26228) = off_60BE75C0;
  FIELD_U32(a1, 26252) = EffectWrapper_vtable;
  sub_60237560(a1 + 26252);
  sead__IDisposer__dtor((_DWORD *)(a1 + 26252));
  FIELD_U32(a1, 26000) = EffectWrapper_vtable;
  sub_60237560(a1 + 26000);
  sead__IDisposer__dtor((_DWORD *)(a1 + 26000));
  FIELD_U32(a1, 25896) = EffectWrapper_vtable;
  sub_60237560(a1 + 25896);
  sead__IDisposer__dtor((_DWORD *)(a1 + 25896));
  FIELD_U32(a1, 25788) = EffectWrapper_vtable;
  sub_60237560(a1 + 25788);
  sead__IDisposer__dtor((_DWORD *)(a1 + 25788));
  FIELD_U32(a1, 25488) = EffectWrapper_vtable;
  sub_60237560(a1 + 25488);
  sead__IDisposer__dtor((_DWORD *)(a1 + 25488));
  FIELD_U32(a1, 25384) = EffectWrapper_vtable;
  sub_60237560(a1 + 25384);
  sead__IDisposer__dtor((_DWORD *)(a1 + 25384));
  ShapedCollider_dtor((ColliderBase *)(a1 + 24696));
  ColliderBase_dtor((ColliderBase *)(a1 + 24296));
  ColliderBase_dtor((ColliderBase *)(a1 + 23896));
  sub_6007955C(a1 + 11572);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 11268));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10964));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10660));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10356));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10052));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9748));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9444));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9140));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8836));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8532));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8228));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7924));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7620));
  FIELD_U32(a1, 7092) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 7092));
  sead__IDisposer__dtor((_DWORD *)(a1 + 7092));
  *(_DWORD *)a1 = &BossBase_vtable;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6720));
  PlayerLookTarget_vf0((_DWORD *)(a1 + 6644));
  sub_60026BFC((_DWORD *)(a1 + 6332));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
