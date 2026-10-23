/* Bowser__vf330
 * address: 0x600C6194   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026814
// 
// Overridden by: None
int __fastcall Bowser__vf330(int a1)
{
  int v2; // r6
  float v3; // r0
  int v4; // r5
  int result; // r0
  int *v6; // r4
  int v7; // t1
  float v8[9]; // [sp+4h] [bp-24h] BYREF

  sub_600C5D7C(a1, 0);
  v2 = 24;
  sub_602A3EFC(a1 + 7764, 24);
  v3 = FIELD_F32(a1, 7760);
  v8[0] = FIELD_F32(a1, 7756);
  v8[1] = v3;
  v8[2] = 0.0;
  koopa_damage_ice_ref_2(a1, v8, 0, 24);
  v4 = **(_DWORD **)(FIELD_U32(a1, 7100) + 20);
  TexAnim_play(v4, FIELD_U32(a1, 7092), &dword_60C83DA0);
  AnimationCtrl_setRepeat((ModelAnimation *)(v4 + 4), dword_60C83DA8);
  FIELD_U32(a1, 7116) = 3;
  v7 = FIELD_U32(a1, 7120);
  v6 = (int *)(a1 + 7120);
  result = v7;
  if ( v7 > 24 )
    v2 = result;
  *v6 = v2;
  return result;
}
