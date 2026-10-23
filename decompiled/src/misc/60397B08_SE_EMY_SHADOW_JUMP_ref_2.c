/* SE_EMY_SHADOW_JUMP_ref_2
 * address: 0x60397B08   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SHADOW_JUMP_ref_2(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  float v10; // r0
  int v11; // r5
  Vec2 v13; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) == 29 )
  {
    v3 = a1 + 6304;
  }
  else
  {
    *v2 = 29;
    v3 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C970F8);
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
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v9 )
    v8 += 4 * v9;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v8 + 4));
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_U32(a1, 128) = 0;
  v10 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 6604) = v10;
  v11 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v10;
  mapPositionToScreen(&v13, &position);
  return BasicSoundActor1_playSound(v11, "SE_EMY_SHADOW_JUMP", (int)&v13, 0);
}
