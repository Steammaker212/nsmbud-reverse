/* eye_anim_ref_2
 * address: 0x602FA80C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall eye_anim_ref_2(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r5
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1 + 6304;
  sub_60421AD4(FIELD_U32(a1, 6304));
  FIELD_U32(a1, 6316) = 6;
  v3 = FIELD_U32(a1, 6300);
  v4 = **(_DWORD **)(*(_DWORD *)v2 + 20);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "eye_anim";
  TexAnim_play(v4, v3, v6);
  AnimationCtrl_setRepeat((ModelAnimation *)(v4 + 4), 0);
  FIELD_U32(v4, 24) = 1065353216;
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  FIELD_U32(v4, 8) = 1077936128;
  FIELD_U32(a1, 6452) = 4;
  FIELD_U32(a1, 6448) = 4;
  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_U32(a1, 100) = -1115684864;
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = 1069547520;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1077936128;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  return -1077936128;
}
