/* sub_6008C7A4
 * address: 0x6008C7A4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6008C7A4(int a1)
{
  ActiveCollider *v2; // r8
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60BC711C;
  v2 = (ActiveCollider *)(a1 + 6720);
  FIELD_U32(a1, 7812) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 7812);
  sub_60237560(a1 + 7812);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 7708) = EffectWrapper_vtable;
  sub_60237560(a1 + 7708);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7708));
  *(_DWORD *)a1 = off_60BCB08C;
  FIELD_U32(a1, 7372) = EffectWrapper_vtable;
  sub_60237560(a1 + 7372);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7372));
  FIELD_U32(a1, 7268) = EffectWrapper_vtable;
  sub_60237560(a1 + 7268);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7268));
  *(_DWORD *)a1 = &BossBase_vtable;
  ActiveCollider_dtor(v2);
  PlayerLookTarget_vf0((_DWORD *)(a1 + 6644));
  sub_60026BFC((_DWORD *)(a1 + 6332));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
