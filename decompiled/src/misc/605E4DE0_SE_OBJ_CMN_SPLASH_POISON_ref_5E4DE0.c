/* SE_OBJ_CMN_SPLASH_POISON_ref_5E4DE0
 * address: 0x605E4DE0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_POISON_ref_5E4DE0(StageActor *a1)
{
  float v1; // r1
  Vec2 a2; // [sp+4h] [bp-14h] BYREF
  int v4; // [sp+Ch] [bp-Ch]

  v1 = *(float *)&a1[10].aCollider.field_E0;
  a2.x = FIELD_F32(a1, 0x6C);
  a2.y = v1;
  v4 = 1170939904;
  return StageActor__createWaterSplash(a1, &a2, 438, 23, "SE_OBJ_CMN_SPLASH_POISON");
}
