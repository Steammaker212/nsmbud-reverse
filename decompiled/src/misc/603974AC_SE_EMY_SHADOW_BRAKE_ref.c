/* SE_EMY_SHADOW_BRAKE_ref
 * address: 0x603974AC   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SHADOW_BRAKE_ref(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  float v9; // r1
  int v10; // r5
  CollisionMgr *v11; // r4
  Vec2 v13; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) != 27 )
  {
    *v2 = 27;
    v3 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C970D8);
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
  FIELD_F32(a1, 6592) = FIELD_F32(a1, 88) / 50.0;
  v8 = sub_6039C64C(a1);
  FIELD_U32(a1, 6316) = 0;
  if ( v8 )
  {
    FIELD_U32(a1, 88) = 0;
  }
  else if ( FIELD_F32(a1, 88) > 0.0 )
  {
    v9 = FIELD_F32(a1, 112);
    v10 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&v13, &position);
    BasicSoundActor1_playSound(v10, "SE_EMY_SHADOW_BRAKE", (int)&v13, 0);
  }
  v11 = (CollisionMgr *)(a1 + 648);
  CollisionMgr_setSensor(v11, &stru_60B008D0, 3);
  CollisionMgr_setSensor(v11, &stru_60B009CC, 2);
  CollisionMgr_setSensor(v11, 0, 0);
  CollisionMgr_setSensor(v11, 0, 1);
  return CollisionMgr_vf14((int)v11);
}
