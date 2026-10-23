/* Enemy__vf234
 * address: 0x602A9738   size: 8   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6027853C : Fuzzy
int __fastcall Enemy__vf234(int a1)
{
  return CollisionMgr_vf14(a1 + 648);
}
