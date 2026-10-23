/* SE_OBJ_ICE_S_THAW_ref
 * address: 0x6060DB00   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ICE_S_THAW_ref(int a1)
{
  int v1; // r5
  int v2; // r4
  float v3; // r1
  float v4; // s4
  float v5; // s0
  float v6; // s2
  int result; // r0
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = Global_BasicSoundActor2;
  v2 = a1 + 108;
  v3 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&v8, &position);
  BasicSoundActor2_play(v1, "SE_OBJ_ICE_S_THAW", &v8.x, 0);
  FIELD_U32(v2, 6672) = 60;
  v4 = FIELD_F32(v2, 40) * 0.016667;
  v5 = FIELD_F32(v2, 44) * 0.016667;
  FIELD_F32(v2, 6660) = FIELD_F32(v2, 36) * 0.016667;
  FIELD_F32(v2, 6664) = v4;
  FIELD_F32(v2, 6668) = v5;
  v6 = FIELD_F32(v2, 4) + FIELD_F32(v2, 468);
  position.x = *(float *)v2 + FIELD_F32(v2, 464);
  position.y = v6;
  sub_602F32F8((_BYTE *)(v2 + 6684), (int *)&position, 5u, 0);
  result = FIELD_U32(v2, 6680);
  if ( result == 1 )
    return EffectData_create(932, (Vec3 *)v2, 0, 0);
  return result;
}
