/* Enemy__vfD0
 * address: 0x602A9358   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602591AC : Amp
//   - 0x60277844 : Fuzzy
//   - 0x602D693C : SledgeBro
//   - 0x60316C28 : DryBones
//   - 0x6033B068 : Goomba
//   - 0x60363C4C : ParaGoomba
//   - 0x603DF394 : RiverPiranha
//   - 0x60264F6C : BrosBase
//   - 0x60025EB8 : BossBase
//   - 0x6030FD8C : Kanibo
int __fastcall Enemy__vfD0(Enemy *this)
{
  float x; // r2
  float y; // r3
  EnemyFreezeMgr_Info info; // [sp+0h] [bp-28h] BYREF

  info.settings = 0;
  x = FIELD_U32(this, 0x0)._._.position.x;
  y = FIELD_U32(this, 0x0)._._.position.y;
  info.position.z = FIELD_U32(this, 0x0)._._.position.z;
  info.position.x = x;
  info.position.y = y;
  info.scale.x = 1.0;
  info.scale.y = 1.0;
  info.scale.z = 1.0;
  info.field_1C = 0;
  return EnemyFreezeMgr_freeze(&FIELD_U32(this, 0x1808), &info, 1u);
}
