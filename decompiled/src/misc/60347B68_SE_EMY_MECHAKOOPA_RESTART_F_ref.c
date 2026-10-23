/* SE_EMY_MECHAKOOPA_RESTART_F_ref
 * address: 0x60347B68   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_MECHAKOOPA_RESTART_F_ref(int a1)
{
  _DWORD *v1; // r4
  float v2; // r1
  int v3; // r5
  int v4; // t1
  int v5; // r5
  int v6; // r5
  Vec2 v8; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v1 = (_DWORD *)a1;
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v8, &position);
  BasicSoundActor1_playSound(v3, "SE_EMY_MECHAKOOPA_RESTART_F", (int)&v8, 0);
  v1[1592] = 3;
  v4 = v1[1589];
  v1 += 1589;
  v5 = **(_DWORD **)(v4 + 12);
  SkeletalAnim_play(v5, *(v1 - 1), (int)&dword_60C94A98);
  AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), dword_60C94AA8);
  v6 = **(_DWORD **)(*v1 + 20);
  TexAnim_play(v6, *(v1 - 1), &dword_60C94AA0);
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), dword_60C94AA8);
  *(v1 - 1563) = 1031798784;
  *(v1 - 1556) = 0;
  return -6224;
}
