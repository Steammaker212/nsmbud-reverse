/* Enemy__dtor
 * address: 0x60033814   size: 72   group: actors
 * sym: Enemy::~Enemy() as D2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MultiStateActor : 0x60009688
// 
// Overridden by:
//   - 0x60259BD0 : Amp
//   - 0x60278814 : Fuzzy
//   - 0x602AE85C : FireSnake
//   - 0x602D76F4 : SledgeBro
//   - 0x6029EF04 : Thwomp
//   - 0x60317FB4 : DryBones
//   - 0x6033B5CC : GoombaBase
//   - 0x60384A40 : Pokey
//   - 0x603DFFB0 : RiverPiranha
//   - 0x60624604 : FixedIcicle
//   - 0x60263008 : BrosBase
//   - 0x60026320 : BossBase
//   - 0x6037A610 : ShellEnemy
//   - 0x60311B24 : KaniboTama
Actor *__fastcall Enemy__dtor(Actor *a1)
{
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8));
  return StageActor__dtor(a1);
}
