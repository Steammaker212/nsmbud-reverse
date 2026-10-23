/* SE_BOSS_WENDY_RING_DISAPP_ref_12E978
 * address: 0x6012E978   size: 1048   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_WENDY_RING_DISAPP_ref_12E978(int result, _DWORD *a2)
{
  int v2; // r4
  char v3; // r12
  int v5; // r7
  Actor *v6; // r5
  bool v7; // zf
  int v8; // r0
  char v9; // r12
  char v10; // r12
  char v11; // r12
  float v12; // r1
  float v13; // s0
  int v14; // r5
  Vec3 v15; // [sp+4h] [bp-34h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v5 = result;
  v6 = (Actor *)a2[16];
  v7 = v6 == 0;
  if ( v6 )
  {
    v2 = FIELD_U32(result, 64);
    v7 = v2 == 0;
  }
  if ( !v7 )
  {
    if ( BYTE1(v6[6].field_34) == 1 && a2[34] != 15 )
    {
      FIELD_U8(result, 110) |= 2u;
      if ( ((unsigned int)&dword_60C7B37C & ~(1611852380 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C7B378) == 1 )
        (*(void (__fastcall **)(Actor *, int, _DWORD *))(FIELD_U32(v6, 0x0) + 1164))(v6, v5, a2);
    }
    else
    {
      v8 = a2[35];
      if ( v8 == 23 )
      {
        if ( ((unsigned int)dword_60C84E84 & ~(1611852516 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C84E84) )
        {
          dword_60C84E80 = (int)&off_60BC00BC;
          _cxa_guard_release(dword_60C84E84);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C84E80) == 1 )
          sub_605D476C(v6);
      }
      else if ( v8 == 2 )
      {
        if ( ((unsigned int)&dword_60C823CC & ~(1611852248 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C823CC) )
        {
          dword_60C823C8 = (int)&off_60BC7C30;
          _cxa_guard_release(&dword_60C823CC);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C823C8) == 1 )
          SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v6);
      }
    }
    if ( Actor__getProfileId(v6) == 701 )
    {
      if ( ((unsigned int)&dword_60C87138 & ~(1611852660 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C87138) )
      {
        dword_60C87134 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C87138);
      }
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C87134) == 1 && FIELD_U8(v2, 11468) )
        JUMPOUT(0x6012E784);
    }
    result = Actor__getProfileId(v6);
    if ( result == 369 )
    {
      if ( ((unsigned int)dword_60C87140 & ~(1611852832 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60C87140) )
      {
        dword_60C8713C = (int)&off_60BC04AC;
        _cxa_guard_release(dword_60C87140);
      }
      if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C8713C) == 1 )
        sub_6012CE5C((int)v6);
      if ( ((unsigned int)&dword_60C87138 & ~(1611852948 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C87138) )
      {
        dword_60C87134 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C87138);
      }
      result = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C87134);
      if ( result == 1 )
      {
        v12 = FIELD_F32(v2, 112);
        v15.x = FIELD_F32(v2, 108);
        v15.y = v12;
        v15.z = 4500.0;
        EffectData_create(794, &v15, 0, 0);
        v13 = FIELD_F32(v2, 112) + FIELD_F32(v2, 576);
        v14 = Global_BasicSoundActor2;
        position.x = FIELD_F32(v2, 108) + FIELD_F32(v2, 572);
        position.y = v13;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v14, "SE_BOSS_WENDY_RING_DISAPP", &out.x, 0);
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
        result = 1;
        FIELD_U8(v2, 19) = 1;
      }
    }
  }
  return result;
}
