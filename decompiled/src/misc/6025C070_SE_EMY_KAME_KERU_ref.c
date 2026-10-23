/* SE_EMY_KAME_KERU_ref
 * address: 0x6025C070   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KAME_KERU_ref(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s20
  float v5; // s22
  int *v6; // r5
  int v7; // r6
  int v8; // r1
  Vec2 v10; // [sp+0h] [bp-48h] BYREF
  Vec3 position; // [sp+8h] [bp-40h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 572);
  v5 = FIELD_F32(a1, 576);
  v6 = sub_60002B90(FIELD_S8(a1, 84), unk_60C2640C);
  position.x = v3 + v4;
  position.y = v2 + v5;
  v7 = Global_BasicSoundActor1;
  mapPositionToScreen(&v10, &position);
  BasicSoundActor1_playSound(v7, "SE_EMY_KAME_KERU", (int)&v10, (int)v6);
  v8 = FIELD_U32(a1, 80);
  FIELD_F32(a1, 120) = (float)byte_60AFE3F4[v8] * 2.5;
  FIELD_U32(a1, 124) = 0x40000000;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 104) = 1023410176;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v8];
  FIELD_U8(a1, 6468) = 0;
  return CarryableEnemy__vf2AC(a1);
}
