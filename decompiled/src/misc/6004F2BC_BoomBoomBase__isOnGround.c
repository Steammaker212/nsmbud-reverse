/* BoomBoomBase__isOnGround
 * address: 0x6004F2BC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025AB4
// 
// Overridden by: None
bool __fastcall BoomBoomBase__isOnGround(int a1)
{
  int v2; // r1
  _BOOL4 result; // r0

  v2 = BossBase__isOnGround((BossBase *)a1);
  result = 0;
  if ( v2 == 1 )
    return FIELD_U8(a1, 7524) == 0;
  return result;
}
