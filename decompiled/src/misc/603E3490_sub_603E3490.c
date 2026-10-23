/* sub_603E3490
 * address: 0x603E3490   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E3490(int a1)
{
  float *v2; // r9
  float *v3; // r8
  float v4; // s0
  float v5; // r0
  int v6; // r0
  _DWORD *v7; // r7
  float v8; // r1
  int v9; // r11
  int v10; // r6
  float v11; // r1
  int v12; // r6
  int v13; // r5
  float v14; // r1
  int v15; // r5
  float v16; // s16
  int result; // r0
  float v18; // r2
  float v19; // r0
  Vec3i v20; // [sp+8h] [bp-60h] BYREF
  int v21; // [sp+14h] [bp-54h] BYREF
  Vec2 out; // [sp+18h] [bp-50h] BYREF
  int v23; // [sp+20h] [bp-48h]
  Vec3 position; // [sp+28h] [bp-40h] BYREF

  LavaGeyser_vf188();
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = (float *)(a1 + 8216);
  v3 = (float *)(a1 + 8220);
  v4 = FIELD_F32(a1, 8220);
  if ( FIELD_F32(a1, 8216) >= v4 )
  {
    v5 = FIELD_F32(a1, 108);
    position.y = FIELD_F32(a1, 112);
    position.x = v5;
    position.z = 6500.0;
    out.x = v5;
    out.y = position.y;
    v23 = 1170939904;
    out.y = v4 + (float)(FIELD_F32(a1, 112) + -16.0);
    ((void (__fastcall *)(int *, float *, Vec2 *, _DWORD))checkLiquidCollisions)(
      &v21,
      &position.y,
      &out,
      FIELD_U8(a1, 86));
    if ( v21 )
    {
      if ( (unsigned int)(v21 - 3) <= 1 )
      {
        memset(&v20, 0, sizeof(v20));
        if ( !FIELD_U32(a1, 80) )
          v20.y = 0x80000000;
        EffectWrapper_update((EffectWrapper *)(a1 + 8248), 881, &position, &v20, 0);
      }
    }
  }
  v7 = (_DWORD *)(a1 + 6312);
  v6 = FIELD_U32(a1, 6312);
  if ( v6 < 1 )
  {
    if ( !v6 )
    {
      *v7 = -1;
      v14 = FIELD_F32(a1, 112);
      v15 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v14;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v15, "SE_EMY_WOOCHAN_MOGURU_LAST", (int)&out, 0);
    }
  }
  else
  {
    v8 = FIELD_F32(a1, 112);
    v9 = FIELD_U32(a1, 8);
    v10 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v8;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v10, "SE_VOC_WC_MOVE", v9, &out, 0);
    v11 = FIELD_F32(a1, 112);
    v12 = FIELD_U32(a1, 8);
    v13 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v11;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v13, "SE_EMY_WOOCHAN_MOVE", v12, &out, 0);
    --*v7;
  }
  v16 = *v2;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
  if ( v16 > *v3 && *v2 < *v3 )
  {
    v18 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v18;
    TileMgr_splashRelated(TileMgr_instance, &position, 30);
    v19 = FIELD_F32(a1, 108);
    position.y = FIELD_F32(a1, 112);
    position.x = v19;
    position.z = 6500.0;
    out.x = v19;
    out.y = position.y;
    v23 = 1170939904;
    out.y = *v3 + (float)(FIELD_F32(a1, 112) + -16.0);
    ((void (__fastcall *)(Vec3i *, float *, Vec2 *, _DWORD))checkLiquidCollisions)(
      &v20,
      &position.y,
      &out,
      FIELD_U8(a1, 86));
    result = v20.x;
    if ( v20.x )
    {
      result = v20.x - 3;
      if ( (unsigned int)(v20.x - 3) <= 1 )
        return EffectData_create(880, &position, 0, 0);
    }
  }
  return result;
}
