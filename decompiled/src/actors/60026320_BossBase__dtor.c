/* BossBase__dtor
 * address: 0x60026320   size: 124   group: actors
 * sym: BossBase::~BossBase() as D2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x60033814
// 
// Overridden by:
//   - 0x6004FA4C : BoomBoomBase
//   - 0x60031D28 : SumoBrosBoss
//   - 0x60078F74 : FinalBowser
//   - 0x600C76D4 : Bowser
//   - 0x6006160C : BowserJrBase
//   - 0x600A17AC : KoopalingBase
Actor *__fastcall BossBase__dtor(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = &BossBase_vtable;
  v2 = a1 + 6332;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6720));
  PlayerLookTarget_vf0((_DWORD *)(a1 + 6644));
  sub_60026BFC(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
