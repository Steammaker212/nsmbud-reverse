/* SE_BOSS_KOOPA_L_FIRE_START_ref
 * address: 0x6007E090   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_L_FIRE_START_ref(int a1)
{
  unsigned int v2; // r0
  float *v3; // r1
  float v4; // r1
  Vec2 v6; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = sub_60080094();
  v3 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  FIELD_F32(a1, 120) = (float)(v3[2] + (float)((float)((float)(v2 & 0xFFFFFF) * v3[3]) * 0.000000059605)) * 1.5;
  FIELD_F32(a1, 124) = (float)(*v3 + (float)((float)((float)(v2 & 0xFFFFFF) * v3[1]) * 0.000000059605)) * 1.5;
  FIELD_U32(a1, 164) = v2 - 0x40000000;
  v4 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&v6, &position);
  return sub_60813570(a1 + 6668, "SE_BOSS_KOOPA_L_FIRE_START", &v6, 0);
}
