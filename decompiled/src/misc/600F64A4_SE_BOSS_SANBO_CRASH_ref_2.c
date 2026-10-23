/* SE_BOSS_SANBO_CRASH_ref_2
 * address: 0x600F64A4   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_SANBO_CRASH_ref_2(CollisionActor *a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r0
  float v5; // r2
  float x; // s0
  float v7; // s2
  float v8; // r1
  int v9; // r5
  int result; // r0
  int v11; // r0
  int *v12; // r1
  bool v13; // zf
  int v14; // r0
  float v15; // s0
  float v16; // r1
  int v17; // r5
  int direction; // r0
  int *v19; // r1
  int v20; // r0
  float y; // s0
  float v22; // r1
  int v23; // r5
  Vec3 v24; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  v2 = dword_60C85B44;
  if ( ((int)a1[1]._.aCollider.node4.next & 1) == 0 )
    v2 = -dword_60C85B44;
  FIELD_U32(a1, 0xA0) += v2;
  if ( !LOBYTE(a1[1]._.aCollider.node4.owner) )
    FIELD_U32(a1, 0x9C) += dword_60C85B4C;
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  v3 = *(_DWORD *)&FIELD_U8(a1, 0x288)[2224];
  if ( ((v3 & 0x440000) == 0 || (v3 & 0x10000000) != 0) && ((v3 & 0x880000) == 0 || (v3 & 0x20000000) != 0) )
  {
    if ( (v3 & 1) != 0 )
    {
      direction = FIELD_U32(a1, 0x50);
      v19 = dword_600F6788;
      v13 = direction == 0;
      v20 = direction ^ 1;
      if ( v13 )
        v19 = &dword_600F6788[1];
      FIELD_U32(a1, 0x50) = v20;
      LODWORD(FIELD_F32(a1, 0x78)) = *v19;
      y = FIELD_F32(a1, 0x70);
      v24.x = FIELD_F32(a1, 0x6C);
      v24.y = y + -10.0;
      v24.z = 4500.0;
      EffectData_create(329, &v24, 0, 0);
      v22 = FIELD_F32(a1, 0x70);
      v23 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 0x6C);
      position.y = v22;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v23, "SE_BOSS_SANBO_CRASH", (int)&out, 0);
      return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C85B18);
    }
    else
    {
      result = v3 & 0x10400;
      if ( result == 1024 )
      {
        v11 = FIELD_U32(a1, 0x50);
        v12 = dword_600F6788;
        v13 = v11 == 0;
        v14 = v11 ^ 1;
        if ( v13 )
          v12 = &dword_600F6788[1];
        FIELD_U32(a1, 0x50) = v14;
        LODWORD(FIELD_F32(a1, 0x78)) = *v12;
        v15 = FIELD_F32(a1, 0x70);
        v24.x = FIELD_F32(a1, 0x6C);
        v24.y = v15 + 10.0;
        v24.z = 4500.0;
        EffectData_create(329, &v24, 0, 0);
        v16 = FIELD_F32(a1, 0x70);
        v17 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 0x6C);
        position.y = v16;
        mapPositionToScreen(&out, &position);
        BasicSoundActor1_playSound(v17, "SE_BOSS_SANBO_CRASH", (int)&out, 0);
        return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C85B18);
      }
    }
  }
  else
  {
    v4 = FIELD_U32(a1, 0x50);
    FIELD_U32(a1, 0x50) = v4 ^ 1;
    FIELD_F32(a1, 0x78) = 0.1;
    v5 = FIELD_F32(a1, 0x70);
    v24.x = FIELD_F32(a1, 0x6C);
    v24.y = v5;
    x = v24.x;
    v24.z = 4500.0;
    if ( v4 )
    {
      v7 = -10.0;
    }
    else
    {
      v7 = 10.0;
      FIELD_F32(a1, 0x78) = -0.1;
    }
    v24.x = v7 + x;
    EffectData_create(329, &v24, 0, 0);
    v8 = FIELD_F32(a1, 0x70);
    v9 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 0x6C);
    position.y = v8;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v9, "SE_BOSS_SANBO_CRASH", (int)&out, 0);
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C85B18);
  }
  return result;
}
