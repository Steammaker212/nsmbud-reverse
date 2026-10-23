/* sub_60306220
 * address: 0x60306220   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60306220(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60BE91D4;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6612));
  FIELD_U32(a1, 6412) = EffectWrapper_vtable;
  sub_60237560(a1 + 6412);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6412));
  FIELD_U32(a1, 6308) = EffectWrapper_vtable;
  sub_60237560(a1 + 6308);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6308));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
