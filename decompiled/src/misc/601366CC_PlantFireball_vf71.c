/* PlantFireball_vf71
 * address: 0x601366CC   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlantFireball_vf71(int a1, float a2)
{
  float v4; // r1
  int v5; // r5
  float v6; // r2
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v5, "SE_OBJ_CMN_SPLASH_POISON", &out.x, 0);
  position.x = FIELD_F32(a1, 108);
  position.y = a2;
  position.z = 4500.0;
  createWaterSplash((sead_ListNode *)dword_60C99CDC);
  v6 = FIELD_F32(a1, 112);
  out.x = FIELD_F32(a1, 108);
  out.y = v6;
  TileMgr_splashRelated(TileMgr_instance, &out, 25);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1);
  FIELD_U8(a1, 6240) = 1;
  return 6240;
}
