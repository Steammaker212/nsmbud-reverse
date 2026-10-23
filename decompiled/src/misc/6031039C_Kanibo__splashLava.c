/* Kanibo__splashLava
 * address: 0x6031039C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000EC4
// 
// Overridden by: None
int __fastcall Kanibo__splashLava(StageActor *a1, Vec2 *a2)
{
  return StageActor__createWaterSplash(a1, a2, 706, 16, "SE_OBJ_CMN_SPLASH_LAVA");
}
