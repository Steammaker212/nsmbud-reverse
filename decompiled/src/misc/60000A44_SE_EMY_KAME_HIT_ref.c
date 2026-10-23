/* SE_EMY_KAME_HIT_ref
 * address: 0x60000A44   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_EMY_KAME_HIT_ref(int a1, signed int a2, int a3)
{
  char v3; // r12
  unsigned int result; // r0
  signed int v8; // r0
  float v9; // s2
  float v10; // s0
  const char *v11; // r4
  int v12; // r5
  Vec2 v13; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( ((unsigned int)&unk_60C7B3B0 & ~(1610615400 << v3) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C7B3B0) )
  {
    dword_60C7B3C0 = (int)"SE_EMY_KAME_HIT_1";
    dword_60C7B3C4 = (int)"SE_EMY_KAME_HIT_2";
    dword_60C7B3C8 = (int)"SE_EMY_KAME_HIT_3";
    dword_60C7B3CC = (int)"SE_EMY_KAME_HIT_4";
    dword_60C7B3D0 = (int)"SE_EMY_KAME_HIT_5";
    dword_60C7B3D4 = (int)"SE_EMY_KAME_HIT_6";
    dword_60C7B3D8 = (int)"SE_EMY_KAME_HIT_7";
    dword_60C7B3DC = (int)"SE_EMY_KAME_HIT_7";
    dword_60C7B3E0 = (int)"SE_EMY_KAME_HIT_7";
    _cxa_guard_release((__guard *)&unk_60C7B3B0);
  }
  result = FIELD_U8(a1, 84);
  if ( result <= 3 )
  {
    v8 = 7;
    if ( a2 >= 8 )
      a2 = 8;
    if ( a3 )
      v8 = 4;
    if ( a2 >= v8 )
      SE_SYS_NICE_S_ref();
    v9 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    v10 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v11 = *((const char **)&unk_60C7B3B0 + a2 + 4);
    position.x = v9;
    position.y = v10;
    v12 = Global_BasicSoundActor1;
    mapPositionToScreen(&v13, &position);
    return BasicSoundActor1_playSound(v12, v11, (int)&v13, 0);
  }
  return result;
}
