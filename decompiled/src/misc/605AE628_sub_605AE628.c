/* sub_605AE628
 * address: 0x605AE628   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AE628(int a1, int *a2)
{
  char v2; // r12
  int result; // r0
  int v6; // r4
  int v7; // r0
  float v8; // r7
  float v9; // r6
  int v10; // r4
  int v11; // r4
  char v12; // r12
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  result = a2[34];
  if ( result != 15 )
  {
    v6 = a2[16];
    result = FIELD_U8(v6, 533);
    if ( (unsigned int)(result - 3) >= 2 )
    {
      if ( (unsigned int)(result - 1) > 1 )
      {
        v7 = a2[35];
        v8 = FIELD_F32(v6, 108);
        v9 = FIELD_F32(v6, 112);
        if ( v7 == 2 )
        {
          position.x = FIELD_F32(v6, 108);
          position.y = v9;
          v11 = Global_BasicSoundActor2;
          mapPositionToScreen(&out, &position);
          BasicSoundActor2_play(v11, "SE_OBJ_PNGN_ICEBALL_DISAPP", &out.x, 0);
          position.x = v8;
          position.y = v9;
          position.z = 4500.0;
          return EffectData_create(9, &position, 0, 0);
        }
        else if ( v7 == 1 )
        {
          position.x = FIELD_F32(v6, 108);
          position.y = v9;
          v10 = Global_BasicSoundActor2;
          mapPositionToScreen(&out, &position);
          return BasicSoundActor2_play(v10, "SE_OBJ_FIREBALL_DISAPP", &out.x, 0);
        }
        else
        {
          result = Actor__getProfileId((Actor *)a2[16]);
          if ( result != 309 )
          {
            result = Actor__getProfileId((Actor *)v6);
            if ( result == 763 )
            {
              if ( ((unsigned int)&dword_60C878D8 & ~(1616570372 << v12) & 1) == 0
                && _cxa_guard_acquire(&dword_60C878D8) )
              {
                dword_60C878D4 = (int)&off_60BC7C24;
                _cxa_guard_release(&dword_60C878D8);
              }
              result = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C878D4);
              if ( result == 1 )
              {
                (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 240))(v6);
                return sub_601362A0(v6);
              }
            }
          }
        }
      }
      else
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1616569972 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        result = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378);
        if ( result == 1 )
          return (*(int (__fastcall **)(int, int, int *))(*(_DWORD *)v6 + 1164))(v6, a1, a2);
      }
    }
  }
  return result;
}
