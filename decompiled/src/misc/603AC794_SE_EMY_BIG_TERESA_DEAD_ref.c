/* SE_EMY_BIG_TERESA_DEAD_ref
 * address: 0x603AC794   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BIG_TERESA_DEAD_ref(int a1, float *a2)
{
  int v4; // r6
  float v5; // r1
  _DWORD v7[3]; // [sp+4h] [bp-34h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  memset(v7, 0, sizeof(v7));
  EffectData_create(375, (Vec3 *)(a1 + 6616), (int)v7, a1 + 144);
  v4 = Global_BasicSoundActor1;
  v5 = FIELD_F32(a1, 112);
  if ( FIELD_U32(a1, 6656) )
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    sub_60813810(v4, (int)"SE_EMY_BIG_TERESA_DEAD", (int)&out, 1, 0);
  }
  else
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    sub_60813810(v4, (int)"SE_EMY_TERESA_DEAD", (int)&out, 1, 0);
  }
  sub_602A6C70((float *)a1, FIELD_F32(a1, 108) < *a2);
  StageActor__delete((StateActor *)a1, 1);
  return 1;
}
