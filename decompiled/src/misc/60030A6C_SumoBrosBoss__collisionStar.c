/* SumoBrosBoss__collisionStar
 * address: 0x60030A6C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025174
// 
// Overridden by: None
int __fastcall SumoBrosBoss__collisionStar(StateActor *a1)
{
  StageActor__delete(a1, 1);
  return 1;
}
