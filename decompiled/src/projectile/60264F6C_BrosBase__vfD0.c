/* BrosBase__vfD0
 * address: 0x60264F6C   size: 128   group: projectile
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
signed int __fastcall BrosBase__vfD0(int a1)
{
  float v1; // s0
  float v2; // s2
  int v3; // r1
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_U32(a1, 108);
  v5[0] = 1;
  v5[1] = v3;
  *(float *)&v5[2] = v1 + -2.0;
  *(float *)&v5[3] = v2 + 2.0;
  v5[4] = 1067869798;
  v5[5] = 1066192077;
  v5[6] = 1066443735;
  v5[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v5, 1u);
}
