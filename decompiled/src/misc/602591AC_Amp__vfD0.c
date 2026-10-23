/* Amp__vfD0
 * address: 0x602591AC   size: 132   group: misc
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
signed int __fastcall Amp__vfD0(int a1)
{
  float v1; // s0
  float v2; // s2
  int v3; // r3
  int v4; // r2
  float v5; // s4
  _DWORD v7[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 144);
  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_U32(a1, 116);
  v5 = FIELD_F32(a1, 6428);
  v7[0] = 4096;
  v7[1] = v3;
  *(float *)&v7[2] = v1 + (float)((float)(v5 + -14.0) * v2);
  v7[3] = v4;
  *(float *)&v7[4] = v2 * 1.4;
  *(float *)&v7[5] = v2 * 1.4;
  *(float *)&v7[6] = v2 * 1.5;
  v7[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v7, 1u);
}
