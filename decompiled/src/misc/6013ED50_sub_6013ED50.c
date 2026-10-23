/* sub_6013ED50
 * address: 0x6013ED50   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6013ED50(int a1)
{
  ActiveCollider *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BD2E74;
  v2 = (ActiveCollider *)(a1 + 6428);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6732));
  ActiveCollider_dtor(v2);
  FIELD_U32(a1, 6308) = EffectWrapper_vtable;
  sub_60237560(a1 + 6308);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6308));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
