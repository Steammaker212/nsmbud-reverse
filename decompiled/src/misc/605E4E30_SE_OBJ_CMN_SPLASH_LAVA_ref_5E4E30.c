/* SE_OBJ_CMN_SPLASH_LAVA_ref_5E4E30
 * address: 0x605E4E30   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_LAVA_ref_5E4E30(StageActor *a1, int r1_0)
{
  float v2; // r1
  int v3; // r2
  Vec2 a2; // [sp+4h] [bp-14h] BYREF
  int v6; // [sp+Ch] [bp-Ch]

  if ( r1_0 == 1 )
  {
    v2 = *(float *)&a1[10].aCollider.field_E0;
    a2.x = FIELD_F32(a1, 0x6C);
    v3 = 833;
  }
  else
  {
    v2 = *(float *)&a1[10].aCollider.field_E0;
    a2.x = FIELD_F32(a1, 0x6C);
    v3 = 439;
  }
  a2.y = v2;
  v6 = 1170939904;
  return StageActor__createWaterSplash(a1, &a2, v3, 16, "SE_OBJ_CMN_SPLASH_LAVA");
}
