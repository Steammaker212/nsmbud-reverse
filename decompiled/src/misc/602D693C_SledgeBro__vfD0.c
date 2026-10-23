/* SledgeBro__vfD0
 * address: 0x602D693C   size: 144   group: misc
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
signed int __fastcall SledgeBro__vfD0(int a1)
{
  float v1; // s2
  float v2; // s0
  float v3; // r2
  float v4; // s4
  EnemyFreezeMgr_Info v6; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 108);
  v2 = FIELD_F32(a1, 112) + -1.5;
  v3 = FIELD_F32(a1, 116);
  v4 = flt_60AF2018[FIELD_U32(a1, 80)];
  v6.settings = 0x1001;
  v6.position.x = v1 + v4;
  v6.position.y = v2;
  v6.position.z = v3;
  v6.scale.x = 1.67;
  v6.scale.y = 1.3;
  v6.scale.z = 2.4;
  v6.field_1C = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), &v6, 1u);
}
