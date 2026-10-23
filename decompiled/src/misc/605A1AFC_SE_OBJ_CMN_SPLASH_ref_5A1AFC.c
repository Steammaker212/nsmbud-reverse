/* SE_OBJ_CMN_SPLASH_ref_5A1AFC
 * address: 0x605A1AFC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_5A1AFC(int a1, float *a2)
{
  int v2; // r4
  float v4; // [sp+0h] [bp-30h]
  float v5; // [sp+4h] [bp-2Ch]
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v5 = a2[1];
  v4 = *a2;
  createWaterSplash((sead_ListNode *)dword_60C99CDC);
  v2 = Global_BasicSoundActor2;
  position.x = v4;
  position.y = v5;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor2_play(v2, "SE_OBJ_CMN_SPLASH", &out.x, 0);
}
