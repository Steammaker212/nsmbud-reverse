/* sub_6012EFCC
 * address: 0x6012EFCC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6012EFCC(int a1)
{
  int v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BD1C1C;
  v2 = a1 + 6112;
  LightSource__dtor((_DWORD *)(a1 + 11888));
  FIELD_U32(a1, 11784) = EffectWrapper_vtable;
  sub_60237560(a1 + 11784);
  sead__IDisposer__dtor((_DWORD *)(a1 + 11784));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 11476));
  CollisionMgr_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
