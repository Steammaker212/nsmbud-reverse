/* HammerBros__vf318
 * address: 0x602CD048   size: 20   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x602631FC
// 
// Overridden by: None
int __fastcall HammerBros__vf318(int result)
{
  FIELD_U32(result, 12480) = FIELD_U32(result, 20) & 3;
  return result;
}
