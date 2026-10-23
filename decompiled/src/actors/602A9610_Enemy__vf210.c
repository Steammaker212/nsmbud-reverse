/* Enemy__vf210
 * address: 0x602A9610   size: 8   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602784D8 : Fuzzy
int __fastcall Enemy__vf210(int a1)
{
  return CollisionMgr_vf14(a1 + 648);
}
