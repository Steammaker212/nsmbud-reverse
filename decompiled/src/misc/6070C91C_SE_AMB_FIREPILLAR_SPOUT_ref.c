/* SE_AMB_FIREPILLAR_SPOUT_ref
 * address: 0x6070C91C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_FIREPILLAR_SPOUT_ref(float *a1)
{
  int v1; // r4
  int v2; // r5
  float v3; // r1
  float v4; // r0
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v1 = *((_DWORD *)a1 + 2);
  v2 = Global_BasicSoundActor2;
  v3 = a1[27];
  v4 = a1[28];
  position.x = v3;
  position.y = v4;
  mapPositionToScreen(&out, &position);
  return SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v2, "SE_AMB_FIREPILLAR_SPOUT", v1, &out, 0);
}
