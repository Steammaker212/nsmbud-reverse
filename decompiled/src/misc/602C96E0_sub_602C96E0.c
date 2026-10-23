/* sub_602C96E0
 * address: 0x602C96E0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602C96E0(int a1)
{
  int v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60BE55BC;
  v2 = a1 + 6672;
  FIELD_U32(a1, 28124) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 28124);
  sub_60237560(a1 + 28124);
  sead__IDisposer__dtor(v3);
  *(_DWORD *)a1 = off_60C1F878;
  CollisionMgr_dtor(a1 + 22728);
  CollisionMgr_dtor(a1 + 17376);
  CollisionMgr_dtor(a1 + 12024);
  CollisionMgr_dtor(v2);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6360));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
