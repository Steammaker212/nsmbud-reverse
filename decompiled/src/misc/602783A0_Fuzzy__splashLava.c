/* Fuzzy__splashLava
 * address: 0x602783A0   size: 56   group: misc
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
int __fastcall Fuzzy__splashLava(StageActor *a1, Vec2 *a2)
{
  int v2; // r3

  v2 = 14;
  if ( !a1[10]._.field_3C )
    v2 = 16;
  return StageActor__createWaterSplash(a1, a2, 997, v2, "SE_OBJ_CMN_SPLASH_LAVA");
}
