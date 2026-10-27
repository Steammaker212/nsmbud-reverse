/* Thwomp__dtor_29EFA0
 * address: 0x6029EFA0   size: 144   group: misc
 * sym: Thwomp::~Thwomp() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A3EA8
// 
// Overridden by: None
void __fastcall Thwomp__dtor_29EFA0(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = Thwomp_vtable;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6456));
  FIELD_U32(a1, 6352) = EffectWrapper_vtable;
  sub_60237560(a1 + 6352);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6352));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
