/* sub_602FC37C
 * address: 0x602FC37C   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FC37C(int a1, int a2, int a3)
{
  int v6; // r7
  __int16 v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r8
  int v11; // r0
  float v12; // r1
  float v13; // r0
  int v14; // r5
  float v15; // r1
  const char *v16; // r1
  float v17; // s6
  float v18; // s10
  float v19; // s0
  float v20; // s4
  float v21; // r1
  int v22; // r7
  Vec3 v24; // [sp+0h] [bp-48h] BYREF
  _BOOL4 v25; // [sp+Ch] [bp-3Ch]
  char v26; // [sp+10h] [bp-38h]
  char v27; // [sp+11h] [bp-37h]
  char v28; // [sp+12h] [bp-36h]
  char v29; // [sp+13h] [bp-35h]
  char v30; // [sp+14h] [bp-34h]
  char v31; // [sp+15h] [bp-33h]
  char v32; // [sp+16h] [bp-32h]
  Vec2 v33; // [sp+18h] [bp-30h] BYREF
  Vec3 out[3]; // [sp+20h] [bp-28h] BYREF

  v6 = 1;
  if ( !FIELD_U8(a1, 8480) )
  {
    FIELD_U16(a1, 6276) = 16;
    v7 = FIELD_U16(a1, 13992) - 1;
    v8 = FIELD_U32(a3, 64);
    FIELD_U16(a1, 13992) = v7;
    if ( v7 )
    {
      sub_602A3EFC(a1 + 8516, 24, 0.04);
      v6 = 0;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 24) = 1065353216;
      v9 = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
      FIELD_U32(v9, 20) = 0;
      FIELD_U32(v9, 28) |= 2u;
      v10 = Global_BasicSoundActor2;
      v11 = FIELD_U32(a3, 64);
      v12 = FIELD_F32(v11, 108);
      v13 = FIELD_F32(v11, 112);
      v24.x = v12;
      v24.y = v13;
      mapPositionToScreen((Vec2 *)out, &v24);
      BasicSoundActor2_play(v10, "SE_OBJ_FIREBALL_DISAPP", &out[0].x, 0);
      v14 = Global_BasicSoundActor1;
      v15 = FIELD_F32(a1, 112);
      if ( FIELD_U16(a1, 13992) == 2 )
      {
        v24.x = FIELD_F32(a1, 108);
        v24.y = v15;
        mapPositionToScreen((Vec2 *)out, &v24);
        v6 = 0;
        v16 = "SE_EMY_BIG_PAKKUN_DAMAGE_1";
      }
      else
      {
        v24.x = FIELD_F32(a1, 108);
        v24.y = v15;
        mapPositionToScreen((Vec2 *)out, &v24);
        v16 = "SE_EMY_BIG_PAKKUN_DAMAGE_2";
      }
      BasicSoundActor1_playSound(v14, v16, (int)out, 0);
    }
    else
    {
      v17 = FIELD_F32(a1, 580);
      v18 = FIELD_F32(a1, 116);
      v19 = FIELD_F32(v8, 120);
      v20 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
      v24.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      v24.y = v20;
      v24.z = v18 + v17;
      v25 = v19 < 0.0;
      v26 = 3;
      v27 = 0;
      v30 = 0;
      v29 = 0;
      v32 = 0;
      v31 = 0;
      v28 = 0;
      sub_60583000(dword_60CAF15C, &v24, 3);
      v21 = FIELD_F32(a1, 112);
      v22 = Global_BasicSoundActor1;
      out[0].x = FIELD_F32(a1, 108);
      out[0].y = v21;
      mapPositionToScreen(&v33, out);
      BasicSoundActor1_playSound(v22, "SE_EMY_DOWN", (int)&v33, 0);
      return sub_60301138(a1, a2, a3);
    }
  }
  return v6;
}
