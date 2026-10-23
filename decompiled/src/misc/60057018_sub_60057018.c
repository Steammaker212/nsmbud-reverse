/* sub_60057018
 * address: 0x60057018   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60057018(int a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r5

  *(_DWORD *)a1 = off_60BC4080;
  v2 = (_DWORD *)(a1 + 7528);
  FIELD_U32(a1, 8524) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 8524);
  sub_60237560(a1 + 8524);
  sead__IDisposer__dtor(v3);
  *(_DWORD *)a1 = off_60BC3258;
  FIELD_U32(a1, 8284) = EffectWrapper_vtable;
  sub_60237560(a1 + 8284);
  sead__IDisposer__dtor((_DWORD *)(a1 + 8284));
  FIELD_U32(a1, 8180) = EffectWrapper_vtable;
  sub_60237560(a1 + 8180);
  sead__IDisposer__dtor((_DWORD *)(a1 + 8180));
  FIELD_U32(a1, 8076) = EffectWrapper_vtable;
  sub_60237560(a1 + 8076);
  sead__IDisposer__dtor((_DWORD *)(a1 + 8076));
  FIELD_U32(a1, 7972) = EffectWrapper_vtable;
  sub_60237560(a1 + 7972);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7972));
  *(_DWORD *)a1 = BoomBoomBase_vtable;
  sub_60026BFC(v2);
  FIELD_U32(a1, 7356) = EffectWrapper_vtable;
  sub_60237560(a1 + 7356);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7356));
  FIELD_U32(a1, 7252) = EffectWrapper_vtable;
  sub_60237560(a1 + 7252);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7252));
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
