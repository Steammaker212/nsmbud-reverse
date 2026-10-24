/* SE_EMY_TERESA_DEAD_ref
 * address: 0x603B09D4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_TERESA_DEAD_ref(Vec3 *a1, float *a2)
{
  float y; // r1
  int v5; // r6
  Vec2 v7; // [sp+8h] [bp+0h] BYREF
  Vec3 position; // [sp+10h] [bp+8h] BYREF

  y = FIELD_F32(a1 + (9) * 12, 0x4);
  v5 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1 + (9) * 12, 0x0);
  position.y = y;
  mapPositionToScreen(&v7, &position);
  sub_60813810(v5, (int)"SE_EMY_TERESA_DEAD", (int)&v7, 1, 0);
  EffectData_create(375, a1 + 535, 0, 0);
  sub_602A6C70(&FIELD_F32(a1, 0x0), FIELD_F32(a1 + (9) * 12, 0x0) < *a2);
  StageActor__delete((StateActor *)a1, 1);
  return 1;
}
