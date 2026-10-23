/* Bowser__collisionIceball
 * address: 0x600C6440   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025630
// 
// Overridden by: None
int __fastcall Bowser__collisionIceball(int a1, int a2, int a3)
{
  SE_OBJ_PNGN_ICEBALL_DISAPP_ref_2A2DA0(a3);
  if ( (FIELD_U8(a1, 7108) & 4) == 0 )
    sub_600C6474(a1, a3 + 84);
  return 1;
}
