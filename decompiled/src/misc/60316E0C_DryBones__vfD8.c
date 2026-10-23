/* DryBones__vfD8
 * address: 0x60316E0C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93B0
// 
// Overridden by: None
Enemy *__fastcall DryBones__vfD8(Enemy *result)
{
  result[1]._._.collisionMgr[711] = 0;
  result[1]._._.collisionMgr[709] = 1;
  return result;
}
