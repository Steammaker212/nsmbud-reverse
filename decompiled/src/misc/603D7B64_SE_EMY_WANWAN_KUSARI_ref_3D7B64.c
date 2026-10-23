/* SE_EMY_WANWAN_KUSARI_ref_3D7B64
 * address: 0x603D7B64   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WANWAN_KUSARI_ref_3D7B64(int a1)
{
  float v2; // s4
  float v3; // s6
  int v4; // r0
  int v5; // r1
  int result; // r0
  float v7; // s2
  float v8; // s2
  float v9; // r1
  int v10; // r5
  Vec3 v11; // [sp+4h] [bp-34h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 124);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 11800);
  FIELD_F32(a1, 112) = (float)(v3 + v2) + FIELD_F32(a1, 11804);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 11808);
  FIELD_U32(a1, 11800) = 0;
  FIELD_U32(a1, 11804) = 0;
  FIELD_U32(a1, 11808) = 0;
  nullsub_7();
  v4 = FIELD_U32(a1, 8600);
  if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0 )
    goto LABEL_8;
  v5 = ((FIELD_U32(a1, 8600) & 0x10400) == 1024) | FIELD_U32(a1, 8600) & 1;
  if ( (v4 & 0x880000) == 0 )
  {
    if ( v5 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( !(((v4 & 0x20000000) == 0) | v5) )
LABEL_7:
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C99094);
LABEL_8:
  result = a1 + 11768;
  v7 = FIELD_F32(a1, 11756);
  if ( (float)(FIELD_F32(a1, 11768) + -12.0) <= v7 )
  {
    v8 = v7 + 12.0;
    FIELD_F32(a1, 112) = v8;
    v11.x = FIELD_F32(a1, 108);
    v11.y = v8 + -12.0;
    v11.z = 4500.0;
    EffectData_create(867, &v11, 0, 0);
    v9 = FIELD_F32(a1, 112);
    v10 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&out, &position);
    result = BasicSoundActor1_playSound(v10, "SE_EMY_WANWAN_KUSARI", (int)&out, 0);
    FIELD_U32(a1, 124) = 0;
  }
  return result;
}
