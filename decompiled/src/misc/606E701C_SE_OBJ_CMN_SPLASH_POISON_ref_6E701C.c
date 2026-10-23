/* SE_OBJ_CMN_SPLASH_POISON_ref_6E701C
 * address: 0x606E701C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_POISON_ref_6E701C(StageActor *a1, Vec2 *a2)
{
  float y; // r2
  int v5; // r5
  float v6; // r1
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  if ( FIELD_U8(dword_60CC6D8C, 17) )
    return StageActor__createWaterSplash(a1, a2, 992, 4, "SE_OBJ_CMN_SPLASH_POISON");
  y = FIELD_F32(a2, 0x4);
  position.x = FIELD_F32(a2, 0x0);
  position.y = y;
  TileMgr_splashRelated(TileMgr_instance, &position, 23);
  v5 = Global_BasicSoundActor1;
  v6 = FIELD_F32(a2, 0x4);
  position.x = FIELD_F32(a2, 0x0);
  position.y = v6;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor1_playSound(v5, "SE_OBJ_CMN_SPLASH_POISON", (int)&out, 0);
}
