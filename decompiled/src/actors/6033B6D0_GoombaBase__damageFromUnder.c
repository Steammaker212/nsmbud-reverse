/* GoombaBase__damageFromUnder
 * address: 0x6033B6D0   size: 20   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A1E1C
// 
// Overridden by: None
int __fastcall GoombaBase__damageFromUnder(int result)
{
  if ( !FIELD_U8(result, 6703) )
    return Enemy__damageFromUnder((Enemy *)result);
  return result;
}
