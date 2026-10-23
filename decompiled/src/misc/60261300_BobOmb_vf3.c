/* BobOmb_vf3
 * address: 0x60261300   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall BobOmb_vf3(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = BobOmb_vtable;
  v2 = (_DWORD *)(a1 + 6532);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6756));
  FIELD_U32(a1, 6604) = EffectWrapper_vtable;
  sub_60237560(a1 + 6604);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6604));
  LightSource__dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
