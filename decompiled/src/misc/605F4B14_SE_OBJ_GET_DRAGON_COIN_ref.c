/* SE_OBJ_GET_DRAGON_COIN_ref
 * address: 0x605F4B14   size: 1120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_GET_DRAGON_COIN_ref(int a1)
{
  int v2; // r3
  char *v3; // r8
  int *v4; // r5
  int v5; // r0
  int v6; // r1
  char v7; // r0
  int v8; // r6
  float v9; // r1
  ActiveColliderMgr *v10; // r5
  int v12; // r2
  bool v13; // cc
  int v14; // r3
  int v15; // r6
  int v16; // r5
  int v17; // r6
  int v18; // r5
  float v19; // r1
  int v20; // r5
  Vec3 v21; // [sp+14h] [bp-3Ch] BYREF
  Vec2 out; // [sp+20h] [bp-30h] BYREF
  Vec3 position; // [sp+28h] [bp-28h] BYREF

  v3 = (char *)(a1 + 6164);
  v2 = FIELD_S8(a1, 6164);
  if ( FIELD_U32(dword_60C99DD4, 764) == 1 )
  {
    sub_60022760(0.0, 24.0, dword_60C7F52C, a1, 0xAu, v2);
    SE_SYS_100COIN_ONE_UP_ref(dword_60C99DD4, *v3, 20);
  }
  else
  {
    sub_60022760(0.0, 24.0, dword_60C7F52C, a1, 6u, v2);
  }
  v4 = (int *)(a1 + 6136);
  sub_6040A310(dword_60C9A1F0, FIELD_U32(a1, 6136));
  if ( FIELD_U32(a1, 6136) <= 2u )
    sub_603F9728(dword_60C99DD4, FIELD_U32(a1, 6136), *v3);
  sub_603FD768(
    dword_60C99DF4,
    FIELD_U8(LevelInfo_instance, 18),
    1,
    FIELD_F32(a1, 6108),
    FIELD_F32(a1, 6112));
  if ( (unsigned int)*v4 <= 2 )
  {
    v5 = 0;
    v6 = FIELD_U8(dword_60C99DD4, 733) != 255;
    if ( FIELD_U8(dword_60C99DD4, 734) != 255 )
      ++v6;
    if ( FIELD_U8(dword_60C99DD4, 735) != 255 )
      ++v6;
    if ( v6 == 3 )
    {
      SE_SYS_NICE_S_ref();
      v5 = 1;
    }
    if ( !FIELD_U32(a1, 6132) )
    {
      v12 = FIELD_U32(dword_60CC6D78, 412);
      v13 = v12 <= 8;
      if ( v12 <= 8 )
        v13 = FIELD_U32(dword_60CC6D78, 424) <= 57;
      if ( v13 )
      {
        v14 = *v4;
        v15 = 1;
        v16 = 1;
        if ( !v14 )
          goto LABEL_30;
        v16 = 1;
        if ( FIELD_U8(dword_60C99DD4, 733) == 255 )
          v16 = FIELD_U8(dword_60C99DD4, 736) & 1;
        if ( v14 == 1 )
        {
          v17 = v16 + 1;
        }
        else
        {
LABEL_30:
          if ( FIELD_U8(dword_60C99DD4, 734) == 255 )
            v15 = (FIELD_U8(dword_60C99DD4, 736) >> 1) & 1;
          v17 = v15 + v16;
          v18 = 1;
          if ( v14 == 2 )
            goto LABEL_35;
        }
        v18 = 1;
        if ( FIELD_U8(dword_60C99DD4, 735) == 255 )
          v18 = (FIELD_U8(dword_60C99DD4, 736) >> 2) & 1;
LABEL_35:
        if ( v18 + v17 == 3 )
        {
          if ( !v5 )
            SE_SYS_NICE_S_ref();
          v19 = FIELD_F32(a1, 112);
          v20 = Global_BasicSoundActor2;
          v21.x = FIELD_F32(a1, 108);
          v21.y = v19;
          mapPositionToScreen((Vec2 *)&position, &v21);
          BasicSoundActor2_play(v20, "SE_OBJ_GET_DRAGON_COIN_COMPLETE", &position.x, 0);
        }
      }
    }
  }
  LOBYTE(v21.z) = 0;
  v7 = *v3;
  LODWORD(position.x) = 1;
  LODWORD(v21.x) = 1 << v7;
  LODWORD(v21.y) = unk_60C26378;
  v8 = Global_BasicSoundActor2;
  v9 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v9;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v8, "SE_OBJ_GET_DRAGON_COIN", &out.x, (int)&v21);
  sub_604005D0(AreaRumbleMgr_instance, *v3, 8, 2, 0, 0);
  if ( FIELD_U8(a1, 539) )
    EventMgr_set(EventMgr__instance, (unsigned __int8)(FIELD_U8(a1, 539) - 1), 0, 1, 0, 0, 0, 0);
  if ( FIELD_U8(a1, 540) )
    EventMgr_set(
      EventMgr__instance,
      (unsigned __int8)(FIELD_U8(a1, 540) - 1),
      FIELD_U8(a1, 6165),
      1,
      0,
      FIELD_U8(a1, 6165) == 0,
      0,
      0);
  EffectData_create(81, (Vec3 *)(a1 + 108), 0, 0);
  EffectData_create(82, (Vec3 *)(a1 + 108), 0, 0);
  v10 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v10, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v10, a1 + 188);
  if ( !FIELD_U32(a1, 6132) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB2200);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
