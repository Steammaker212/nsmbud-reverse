/* j_Enemy_vf140
 * address: 0x60301164   size: 4   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
signed int __fastcall j_Enemy_vf140(Enemy *this, int a2, int a3)
{
  return Enemy__collisionIceball(this, a2, a3);
}
