/* sub_6070067C
 * address: 0x6070067C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6070067C(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60C2084C;
  v2 = (ColliderBase *)(a1 + 6192);
  FIELD_U32(a1, 7620) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 7620);
  sub_60237560(a1 + 7620);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 7516) = EffectWrapper_vtable;
  sub_60237560(a1 + 7516);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7516));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6640));
  SolidOnTopCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
