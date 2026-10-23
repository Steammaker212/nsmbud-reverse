/* KaniboTama__vf190
 * address: 0x60311840   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A38DC
// 
// Overridden by: None
int __fastcall KaniboTama__vf190(float *a1, int a2)
{
  char v2; // r12
  int v5; // r0
  int v6; // r1
  float v7; // s0
  const char *v8; // r4
  int v9; // r5
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60C93374 & ~(1613830244 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C93374) )
  {
    dword_60C9339C = (int)"SE_EMY_DOWN_SPIN_1";
    dword_60C933A0 = (int)"SE_EMY_DOWN_SPIN_2";
    dword_60C933A4 = (int)"SE_EMY_DOWN_SPIN_3";
    dword_60C933A8 = (int)"SE_EMY_DOWN_SPIN_4";
    dword_60C933AC = (int)"SE_EMY_DOWN_SPIN_5";
    dword_60C933B0 = (int)"SE_EMY_DOWN_SPIN_6";
    dword_60C933B4 = (int)"SE_EMY_DOWN_SPIN_7";
    dword_60C933B8 = (int)"SE_EMY_DOWN_SPIN_7";
    dword_60C933BC = (int)"SE_EMY_DOWN_SPIN_7";
    _cxa_guard_release(&dword_60C93374);
  }
  v5 = FIELD_S8(a2, 1313);
  v6 = v5;
  v7 = a1[28] + a1[144];
  if ( v5 >= 8 )
    v6 = 8;
  if ( v5 < 0 )
    v6 = 0;
  position.x = a1[27] + a1[143];
  position.y = v7;
  v8 = *((const char **)&unk_60C93370 + v6 + 11);
  v9 = Global_BasicSoundActor1;
  mapPositionToScreen(&v11, &position);
  return BasicSoundActor1_playSound(v9, v8, (int)&v11, 0);
}
