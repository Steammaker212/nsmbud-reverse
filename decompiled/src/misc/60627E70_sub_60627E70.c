/* sub_60627E70
 * address: 0x60627E70   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60627E70(int a1)
{
  ActiveCollider *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60C11D40;
  v2 = (ActiveCollider *)(a1 + 6144);
  FIELD_U32(a1, 7404) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 7404);
  sub_60237560(a1 + 7404);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 7300) = EffectWrapper_vtable;
  sub_60237560(a1 + 7300);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7300));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6832));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
