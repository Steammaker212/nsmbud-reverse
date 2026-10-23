/* BossBase__collisionPropellerDrill
 * address: 0x6002535C   size: 12   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6128
// 
// Overridden by: None
int __fastcall BossBase__collisionPropellerDrill(BossBase *a1)
{
  return (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x124))(a1);
}
