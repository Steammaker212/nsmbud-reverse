/* SE_EMY_MECHAKOOPA_RESTART_ref
 * address: 0x6034933C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_EMY_MECHAKOOPA_RESTART_ref(int a1)
{
  int v2; // r5
  int v3; // r7
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // t1
  int v7; // r8
  int v8; // r7
  float v9; // r1
  int v10; // r5
  int v11; // r6
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v2 = 0;
  v3 = 0;
  v6 = FIELD_U32(a1, 6364);
  v4 = (_DWORD *)(a1 + 6364);
  v5 = v6;
  if ( v6 )
  {
    v3 = v5 - 1;
    *v4 = v5 - 1;
    if ( v5 == 97 )
    {
      FIELD_U32(a1, 6368) = 2;
      v7 = **(_DWORD **)(FIELD_U32(a1, 6356) + 12);
      SkeletalAnim_play(v7, FIELD_U32(a1, 6352), (int)algn_60C94A84);
      AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), dword_60C94A94);
      v8 = **(_DWORD **)(FIELD_U32(a1, 6356) + 20);
      TexAnim_play(v8, FIELD_U32(a1, 6352), &dword_60C94A8C);
      AnimationCtrl_setRepeat((ModelAnimation *)(v8 + 4), dword_60C94A94);
      v3 = 96;
    }
  }
  if ( sub_60273514(a1) )
  {
    if ( v3 <= 96 )
    {
      v9 = FIELD_F32(a1, 112);
      v10 = FIELD_U32(a1, 8);
      v11 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v9;
      mapPositionToScreen(&out, &position);
      j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v11, "SE_EMY_MECHAKOOPA_RESTART", v10, &out, 0);
    }
    return v3 == 0;
  }
  return v2;
}
