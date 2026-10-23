/* SE_EMY_KURIBO_M_DAMAGE_ref_2
 * address: 0x6035BBEC   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_EMY_KURIBO_M_DAMAGE_ref_2(int a1, int a2, int a3)
{
  int v4; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r5
  int v11; // r0
  float v12; // r1
  float v13; // r0
  float v14; // r1
  int v15; // r5
  float v16; // s6
  float v17; // s10
  char v18; // r5
  float v19; // s4
  _BOOL4 v20; // r6
  char v21; // r0
  Vec3 v22; // [sp+0h] [bp-38h] BYREF
  _BOOL4 v23; // [sp+Ch] [bp-2Ch]
  char v24; // [sp+10h] [bp-28h]
  char v25; // [sp+11h] [bp-27h]
  __int16 v26; // [sp+12h] [bp-26h]
  __int16 v27; // [sp+14h] [bp-24h]
  char v28; // [sp+16h] [bp-22h]
  Vec2 out; // [sp+18h] [bp-20h] BYREF

  v4 = FIELD_U32(a1, 7476);
  if ( v4 == 1 )
  {
    v6 = **(_DWORD ***)(FIELD_U32(a1, 6820) + 28);
    if ( v6 )
    {
      v6[5] = 0;
      v6[7] |= 2u;
      v6[6] = 1065353216;
    }
    v7 = **(_DWORD ***)(FIELD_U32(a1, 6824) + 28);
    if ( v7 )
    {
      v7[5] = 0;
      v7[7] |= 2u;
      v7[6] = 1065353216;
    }
  }
  else if ( !v4 )
  {
    return Enemy__collisionFireball((float *)a1, a2, a3);
  }
  v8 = FIELD_U32(a3, 64);
  v9 = FIELD_U32(a1, 7480);
  FIELD_U32(a1, 7480) = v9 - 1;
  if ( v9 < 2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
    v16 = FIELD_F32(a1, 580);
    v17 = FIELD_F32(a1, 116);
    v18 = FIELD_U8(v8, 84);
    v19 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v20 = FIELD_F32(v8, 120) < 0.0;
    v22.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    v22.y = v19;
    v22.z = v17 + v16;
    v23 = v20;
    v24 = 3;
    v25 = FIELD_U8(a1, 86);
    v27 = 0;
    v26 = 0;
    v28 = 0;
    sub_60583000(dword_60CAF15C, &v22, 3);
    v21 = sub_602856C4((_DWORD *)(a1 + 6292));
    sub_602A6024(a1, v20, v18, v21);
  }
  else
  {
    v10 = Global_BasicSoundActor2;
    v11 = FIELD_U32(a3, 64);
    v12 = FIELD_F32(v11, 108);
    v13 = FIELD_F32(v11, 112);
    v22.x = v12;
    v22.y = v13;
    mapPositionToScreen(&out, &v22);
    BasicSoundActor2_play(v10, "SE_OBJ_FIREBALL_DISAPP", &out.x, 0);
    v14 = FIELD_F32(v8, 112);
    v15 = Global_BasicSoundActor1;
    v22.x = FIELD_F32(v8, 108);
    v22.y = v14;
    mapPositionToScreen(&out, &v22);
    BasicSoundActor1_playSound(v15, "SE_EMY_KURIBO_M_DAMAGE", (int)&out, 0);
    if ( FIELD_U32(a1, 6352) )
      sub_602A3EFC(a1 + 6524, 16, 0.018);
  }
  return 1;
}
