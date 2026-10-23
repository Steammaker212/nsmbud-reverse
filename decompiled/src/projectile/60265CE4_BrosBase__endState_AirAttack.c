/* BrosBase__endState_AirAttack
 * address: 0x60265CE4   size: 36   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602CC97C : HammerBros
int __fastcall BrosBase__endState_AirAttack(int result)
{
  FIELD_U32(result, 6584) = 0;
  FIELD_U32(result, 6588) = 0;
  FIELD_U8(result, 12120) = 1;
  return result;
}
