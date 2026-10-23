/* LargeGoomba_vf52
 * address: 0x6033F14C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall LargeGoomba_vf52(int a1)
{
  float v1; // s2
  float v2; // s0
  int v3; // r2
  float v4; // s4
  _DWORD v6[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 108);
  v2 = FIELD_F32(a1, 112) + -2.0;
  v3 = FIELD_U32(a1, 116);
  v4 = flt_60AF1EA8[FIELD_U32(a1, 80)];
  v6[0] = 3;
  *(float *)&v6[1] = v1 + v4;
  *(float *)&v6[2] = v2;
  v6[3] = v3;
  v6[4] = 1062836634;
  v6[5] = 1063172178;
  v6[6] = 1063675494;
  v6[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v6, 1u);
}
