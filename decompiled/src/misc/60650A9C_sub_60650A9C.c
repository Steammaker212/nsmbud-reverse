/* sub_60650A9C
 * address: 0x60650A9C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60650A9C(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60C13EE0;
  v2 = (ColliderBase *)(a1 + 6592);
  FIELD_U32(a1, 7264) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 7264);
  sub_60237560(a1 + 7264);
  sead__IDisposer__dtor(v3);
  *(_DWORD *)a1 = off_60C13D34;
  ShapedCollider_dtor(v2);
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6104));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
