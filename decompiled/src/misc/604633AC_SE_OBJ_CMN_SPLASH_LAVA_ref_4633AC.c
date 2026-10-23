/* SE_OBJ_CMN_SPLASH_LAVA_ref_4633AC
 * address: 0x604633AC   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_LAVA_ref_4633AC(int a1, Vec3 *a2)
{
  float v4; // r1
  int v5; // r7
  float y; // r2
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  if ( FIELD_U32(a1, 6168) == 2 )
    sub_604096C4(dword_60C9A1F0);
  position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  position.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  position.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  EffectData_create(573, &position, 0, a1 + 144);
  FIELD_U8(a1, 19) = 1;
  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v5, "SE_OBJ_CMN_SPLASH_LAVA", &out.x, 0);
  EffectData_create(944, a2, 0, a1 + 144);
  y = FIELD_F32(a2, 0x4);
  position.x = FIELD_F32(a2, 0x0);
  position.y = y;
  return TileMgr_splashRelated(TileMgr_instance, &position, 16);
}
