/* Goomba__vfD0
 * address: 0x6033B068   size: 100   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A9358
// 
// Overridden by: None
signed int __fastcall Goomba__vfD0(int a1)
{
  float v1; // s0
  float v2; // r1
  float v3; // r2
  EnemyFreezeMgr_Info freezeInfo; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_F32(a1, 108);
  freezeInfo.settings = 0;
  freezeInfo.position.x = v3;
  freezeInfo.position.y = v1 + -2.0;
  freezeInfo.position.z = v2;
  freezeInfo.scale.x = 1.2;
  freezeInfo.scale.y = 1.2;
  freezeInfo.scale.z = 1.2;
  freezeInfo.field_1C = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), &freezeInfo, 1u);
}
