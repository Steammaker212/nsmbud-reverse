/* ShellEnemy__vf188
 * address: 0x603A15C8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A362C
// 
// Overridden by: None
int __fastcall ShellEnemy__vf188(int a1, int a2)
{
  char v2; // r12
  int v5; // r0
  int v6; // r1
  float v7; // s0
  const char *v8; // r4
  int v9; // r5
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( !FIELD_U8(a1, 6393) )
    return Enemy__vf188((float *)a1, a2);
  if ( ((unsigned int)&dword_60C977E8 & ~(1614419452 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C977E8) )
  {
    dword_60C977F8 = (int)"SE_EMY_FUMU_1";
    dword_60C977FC = (int)"SE_EMY_FUMU_2";
    dword_60C97800 = (int)"SE_EMY_FUMU_3";
    dword_60C97804 = (int)"SE_EMY_FUMU_4";
    dword_60C97808 = (int)"SE_EMY_FUMU_5";
    dword_60C9780C = (int)"SE_EMY_FUMU_6";
    dword_60C97810 = (int)"SE_EMY_FUMU_7";
    dword_60C97814 = (int)"SE_EMY_FUMU_7";
    dword_60C97818 = (int)"SE_EMY_FUMU_7";
    _cxa_guard_release(&dword_60C977E8);
  }
  v5 = FIELD_S8(a2, 1313);
  v6 = v5;
  v7 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  if ( v5 >= 8 )
    v6 = 8;
  if ( v5 < 0 )
    v6 = 0;
  position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  position.y = v7;
  v8 = (const char *)dword_60C977E0[v6 + 6];
  v9 = Global_BasicSoundActor1;
  mapPositionToScreen(&v11, &position);
  return BasicSoundActor1_playSound(v9, v8, (int)&v11, 0);
}
