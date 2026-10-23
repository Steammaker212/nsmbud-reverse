/* sub_606B6A94
 * address: 0x606B6A94   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B6A94(int a1, _DWORD *a2)
{
  char v2; // r12
  int v5; // r4
  int result; // r0
  int v7; // r0
  float v8; // r1
  int v9; // r7
  float v10; // r1
  int v11; // r5
  float v12; // r1
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v5 = a2[16];
  if ( (unsigned int)FIELD_U8(v5, 533) - 1 <= 1 )
  {
    result = a2[34];
    if ( result == 15 )
      return result;
    if ( ((unsigned int)&dword_60C7B37C & ~(1617652436 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v7 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378);
    if ( v7 )
      v7 = v5;
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v7 + 1164))(v7, a1, a2);
  }
  result = a2[35];
  if ( result == 1 )
  {
    result = FIELD_U8(a1, 148);
    if ( (result & 2) == 0 )
      return result;
    v8 = FIELD_F32(v5, 112);
    v9 = Global_BasicSoundActor2;
    position.x = FIELD_F32(v5, 108);
    position.y = v8;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v9, "SE_OBJ_FIREBALL_DISAPP", &out.x, 0);
    result = a2[35];
  }
  if ( result == 2 )
  {
    result = FIELD_U8(a1, 148);
    if ( (result & 4) != 0 )
    {
      v10 = FIELD_F32(v5, 112);
      v11 = Global_BasicSoundActor2;
      position.x = FIELD_F32(v5, 108);
      position.y = v10;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v11, "SE_OBJ_PNGN_ICEBALL_DISAPP", &out.x, 0);
      v12 = FIELD_F32(v5, 112);
      position.x = FIELD_F32(v5, 108);
      position.y = v12;
      position.z = 4500.0;
      return EffectData_create(9, &position, 0, 0);
    }
  }
  return result;
}
