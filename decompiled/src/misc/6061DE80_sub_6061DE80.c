/* sub_6061DE80
 * address: 0x6061DE80   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6061DE80(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C10EA8;
  FIELD_U32(a1, 7004) = off_60BE75C0;
  FIELD_U32(a1, 7028) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 7028);
  sub_60237560(a1 + 7028);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 6876) = off_60BE75C0;
  FIELD_U32(a1, 6900) = EffectWrapper_vtable;
  sub_60237560(a1 + 6900);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6900));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6104));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
