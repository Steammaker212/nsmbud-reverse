/* Enemy__vf26C
 * address: 0x602A9490   size: 24   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6027861C : Fuzzy
//   - 0x60078BF4 : FinalBowser
//   - 0x60310024 : Kanibo
Enemy *__fastcall Enemy__vf26C(Enemy *result)
{
  LOBYTE(FIELD_U32(result, 0x184C)) = 0;
  FIELD_U8(result, 0x17A7) = 0;
  return result;
}
