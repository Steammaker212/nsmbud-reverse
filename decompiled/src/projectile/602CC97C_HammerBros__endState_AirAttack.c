/* HammerBros__endState_AirAttack
 * address: 0x602CC97C   size: 36   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60265CE4
// 
// Overridden by: None
int __fastcall HammerBros__endState_AirAttack(int result)
{
  FIELD_U32(result, 6584) = 0;
  FIELD_U32(result, 6588) = 0;
  FIELD_U8(result, 12120) = 1;
  return result;
}
