/* sub_600FC598
 * address: 0x600FC598   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600FC598(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60BCB08C;
  v2 = (_DWORD *)(a1 + 6644);
  FIELD_U32(a1, 7372) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 7372);
  sub_60237560(a1 + 7372);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 7268) = EffectWrapper_vtable;
  sub_60237560(a1 + 7268);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7268));
  *(_DWORD *)a1 = &BossBase_vtable;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6720));
  PlayerLookTarget_vf0(v2);
  sub_60026BFC((_DWORD *)(a1 + 6332));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
