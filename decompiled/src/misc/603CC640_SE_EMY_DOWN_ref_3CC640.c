/* SE_EMY_DOWN_ref_3CC640
 * address: 0x603CC640   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_3CC640(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  float CenterX; // s16
  float CenterY; // s18
  float v8; // r1
  int v9; // r6
  float v10; // s16
  float v11; // s0
  int result; // r0
  Vec2 out; // [sp+4h] [bp-4Ch] BYREF
  Vec3 position; // [sp+Ch] [bp-44h] BYREF

  CenterX = ActiveCollider_getCenterX(a2);
  CenterY = ActiveCollider_getCenterY(a2);
  position.x = (float)(CenterX + ActiveCollider_getCenterX(a3)) * 0.5;
  position.y = (float)(CenterY + ActiveCollider_getCenterY(a3)) * 0.5;
  position.z = 0.0;
  sub_602A38A4(a1, &position.x);
  v8 = FIELD_F32(a1, 112);
  v9 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v8;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v9, "SE_EMY_DOWN", (int)&out, 0);
  v10 = ActiveCollider_getCenterX(a2);
  v11 = v10 - ActiveCollider_getCenterX(a3);
  sub_602A6024(a1, v11 < 0.0, -1, -1);
  result = (unsigned __int8)FIELD_U8(a2, 0x6E) | 2;
  FIELD_U8(a2, 0x6E) = result;
  return result;
}
