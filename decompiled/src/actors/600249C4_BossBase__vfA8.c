/* BossBase__vfA8
 * address: 0x600249C4   size: 56   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7960
// 
// Overridden by:
//   - 0x600770D8 : FinalBowser
//   - 0x600C687C : Bowser
//   - 0x600CF790 : BowserJrBase
int __fastcall BossBase__vfA8(BossBase *a1)
{
  if ( (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x2C4))(a1) == 1 )
    return (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x368))(a1);
  else
    return 1;
}
