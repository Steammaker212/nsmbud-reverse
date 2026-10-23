/* BossBase__vfD0
 * address: 0x60025EB8   size: 168   group: actors
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
signed int __fastcall BossBase__vfD0(BossBase *a1)
{
  float *p_y; // r5
  float v3; // s2
  float x; // s4
  float z; // s0
  EnemyFreezeMgr_Info v7; // [sp+0h] [bp-30h] BYREF

  p_y = &FIELD_F32(a1, 0x1B84);
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x2C8))(a1);
  v3 = *p_y;
  x = FIELD_F32(a1, 0x1B80);
  z = FIELD_F32(a1, 0x1B88);
  v7.settings = 0x1103;
  v7.position = FIELD_U32(a1, 0x1B74);
  v7.scale.x = x * 0.015625;
  v7.scale.y = v3 * 0.015625;
  v7.scale.z = z * 0.015625;
  v7.field_1C = 0;
  return EnemyFreezeMgr_freeze(&FIELD_U32(a1, 0x1808), &v7, 1u);
}
