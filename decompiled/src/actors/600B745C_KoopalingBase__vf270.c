/* KoopalingBase__vf270
 * address: 0x600B745C   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600260DC
// 
// Overridden by: None
int __fastcall KoopalingBase__vf270(int a1)
{
  BossBase__vf270(a1);
  FIELD_U16(a1, 6276) = 60;
  return 6276;
}
