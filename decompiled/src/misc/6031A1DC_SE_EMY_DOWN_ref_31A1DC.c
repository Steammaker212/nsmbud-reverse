/* SE_EMY_DOWN_ref_31A1DC
 * address: 0x6031A1DC   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_31A1DC(int a1, float *a2)
{
  int v4; // r6
  float v5; // r0
  float v6; // r1
  float v7; // s0
  float v8; // s2
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v4 = Global_BasicSoundActor1;
  v5 = *a2;
  v6 = a2[1];
  position.x = v5;
  position.y = v6;
  mapPositionToScreen(&out, &position);
  sub_60813810(v4, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
  v7 = *a2;
  v8 = FIELD_F32(a1, 108);
  FIELD_U8(a1, 6429) = 1;
  sub_602A6024(a1, v8 < v7, -1, -1);
  return 1;
}
