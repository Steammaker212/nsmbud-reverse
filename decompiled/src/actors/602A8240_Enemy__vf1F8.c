/* Enemy__vf1F8
 * address: 0x602A8240   size: 12   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60317A88 : DryBones
//   - 0x6033E030 : GoombaBase
int __fastcall Enemy__vf1F8(int result)
{
  FIELD_U8(result, 19) = 1;
  return result;
}
