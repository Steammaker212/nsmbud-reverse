/* SE_EMY_SHADOW_JUMP_ref
 * address: 0x603931C8   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SHADOW_JUMP_ref(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  char v8; // r7
  int v9; // r0
  float v10; // r1
  int v11; // r5
  int v12; // r0
  unsigned int v13; // r1
  bool v14; // zf
  int result; // r0
  Vec2 v16; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) != 4 )
  {
    *v2 = 4;
    v3 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C96F68);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v5 )
      v4 += 4 * v5;
    *(_DWORD *)(*(_DWORD *)v4 + 24) = dword_60C96F28[4 * *v2 + 2];
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), dword_60C96F28[4 * *v2 + 3]);
  }
  v8 = 0;
  v9 = FIELD_U32(a1, 6376);
  FIELD_U32(a1, 6316) = v9;
  FIELD_U32(a1, 88) = v9;
  FIELD_U32(a1, 124) = FIELD_U32(a1, 6380);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 0);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 1);
  CollisionMgr_vf14(a1 + 648);
  v10 = FIELD_F32(a1, 112);
  v11 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v10;
  mapPositionToScreen(&v16, &position);
  BasicSoundActor1_playSound(v11, "SE_EMY_SHADOW_JUMP", (int)&v16, 0);
  v12 = sub_60378E30(a1 + 6444);
  v13 = FIELD_U32(a1, 6452);
  if ( v13 >= 2 )
    v13 = 0;
  v14 = *(_DWORD *)(v12 + 8 * v13) == 6;
  result = 6399;
  if ( v14 )
    v8 = 1;
  FIELD_U8(a1, 6399) = v8;
  return result;
}
