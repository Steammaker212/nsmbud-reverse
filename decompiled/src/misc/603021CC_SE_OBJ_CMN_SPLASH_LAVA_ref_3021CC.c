/* SE_OBJ_CMN_SPLASH_LAVA_ref_3021CC
 * address: 0x603021CC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_LAVA_ref_3021CC(StageActor *a1, Vec2 *a2)
{
  int v4; // r3
  int ProfileId; // r0

  if ( Actor__getProfileId(&FIELD_U32(a1, 0x0)) == 497 )
  {
    v4 = 4;
  }
  else
  {
    ProfileId = Actor__getProfileId(&FIELD_U32(a1, 0x0));
    v4 = 6;
    if ( ProfileId == 498 )
      v4 = 4;
  }
  return StageActor__createWaterSplash(a1, a2, 993, v4, "SE_OBJ_CMN_SPLASH_LAVA");
}
