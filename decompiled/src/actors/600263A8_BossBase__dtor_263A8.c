/* BossBase__dtor_263A8
 * address: 0x600263A8   size: 128   group: actors
 * sym: BossBase::~BossBase() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A3EA8
// 
// Overridden by:
//   - 0x600538B4 : BoomBoomBase
//   - 0x60031E10 : SumoBrosBoss
//   - 0x60079200 : FinalBowser
//   - 0x600C782C : Bowser
//   - 0x600CFEB4 : BowserJrBase
//   - 0x600B7E64 : KoopalingBase
void __fastcall BossBase__dtor_263A8(int a1)
{
  int v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = &BossBase_vtable;
  v2 = a1 + 6332;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6720));
  PlayerLookTarget_vf0((_DWORD *)(a1 + 6644));
  sub_60026BFC(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
