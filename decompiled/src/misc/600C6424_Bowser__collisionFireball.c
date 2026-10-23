/* Bowser__collisionFireball
 * address: 0x600C6424   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025454
// 
// Overridden by: None
signed int __fastcall Bowser__collisionFireball(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  FIELD_U32(a1, 7756) = FIELD_U32(a3, 0x54);
  FIELD_U32(a1, 7760) = FIELD_U32(a3, 0x58);
  return BossBase__collisionFireball((BossBase *)a1, a2, a3);
}
