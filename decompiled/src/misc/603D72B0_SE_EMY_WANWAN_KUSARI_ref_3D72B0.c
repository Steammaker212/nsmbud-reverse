/* SE_EMY_WANWAN_KUSARI_ref_3D72B0
 * address: 0x603D72B0   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WANWAN_KUSARI_ref_3D72B0(int a1)
{
  float v2; // s4
  float v3; // s10
  float v4; // s2
  float v5; // s0
  float v6; // s2
  float v7; // s4
  int result; // r0
  float v9; // s2
  float v10; // s2
  float v11; // r1
  int v12; // r5
  int v13; // r0
  bool v14; // cc
  Vec3 target; // [sp+4h] [bp-34h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_F32(a1, 128);
  v4 = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 108) = (float)(FIELD_F32(a1, 108) + FIELD_F32(a1, 120)) + FIELD_F32(a1, 11800);
  FIELD_F32(a1, 112) = v4 + FIELD_F32(a1, 11804);
  FIELD_F32(a1, 116) = (float)(v2 + v3) + FIELD_F32(a1, 11808);
  FIELD_U32(a1, 11800) = 0;
  FIELD_U32(a1, 11804) = 0;
  FIELD_U32(a1, 11808) = 0;
  nullsub_7();
  if ( (FIELD_U8(a1, 8600) & 1) != 0 )
  {
    v5 = FIELD_F32(a1, 120);
    if ( v5 != 0.0 )
    {
      v6 = FIELD_F32(a1, 108);
      v7 = FIELD_F32(a1, 11752);
      if ( v5 > 0.0 )
      {
        if ( v6 < v7 )
          goto LABEL_8;
        goto LABEL_7;
      }
      if ( v6 <= v7 )
LABEL_7:
        FIELD_U32(a1, 120) = 0;
    }
LABEL_8:
    FIELD_U32(a1, 124) = 1069547520;
  }
  target.x = -1.0767e24;
  position.x = 4.702e-38;
  result = moveValueTo((int *)(a1 + 156), (int *)&target, (int *)&position);
  if ( FIELD_F32(a1, 124) < 0.0 )
  {
    result = a1 + 11768;
    v9 = FIELD_F32(a1, 11756);
    if ( (float)(FIELD_F32(a1, 11768) + -12.0) <= v9 )
    {
      v10 = v9 + 12.0;
      FIELD_F32(a1, 112) = v10;
      target.x = FIELD_F32(a1, 108);
      target.y = v10 + -12.0;
      target.z = 4500.0;
      EffectData_create(867, &target, 0, 0);
      v11 = FIELD_F32(a1, 112);
      v12 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v11;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v12, "SE_EMY_WANWAN_KUSARI", (int)&out, 0);
      FIELD_U64(a1, 120) = 0x3FC0000000000000LL;
      v13 = FIELD_U32(a1, 11832);
      v14 = v13 <= 1;
      result = v13 - 1;
      FIELD_U32(a1, 11832) = result;
      if ( v14 )
      {
        FIELD_U8(a1, 11819) = 0;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98FF4);
      }
    }
  }
  return result;
}
