/* sub_6062E608
 * address: 0x6062E608   size: 1612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6062E608(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int v6; // r4
  unsigned __int8 *v7; // r6
  char v8; // r12
  int v9; // r0
  signed int v10; // r7
  unsigned int v11; // r3
  int v12; // r0
  int v13; // r0
  int *v14; // r4
  int v15; // t1
  int v16; // r0
  float v17; // r1
  int v18; // r4
  const char *v19; // r1
  int ProfileId; // r0
  bool v21; // zf
  char v22; // r12
  unsigned int v23; // r0
  int v24; // r6
  int v25; // r0
  signed int v26; // r5
  unsigned int v27; // r3
  int v28; // r0
  int v29; // r2
  float v30; // r1
  int v31; // r5
  float v32; // r1
  char v33; // r12
  int v34; // r8
  float v35; // s16
  float v36; // s18
  int v37; // r4
  Vec2 v38; // [sp+0h] [bp-38h] BYREF
  Vec3 position; // [sp+8h] [bp-30h] BYREF

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)dword_60CB3FC8 & ~(1617094192 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB3FC8) )
  {
    dword_60CB3FC4 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60CB3FC8);
  }
  if ( v5 )
  {
    v6 = (**v5)(v5, &dword_60CB3FC4);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(unsigned __int8 **)(a2 + 64);
  switch ( v7[533] )
  {
    case 0u:
      v12 = FIELD_U32(a2, 140);
      if ( v12 == 2 )
      {
        v28 = FIELD_U32(v6, 6240);
        v29 = v28 - 1;
        if ( v28 - 1 <= 0 )
          v29 = 0;
        FIELD_U32(v6, 6240) = v29;
        if ( v28 <= 1 )
        {
          v30 = FIELD_F32(v6, 112);
          v31 = Global_BasicSoundActor2;
          position.x = FIELD_F32(v6, 108);
          position.y = v30;
          mapPositionToScreen(&v38, &position);
          BasicSoundActor2_play(v31, "SE_BOSS_KOOPA_FIRE_DISAPP2", &v38.x, 0);
        }
        v32 = *((float *)v7 + 28);
        v18 = Global_BasicSoundActor2;
        position.x = *((float *)v7 + 27);
        position.y = v32;
        mapPositionToScreen(&v38, &position);
        v19 = "SE_OBJ_PNGN_ICEBALL_DISAPP";
        goto LABEL_59;
      }
      if ( v12 == 1 )
      {
        v15 = FIELD_U32(v6, 6240);
        v14 = (int *)(v6 + 6240);
        v13 = v15;
        if ( v15 >= 1 )
        {
          v16 = v13 + 1;
          if ( v16 >= 4 )
            v16 = 4;
          *v14 = v16;
        }
        v17 = *((float *)v7 + 28);
        v18 = Global_BasicSoundActor2;
        position.x = *((float *)v7 + 27);
        position.y = v17;
        mapPositionToScreen(&v38, &position);
        v19 = "SE_OBJ_FIREBALL_DISAPP";
LABEL_59:
        BasicSoundActor2_play(v18, v19, &v38.x, 0);
        return;
      }
      if ( Actor__getProfileId(*(Actor **)(a2 + 64)) == 392 )
      {
        if ( ((unsigned int)&dword_60C7B39C & ~(1617095492 << v33) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
        {
          dword_60C7B398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C7B39C);
        }
        v34 = (**(int (__fastcall ***)(unsigned __int8 *, int *))v7)(v7, &dword_60C7B398);
        v35 = FIELD_F32(v6, 108);
        if ( v34 )
          v34 = (int)v7;
        v36 = FIELD_F32(v34, 108);
        FIELD_U8(a2, 110) |= 2u;
        FIELD_U8(a1, 110) |= 2u;
        sub_6062E40C(v6);
        sub_602EE7B8(v34, v35 > v36, 0xFFFFFFFF);
      }
      return;
    case 1u:
    case 2u:
      if ( !sub_602A25C0(a1, FIELD_F32(v6, 112)) && FIELD_U32(a2, 136) != 15 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1617094404 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( !v7 || (**(int (__fastcall ***)(unsigned __int8 *, int *))v7)(v7, &dword_60C7B378) != 1 )
          goto LABEL_70;
        if ( (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v7 + 1204))(v7) == 1 )
        {
          v9 = sub_60285510((int)v7);
          v10 = sub_602856EC((int *)(v6 + 6276), v9);
          if ( v10 >= 8 )
            SE_SYS_NICE_S_ref();
          v11 = (char)v7[84];
          if ( v11 <= 3 )
            sub_60022760(0.0, 24.0, dword_60C7F52C, v6, v10, v11);
          goto LABEL_39;
        }
        v37 = sub_6075EDF8(v7);
        (*(void (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)v7 + 1164))(v7, a1, a2);
        if ( !v37 )
          goto LABEL_70;
      }
      return;
    case 3u:
      if ( ((unsigned int)dword_60C7B430 & ~(1617094756 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
      {
        Enemy_RTTI = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C7B430);
      }
      if ( !v7 || (**(int (__fastcall ***)(unsigned __int8 *, int *))v7)(v7, &Enemy_RTTI) != 1 )
        return;
      if ( (v7[6148] & 1) != 0 )
      {
        if ( v7[84] > 3u )
          return;
        SE_EMY_DOWN_ref_2A58B4((int)v7, v6);
        goto LABEL_70;
      }
      ProfileId = Actor__getProfileId((Actor *)v7);
      v21 = ProfileId == 660;
      if ( ProfileId != 660 )
        v21 = ProfileId == 661;
      if ( v21 || ProfileId == 662 )
      {
LABEL_39:
        sub_6062E40C(v6);
LABEL_70:
        FIELD_U8(a1, 110) |= 2u;
      }
      return;
    case 4u:
      if ( !sub_602A25C0(a1, FIELD_F32(v6, 112)) )
      {
        FIELD_U8(a1, 110) |= 2u;
        if ( ((unsigned int)&dword_60C7B410 & ~(1617094996 << v22) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
        {
          dword_60C7B40C = (int)&off_60BC00D4;
          _cxa_guard_release(&dword_60C7B410);
        }
        if ( v7
          && (**(int (__fastcall ***)(unsigned __int8 *, int *))v7)(v7, &dword_60C7B40C) == 1
          && sub_605DD6E8((int)v7) )
        {
          v23 = v7[84];
          if ( v23 <= 3 )
          {
            v24 = *(_DWORD *)(PlayerMgr_instance + 4 * v23 + 32);
            if ( v24 )
            {
              v25 = sub_60285510(*(_DWORD *)(PlayerMgr_instance + 4 * v23 + 32));
              v26 = sub_602856EC((int *)(v6 + 6276), v25);
              if ( v26 >= 8 )
                SE_SYS_NICE_S_ref();
              v27 = FIELD_S8(v24, 84);
              if ( v27 <= 3 )
                sub_60022760(0.0, 24.0, dword_60C7F52C, v6, v26, v27);
            }
          }
          sub_6062E40C(v6);
        }
      }
      return;
    default:
      return;
  }
}
