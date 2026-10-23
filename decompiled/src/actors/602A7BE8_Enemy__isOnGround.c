/* Enemy__isOnGround
 * address: 0x602A7BE8   size: 12   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60384198 : Pokey
//   - 0x60025AB4 : BossBase
//   - 0x60311C54 : KaniboTama
int __fastcall Enemy__isOnGround(int a1)
{
  return FIELD_U32(a1, 0xB38) & 1;
}
