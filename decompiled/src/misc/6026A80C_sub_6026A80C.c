/* sub_6026A80C
 * address: 0x6026A80C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6026A80C(int a1)
{
  ActiveCollider *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60BDBC54;
  v2 = (ActiveCollider *)(a1 + 6432);
  FIELD_U32(a1, 6808) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 6808);
  sub_60237560(a1 + 6808);
  sead__IDisposer__dtor(v3);
  LightSource__dtor((_DWORD *)(a1 + 6736));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
