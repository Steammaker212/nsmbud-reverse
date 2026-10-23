/* Bowser__dtor
 * address: 0x600C76D4   size: 320   group: misc
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
Actor *__fastcall Bowser__dtor(int a1)
{
  *(_DWORD *)a1 = off_60BCA3E4;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9456));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9152));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8848));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8544));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8240));
  FIELD_U32(a1, 7816) = EffectWrapper_vtable;
  sub_60237560(a1 + 7816);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7816));
  FIELD_U32(a1, 7400) = off_60BE75C0;
  FIELD_U32(a1, 7424) = EffectWrapper_vtable;
  sub_60237560(a1 + 7424);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7424));
  FIELD_U32(a1, 7272) = off_60BE75C0;
  FIELD_U32(a1, 7296) = EffectWrapper_vtable;
  sub_60237560(a1 + 7296);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7296));
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
