/* BigBoo_vf3
 * address: 0x603AF5AC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall BigBoo_vf3(int a1)
{
  ActiveCollider *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = BigBoo_vtable;
  v2 = (ActiveCollider *)(a1 + 6312);
  LightSource__dtor((_DWORD *)(a1 + 7008));
  PlayerLookTarget_vf0((_DWORD *)(a1 + 6964));
  FIELD_U32(a1, 6792) = EffectWrapper_vtable;
  sub_60237560(a1 + 6792);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6792));
  FIELD_U32(a1, 6688) = EffectWrapper_vtable;
  sub_60237560(a1 + 6688);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6688));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
