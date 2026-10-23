/* SE_EMY_WANWAN_KUSARI_ref
 * address: 0x603D6B64   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WANWAN_KUSARI_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  _WORD *v5; // r5
  _BOOL4 v6; // r0
  bool v7; // zf
  float v9; // s4
  float v10; // s10
  float v11; // s2
  float v12; // s2
  float v13; // s2
  float v14; // r1
  int v15; // r5
  Vec3 speed; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v4 = FIELD_U32(a1, 11856);
  v2 = (_DWORD *)(a1 + 11856);
  v3 = v4;
  if ( v4 == 1 )
  {
    if ( !FIELD_U8(a1, 11812) )
      *v2 = 2;
    goto LABEL_13;
  }
  if ( v3 == 2 )
  {
    FIELD_U32(a1, 120) = 0;
    FIELD_U16(a1, 6276) = 60;
    v5 = (_WORD *)(a1 + 6276);
    *v2 = 3;
  }
  else
  {
    if ( v3 != 3 )
      goto LABEL_13;
    v5 = (_WORD *)(a1 + 6276);
  }
  speed.x = 4.702e-38;
  v6 = moveValueTo((int *)(a1 + 156), (int *)(a1 + 11868), (int *)&speed);
  v7 = *v5 == 0;
  if ( !*v5 )
    v7 = v6;
  if ( v7 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C99034);
LABEL_13:
  CollisionActor__handleGravity((CollisionActor *)a1);
  v9 = FIELD_F32(a1, 116);
  v10 = FIELD_F32(a1, 128);
  v11 = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 108) = (float)(FIELD_F32(a1, 108) + FIELD_F32(a1, 120)) + FIELD_F32(a1, 11800);
  FIELD_F32(a1, 112) = v11 + FIELD_F32(a1, 11804);
  FIELD_F32(a1, 116) = (float)(v9 + v10) + FIELD_F32(a1, 11808);
  FIELD_U32(a1, 11800) = 0;
  FIELD_U32(a1, 11804) = 0;
  FIELD_U32(a1, 11808) = 0;
  nullsub_7();
  if ( FIELD_F32(a1, 124) < 0.0 )
  {
    v12 = FIELD_F32(a1, 11756);
    if ( (float)(FIELD_F32(a1, 11768) + -12.0) <= v12 )
    {
      v13 = v12 + 12.0;
      FIELD_F32(a1, 112) = v13;
      speed.x = FIELD_F32(a1, 108);
      speed.y = v13 + -12.0;
      speed.z = 4500.0;
      EffectData_create(867, &speed, 0, 0);
      v14 = FIELD_F32(a1, 112);
      v15 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v14;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v15, "SE_EMY_WANWAN_KUSARI", (int)&out, 0);
      FIELD_U32(a1, 124) = 1071644672;
      FIELD_U32(a1, 11840) ^= 1u;
    }
  }
  LODWORD(speed.x) = dword_60AF2148[FIELD_U32(a1, 11840)];
  position.x = 3.7616e-37;
  return moveValueTo((int *)(a1 + 164), (int *)&speed, (int *)&position);
}
