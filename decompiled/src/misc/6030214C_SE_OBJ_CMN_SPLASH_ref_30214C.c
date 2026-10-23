/* SE_OBJ_CMN_SPLASH_ref_30214C
 * address: 0x6030214C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_30214C(StageActor *a1, Vec2 *a2)
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
  return StageActor__createWaterSplash(a1, a2, 991, v4, "SE_OBJ_CMN_SPLASH");
}
