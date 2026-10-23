/* Enemy__dtor_2A3EA8
 * address: 0x602A3EA8   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MultiStateActor : 0x600096B8
// 
// Overridden by:
//   - 0x60259C7C : Amp
//   - 0x602788C0 : Fuzzy
//   - 0x602AE908 : FireSnake
//   - 0x602D77BC : SledgeBro
//   - 0x6029EFA0 : Thwomp
//   - 0x60318040 : DryBones
//   - 0x6033E53C : GoombaBase
//   - 0x60384AFC : Pokey
//   - 0x603E0068 : RiverPiranha
//   - 0x60624674 : FixedIcicle
//   - 0x60267498 : BrosBase
//   - 0x600263A8 : BossBase
//   - 0x60273774 : CarryableEnemy
//   - 0x60311BB4 : KaniboTama
//   - 0x6031056C : Kanibo
void __fastcall Enemy__dtor_2A3EA8(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&a1[8].id);
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
