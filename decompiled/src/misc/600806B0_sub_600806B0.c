/* sub_600806B0
 * address: 0x600806B0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600806B0(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BC6FD8;
  v2 = (_DWORD *)(a1 + 6116);
  sub_60026BFC((_DWORD *)(a1 + 6668));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6360));
  FIELD_U32(a1, 6188) = EffectWrapper_vtable;
  sub_60237560(a1 + 6188);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6188));
  LightSource__dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
