/* CollisionActor__onDelete
 * address: 0x60003444   size: 28   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F68
// 
// Overridden by:
//   - 0x60259048 : Amp
//   - 0x602776B8 : Fuzzy
//   - 0x602AD518 : FireSnake
//   - 0x602D622C : SledgeBro
//   - 0x6029E244 : Thwomp
//   - 0x60314E3C : DryBones
//   - 0x6033C7A8 : GoombaBase
//   - 0x6038146C : Pokey
//   - 0x603DF288 : RiverPiranha
//   - 0x6062400C : FixedIcicle
//   - 0x60264094 : BrosBase
//   - 0x60026434 : BossBase
//   - 0x60271DD8 : CarryableEnemy
int __fastcall CollisionActor__onDelete(int a1)
{
  CollisionMgr_vf14(a1 + 648);
  return Actor__onDelete();
}
