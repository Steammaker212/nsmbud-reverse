/* KaniboTama__vf188
 * address: 0x603116EC   size: 292   group: misc
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
int __fastcall KaniboTama__vf188(float *a1, int a2)
{
  char v2; // r12
  int v5; // r0
  int v6; // r1
  float v7; // s0
  const char *v8; // r4
  int v9; // r5
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( ((unsigned int)&unk_60C93370 & ~(1613829900 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C93370) )
  {
    dword_60C93378 = (int)"SE_EMY_FUMU_1";
    dword_60C9337C = (int)"SE_EMY_FUMU_2";
    dword_60C93380 = (int)"SE_EMY_FUMU_3";
    dword_60C93384 = (int)"SE_EMY_FUMU_4";
    dword_60C93388 = (int)"SE_EMY_FUMU_5";
    dword_60C9338C = (int)"SE_EMY_FUMU_6";
    dword_60C93390 = (int)"SE_EMY_FUMU_7";
    dword_60C93394 = (int)"SE_EMY_FUMU_7";
    dword_60C93398 = (int)"SE_EMY_FUMU_7";
    _cxa_guard_release((__guard *)&unk_60C93370);
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
  v8 = *((const char **)&unk_60C93370 + v6 + 2);
  v9 = Global_BasicSoundActor1;
  mapPositionToScreen(&v11, &position);
  return BasicSoundActor1_playSound(v9, v8, (int)&v11, 0);
}
