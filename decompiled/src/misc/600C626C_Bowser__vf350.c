/* Bowser__vf350
 * address: 0x600C626C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026880
// 
// Overridden by: None
signed int __fastcall Bowser__vf350(_DWORD *a1)
{
  float v2; // r5
  float v3; // r6
  signed int v4; // r6
  int v5; // r5
  signed int result; // r0
  signed int *v7; // r4
  int v8; // t1
  float v9[9]; // [sp+4h] [bp-24h] BYREF

  v2 = *((float *)a1 + 27);
  v3 = *((float *)a1 + 28);
  sub_600C5D7C((int)a1, 2);
  sub_602A3EFC(a1 + 1941, 24);
  v9[0] = v2;
  v9[1] = v3;
  v4 = 64;
  v9[2] = 0.0;
  koopa_damage_ice_ref_2((int)a1, v9, 0, 64);
  v5 = **(_DWORD **)(a1[1775] + 20);
  TexAnim_play(v5, a1[1773], &dword_60C83DA0);
  AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), dword_60C83DA8);
  a1[1779] = 3;
  v8 = a1[1780];
  v7 = a1 + 1780;
  result = v8;
  if ( v8 > 64 )
    v4 = result;
  *v7 = v4;
  return result;
}
