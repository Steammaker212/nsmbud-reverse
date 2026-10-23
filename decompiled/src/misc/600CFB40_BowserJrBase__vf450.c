/* BowserJrBase__vf450
 * address: 0x600CFB40   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
ActiveColliderMgr *__fastcall BowserJrBase__vf450(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  a1[1782] = 0;
  a1[1781] = 0;
  a1[1780] = 0;
  a1[1779] = 0;
  a1[1778] = 0;
  a1[1777] = 0;
  a1[40] = 0;
  v2 = **(_DWORD ***)(a1[1775] + 28);
  a1[1776] = v2;
  v3 = a1[1774];
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "damage_s";
  ShuAnim_play(v2, v3, (int)v5);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1776] + 4), 1);
  *(_DWORD *)(a1[1776] + 24) = 1065353216;
  return StageActor__removeActiveColliders((int)a1);
}
