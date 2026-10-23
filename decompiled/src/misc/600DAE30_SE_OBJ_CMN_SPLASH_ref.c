/* SE_OBJ_CMN_SPLASH_ref
 * address: 0x600DAE30   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref(StageActor *a1, Vec2 *a2)
{
  return StageActor__createWaterSplash(a1, a2, 761, 4, "SE_OBJ_CMN_SPLASH");
}
