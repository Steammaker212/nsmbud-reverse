/* SE_OBJ_IWAHEM_SHOCK_ref
 * address: 0x6068DC78   size: 1104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_IWAHEM_SHOCK_ref(int a1)
{
  _BYTE *v2; // r6
  int v3; // r0
  _BYTE *v4; // r1
  int v5; // r0
  float v6; // r8
  float v7; // r10
  int v8; // r9
  float v9; // r11
  float v10; // s16
  float v11; // s0
  float v12; // r1
  int v13; // r6
  float *v14; // r6
  float v15; // s0
  unsigned int v16; // r0
  int v17; // s4
  float *v18; // r0
  float v19; // s2
  float v20; // s4
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v28; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v29[2]; // [sp+8h] [bp-48h] BYREF
  Vec2 out; // [sp+10h] [bp-40h] BYREF
  Vec3 position; // [sp+18h] [bp-38h] BYREF

  FIELD_U8(a1, 6830) = 0;
  v2 = (_BYTE *)(a1 + 6830);
  v4 = (_BYTE *)(a1 + 6832);
  v3 = FIELD_U8(a1, 6832);
  if ( v3 )
  {
    *v4 = v3 - 1;
    if ( v3 != 1 )
    {
      v5 = sub_606CA1C8(a1);
      if ( v5 )
        sub_606D47D8(v5, FIELD_U32(a1, 6772));
    }
  }
  else if ( FIELD_U8(a1, 6831) )
  {
    *v4 = 60;
  }
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_U32(a1, 164);
  v9 = FIELD_F32(a1, 108);
  sub_6068E0F4(a1);
  if ( FIELD_U8(a1, 6833) == 2 )
  {
    v10 = FIELD_F32(a1, 6816);
    v11 = FIELD_F32(a1, 6812) + -1.0;
    if ( v11 <= v10 )
    {
      FIELD_U8(a1, 6833) = 0;
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 3, 0, 0);
      v11 = v10;
      *v2 = 1;
    }
    FIELD_F32(a1, 6812) = v11;
  }
  if ( FIELD_U8(a1, 6829) || *v2 )
  {
    v28 = 15;
    strcpy((char *)v29, "333?");
    v12 = FIELD_F32(a1, 112);
    v13 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v12;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v13, "SE_OBJ_IWAHEM_SHOCK", &out.x, (int)&v28);
  }
  sub_6068D904(a1);
  sub_6068E788(a1);
  v14 = (float *)(a1 + 6808);
  if ( sub_60690D70(a1 + 6736) == 1 )
  {
    v15 = 0.0;
    *v14 = 0.0;
  }
  else
  {
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 6808, 0.1, 0.125, 0.1, 0.003125);
    v15 = *v14;
  }
  v16 = FIELD_U32(a1, 6820);
  v17 = v16 & 0xFFFFFF;
  v18 = (float *)((char *)sinLutTable + ((v16 >> 20) & 0xFF0));
  v19 = (float)(unsigned int)v17 * 0.000000059605;
  v20 = (float)(v15 * (float)(*v18 + (float)(v18[1] * v19))) + 0.05;
  FIELD_F32(a1, 6756) = -(float)(v15 * (float)(v18[2] + (float)(v19 * v18[3])));
  FIELD_F32(a1, 6760) = v20;
  sub_6068DB28(a1);
  if ( FIELD_U8(a1, 6160) )
  {
    sub_6068E378(a1);
    FIELD_U8(a1, 6160) = 0;
  }
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    if ( v9 == FIELD_F32(a1, 6208)
      && v7 == FIELD_F32(a1, 6212)
      && v6 == FIELD_F32(a1, 6216)
      && v8 == FIELD_U32(a1, 6788) )
    {
      FIELD_U32(a1, 6652) = 0;
      FIELD_U32(a1, 6656) = 0;
      FIELD_U32(a1, 6660) = 0;
    }
    else
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
    }
  }
  FIELD_F32(a1, 6208) = v9;
  FIELD_F32(a1, 6212) = v7;
  FIELD_F32(a1, 6216) = v6;
  FIELD_U32(a1, 6788) = v8;
  FIELD_U32(a1, 6572) = FIELD_U32(a1, 164);
  if ( FIELD_U8(a1, 6161) )
  {
    v28 = 1140850688;
    v29[0] = 1140850688;
    if ( sub_6069AFA0(a1 + 6696, a1 + 108, a1 + 492, &v28, a1 + 6328) == 1 )
    {
      v21 = FIELD_U32(a1, 108);
      v22 = FIELD_U32(a1, 112);
      v23 = FIELD_U32(a1, 116);
      FIELD_U32(a1, 584) = v21;
      FIELD_U32(a1, 588) = v22;
      FIELD_U32(a1, 592) = v23;
      FIELD_U32(a1, 608) = v21;
      FIELD_U32(a1, 612) = v22;
      FIELD_U32(a1, 616) = v23;
      sub_60160948((_DWORD *)(a1 + 6328));
    }
    FIELD_U8(a1, 6161) = 0;
  }
  else if ( ((int (__fastcall *)(int, int))loc_6069B070)(a1 + 6696, a1 + 108) == 1 )
  {
    v24 = FIELD_U32(a1, 108);
    v25 = FIELD_U32(a1, 112);
    v26 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v24;
    FIELD_U32(a1, 588) = v25;
    FIELD_U32(a1, 592) = v26;
    FIELD_U32(a1, 608) = v24;
    FIELD_U32(a1, 612) = v25;
    FIELD_U32(a1, 616) = v26;
    sub_60160948((_DWORD *)(a1 + 6328));
  }
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 6328) + 28))(a1 + 6328);
  sub_6068E4E4(a1);
  FIELD_U8(a1, 6831) = 0;
  return 6831;
}
