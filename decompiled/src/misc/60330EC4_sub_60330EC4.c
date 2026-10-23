/* sub_60330EC4
 * address: 0x60330EC4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60330EC4(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60BEC2D0;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6760));
  FIELD_U32(a1, 6576) = EffectWrapper_vtable;
  sub_60237560(a1 + 6576);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6576));
  FIELD_U32(a1, 6472) = EffectWrapper_vtable;
  sub_60237560(a1 + 6472);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6472));
  FIELD_U32(a1, 6368) = EffectWrapper_vtable;
  sub_60237560(a1 + 6368);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6368));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
