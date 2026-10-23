/* SE_EMY_WALK_PAKKUN_DOWN_ref
 * address: 0x603D5B38   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WALK_PAKKUN_DOWN_ref(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r1
  int **v5; // r3
  float v6; // r1
  int v7; // r5
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v3 = **(_DWORD **)(a1 + 6380);
  if ( ((unsigned int)&dword_60C80400 & ~(1614633824 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C803FC) == 1 )
    *(_DWORD *)(FIELD_U32(v3, 68) + 44) = 0;
  sub_603D4FE8(a1, 4);
  Enemy__beginState_DieFall((Enemy *)a1);
  v4 = FIELD_U32(a1, 80);
  v5 = &off_60AF2130;
  if ( v4 == FIELD_U32(a1, 6284) )
    v5 = (int **)dword_60AF1F20;
  FIELD_U32(a1, 160) = v5[v4];
  FIELD_U32(a1, 6356) = 0;
  v6 = FIELD_F32(a1, 112);
  v7 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v6;
  mapPositionToScreen(&v9, &position);
  return BasicSoundActor1_playSound(v7, "SE_EMY_WALK_PAKKUN_DOWN", (int)&v9, 0);
}
