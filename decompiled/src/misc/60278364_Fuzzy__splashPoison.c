/* Fuzzy__splashPoison
 * address: 0x60278364   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000ED4
// 
// Overridden by: None
int __fastcall Fuzzy__splashPoison(StageActor *a1, Vec2 *a2)
{
  int v2; // r3

  v2 = 21;
  if ( !a1[10]._.field_3C )
    v2 = 23;
  return StageActor__createWaterSplash(a1, a2, 996, v2, "SE_OBJ_CMN_SPLASH_POISON");
}
