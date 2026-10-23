/* SE_EMY_MECHAKOOPA_DAMAGE_ref_2
 * address: 0x60348CD0   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_MECHAKOOPA_DAMAGE_ref_2(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  float v7; // r1
  int v8; // r5
  int v9; // r5
  int v10; // r5
  Vec2 v11; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
    return SE_EMY_DOWN_ref_2723A8((_DWORD *)a1, a2, 0);
  v7 = FIELD_F32(a1, 112);
  v8 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v7;
  mapPositionToScreen(&v11, &position);
  BasicSoundActor1_playSound(v8, "SE_EMY_MECHAKOOPA_DAMAGE", (int)&v11, 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6364) = 511;
  FIELD_U32(a1, 6368) = 1;
  v9 = **(_DWORD **)(FIELD_U32(a1, 6356) + 12);
  SkeletalAnim_play(v9, FIELD_U32(a1, 6352), (int)&dword_60C94A70);
  AnimationCtrl_setRepeat((ModelAnimation *)(v9 + 4), dword_60C94A80);
  v10 = **(_DWORD **)(FIELD_U32(a1, 6356) + 20);
  TexAnim_play(v10, FIELD_U32(a1, 6352), &dword_60C94A78);
  AnimationCtrl_setRepeat((ModelAnimation *)(v10 + 4), dword_60C94A80);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94988);
}
