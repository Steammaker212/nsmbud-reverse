/* sub_6060E884
 * address: 0x6060E884   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6060E884(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C0FB74;
  FIELD_U32(a1, 7020) = off_60BE75C0;
  FIELD_U32(a1, 7044) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 7044);
  sub_60237560(a1 + 7044);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 6892) = off_60BE75C0;
  FIELD_U32(a1, 6916) = EffectWrapper_vtable;
  sub_60237560(a1 + 6916);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6916));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6112));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
