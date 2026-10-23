/* sub_6032CCF0
 * address: 0x6032CCF0   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6032CCF0(int a1)
{
  ActiveCollider *v2; // r8
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BEBCE8;
  v2 = (ActiveCollider *)(a1 + 6676);
  BasicSoundActor_vf0((_DWORD *)(a1 + 13560));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 13256));
  LightSource__dtor((_DWORD *)(a1 + 13160));
  *(_DWORD *)a1 = off_60BEAFFC;
  CollisionMgr_dtor(a1 + 7664);
  LightSource__dtor((_DWORD *)(a1 + 7560));
  FIELD_U32(a1, 7456) = EffectWrapper_vtable;
  sub_60237560(a1 + 7456);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7456));
  FIELD_U32(a1, 7352) = EffectWrapper_vtable;
  sub_60237560(a1 + 7352);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7352));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6980));
  ActiveCollider_dtor(v2);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6368));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
