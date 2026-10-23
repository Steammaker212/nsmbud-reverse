/* Thwomp__collisionStar
 * address: 0x6029E24C   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A5BF4
// 
// Overridden by: None
int __fastcall Thwomp__collisionStar(int a1)
{
  FIELD_U32(a1, 160) = 0;
  return Enemy__collisionStar(a1);
}
