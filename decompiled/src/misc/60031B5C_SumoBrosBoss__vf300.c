/* SumoBrosBoss__vf300
 * address: 0x60031B5C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x6002677C
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf300(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r0
  int result; // r0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v2 = **(_DWORD ***)(a1[1774] + 28);
  a1[1776] = v2;
  v3 = a1[1775];
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "damage_s";
  ShuAnim_play(v2, v3, (int)v6);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1776] + 4), 1);
  v4 = a1[1776];
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  result = a1[1776];
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
