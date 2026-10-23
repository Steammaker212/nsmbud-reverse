/* SE_OBJ_CMN_SPLASH_ref_1471B8
 * address: 0x601471B8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_1471B8(int a1)
{
  float v2; // r1
  int v3; // r5
  float v4; // r2
  Vec2 v6; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.2;
  FIELD_F32(a1, 124) = FIELD_F32(a1, 124) * 0.2;
  FIELD_U32(a1, 104) = 1014350479;
  FIELD_U32(a1, 100) = 1008981770;
  FIELD_U32(a1, 132) = 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) && !StageActor__isOffScreen((StageActor *)a1) )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    mapPositionToScreen(&v6, &position);
    BasicSoundActor1_playSound(v3, "SE_OBJ_CMN_SPLASH", (int)&v6, 0);
  }
  v4 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  return TileMgr_splashRelated(TileMgr_instance, &position, 6);
}
