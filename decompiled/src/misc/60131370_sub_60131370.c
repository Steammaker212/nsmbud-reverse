/* sub_60131370
 * address: 0x60131370   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60131370(int a1, _DWORD *a2)
{
  char v2; // r12
  int v5; // r4
  int v6; // r7
  char v7; // r12
  bool v8; // zf
  int v9; // r0
  float v10; // r1
  int v11; // r5
  float v12; // s0
  float v13; // r1
  int v14; // r5
  Vec2 v15; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v5 = FIELD_U32(a1, 64);
  if ( ((unsigned int)dword_60C82860 & ~(1611862932 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C82860) )
  {
    dword_60C8285C = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C82860);
  }
  if ( v5 )
  {
    v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8285C);
    if ( v6 )
      v6 = v5;
    v8 = v6 == 0;
    if ( v6 )
    {
      v5 = a2[16];
      v8 = v5 == 0;
    }
    if ( !v8 )
    {
      if ( FIELD_U8(v5, 533) )
      {
        if ( FIELD_U8(v5, 533) == 1 && a2[34] != 15 )
        {
          FIELD_U8(a1, 110) |= 2u;
          if ( ((unsigned int)&dword_60C7B37C & ~(1611863112 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
            (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 1164))(v5, a1, a2);
        }
      }
      else
      {
        v9 = a2[35];
        if ( v9 != 23 )
        {
          if ( v9 == 2 )
          {
            v13 = FIELD_F32(v5, 112);
            v14 = Global_BasicSoundActor2;
            position.x = FIELD_F32(v5, 108);
            position.y = v13;
            mapPositionToScreen(&v15, &position);
            BasicSoundActor2_play(v14, "SE_OBJ_PNGN_ICEBALL_DISAPP", &v15.x, 0);
            v12 = -0.05;
          }
          else
          {
            if ( v9 != 1 )
              return;
            v10 = FIELD_F32(v5, 112);
            v11 = Global_BasicSoundActor2;
            position.x = FIELD_F32(v5, 108);
            position.y = v10;
            mapPositionToScreen(&v15, &position);
            BasicSoundActor2_play(v11, "SE_OBJ_FIREBALL_DISAPP", &v15.x, 0);
            v12 = 0.05;
          }
          SE_BOSS_WOOGAN_FIRED_ref(v6, 0, v12);
          return;
        }
        if ( ((unsigned int)dword_60C84E84 & ~(1611863356 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C84E84) )
        {
          dword_60C84E80 = (int)&off_60BC00BC;
          _cxa_guard_release(dword_60C84E84);
        }
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C84E80) == 1 )
          sub_605D476C(v5);
      }
    }
  }
}
