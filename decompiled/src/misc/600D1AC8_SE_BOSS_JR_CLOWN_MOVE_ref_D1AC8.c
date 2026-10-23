/* SE_BOSS_JR_CLOWN_MOVE_ref_D1AC8
 * address: 0x600D1AC8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_D1AC8(int a1)
{
  int v1; // r4
  float v2; // r1
  float v3; // s16
  int v4; // r5
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v1 = FIELD_U32(a1, 8);
  v2 = FIELD_F32(a1, 6872);
  v3 = (float)FIELD_S32(a1, 7000);
  position.x = FIELD_F32(a1, 6856);
  position.y = v2;
  v4 = Global_BasicSoundActor2;
  mapPositionToScreen(&out, &position);
  return sub_60813CA0(
           v4,
           "SE_BOSS_JR_CLOWN_MOVE",
           v1,
           &out,
           COERCE_FLOAT((int)(float)((float)(v3 / 238610000.0) * 100.0)),
           (int)(float)((float)(v3 / 238610000.0) * 100.0),
           0);
}
