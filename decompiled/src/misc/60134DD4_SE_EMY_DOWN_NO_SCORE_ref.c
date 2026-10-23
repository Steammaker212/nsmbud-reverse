/* SE_EMY_DOWN_NO_SCORE_ref
 * address: 0x60134DD4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_NO_SCORE_ref(int a1, int a2)
{
  int v3; // r0
  bool v4; // fnf
  float v5; // r1
  float v6; // r1
  int v7; // r5
  Vec3 v9; // [sp+0h] [bp-38h] BYREF
  float v10[3]; // [sp+Ch] [bp-2Ch] BYREF
  Vec2 out; // [sp+18h] [bp-20h] BYREF
  Vec3 position; // [sp+20h] [bp-18h] BYREF

  v3 = FIELD_U32(a2, 64);
  v4 = FIELD_F32(a1, 108) < FIELD_F32(v3, 108);
  FIELD_U32(a1, 6104) = v4;
  v10[0] = (float)((float)(fabsf(FIELD_F32(v3, 120)) * 0.35) + 1.75) * flt_60AF6638[v4];
  v10[1] = 3.75;
  v10[2] = 0.0;
  (*(void (__fastcall **)(int, float *, int))(*(_DWORD *)a1 + 308))(a1, v10, 0x10000000);
  v5 = FIELD_F32(a1, 276);
  v9.x = FIELD_F32(a1, 272);
  v9.y = v5;
  v9.z = 4500.0;
  EffectData_create(21, &v9, 0, 0);
  v6 = FIELD_F32(a1, 112);
  v7 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v6;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v7, "SE_EMY_DOWN_NO_SCORE", (int)&out, 0);
  FIELD_U32(a1, 6108) = 2;
  return 1;
}
