/* SE_EMY_DOWN_ref_249F68
 * address: 0x60249F68   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_249F68(int a1, int a2, int a3)
{
  float v4; // r0
  float v5; // r1
  int v7; // r5
  _BOOL4 v8; // r6
  float v9; // r1
  int v10; // r8
  int v11; // r7
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v4 = FIELD_F32(a2, 84);
  v5 = FIELD_F32(a2, 88);
  position.x = v4;
  position.y = v5;
  position.z = 0.0;
  sub_602A38A4(a1, (int *)&position);
  v7 = FIELD_U32(a3, 64);
  v8 = sub_6000ADDC(a1, v7);
  v9 = FIELD_F32(a1, 112);
  v10 = FIELD_S8(v7, 84);
  v11 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v9;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v11, "SE_EMY_DOWN", (int)&out, 0);
  sub_602A6024(a1, v8, v10, -1);
  return 1;
}
