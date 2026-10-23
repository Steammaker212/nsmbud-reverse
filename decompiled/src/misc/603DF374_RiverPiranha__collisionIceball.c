/* RiverPiranha__collisionIceball
 * address: 0x603DF374   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6CF8
// 
// Overridden by: None
int __fastcall RiverPiranha__collisionIceball(Enemy *a1, int a2, int a3)
{
  FIELD_F32(a1, 0x70) = FIELD_F32(a1, 0x70) + 3.5;
  Enemy__collisionIceball(a1, a2, a3);
  return 1;
}
