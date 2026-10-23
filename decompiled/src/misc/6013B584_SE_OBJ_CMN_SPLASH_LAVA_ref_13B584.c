/* SE_OBJ_CMN_SPLASH_LAVA_ref_13B584
 * address: 0x6013B584   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_LAVA_ref_13B584(StageActor *a1, float s0_0)
{
  Vec2 a2; // [sp+4h] [bp-14h] BYREF
  int v4; // [sp+Ch] [bp-Ch]

  a2.x = FIELD_U32(a1, 0x6C).x;
  a2.y = s0_0;
  v4 = 1166843904;
  return StageActor__createWaterSplash(a1, &a2, 837, 18, "SE_OBJ_CMN_SPLASH_LAVA");
}
